#include <big_num.hpp>
#include <cmath>
#include <cstdlib>

namespace big_num {
    big_num::big_num(std::string num)
    {
        if (num[0] == '-')
        {
            num.erase(0);
            sign = 0;
        }
        else
        {
            sign = 1;
        }
        long len = num.find(".");
        if (len == std::string::npos)
        {
            int_part = num;
            fract_part = "0";
        }
        else
        {
            int_part = num.substr(0, len);
            fract_part = num.substr(len + 1, num.length());
        }
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
    }
    big_num::big_num(long double num)
    {
        if (num > 0)
        {
            sign = 1;
        }
        std::string str = std::to_string(num);
        long len = str.find(".");
        int_part = str.substr(0, len);
        fract_part = str.substr(len + 1, str.length());
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
    }
    big_num::big_num()
    {
        sign = 1;
        int_part = "0";
        fract_part = "0";
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
    }
    std::string big_num::num_to_str()
    {
            if (sign == false)
            {
                return "-" + int_part + "." + fract_part;
            }
            return int_part + "." + fract_part;
                
    }

    big_num big_num::operator+()
    {
        return (*this);
    }
    big_num big_num::operator-()
    {
        big_num tmp = (*this);
        tmp.sign = !tmp.sign;
        return tmp;
    }
    big_num big_num::operator+(big_num b)
    {
        std::string atmp, btmp, ctmp;
        int tmp_fract_part_len = 0;
        if ((*this).fract_part_len != b.fract_part_len)
        {
            if ((*this).fract_part_len > b.fract_part_len)
            {
                tmp_fract_part_len = (*this).fract_part_len;
                std::string nulls((*this).fract_part_len - b.fract_part_len, '0');
                btmp = b.fract_part;
                btmp.append(nulls);
                btmp = b.int_part + btmp;
                atmp = (*this).int_part + (*this).fract_part;
            }
            else
            {
                tmp_fract_part_len = b.fract_part_len;
                std::string nulls(b.fract_part_len - (*this).fract_part_len, '0');
                btmp = (*this).fract_part;
                btmp.append(nulls);
                btmp = (*this).int_part + btmp;
                atmp = b.int_part + b.fract_part;
            }
        }
        std::reverse(atmp.begin(), atmp.end());
        std::reverse(btmp.begin(), btmp.end());
        int lena = atmp.length(), lenb = btmp.length();
        int tmp = 0;
        int minlen = std::min(lena, lenb), maxlen = std::max(lena,lenb);
        for (int i = 0; i < minlen; i++)
        {
            int tmp = (int)atmp[i] + (int)btmp[i] - 96 + tmp/10;
            ctmp.append(std::to_string(tmp%10));
        }
        std::string tmpstr = "";
        if (lena > lenb)
        {
            tmpstr = atmp.substr(minlen);
        }
        else
        {
            tmpstr = btmp.substr(minlen);
        }
        ctmp.append(tmpstr);
        ctmp.insert(tmp_fract_part_len, ".");
        std::reverse(ctmp.begin(), ctmp.end());
        return big_num(ctmp);
    }
}