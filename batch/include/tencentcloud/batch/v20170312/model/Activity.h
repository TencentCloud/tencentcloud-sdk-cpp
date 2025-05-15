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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算环境的创建或销毁活动
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动ID
                     * @return ActivityId 活动ID
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动ID
                     * @param _activityId 活动ID
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取计算节点ID
                     * @return ComputeNodeId 计算节点ID
                     * 
                     */
                    std::string GetComputeNodeId() const;

                    /**
                     * 设置计算节点ID
                     * @param _computeNodeId 计算节点ID
                     * 
                     */
                    void SetComputeNodeId(const std::string& _computeNodeId);

                    /**
                     * 判断参数 ComputeNodeId 是否已赋值
                     * @return ComputeNodeId 是否已赋值
                     * 
                     */
                    bool ComputeNodeIdHasBeenSet() const;

                    /**
                     * 获取计算节点活动类型，创建或者销毁
                     * @return ComputeNodeActivityType 计算节点活动类型，创建或者销毁
                     * 
                     */
                    std::string GetComputeNodeActivityType() const;

                    /**
                     * 设置计算节点活动类型，创建或者销毁
                     * @param _computeNodeActivityType 计算节点活动类型，创建或者销毁
                     * 
                     */
                    void SetComputeNodeActivityType(const std::string& _computeNodeActivityType);

                    /**
                     * 判断参数 ComputeNodeActivityType 是否已赋值
                     * @return ComputeNodeActivityType 是否已赋值
                     * 
                     */
                    bool ComputeNodeActivityTypeHasBeenSet() const;

                    /**
                     * 获取计算环境ID
                     * @return EnvId 计算环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID
                     * @param _envId 计算环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取起因
                     * @return Cause 起因
                     * 
                     */
                    std::string GetCause() const;

                    /**
                     * 设置起因
                     * @param _cause 起因
                     * 
                     */
                    void SetCause(const std::string& _cause);

                    /**
                     * 判断参数 Cause 是否已赋值
                     * @return Cause 是否已赋值
                     * 
                     */
                    bool CauseHasBeenSet() const;

                    /**
                     * 获取活动状态。取值范围：<br><li>SUBMITTED：已提交</li><li>PROCESSING：处理中</li><li>SUCCEED：成功</li><li>FAILED：失败</li>
                     * @return ActivityState 活动状态。取值范围：<br><li>SUBMITTED：已提交</li><li>PROCESSING：处理中</li><li>SUCCEED：成功</li><li>FAILED：失败</li>
                     * 
                     */
                    std::string GetActivityState() const;

                    /**
                     * 设置活动状态。取值范围：<br><li>SUBMITTED：已提交</li><li>PROCESSING：处理中</li><li>SUCCEED：成功</li><li>FAILED：失败</li>
                     * @param _activityState 活动状态。取值范围：<br><li>SUBMITTED：已提交</li><li>PROCESSING：处理中</li><li>SUCCEED：成功</li><li>FAILED：失败</li>
                     * 
                     */
                    void SetActivityState(const std::string& _activityState);

                    /**
                     * 判断参数 ActivityState 是否已赋值
                     * @return ActivityState 是否已赋值
                     * 
                     */
                    bool ActivityStateHasBeenSet() const;

                    /**
                     * 获取状态原因
                     * @return StateReason 状态原因
                     * 
                     */
                    std::string GetStateReason() const;

                    /**
                     * 设置状态原因
                     * @param _stateReason 状态原因
                     * 
                     */
                    void SetStateReason(const std::string& _stateReason);

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     * 
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取活动开始时间
                     * @return StartTime 活动开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置活动开始时间
                     * @param _startTime 活动开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取活动结束时间
                     * @return EndTime 活动结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置活动结束时间
                     * @param _endTime 活动结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取云服务器实例ID
                     * @return InstanceId 云服务器实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云服务器实例ID
                     * @param _instanceId 云服务器实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 活动ID
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 计算节点ID
                     */
                    std::string m_computeNodeId;
                    bool m_computeNodeIdHasBeenSet;

                    /**
                     * 计算节点活动类型，创建或者销毁
                     */
                    std::string m_computeNodeActivityType;
                    bool m_computeNodeActivityTypeHasBeenSet;

                    /**
                     * 计算环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 起因
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * 活动状态。取值范围：<br><li>SUBMITTED：已提交</li><li>PROCESSING：处理中</li><li>SUCCEED：成功</li><li>FAILED：失败</li>
                     */
                    std::string m_activityState;
                    bool m_activityStateHasBeenSet;

                    /**
                     * 状态原因
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * 活动开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 活动结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 云服务器实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_
