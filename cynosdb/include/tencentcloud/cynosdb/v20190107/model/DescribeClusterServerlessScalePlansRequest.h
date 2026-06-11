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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSERVERLESSSCALEPLANSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSERVERLESSSCALEPLANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterServerlessScalePlans请求参数结构体
                */
                class DescribeClusterServerlessScalePlansRequest : public AbstractModel
                {
                public:
                    DescribeClusterServerlessScalePlansRequest();
                    ~DescribeClusterServerlessScalePlansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取实例列表
                     * @return InstanceIds 实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例列表
                     * @param _instanceIds 实例列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取策略类型. PolicyTypePeriodScale - 周期弹性
                     * @return PolicyType 策略类型. PolicyTypePeriodScale - 周期弹性
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型. PolicyTypePeriodScale - 周期弹性
                     * @param _policyType 策略类型. PolicyTypePeriodScale - 周期弹性
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取计划ID
                     * @return PlanId 计划ID
                     * 
                     */
                    int64_t GetPlanId() const;

                    /**
                     * 设置计划ID
                     * @param _planId 计划ID
                     * 
                     */
                    void SetPlanId(const int64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取分页数量限制，默认10
                     * @return Limit 分页数量限制，默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页数量限制，默认10
                     * @param _limit 分页数量限制，默认10
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
                     * 获取查询偏移，默认0
                     * @return Offset 查询偏移，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移，默认0
                     * @param _offset 查询偏移，默认0
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
                     * 获取按计划预期执行时间为条件查询的开始时间点，包含当前时间
                     * @return ExpectedStartTime 按计划预期执行时间为条件查询的开始时间点，包含当前时间
                     * 
                     */
                    std::string GetExpectedStartTime() const;

                    /**
                     * 设置按计划预期执行时间为条件查询的开始时间点，包含当前时间
                     * @param _expectedStartTime 按计划预期执行时间为条件查询的开始时间点，包含当前时间
                     * 
                     */
                    void SetExpectedStartTime(const std::string& _expectedStartTime);

                    /**
                     * 判断参数 ExpectedStartTime 是否已赋值
                     * @return ExpectedStartTime 是否已赋值
                     * 
                     */
                    bool ExpectedStartTimeHasBeenSet() const;

                    /**
                     * 获取按计划预期执行时间为条件查询的结束时间点，包含当前时间
                     * @return ExpectedEndTime 按计划预期执行时间为条件查询的结束时间点，包含当前时间
                     * 
                     */
                    std::string GetExpectedEndTime() const;

                    /**
                     * 设置按计划预期执行时间为条件查询的结束时间点，包含当前时间
                     * @param _expectedEndTime 按计划预期执行时间为条件查询的结束时间点，包含当前时间
                     * 
                     */
                    void SetExpectedEndTime(const std::string& _expectedEndTime);

                    /**
                     * 判断参数 ExpectedEndTime 是否已赋值
                     * @return ExpectedEndTime 是否已赋值
                     * 
                     */
                    bool ExpectedEndTimeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 策略类型. PolicyTypePeriodScale - 周期弹性
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 计划ID
                     */
                    int64_t m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 分页数量限制，默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询偏移，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按计划预期执行时间为条件查询的开始时间点，包含当前时间
                     */
                    std::string m_expectedStartTime;
                    bool m_expectedStartTimeHasBeenSet;

                    /**
                     * 按计划预期执行时间为条件查询的结束时间点，包含当前时间
                     */
                    std::string m_expectedEndTime;
                    bool m_expectedEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSERVERLESSSCALEPLANSREQUEST_H_
