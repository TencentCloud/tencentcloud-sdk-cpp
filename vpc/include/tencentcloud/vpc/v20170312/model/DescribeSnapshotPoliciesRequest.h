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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_

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
                * DescribeSnapshotPolicies请求参数结构体
                */
                class DescribeSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotPoliciesRequest();
                    ~DescribeSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyIds 快照策略Id。
                     * 
                     */
                    std::vector<std::string> GetSnapshotPolicyIds() const;

                    /**
                     * 设置快照策略Id。
                     * @param _snapshotPolicyIds 快照策略Id。
                     * 
                     */
                    void SetSnapshotPolicyIds(const std::vector<std::string>& _snapshotPolicyIds);

                    /**
                     * 判断参数 SnapshotPolicyIds 是否已赋值
                     * @return SnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定SnapshotPolicyIds和Filters。
<li>snapshot-policy-id - String -（过滤条件）快照策略ID。</li>
<li>snapshot-policy-name - String -（过滤条件）快照策略名称。</li>
                     * @return Filters 过滤条件，参数不支持同时指定SnapshotPolicyIds和Filters。
<li>snapshot-policy-id - String -（过滤条件）快照策略ID。</li>
<li>snapshot-policy-name - String -（过滤条件）快照策略名称。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定SnapshotPolicyIds和Filters。
<li>snapshot-policy-id - String -（过滤条件）快照策略ID。</li>
<li>snapshot-policy-name - String -（过滤条件）快照策略名称。</li>
                     * @param _filters 过滤条件，参数不支持同时指定SnapshotPolicyIds和Filters。
<li>snapshot-policy-id - String -（过滤条件）快照策略ID。</li>
<li>snapshot-policy-name - String -（过滤条件）快照策略名称。</li>
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大为200。
                     * @return Limit 返回数量，默认为20，最大为200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大为200。
                     * @param _limit 返回数量，默认为20，最大为200。
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
                     * 快照策略Id。
                     */
                    std::vector<std::string> m_snapshotPolicyIds;
                    bool m_snapshotPolicyIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定SnapshotPolicyIds和Filters。
<li>snapshot-policy-id - String -（过滤条件）快照策略ID。</li>
<li>snapshot-policy-name - String -（过滤条件）快照策略名称。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大为200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_
