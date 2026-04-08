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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorFilterRules请求参数结构体
                */
                class DescribeTrafficMirrorFilterRulesRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorFilterRulesRequest();
                    ~DescribeTrafficMirrorFilterRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像唯一ID
                     * @return TrafficMirrorId 流量镜像唯一ID
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像唯一ID
                     * @param _trafficMirrorId 流量镜像唯一ID
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像出站、入站过滤唯一ID列表。
                     * @return TrafficMirrorFilterRuleIds 流量镜像出站、入站过滤唯一ID列表。
                     * 
                     */
                    std::vector<std::string> GetTrafficMirrorFilterRuleIds() const;

                    /**
                     * 设置流量镜像出站、入站过滤唯一ID列表。
                     * @param _trafficMirrorFilterRuleIds 流量镜像出站、入站过滤唯一ID列表。
                     * 
                     */
                    void SetTrafficMirrorFilterRuleIds(const std::vector<std::string>& _trafficMirrorFilterRuleIds);

                    /**
                     * 判断参数 TrafficMirrorFilterRuleIds 是否已赋值
                     * @return TrafficMirrorFilterRuleIds 是否已赋值
                     * 
                     */
                    bool TrafficMirrorFilterRuleIdsHasBeenSet() const;

                    /**
                     * 获取<li>traffic-mirror-filter-rule-id - String - （过滤条件） 流量镜像过滤规则，形如：tmfi-qfhrb7yj。 </li>
<li>action - String - （过滤条件）策略， 支持类型： ACCEPT， DROP。 </li>
<li>description - String - （过滤条件）描述。 </li>
<li>direction - String - （过滤条件）方向, 支持类型：INGRESS， EGRESS。</li>
                     * @return Filters <li>traffic-mirror-filter-rule-id - String - （过滤条件） 流量镜像过滤规则，形如：tmfi-qfhrb7yj。 </li>
<li>action - String - （过滤条件）策略， 支持类型： ACCEPT， DROP。 </li>
<li>description - String - （过滤条件）描述。 </li>
<li>direction - String - （过滤条件）方向, 支持类型：INGRESS， EGRESS。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>traffic-mirror-filter-rule-id - String - （过滤条件） 流量镜像过滤规则，形如：tmfi-qfhrb7yj。 </li>
<li>action - String - （过滤条件）策略， 支持类型： ACCEPT， DROP。 </li>
<li>description - String - （过滤条件）描述。 </li>
<li>direction - String - （过滤条件）方向, 支持类型：INGRESS， EGRESS。</li>
                     * @param _filters <li>traffic-mirror-filter-rule-id - String - （过滤条件） 流量镜像过滤规则，形如：tmfi-qfhrb7yj。 </li>
<li>action - String - （过滤条件）策略， 支持类型： ACCEPT， DROP。 </li>
<li>description - String - （过滤条件）描述。 </li>
<li>direction - String - （过滤条件）方向, 支持类型：INGRESS， EGRESS。</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 流量镜像唯一ID
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像出站、入站过滤唯一ID列表。
                     */
                    std::vector<std::string> m_trafficMirrorFilterRuleIds;
                    bool m_trafficMirrorFilterRuleIdsHasBeenSet;

                    /**
                     * <li>traffic-mirror-filter-rule-id - String - （过滤条件） 流量镜像过滤规则，形如：tmfi-qfhrb7yj。 </li>
<li>action - String - （过滤条件）策略， 支持类型： ACCEPT， DROP。 </li>
<li>description - String - （过滤条件）描述。 </li>
<li>direction - String - （过滤条件）方向, 支持类型：INGRESS， EGRESS。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESREQUEST_H_
