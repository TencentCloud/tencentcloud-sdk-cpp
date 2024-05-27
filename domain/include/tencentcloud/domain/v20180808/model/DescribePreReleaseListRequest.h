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
                     * 获取关键词
                     * @return Keywords 关键词
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置关键词
                     * @param _keywords 关键词
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
                     * 获取搜索关键字，开头
                     * @return DomainStart 搜索关键字，开头
                     * 
                     */
                    bool GetDomainStart() const;

                    /**
                     * 设置搜索关键字，开头
                     * @param _domainStart 搜索关键字，开头
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
                     * 获取搜索关键字结尾
                     * @return DomainEnd 搜索关键字结尾
                     * 
                     */
                    bool GetDomainEnd() const;

                    /**
                     * 设置搜索关键字结尾
                     * @param _domainEnd 搜索关键字结尾
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
                     * 获取排序
                     * @return Sort 排序
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置排序
                     * @param _sort 排序
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取没页显示数
                     * @return PageSize 没页显示数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置没页显示数
                     * @param _pageSize 没页显示数
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
                     * @return Suffix 后缀
                     * 
                     */
                    std::vector<int64_t> GetSuffix() const;

                    /**
                     * 设置后缀
                     * @param _suffix 后缀
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
                     * @return ClassOne 一级分类
                     * 
                     */
                    int64_t GetClassOne() const;

                    /**
                     * 设置一级分类
                     * @param _classOne 一级分类
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
                     * @return ClassTwo 二级分类
                     * 
                     */
                    std::vector<int64_t> GetClassTwo() const;

                    /**
                     * 设置二级分类
                     * @param _classTwo 二级分类
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
                     * @return ClassThree 三级分类
                     * 
                     */
                    std::vector<int64_t> GetClassThree() const;

                    /**
                     * 设置三级分类
                     * @param _classThree 三级分类
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
                     * @return ClassFour 四级分类
                     * 
                     */
                    std::vector<int64_t> GetClassFour() const;

                    /**
                     * 设置四级分类
                     * @param _classFour 四级分类
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
                     * 获取排除关键字，开头
                     * @return FilterStart 排除关键字，开头
                     * 
                     */
                    bool GetFilterStart() const;

                    /**
                     * 设置排除关键字，开头
                     * @param _filterStart 排除关键字，开头
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
                     * 获取排除关键字，结尾
                     * @return FilterEnd 排除关键字，结尾
                     * 
                     */
                    bool GetFilterEnd() const;

                    /**
                     * 设置排除关键字，结尾
                     * @param _filterEnd 排除关键字，结尾
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
                     * 获取排除关键字
                     * @return FilterWords 排除关键字
                     * 
                     */
                    std::string GetFilterWords() const;

                    /**
                     * 设置排除关键字
                     * @param _filterWords 排除关键字
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
                     * 获取交易类型
                     * @return TransType 交易类型
                     * 
                     */
                    int64_t GetTransType() const;

                    /**
                     * 设置交易类型
                     * @param _transType 交易类型
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
                     * 获取搜索白金域名
                     * @return IsTop 搜索白金域名
                     * 
                     */
                    bool GetIsTop() const;

                    /**
                     * 设置搜索白金域名
                     * @param _isTop 搜索白金域名
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
                     * 获取结束时间排序啊 desc:倒序 asc:正序
                     * @return EndTimeSort 结束时间排序啊 desc:倒序 asc:正序
                     * 
                     */
                    std::string GetEndTimeSort() const;

                    /**
                     * 设置结束时间排序啊 desc:倒序 asc:正序
                     * @param _endTimeSort 结束时间排序啊 desc:倒序 asc:正序
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 关键词
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 搜索关键字，开头
                     */
                    bool m_domainStart;
                    bool m_domainStartHasBeenSet;

                    /**
                     * 搜索关键字结尾
                     */
                    bool m_domainEnd;
                    bool m_domainEndHasBeenSet;

                    /**
                     * 排序
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
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 没页显示数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 后缀
                     */
                    std::vector<int64_t> m_suffix;
                    bool m_suffixHasBeenSet;

                    /**
                     * 一级分类
                     */
                    int64_t m_classOne;
                    bool m_classOneHasBeenSet;

                    /**
                     * 二级分类
                     */
                    std::vector<int64_t> m_classTwo;
                    bool m_classTwoHasBeenSet;

                    /**
                     * 三级分类
                     */
                    std::vector<int64_t> m_classThree;
                    bool m_classThreeHasBeenSet;

                    /**
                     * 四级分类
                     */
                    std::vector<int64_t> m_classFour;
                    bool m_classFourHasBeenSet;

                    /**
                     * 排除关键字，开头
                     */
                    bool m_filterStart;
                    bool m_filterStartHasBeenSet;

                    /**
                     * 排除关键字，结尾
                     */
                    bool m_filterEnd;
                    bool m_filterEndHasBeenSet;

                    /**
                     * 排除关键字
                     */
                    std::string m_filterWords;
                    bool m_filterWordsHasBeenSet;

                    /**
                     * 交易类型
                     */
                    int64_t m_transType;
                    bool m_transTypeHasBeenSet;

                    /**
                     * 搜索白金域名
                     */
                    bool m_isTop;
                    bool m_isTopHasBeenSet;

                    /**
                     * 结束时间排序啊 desc:倒序 asc:正序
                     */
                    std::string m_endTimeSort;
                    bool m_endTimeSortHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTREQUEST_H_
