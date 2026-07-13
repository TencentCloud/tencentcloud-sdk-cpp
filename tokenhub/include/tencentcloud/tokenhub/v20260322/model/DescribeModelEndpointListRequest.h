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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELENDPOINTLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELENDPOINTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeModelEndpointList请求参数结构体
                */
                class DescribeModelEndpointListRequest : public AbstractModel
                {
                public:
                    DescribeModelEndpointListRequest();
                    ~DescribeModelEndpointListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量，从 0 开始，默认为 0。</p>
                     * @return Offset <p>偏移量，从 0 开始，默认为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，从 0 开始，默认为 0。</p>
                     * @param _offset <p>偏移量，从 0 开始，默认为 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量，默认为 20，最大值为 100。</p>
                     * @return Limit <p>每页返回数量，默认为 20，最大值为 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量，默认为 20，最大值为 100。</p>
                     * @param _limit <p>每页返回数量，默认为 20，最大值为 100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件列表。支持的过滤字段：Status（状态，取值 ACTIVE/INACTIVE）、ChargeType（计费方式，取值 FREE/TOKEN）、RequestSource（创建来源，取值 MC/GW）、ModelName（模型名称）、ModelId（模型 ID）、PaymentEnabled（是否已开启后付费，取值 true/false）。</p>
                     * @return Filters <p>过滤条件列表。支持的过滤字段：Status（状态，取值 ACTIVE/INACTIVE）、ChargeType（计费方式，取值 FREE/TOKEN）、RequestSource（创建来源，取值 MC/GW）、ModelName（模型名称）、ModelId（模型 ID）、PaymentEnabled（是否已开启后付费，取值 true/false）。</p>
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表。支持的过滤字段：Status（状态，取值 ACTIVE/INACTIVE）、ChargeType（计费方式，取值 FREE/TOKEN）、RequestSource（创建来源，取值 MC/GW）、ModelName（模型名称）、ModelId（模型 ID）、PaymentEnabled（是否已开启后付费，取值 true/false）。</p>
                     * @param _filters <p>过滤条件列表。支持的过滤字段：Status（状态，取值 ACTIVE/INACTIVE）、ChargeType（计费方式，取值 FREE/TOKEN）、RequestSource（创建来源，取值 MC/GW）、ModelName（模型名称）、ModelId（模型 ID）、PaymentEnabled（是否已开启后付费，取值 true/false）。</p>
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序条件列表。支持的排序字段：CreatedTime、UpdatedTime。不传时使用默认排序规则。</p>
                     * @return Sorts <p>排序条件列表。支持的排序字段：CreatedTime、UpdatedTime。不传时使用默认排序规则。</p>
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置<p>排序条件列表。支持的排序字段：CreatedTime、UpdatedTime。不传时使用默认排序规则。</p>
                     * @param _sorts <p>排序条件列表。支持的排序字段：CreatedTime、UpdatedTime。不传时使用默认排序规则。</p>
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量，从 0 开始，默认为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量，默认为 20，最大值为 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件列表。支持的过滤字段：Status（状态，取值 ACTIVE/INACTIVE）、ChargeType（计费方式，取值 FREE/TOKEN）、RequestSource（创建来源，取值 MC/GW）、ModelName（模型名称）、ModelId（模型 ID）、PaymentEnabled（是否已开启后付费，取值 true/false）。</p>
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序条件列表。支持的排序字段：CreatedTime、UpdatedTime。不传时使用默认排序规则。</p>
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELENDPOINTLISTREQUEST_H_
