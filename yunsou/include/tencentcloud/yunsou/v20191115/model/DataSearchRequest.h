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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATASEARCHREQUEST_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATASEARCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * DataSearch请求参数结构体
                */
                class DataSearchRequest : public AbstractModel
                {
                public:
                    DataSearchRequest();
                    ~DataSearchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云搜的业务ID，用以表明当前数据请求的业务
                     * @return ResourceId 云搜的业务ID，用以表明当前数据请求的业务
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置云搜的业务ID，用以表明当前数据请求的业务
                     * @param _resourceId 云搜的业务ID，用以表明当前数据请求的业务
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取检索串
                     * @return SearchQuery 检索串
                     * 
                     */
                    std::string GetSearchQuery() const;

                    /**
                     * 设置检索串
                     * @param _searchQuery 检索串
                     * 
                     */
                    void SetSearchQuery(const std::string& _searchQuery);

                    /**
                     * 判断参数 SearchQuery 是否已赋值
                     * @return SearchQuery 是否已赋值
                     * 
                     */
                    bool SearchQueryHasBeenSet() const;

                    /**
                     * 获取当前页，从第0页开始计算
                     * @return PageId 当前页，从第0页开始计算
                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置当前页，从第0页开始计算
                     * @param _pageId 当前页，从第0页开始计算
                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取每页结果数
                     * @return NumPerPage 每页结果数
                     * 
                     */
                    uint64_t GetNumPerPage() const;

                    /**
                     * 设置每页结果数
                     * @param _numPerPage 每页结果数
                     * 
                     */
                    void SetNumPerPage(const uint64_t& _numPerPage);

                    /**
                     * 判断参数 NumPerPage 是否已赋值
                     * @return NumPerPage 是否已赋值
                     * 
                     */
                    bool NumPerPageHasBeenSet() const;

                    /**
                     * 获取当前检索号，用于定位问题，建议指定并且全局唯一
                     * @return SearchId 当前检索号，用于定位问题，建议指定并且全局唯一
                     * 
                     */
                    std::string GetSearchId() const;

                    /**
                     * 设置当前检索号，用于定位问题，建议指定并且全局唯一
                     * @param _searchId 当前检索号，用于定位问题，建议指定并且全局唯一
                     * 
                     */
                    void SetSearchId(const std::string& _searchId);

                    /**
                     * 判断参数 SearchId 是否已赋值
                     * @return SearchId 是否已赋值
                     * 
                     */
                    bool SearchIdHasBeenSet() const;

                    /**
                     * 获取请求编码，0表示utf8，1表示gbk，建议指定
                     * @return QueryEncode 请求编码，0表示utf8，1表示gbk，建议指定
                     * 
                     */
                    uint64_t GetQueryEncode() const;

                    /**
                     * 设置请求编码，0表示utf8，1表示gbk，建议指定
                     * @param _queryEncode 请求编码，0表示utf8，1表示gbk，建议指定
                     * 
                     */
                    void SetQueryEncode(const uint64_t& _queryEncode);

                    /**
                     * 判断参数 QueryEncode 是否已赋值
                     * @return QueryEncode 是否已赋值
                     * 
                     */
                    bool QueryEncodeHasBeenSet() const;

                    /**
                     * 获取排序类型
                     * @return RankType 排序类型
                     * 
                     */
                    uint64_t GetRankType() const;

                    /**
                     * 设置排序类型
                     * @param _rankType 排序类型
                     * 
                     */
                    void SetRankType(const uint64_t& _rankType);

                    /**
                     * 判断参数 RankType 是否已赋值
                     * @return RankType 是否已赋值
                     * 
                     */
                    bool RankTypeHasBeenSet() const;

                    /**
                     * 获取数值过滤，结果中按属性过滤
                     * @return NumFilter 数值过滤，结果中按属性过滤
                     * 
                     */
                    std::string GetNumFilter() const;

                    /**
                     * 设置数值过滤，结果中按属性过滤
                     * @param _numFilter 数值过滤，结果中按属性过滤
                     * 
                     */
                    void SetNumFilter(const std::string& _numFilter);

                    /**
                     * 判断参数 NumFilter 是否已赋值
                     * @return NumFilter 是否已赋值
                     * 
                     */
                    bool NumFilterHasBeenSet() const;

                    /**
                     * 获取分类过滤，导航类检索请求
                     * @return ClFilter 分类过滤，导航类检索请求
                     * 
                     */
                    std::string GetClFilter() const;

                    /**
                     * 设置分类过滤，导航类检索请求
                     * @param _clFilter 分类过滤，导航类检索请求
                     * 
                     */
                    void SetClFilter(const std::string& _clFilter);

                    /**
                     * 判断参数 ClFilter 是否已赋值
                     * @return ClFilter 是否已赋值
                     * 
                     */
                    bool ClFilterHasBeenSet() const;

                    /**
                     * 获取检索用户相关字段
                     * @return Extra 检索用户相关字段
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置检索用户相关字段
                     * @param _extra 检索用户相关字段
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取检索来源
                     * @return SourceId 检索来源
                     * 
                     */
                    uint64_t GetSourceId() const;

                    /**
                     * 设置检索来源
                     * @param _sourceId 检索来源
                     * 
                     */
                    void SetSourceId(const uint64_t& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取是否进行二次检索，0关闭，1打开
                     * @return SecondSearch 是否进行二次检索，0关闭，1打开
                     * 
                     */
                    uint64_t GetSecondSearch() const;

                    /**
                     * 设置是否进行二次检索，0关闭，1打开
                     * @param _secondSearch 是否进行二次检索，0关闭，1打开
                     * 
                     */
                    void SetSecondSearch(const uint64_t& _secondSearch);

                    /**
                     * 判断参数 SecondSearch 是否已赋值
                     * @return SecondSearch 是否已赋值
                     * 
                     */
                    bool SecondSearchHasBeenSet() const;

                    /**
                     * 获取指定返回最大篇数，无特殊原因不建议指定
                     * @return MaxDocReturn 指定返回最大篇数，无特殊原因不建议指定
                     * 
                     */
                    uint64_t GetMaxDocReturn() const;

                    /**
                     * 设置指定返回最大篇数，无特殊原因不建议指定
                     * @param _maxDocReturn 指定返回最大篇数，无特殊原因不建议指定
                     * 
                     */
                    void SetMaxDocReturn(const uint64_t& _maxDocReturn);

                    /**
                     * 判断参数 MaxDocReturn 是否已赋值
                     * @return MaxDocReturn 是否已赋值
                     * 
                     */
                    bool MaxDocReturnHasBeenSet() const;

                    /**
                     * 获取是否smartbox检索，0关闭，1打开
                     * @return IsSmartbox 是否smartbox检索，0关闭，1打开
                     * 
                     */
                    uint64_t GetIsSmartbox() const;

                    /**
                     * 设置是否smartbox检索，0关闭，1打开
                     * @param _isSmartbox 是否smartbox检索，0关闭，1打开
                     * 
                     */
                    void SetIsSmartbox(const uint64_t& _isSmartbox);

                    /**
                     * 判断参数 IsSmartbox 是否已赋值
                     * @return IsSmartbox 是否已赋值
                     * 
                     */
                    bool IsSmartboxHasBeenSet() const;

                    /**
                     * 获取是否打开高红标亮，0关闭，1打开
                     * @return EnableAbsHighlight 是否打开高红标亮，0关闭，1打开
                     * 
                     */
                    uint64_t GetEnableAbsHighlight() const;

                    /**
                     * 设置是否打开高红标亮，0关闭，1打开
                     * @param _enableAbsHighlight 是否打开高红标亮，0关闭，1打开
                     * 
                     */
                    void SetEnableAbsHighlight(const uint64_t& _enableAbsHighlight);

                    /**
                     * 判断参数 EnableAbsHighlight 是否已赋值
                     * @return EnableAbsHighlight 是否已赋值
                     * 
                     */
                    bool EnableAbsHighlightHasBeenSet() const;

                    /**
                     * 获取指定访问QC纠错业务ID
                     * @return QcBid 指定访问QC纠错业务ID
                     * 
                     */
                    uint64_t GetQcBid() const;

                    /**
                     * 设置指定访问QC纠错业务ID
                     * @param _qcBid 指定访问QC纠错业务ID
                     * 
                     */
                    void SetQcBid(const uint64_t& _qcBid);

                    /**
                     * 判断参数 QcBid 是否已赋值
                     * @return QcBid 是否已赋值
                     * 
                     */
                    bool QcBidHasBeenSet() const;

                    /**
                     * 获取按指定字段进行group by，只能对数值字段进行操作
                     * @return GroupBy 按指定字段进行group by，只能对数值字段进行操作
                     * 
                     */
                    std::string GetGroupBy() const;

                    /**
                     * 设置按指定字段进行group by，只能对数值字段进行操作
                     * @param _groupBy 按指定字段进行group by，只能对数值字段进行操作
                     * 
                     */
                    void SetGroupBy(const std::string& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取按指定字段进行distinct，只能对数值字段进行操作
                     * @return Distinct 按指定字段进行distinct，只能对数值字段进行操作
                     * 
                     */
                    std::string GetDistinct() const;

                    /**
                     * 设置按指定字段进行distinct，只能对数值字段进行操作
                     * @param _distinct 按指定字段进行distinct，只能对数值字段进行操作
                     * 
                     */
                    void SetDistinct(const std::string& _distinct);

                    /**
                     * 判断参数 Distinct 是否已赋值
                     * @return Distinct 是否已赋值
                     * 
                     */
                    bool DistinctHasBeenSet() const;

                    /**
                     * 获取高级排序参数，具体参见高级排序说明
                     * @return L4RankExpression 高级排序参数，具体参见高级排序说明
                     * 
                     */
                    std::string GetL4RankExpression() const;

                    /**
                     * 设置高级排序参数，具体参见高级排序说明
                     * @param _l4RankExpression 高级排序参数，具体参见高级排序说明
                     * 
                     */
                    void SetL4RankExpression(const std::string& _l4RankExpression);

                    /**
                     * 判断参数 L4RankExpression 是否已赋值
                     * @return L4RankExpression 是否已赋值
                     * 
                     */
                    bool L4RankExpressionHasBeenSet() const;

                    /**
                     * 获取高级排序参数，具体参见高级排序说明
                     * @return MatchValue 高级排序参数，具体参见高级排序说明
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置高级排序参数，具体参见高级排序说明
                     * @param _matchValue 高级排序参数，具体参见高级排序说明
                     * 
                     */
                    void SetMatchValue(const std::string& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     * 
                     */
                    bool MatchValueHasBeenSet() const;

                    /**
                     * 获取经度信息
                     * @return Longitude 经度信息
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置经度信息
                     * @param _longitude 经度信息
                     * 
                     */
                    void SetLongitude(const double& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取纬度信息
                     * @return Latitude 纬度信息
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 设置纬度信息
                     * @param _latitude 纬度信息
                     * 
                     */
                    void SetLatitude(const double& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取分类过滤并集
                     * @return MultiFilter 分类过滤并集
                     * 
                     */
                    std::vector<std::string> GetMultiFilter() const;

                    /**
                     * 设置分类过滤并集
                     * @param _multiFilter 分类过滤并集
                     * 
                     */
                    void SetMultiFilter(const std::vector<std::string>& _multiFilter);

                    /**
                     * 判断参数 MultiFilter 是否已赋值
                     * @return MultiFilter 是否已赋值
                     * 
                     */
                    bool MultiFilterHasBeenSet() const;

                private:

                    /**
                     * 云搜的业务ID，用以表明当前数据请求的业务
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 检索串
                     */
                    std::string m_searchQuery;
                    bool m_searchQueryHasBeenSet;

                    /**
                     * 当前页，从第0页开始计算
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 每页结果数
                     */
                    uint64_t m_numPerPage;
                    bool m_numPerPageHasBeenSet;

                    /**
                     * 当前检索号，用于定位问题，建议指定并且全局唯一
                     */
                    std::string m_searchId;
                    bool m_searchIdHasBeenSet;

                    /**
                     * 请求编码，0表示utf8，1表示gbk，建议指定
                     */
                    uint64_t m_queryEncode;
                    bool m_queryEncodeHasBeenSet;

                    /**
                     * 排序类型
                     */
                    uint64_t m_rankType;
                    bool m_rankTypeHasBeenSet;

                    /**
                     * 数值过滤，结果中按属性过滤
                     */
                    std::string m_numFilter;
                    bool m_numFilterHasBeenSet;

                    /**
                     * 分类过滤，导航类检索请求
                     */
                    std::string m_clFilter;
                    bool m_clFilterHasBeenSet;

                    /**
                     * 检索用户相关字段
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 检索来源
                     */
                    uint64_t m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 是否进行二次检索，0关闭，1打开
                     */
                    uint64_t m_secondSearch;
                    bool m_secondSearchHasBeenSet;

                    /**
                     * 指定返回最大篇数，无特殊原因不建议指定
                     */
                    uint64_t m_maxDocReturn;
                    bool m_maxDocReturnHasBeenSet;

                    /**
                     * 是否smartbox检索，0关闭，1打开
                     */
                    uint64_t m_isSmartbox;
                    bool m_isSmartboxHasBeenSet;

                    /**
                     * 是否打开高红标亮，0关闭，1打开
                     */
                    uint64_t m_enableAbsHighlight;
                    bool m_enableAbsHighlightHasBeenSet;

                    /**
                     * 指定访问QC纠错业务ID
                     */
                    uint64_t m_qcBid;
                    bool m_qcBidHasBeenSet;

                    /**
                     * 按指定字段进行group by，只能对数值字段进行操作
                     */
                    std::string m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 按指定字段进行distinct，只能对数值字段进行操作
                     */
                    std::string m_distinct;
                    bool m_distinctHasBeenSet;

                    /**
                     * 高级排序参数，具体参见高级排序说明
                     */
                    std::string m_l4RankExpression;
                    bool m_l4RankExpressionHasBeenSet;

                    /**
                     * 高级排序参数，具体参见高级排序说明
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * 经度信息
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 纬度信息
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 分类过滤并集
                     */
                    std::vector<std::string> m_multiFilter;
                    bool m_multiFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATASEARCHREQUEST_H_
