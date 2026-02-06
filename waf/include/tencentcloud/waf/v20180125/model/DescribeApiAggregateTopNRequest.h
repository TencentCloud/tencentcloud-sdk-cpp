/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIAGGREGATETOPNREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIAGGREGATETOPNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotDataFilter.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiAggregateTopN请求参数结构体
                */
                class DescribeApiAggregateTopNRequest : public AbstractModel
                {
                public:
                    DescribeApiAggregateTopNRequest();
                    ~DescribeApiAggregateTopNRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取需要的Top数，默认5， 最大值100
                     * @return TopN 需要的Top数，默认5， 最大值100
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置需要的Top数，默认5， 最大值100
                     * @param _topN 需要的Top数，默认5， 最大值100
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTs 开始时间
                     * 
                     */
                    uint64_t GetStartTs() const;

                    /**
                     * 设置开始时间
                     * @param _startTs 开始时间
                     * 
                     */
                    void SetStartTs(const uint64_t& _startTs);

                    /**
                     * 判断参数 StartTs 是否已赋值
                     * @return StartTs 是否已赋值
                     * 
                     */
                    bool StartTsHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTs 结束时间
                     * 
                     */
                    uint64_t GetEndTs() const;

                    /**
                     * 设置结束时间
                     * @param _endTs 结束时间
                     * 
                     */
                    void SetEndTs(const uint64_t& _endTs);

                    /**
                     * 判断参数 EndTs 是否已赋值
                     * @return EndTs 是否已赋值
                     * 
                     */
                    bool EndTsHasBeenSet() const;

                    /**
                     * 获取需要查询TOP的维度名
                     * @return Dimension 需要查询TOP的维度名
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置需要查询TOP的维度名
                     * @param _dimension 需要查询TOP的维度名
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<BotDataFilter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<BotDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否查询全域名的三个特殊图标
                     * @return GlobalFlag 是否查询全域名的三个特殊图标
                     * 
                     */
                    bool GetGlobalFlag() const;

                    /**
                     * 设置是否查询全域名的三个特殊图标
                     * @param _globalFlag 是否查询全域名的三个特殊图标
                     * 
                     */
                    void SetGlobalFlag(const bool& _globalFlag);

                    /**
                     * 判断参数 GlobalFlag 是否已赋值
                     * @return GlobalFlag 是否已赋值
                     * 
                     */
                    bool GlobalFlagHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要的Top数，默认5， 最大值100
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTs;
                    bool m_startTsHasBeenSet;

                    /**
                     * 结束时间
                     */
                    uint64_t m_endTs;
                    bool m_endTsHasBeenSet;

                    /**
                     * 需要查询TOP的维度名
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<BotDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否查询全域名的三个特殊图标
                     */
                    bool m_globalFlag;
                    bool m_globalFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIAGGREGATETOPNREQUEST_H_
