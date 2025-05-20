/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePreReleaseList请求参数结构体
                */
                class DescribePreReleaseListRequest : public AbstractModel
                {
                public:
                    DescribePreReleaseListRequest();
                    ~DescribePreReleaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单独使用Keywords：使用域名关键词进行搜索
Keywords+DomainStart（true）：使用域名开头关键词进行搜索
Keywords+DomainEnd（true）：使用域名结尾关键词进行搜索
Keywords+DomainStart（true）+DomainEnd（true）：使用域名开头或结尾关键词进行搜索
                     * @return Keywords 单独使用Keywords：使用域名关键词进行搜索
Keywords+DomainStart（true）：使用域名开头关键词进行搜索
Keywords+DomainEnd（true）：使用域名结尾关键词进行搜索
Keywords+DomainStart（true）+DomainEnd（true）：使用域名开头或结尾关键词进行搜索
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置单独使用Keywords：使用域名关键词进行搜索
Keywords+DomainStart（true）：使用域名开头关键词进行搜索
Keywords+DomainEnd（true）：使用域名结尾关键词进行搜索
Keywords+DomainStart（true）+DomainEnd（true）：使用域名开头或结尾关键词进行搜索
                     * @param _keywords 单独使用Keywords：使用域名关键词进行搜索
Keywords+DomainStart（true）：使用域名开头关键词进行搜索
Keywords+DomainEnd（true）：使用域名结尾关键词进行搜索
Keywords+DomainStart（true）+DomainEnd（true）：使用域名开头或结尾关键词进行搜索
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取是否以域名开头关键词进行搜索
true：是
false：否
                     * @return DomainStart 是否以域名开头关键词进行搜索
true：是
false：否
                     * 
                     */
                    bool GetDomainStart() const;

                    /**
                     * 设置是否以域名开头关键词进行搜索
true：是
false：否
                     * @param _domainStart 是否以域名开头关键词进行搜索
true：是
false：否
                     * 
                     */
                    void SetDomainStart(const bool& _domainStart);

                    /**
                     * 判断参数 DomainStart 是否已赋值
                     * @return DomainStart 是否已赋值
                     * 
                     */
                    bool DomainStartHasBeenSet() const;

                    /**
                     * 获取是否以域名结尾关键词进行搜索
true：是
false：否
                     * @return DomainEnd 是否以域名结尾关键词进行搜索
true：是
false：否
                     * 
                     */
                    bool GetDomainEnd() const;

                    /**
                     * 设置是否以域名结尾关键词进行搜索
true：是
false：否
                     * @param _domainEnd 是否以域名结尾关键词进行搜索
true：是
false：否
                     * 
                     */
                    void SetDomainEnd(const bool& _domainEnd);

                    /**
                     * 判断参数 DomainEnd 是否已赋值
                     * @return DomainEnd 是否已赋值
                     * 
                     */
                    bool DomainEndHasBeenSet() const;

                    /**
                     * 获取不同排序规则：
1： 价格升序
2： 价格降序
3： 域名升序
4： 结束时间升序
5： 店铺推荐升序
6： 结束时间降序
15:  创建时间升序
其他：结束时间升序
                     * @return Sort 不同排序规则：
1： 价格升序
2： 价格降序
3： 域名升序
4： 结束时间升序
5： 店铺推荐升序
6： 结束时间降序
15:  创建时间升序
其他：结束时间升序
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置不同排序规则：
1： 价格升序
2： 价格降序
3： 域名升序
4： 结束时间升序
5： 店铺推荐升序
6： 结束时间降序
15:  创建时间升序
其他：结束时间升序
                     * @param _sort 不同排序规则：
1： 价格升序
2： 价格降序
3： 域名升序
4： 结束时间升序
5： 店铺推荐升序
6： 结束时间降序
15:  创建时间升序
其他：结束时间升序
                     * 
                     */
                    void SetSort(const int64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取起始价格
                     * @return PriceStart 起始价格
                     * 
                     */
                    double GetPriceStart() const;

                    /**
                     * 设置起始价格
                     * @param _priceStart 起始价格
                     * 
                     */
                    void SetPriceStart(const double& _priceStart);

                    /**
                     * 判断参数 PriceStart 是否已赋值
                     * @return PriceStart 是否已赋值
                     * 
                     */
                    bool PriceStartHasBeenSet() const;

                    /**
                     * 获取结束价格
                     * @return PriceEnd 结束价格
                     * 
                     */
                    double GetPriceEnd() const;

                    /**
                     * 设置结束价格
                     * @param _priceEnd 结束价格
                     * 
                     */
                    void SetPriceEnd(const double& _priceEnd);

                    /**
                     * 判断参数 PriceEnd 是否已赋值
                     * @return PriceEnd 是否已赋值
                     * 
                     */
                    bool PriceEndHasBeenSet() const;

                    /**
                     * 获取起始域名长度
                     * @return LengthStart 起始域名长度
                     * 
                     */
                    int64_t GetLengthStart() const;

                    /**
                     * 设置起始域名长度
                     * @param _lengthStart 起始域名长度
                     * 
                     */
                    void SetLengthStart(const int64_t& _lengthStart);

                    /**
                     * 判断参数 LengthStart 是否已赋值
                     * @return LengthStart 是否已赋值
                     * 
                     */
                    bool LengthStartHasBeenSet() const;

                    /**
                     * 获取结束域名长度
                     * @return LengthEnd 结束域名长度
                     * 
                     */
                    int64_t GetLengthEnd() const;

                    /**
                     * 设置结束域名长度
                     * @param _lengthEnd 结束域名长度
                     * 
                     */
                    void SetLengthEnd(const int64_t& _lengthEnd);

                    /**
                     * 判断参数 LengthEnd 是否已赋值
                     * @return LengthEnd 是否已赋值
                     * 
                     */
                    bool LengthEndHasBeenSet() const;

                    /**
                     * 获取页码（默认为1）
                     * @return PageNumber 页码（默认为1）
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码（默认为1）
                     * @param _pageNumber 页码（默认为1）
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示数（默认为20）
                     * @return PageSize 每页显示数（默认为20）
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示数（默认为20）
                     * @param _pageSize 每页显示数（默认为20）
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取后缀
1="com"
2="net"
4="biz"
6="info"
7="co"
9="cn"
10="com.cn"
11="wang"
12="vip"
13="cc"
14="net.cn"
15="org.cn"
16="top"
17="asia"
18="tv"
19="club"
20="shop"
21 ="中国"
23="online"
24="xyz"
25="网店"
26="网址"
27="在线"
28="ltd"
29="fans"
30="ren"
31="icu"
                     * @return Suffix 后缀
1="com"
2="net"
4="biz"
6="info"
7="co"
9="cn"
10="com.cn"
11="wang"
12="vip"
13="cc"
14="net.cn"
15="org.cn"
16="top"
17="asia"
18="tv"
19="club"
20="shop"
21 ="中国"
23="online"
24="xyz"
25="网店"
26="网址"
27="在线"
28="ltd"
29="fans"
30="ren"
31="icu"
                     * 
                     */
                    std::vector<int64_t> GetSuffix() const;

                    /**
                     * 设置后缀
1="com"
2="net"
4="biz"
6="info"
7="co"
9="cn"
10="com.cn"
11="wang"
12="vip"
13="cc"
14="net.cn"
15="org.cn"
16="top"
17="asia"
18="tv"
19="club"
20="shop"
21 ="中国"
23="online"
24="xyz"
25="网店"
26="网址"
27="在线"
28="ltd"
29="fans"
30="ren"
31="icu"
                     * @param _suffix 后缀
1="com"
2="net"
4="biz"
6="info"
7="co"
9="cn"
10="com.cn"
11="wang"
12="vip"
13="cc"
14="net.cn"
15="org.cn"
16="top"
17="asia"
18="tv"
19="club"
20="shop"
21 ="中国"
23="online"
24="xyz"
25="网店"
26="网址"
27="在线"
28="ltd"
29="fans"
30="ren"
31="icu"
                     * 
                     */
                    void SetSuffix(const std::vector<int64_t>& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     * 
                     */
                    bool SuffixHasBeenSet() const;

                    /**
                     * 获取一级分类
1:"纯数字"
2:"单数字"
3:"双数字"
4:"三数字"
5:"四数字"
6:"五数字"
7:"六数字"
9:"单字母"
10:"双字母"
11:"三字母"
12:"四字母"
13:"五字母"
14:"单拼"
15:"双拼"
16:"三拼"
17:"杂米"
18:"两杂"
19:"三杂"
20:"四杂"

                     * @return ClassOne 一级分类
1:"纯数字"
2:"单数字"
3:"双数字"
4:"三数字"
5:"四数字"
6:"五数字"
7:"六数字"
9:"单字母"
10:"双字母"
11:"三字母"
12:"四字母"
13:"五字母"
14:"单拼"
15:"双拼"
16:"三拼"
17:"杂米"
18:"两杂"
19:"三杂"
20:"四杂"

                     * 
                     */
                    int64_t GetClassOne() const;

                    /**
                     * 设置一级分类
1:"纯数字"
2:"单数字"
3:"双数字"
4:"三数字"
5:"四数字"
6:"五数字"
7:"六数字"
9:"单字母"
10:"双字母"
11:"三字母"
12:"四字母"
13:"五字母"
14:"单拼"
15:"双拼"
16:"三拼"
17:"杂米"
18:"两杂"
19:"三杂"
20:"四杂"

                     * @param _classOne 一级分类
1:"纯数字"
2:"单数字"
3:"双数字"
4:"三数字"
5:"四数字"
6:"五数字"
7:"六数字"
9:"单字母"
10:"双字母"
11:"三字母"
12:"四字母"
13:"五字母"
14:"单拼"
15:"双拼"
16:"三拼"
17:"杂米"
18:"两杂"
19:"三杂"
20:"四杂"

                     * 
                     */
                    void SetClassOne(const int64_t& _classOne);

                    /**
                     * 判断参数 ClassOne 是否已赋值
                     * @return ClassOne 是否已赋值
                     * 
                     */
                    bool ClassOneHasBeenSet() const;

                    /**
                     * 获取二级分类
13:"0开或带4"
14:"非0开不带4"
15:"不带0,4"
0:"非全声母"
6:"全声母"
16:"不带0,4"
32:"全声母"
5010:"CVCV"
                     * @return ClassTwo 二级分类
13:"0开或带4"
14:"非0开不带4"
15:"不带0,4"
0:"非全声母"
6:"全声母"
16:"不带0,4"
32:"全声母"
5010:"CVCV"
                     * 
                     */
                    std::vector<int64_t> GetClassTwo() const;

                    /**
                     * 设置二级分类
13:"0开或带4"
14:"非0开不带4"
15:"不带0,4"
0:"非全声母"
6:"全声母"
16:"不带0,4"
32:"全声母"
5010:"CVCV"
                     * @param _classTwo 二级分类
13:"0开或带4"
14:"非0开不带4"
15:"不带0,4"
0:"非全声母"
6:"全声母"
16:"不带0,4"
32:"全声母"
5010:"CVCV"
                     * 
                     */
                    void SetClassTwo(const std::vector<int64_t>& _classTwo);

                    /**
                     * 判断参数 ClassTwo 是否已赋值
                     * @return ClassTwo 是否已赋值
                     * 
                     */
                    bool ClassTwoHasBeenSet() const;

                    /**
                     * 获取三级分类
111:"AAA"
401:"3A及以上"
402:"AA结尾"
1122:"AABB"
1123:"AABC"
1212:"ABAB"
1221:"ABBA"
1233:"ABCC"
501:"4A及以上"
502:"3A及以上"
503:"AAA开头"
504:"AAA结尾"
505:"AA开头"
506:"AA结尾"
507:"三顺子开头"
508:"三顺子结尾"
11223:"AABBC"
12233:"ABBCC"
601:"5A及以上"
602:"4A及以上"
603:"3A及以上"
604:"4A开头"
605:"4A结尾"
606:"AAA开头"
607:"AAA结尾"
608:"AA开头"
609:"AA结尾"
610:"ABAB开头"
611:"ABAB结尾"
612:"AABB开头"
613:"AABB结尾"
614:"四顺子开头"
615:"四顺子结尾"
616:"三顺子开头"
617:"三顺子结尾"
121212:"ABABAB"
112233:"AABBCC"
123123:"ABCABC"
211:"LNN"
221:"LLN"
121:"NLN"
212:"LNL"
122:"NLL"
1112:"NNNL"
2111:"LNNN"
1212:"NLNL"
2121:"LNLN"
1222:"NLLL"
2221:"LLLN"
1122:"NNLL"
2211:"LLNN"
31:"W结尾"
112:"AAB"
122:"ABB"
121:"ABA"
41:"W结尾"
1112:"AAAB"
1222:"ABBB"
1122:"AABB"
1212:"ABAB"
                     * @return ClassThree 三级分类
111:"AAA"
401:"3A及以上"
402:"AA结尾"
1122:"AABB"
1123:"AABC"
1212:"ABAB"
1221:"ABBA"
1233:"ABCC"
501:"4A及以上"
502:"3A及以上"
503:"AAA开头"
504:"AAA结尾"
505:"AA开头"
506:"AA结尾"
507:"三顺子开头"
508:"三顺子结尾"
11223:"AABBC"
12233:"ABBCC"
601:"5A及以上"
602:"4A及以上"
603:"3A及以上"
604:"4A开头"
605:"4A结尾"
606:"AAA开头"
607:"AAA结尾"
608:"AA开头"
609:"AA结尾"
610:"ABAB开头"
611:"ABAB结尾"
612:"AABB开头"
613:"AABB结尾"
614:"四顺子开头"
615:"四顺子结尾"
616:"三顺子开头"
617:"三顺子结尾"
121212:"ABABAB"
112233:"AABBCC"
123123:"ABCABC"
211:"LNN"
221:"LLN"
121:"NLN"
212:"LNL"
122:"NLL"
1112:"NNNL"
2111:"LNNN"
1212:"NLNL"
2121:"LNLN"
1222:"NLLL"
2221:"LLLN"
1122:"NNLL"
2211:"LLNN"
31:"W结尾"
112:"AAB"
122:"ABB"
121:"ABA"
41:"W结尾"
1112:"AAAB"
1222:"ABBB"
1122:"AABB"
1212:"ABAB"
                     * 
                     */
                    std::vector<int64_t> GetClassThree() const;

                    /**
                     * 设置三级分类
111:"AAA"
401:"3A及以上"
402:"AA结尾"
1122:"AABB"
1123:"AABC"
1212:"ABAB"
1221:"ABBA"
1233:"ABCC"
501:"4A及以上"
502:"3A及以上"
503:"AAA开头"
504:"AAA结尾"
505:"AA开头"
506:"AA结尾"
507:"三顺子开头"
508:"三顺子结尾"
11223:"AABBC"
12233:"ABBCC"
601:"5A及以上"
602:"4A及以上"
603:"3A及以上"
604:"4A开头"
605:"4A结尾"
606:"AAA开头"
607:"AAA结尾"
608:"AA开头"
609:"AA结尾"
610:"ABAB开头"
611:"ABAB结尾"
612:"AABB开头"
613:"AABB结尾"
614:"四顺子开头"
615:"四顺子结尾"
616:"三顺子开头"
617:"三顺子结尾"
121212:"ABABAB"
112233:"AABBCC"
123123:"ABCABC"
211:"LNN"
221:"LLN"
121:"NLN"
212:"LNL"
122:"NLL"
1112:"NNNL"
2111:"LNNN"
1212:"NLNL"
2121:"LNLN"
1222:"NLLL"
2221:"LLLN"
1122:"NNLL"
2211:"LLNN"
31:"W结尾"
112:"AAB"
122:"ABB"
121:"ABA"
41:"W结尾"
1112:"AAAB"
1222:"ABBB"
1122:"AABB"
1212:"ABAB"
                     * @param _classThree 三级分类
111:"AAA"
401:"3A及以上"
402:"AA结尾"
1122:"AABB"
1123:"AABC"
1212:"ABAB"
1221:"ABBA"
1233:"ABCC"
501:"4A及以上"
502:"3A及以上"
503:"AAA开头"
504:"AAA结尾"
505:"AA开头"
506:"AA结尾"
507:"三顺子开头"
508:"三顺子结尾"
11223:"AABBC"
12233:"ABBCC"
601:"5A及以上"
602:"4A及以上"
603:"3A及以上"
604:"4A开头"
605:"4A结尾"
606:"AAA开头"
607:"AAA结尾"
608:"AA开头"
609:"AA结尾"
610:"ABAB开头"
611:"ABAB结尾"
612:"AABB开头"
613:"AABB结尾"
614:"四顺子开头"
615:"四顺子结尾"
616:"三顺子开头"
617:"三顺子结尾"
121212:"ABABAB"
112233:"AABBCC"
123123:"ABCABC"
211:"LNN"
221:"LLN"
121:"NLN"
212:"LNL"
122:"NLL"
1112:"NNNL"
2111:"LNNN"
1212:"NLNL"
2121:"LNLN"
1222:"NLLL"
2221:"LLLN"
1122:"NNLL"
2211:"LLNN"
31:"W结尾"
112:"AAB"
122:"ABB"
121:"ABA"
41:"W结尾"
1112:"AAAB"
1222:"ABBB"
1122:"AABB"
1212:"ABAB"
                     * 
                     */
                    void SetClassThree(const std::vector<int64_t>& _classThree);

                    /**
                     * 判断参数 ClassThree 是否已赋值
                     * @return ClassThree 是否已赋值
                     * 
                     */
                    bool ClassThreeHasBeenSet() const;

                    /**
                     * 获取四级分类
1:"仅含2种数字"
2:"仅含3种数字"
4:"仅含1种字母"
8:"仅含1种数字"

                     * @return ClassFour 四级分类
1:"仅含2种数字"
2:"仅含3种数字"
4:"仅含1种字母"
8:"仅含1种数字"

                     * 
                     */
                    std::vector<int64_t> GetClassFour() const;

                    /**
                     * 设置四级分类
1:"仅含2种数字"
2:"仅含3种数字"
4:"仅含1种字母"
8:"仅含1种数字"

                     * @param _classFour 四级分类
1:"仅含2种数字"
2:"仅含3种数字"
4:"仅含1种字母"
8:"仅含1种数字"

                     * 
                     */
                    void SetClassFour(const std::vector<int64_t>& _classFour);

                    /**
                     * 判断参数 ClassFour 是否已赋值
                     * @return ClassFour 是否已赋值
                     * 
                     */
                    bool ClassFourHasBeenSet() const;

                    /**
                     * 获取是否以域名开头排除关键词进行搜索
                     * @return FilterStart 是否以域名开头排除关键词进行搜索
                     * 
                     */
                    bool GetFilterStart() const;

                    /**
                     * 设置是否以域名开头排除关键词进行搜索
                     * @param _filterStart 是否以域名开头排除关键词进行搜索
                     * 
                     */
                    void SetFilterStart(const bool& _filterStart);

                    /**
                     * 判断参数 FilterStart 是否已赋值
                     * @return FilterStart 是否已赋值
                     * 
                     */
                    bool FilterStartHasBeenSet() const;

                    /**
                     * 获取是否以域名结尾排除关键词进行搜索
                     * @return FilterEnd 是否以域名结尾排除关键词进行搜索
                     * 
                     */
                    bool GetFilterEnd() const;

                    /**
                     * 设置是否以域名结尾排除关键词进行搜索
                     * @param _filterEnd 是否以域名结尾排除关键词进行搜索
                     * 
                     */
                    void SetFilterEnd(const bool& _filterEnd);

                    /**
                     * 判断参数 FilterEnd 是否已赋值
                     * @return FilterEnd 是否已赋值
                     * 
                     */
                    bool FilterEndHasBeenSet() const;

                    /**
                     * 获取域名排除关键词
单独使用FilterWords：使用排除关键词进行搜索
FilterWords+FilterStart（true）：使用域名开头排除关键词进行搜索
FilterWords+FilterEnd（true）：使用域名结尾排除关键词进行搜索
FilterWords+FilterStart（true）+FilterEnd（true）：使用域名开头或结尾排除关键词进行搜索
                     * @return FilterWords 域名排除关键词
单独使用FilterWords：使用排除关键词进行搜索
FilterWords+FilterStart（true）：使用域名开头排除关键词进行搜索
FilterWords+FilterEnd（true）：使用域名结尾排除关键词进行搜索
FilterWords+FilterStart（true）+FilterEnd（true）：使用域名开头或结尾排除关键词进行搜索
                     * 
                     */
                    std::string GetFilterWords() const;

                    /**
                     * 设置域名排除关键词
单独使用FilterWords：使用排除关键词进行搜索
FilterWords+FilterStart（true）：使用域名开头排除关键词进行搜索
FilterWords+FilterEnd（true）：使用域名结尾排除关键词进行搜索
FilterWords+FilterStart（true）+FilterEnd（true）：使用域名开头或结尾排除关键词进行搜索
                     * @param _filterWords 域名排除关键词
单独使用FilterWords：使用排除关键词进行搜索
FilterWords+FilterStart（true）：使用域名开头排除关键词进行搜索
FilterWords+FilterEnd（true）：使用域名结尾排除关键词进行搜索
FilterWords+FilterStart（true）+FilterEnd（true）：使用域名开头或结尾排除关键词进行搜索
                     * 
                     */
                    void SetFilterWords(const std::string& _filterWords);

                    /**
                     * 判断参数 FilterWords 是否已赋值
                     * @return FilterWords 是否已赋值
                     * 
                     */
                    bool FilterWordsHasBeenSet() const;

                    /**
                     * 获取交易类型（目前只支持10）
10: 预释放域名
                     * @return TransType 交易类型（目前只支持10）
10: 预释放域名
                     * 
                     */
                    int64_t GetTransType() const;

                    /**
                     * 设置交易类型（目前只支持10）
10: 预释放域名
                     * @param _transType 交易类型（目前只支持10）
10: 预释放域名
                     * 
                     */
                    void SetTransType(const int64_t& _transType);

                    /**
                     * 判断参数 TransType 是否已赋值
                     * @return TransType 是否已赋值
                     * 
                     */
                    bool TransTypeHasBeenSet() const;

                    /**
                     * 获取是否搜索白金域名（默认值为false）
                     * @return IsTop 是否搜索白金域名（默认值为false）
                     * 
                     */
                    bool GetIsTop() const;

                    /**
                     * 设置是否搜索白金域名（默认值为false）
                     * @param _isTop 是否搜索白金域名（默认值为false）
                     * 
                     */
                    void SetIsTop(const bool& _isTop);

                    /**
                     * 判断参数 IsTop 是否已赋值
                     * @return IsTop 是否已赋值
                     * 
                     */
                    bool IsTopHasBeenSet() const;

                    /**
                     * 获取结束时间排序 desc:倒序 asc:正序
                     * @return EndTimeSort 结束时间排序 desc:倒序 asc:正序
                     * 
                     */
                    std::string GetEndTimeSort() const;

                    /**
                     * 设置结束时间排序 desc:倒序 asc:正序
                     * @param _endTimeSort 结束时间排序 desc:倒序 asc:正序
                     * 
                     */
                    void SetEndTimeSort(const std::string& _endTimeSort);

                    /**
                     * 判断参数 EndTimeSort 是否已赋值
                     * @return EndTimeSort 是否已赋值
                     * 
                     */
                    bool EndTimeSortHasBeenSet() const;

                    /**
                     * 获取结束时间（YYYY-MM-DD）
                     * @return EndTime 结束时间（YYYY-MM-DD）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（YYYY-MM-DD）
                     * @param _endTime 结束时间（YYYY-MM-DD）
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 单独使用Keywords：使用域名关键词进行搜索
Keywords+DomainStart（true）：使用域名开头关键词进行搜索
Keywords+DomainEnd（true）：使用域名结尾关键词进行搜索
Keywords+DomainStart（true）+DomainEnd（true）：使用域名开头或结尾关键词进行搜索
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 是否以域名开头关键词进行搜索
true：是
false：否
                     */
                    bool m_domainStart;
                    bool m_domainStartHasBeenSet;

                    /**
                     * 是否以域名结尾关键词进行搜索
true：是
false：否
                     */
                    bool m_domainEnd;
                    bool m_domainEndHasBeenSet;

                    /**
                     * 不同排序规则：
1： 价格升序
2： 价格降序
3： 域名升序
4： 结束时间升序
5： 店铺推荐升序
6： 结束时间降序
15:  创建时间升序
其他：结束时间升序
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 起始价格
                     */
                    double m_priceStart;
                    bool m_priceStartHasBeenSet;

                    /**
                     * 结束价格
                     */
                    double m_priceEnd;
                    bool m_priceEndHasBeenSet;

                    /**
                     * 起始域名长度
                     */
                    int64_t m_lengthStart;
                    bool m_lengthStartHasBeenSet;

                    /**
                     * 结束域名长度
                     */
                    int64_t m_lengthEnd;
                    bool m_lengthEndHasBeenSet;

                    /**
                     * 页码（默认为1）
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示数（默认为20）
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 后缀
1="com"
2="net"
4="biz"
6="info"
7="co"
9="cn"
10="com.cn"
11="wang"
12="vip"
13="cc"
14="net.cn"
15="org.cn"
16="top"
17="asia"
18="tv"
19="club"
20="shop"
21 ="中国"
23="online"
24="xyz"
25="网店"
26="网址"
27="在线"
28="ltd"
29="fans"
30="ren"
31="icu"
                     */
                    std::vector<int64_t> m_suffix;
                    bool m_suffixHasBeenSet;

                    /**
                     * 一级分类
1:"纯数字"
2:"单数字"
3:"双数字"
4:"三数字"
5:"四数字"
6:"五数字"
7:"六数字"
9:"单字母"
10:"双字母"
11:"三字母"
12:"四字母"
13:"五字母"
14:"单拼"
15:"双拼"
16:"三拼"
17:"杂米"
18:"两杂"
19:"三杂"
20:"四杂"

                     */
                    int64_t m_classOne;
                    bool m_classOneHasBeenSet;

                    /**
                     * 二级分类
13:"0开或带4"
14:"非0开不带4"
15:"不带0,4"
0:"非全声母"
6:"全声母"
16:"不带0,4"
32:"全声母"
5010:"CVCV"
                     */
                    std::vector<int64_t> m_classTwo;
                    bool m_classTwoHasBeenSet;

                    /**
                     * 三级分类
111:"AAA"
401:"3A及以上"
402:"AA结尾"
1122:"AABB"
1123:"AABC"
1212:"ABAB"
1221:"ABBA"
1233:"ABCC"
501:"4A及以上"
502:"3A及以上"
503:"AAA开头"
504:"AAA结尾"
505:"AA开头"
506:"AA结尾"
507:"三顺子开头"
508:"三顺子结尾"
11223:"AABBC"
12233:"ABBCC"
601:"5A及以上"
602:"4A及以上"
603:"3A及以上"
604:"4A开头"
605:"4A结尾"
606:"AAA开头"
607:"AAA结尾"
608:"AA开头"
609:"AA结尾"
610:"ABAB开头"
611:"ABAB结尾"
612:"AABB开头"
613:"AABB结尾"
614:"四顺子开头"
615:"四顺子结尾"
616:"三顺子开头"
617:"三顺子结尾"
121212:"ABABAB"
112233:"AABBCC"
123123:"ABCABC"
211:"LNN"
221:"LLN"
121:"NLN"
212:"LNL"
122:"NLL"
1112:"NNNL"
2111:"LNNN"
1212:"NLNL"
2121:"LNLN"
1222:"NLLL"
2221:"LLLN"
1122:"NNLL"
2211:"LLNN"
31:"W结尾"
112:"AAB"
122:"ABB"
121:"ABA"
41:"W结尾"
1112:"AAAB"
1222:"ABBB"
1122:"AABB"
1212:"ABAB"
                     */
                    std::vector<int64_t> m_classThree;
                    bool m_classThreeHasBeenSet;

                    /**
                     * 四级分类
1:"仅含2种数字"
2:"仅含3种数字"
4:"仅含1种字母"
8:"仅含1种数字"

                     */
                    std::vector<int64_t> m_classFour;
                    bool m_classFourHasBeenSet;

                    /**
                     * 是否以域名开头排除关键词进行搜索
                     */
                    bool m_filterStart;
                    bool m_filterStartHasBeenSet;

                    /**
                     * 是否以域名结尾排除关键词进行搜索
                     */
                    bool m_filterEnd;
                    bool m_filterEndHasBeenSet;

                    /**
                     * 域名排除关键词
单独使用FilterWords：使用排除关键词进行搜索
FilterWords+FilterStart（true）：使用域名开头排除关键词进行搜索
FilterWords+FilterEnd（true）：使用域名结尾排除关键词进行搜索
FilterWords+FilterStart（true）+FilterEnd（true）：使用域名开头或结尾排除关键词进行搜索
                     */
                    std::string m_filterWords;
                    bool m_filterWordsHasBeenSet;

                    /**
                     * 交易类型（目前只支持10）
10: 预释放域名
                     */
                    int64_t m_transType;
                    bool m_transTypeHasBeenSet;

                    /**
                     * 是否搜索白金域名（默认值为false）
                     */
                    bool m_isTop;
                    bool m_isTopHasBeenSet;

                    /**
                     * 结束时间排序 desc:倒序 asc:正序
                     */
                    std::string m_endTimeSort;
                    bool m_endTimeSortHasBeenSet;

                    /**
                     * 结束时间（YYYY-MM-DD）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTREQUEST_H_
