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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ActivtyRelatedInstance.h>
#include <tencentcloud/as/v20180419/model/LifecycleActionResultInfo.h>
#include <tencentcloud/as/v20180419/model/DetailedStatusMessage.h>
#include <tencentcloud/as/v20180419/model/InvocationResult.h>
#include <tencentcloud/as/v20180419/model/RelatedInstance.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 符合条件的伸缩活动相关信息。
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取伸缩活动ID。
                     * @return ActivityId 伸缩活动ID。
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置伸缩活动ID。
                     * @param _activityId 伸缩活动ID。
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
                     * 获取伸缩活动类型。取值如下：
<li>SCALE_OUT：扩容活动</li>
<li>SCALE_IN：缩容活动</li>
<li>ATTACH_INSTANCES：添加实例</li>
<li>REMOVE_INSTANCES：销毁实例</li>
<li>DETACH_INSTANCES：移出实例</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY：实例在CVM控制台被销毁</li>
<li>REPLACE_UNHEALTHY_INSTANCE：替换不健康实例</li>
<li>START_INSTANCES：开启实例</li>
<li>STOP_INSTANCES：关闭实例</li>
<li>INVOKE_COMMAND：执行命令</li>
                     * @return ActivityType 伸缩活动类型。取值如下：
<li>SCALE_OUT：扩容活动</li>
<li>SCALE_IN：缩容活动</li>
<li>ATTACH_INSTANCES：添加实例</li>
<li>REMOVE_INSTANCES：销毁实例</li>
<li>DETACH_INSTANCES：移出实例</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY：实例在CVM控制台被销毁</li>
<li>REPLACE_UNHEALTHY_INSTANCE：替换不健康实例</li>
<li>START_INSTANCES：开启实例</li>
<li>STOP_INSTANCES：关闭实例</li>
<li>INVOKE_COMMAND：执行命令</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置伸缩活动类型。取值如下：
<li>SCALE_OUT：扩容活动</li>
<li>SCALE_IN：缩容活动</li>
<li>ATTACH_INSTANCES：添加实例</li>
<li>REMOVE_INSTANCES：销毁实例</li>
<li>DETACH_INSTANCES：移出实例</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY：实例在CVM控制台被销毁</li>
<li>REPLACE_UNHEALTHY_INSTANCE：替换不健康实例</li>
<li>START_INSTANCES：开启实例</li>
<li>STOP_INSTANCES：关闭实例</li>
<li>INVOKE_COMMAND：执行命令</li>
                     * @param _activityType 伸缩活动类型。取值如下：
<li>SCALE_OUT：扩容活动</li>
<li>SCALE_IN：缩容活动</li>
<li>ATTACH_INSTANCES：添加实例</li>
<li>REMOVE_INSTANCES：销毁实例</li>
<li>DETACH_INSTANCES：移出实例</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY：实例在CVM控制台被销毁</li>
<li>REPLACE_UNHEALTHY_INSTANCE：替换不健康实例</li>
<li>START_INSTANCES：开启实例</li>
<li>STOP_INSTANCES：关闭实例</li>
<li>INVOKE_COMMAND：执行命令</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取伸缩活动状态。取值如下
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>PARTIALLY_SUCCESSFUL：活动部分成功</li>
<li>FAILED：活动失败</li>
<li>CANCELLED：活动取消</li>
                     * @return StatusCode 伸缩活动状态。取值如下
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>PARTIALLY_SUCCESSFUL：活动部分成功</li>
<li>FAILED：活动失败</li>
<li>CANCELLED：活动取消</li>
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置伸缩活动状态。取值如下
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>PARTIALLY_SUCCESSFUL：活动部分成功</li>
<li>FAILED：活动失败</li>
<li>CANCELLED：活动取消</li>
                     * @param _statusCode 伸缩活动状态。取值如下
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>PARTIALLY_SUCCESSFUL：活动部分成功</li>
<li>FAILED：活动失败</li>
<li>CANCELLED：活动取消</li>
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取伸缩活动状态描述。
                     * @return StatusMessage 伸缩活动状态描述。
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置伸缩活动状态描述。
                     * @param _statusMessage 伸缩活动状态描述。
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取伸缩活动起因。
                     * @return Cause 伸缩活动起因。
                     * 
                     */
                    std::string GetCause() const;

                    /**
                     * 设置伸缩活动起因。
                     * @param _cause 伸缩活动起因。
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
                     * 获取伸缩活动描述。
                     * @return Description 伸缩活动描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置伸缩活动描述。
                     * @param _description 伸缩活动描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取伸缩活动开始时间，为 `UTC` 标准时间。
                     * @return StartTime 伸缩活动开始时间，为 `UTC` 标准时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置伸缩活动开始时间，为 `UTC` 标准时间。
                     * @param _startTime 伸缩活动开始时间，为 `UTC` 标准时间。
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
                     * 获取伸缩活动结束时间，为 `UTC` 标准时间。
                     * @return EndTime 伸缩活动结束时间，为 `UTC` 标准时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置伸缩活动结束时间，为 `UTC` 标准时间。
                     * @param _endTime 伸缩活动结束时间，为 `UTC` 标准时间。
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
                     * 获取伸缩活动创建时间，为 `UTC` 标准时间。
                     * @return CreatedTime 伸缩活动创建时间，为 `UTC` 标准时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置伸缩活动创建时间，为 `UTC` 标准时间。
                     * @param _createdTime 伸缩活动创建时间，为 `UTC` 标准时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取该参数已废弃，请勿使用。
                     * @return ActivityRelatedInstanceSet 该参数已废弃，请勿使用。
                     * @deprecated
                     */
                    std::vector<ActivtyRelatedInstance> GetActivityRelatedInstanceSet() const;

                    /**
                     * 设置该参数已废弃，请勿使用。
                     * @param _activityRelatedInstanceSet 该参数已废弃，请勿使用。
                     * @deprecated
                     */
                    void SetActivityRelatedInstanceSet(const std::vector<ActivtyRelatedInstance>& _activityRelatedInstanceSet);

                    /**
                     * 判断参数 ActivityRelatedInstanceSet 是否已赋值
                     * @return ActivityRelatedInstanceSet 是否已赋值
                     * @deprecated
                     */
                    bool ActivityRelatedInstanceSetHasBeenSet() const;

                    /**
                     * 获取伸缩活动状态简要描述。
                     * @return StatusMessageSimplified 伸缩活动状态简要描述。
                     * 
                     */
                    std::string GetStatusMessageSimplified() const;

                    /**
                     * 设置伸缩活动状态简要描述。
                     * @param _statusMessageSimplified 伸缩活动状态简要描述。
                     * 
                     */
                    void SetStatusMessageSimplified(const std::string& _statusMessageSimplified);

                    /**
                     * 判断参数 StatusMessageSimplified 是否已赋值
                     * @return StatusMessageSimplified 是否已赋值
                     * 
                     */
                    bool StatusMessageSimplifiedHasBeenSet() const;

                    /**
                     * 获取伸缩活动中生命周期挂钩的执行结果。
                     * @return LifecycleActionResultSet 伸缩活动中生命周期挂钩的执行结果。
                     * 
                     */
                    std::vector<LifecycleActionResultInfo> GetLifecycleActionResultSet() const;

                    /**
                     * 设置伸缩活动中生命周期挂钩的执行结果。
                     * @param _lifecycleActionResultSet 伸缩活动中生命周期挂钩的执行结果。
                     * 
                     */
                    void SetLifecycleActionResultSet(const std::vector<LifecycleActionResultInfo>& _lifecycleActionResultSet);

                    /**
                     * 判断参数 LifecycleActionResultSet 是否已赋值
                     * @return LifecycleActionResultSet 是否已赋值
                     * 
                     */
                    bool LifecycleActionResultSetHasBeenSet() const;

                    /**
                     * 获取伸缩活动状态详细描述。
                     * @return DetailedStatusMessageSet 伸缩活动状态详细描述。
                     * 
                     */
                    std::vector<DetailedStatusMessage> GetDetailedStatusMessageSet() const;

                    /**
                     * 设置伸缩活动状态详细描述。
                     * @param _detailedStatusMessageSet 伸缩活动状态详细描述。
                     * 
                     */
                    void SetDetailedStatusMessageSet(const std::vector<DetailedStatusMessage>& _detailedStatusMessageSet);

                    /**
                     * 判断参数 DetailedStatusMessageSet 是否已赋值
                     * @return DetailedStatusMessageSet 是否已赋值
                     * 
                     */
                    bool DetailedStatusMessageSetHasBeenSet() const;

                    /**
                     * 获取执行命令结果。
                     * @return InvocationResultSet 执行命令结果。
                     * 
                     */
                    std::vector<InvocationResult> GetInvocationResultSet() const;

                    /**
                     * 设置执行命令结果。
                     * @param _invocationResultSet 执行命令结果。
                     * 
                     */
                    void SetInvocationResultSet(const std::vector<InvocationResult>& _invocationResultSet);

                    /**
                     * 判断参数 InvocationResultSet 是否已赋值
                     * @return InvocationResultSet 是否已赋值
                     * 
                     */
                    bool InvocationResultSetHasBeenSet() const;

                    /**
                     * 获取伸缩活动相关实例信息集合。
                     * @return RelatedInstanceSet 伸缩活动相关实例信息集合。
                     * 
                     */
                    std::vector<RelatedInstance> GetRelatedInstanceSet() const;

                    /**
                     * 设置伸缩活动相关实例信息集合。
                     * @param _relatedInstanceSet 伸缩活动相关实例信息集合。
                     * 
                     */
                    void SetRelatedInstanceSet(const std::vector<RelatedInstance>& _relatedInstanceSet);

                    /**
                     * 判断参数 RelatedInstanceSet 是否已赋值
                     * @return RelatedInstanceSet 是否已赋值
                     * 
                     */
                    bool RelatedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 伸缩活动ID。
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 伸缩活动类型。取值如下：
<li>SCALE_OUT：扩容活动</li>
<li>SCALE_IN：缩容活动</li>
<li>ATTACH_INSTANCES：添加实例</li>
<li>REMOVE_INSTANCES：销毁实例</li>
<li>DETACH_INSTANCES：移出实例</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY：实例在CVM控制台被销毁</li>
<li>REPLACE_UNHEALTHY_INSTANCE：替换不健康实例</li>
<li>START_INSTANCES：开启实例</li>
<li>STOP_INSTANCES：关闭实例</li>
<li>INVOKE_COMMAND：执行命令</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 伸缩活动状态。取值如下
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>PARTIALLY_SUCCESSFUL：活动部分成功</li>
<li>FAILED：活动失败</li>
<li>CANCELLED：活动取消</li>
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 伸缩活动状态描述。
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * 伸缩活动起因。
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * 伸缩活动描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 伸缩活动开始时间，为 `UTC` 标准时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 伸缩活动结束时间，为 `UTC` 标准时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 伸缩活动创建时间，为 `UTC` 标准时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 该参数已废弃，请勿使用。
                     */
                    std::vector<ActivtyRelatedInstance> m_activityRelatedInstanceSet;
                    bool m_activityRelatedInstanceSetHasBeenSet;

                    /**
                     * 伸缩活动状态简要描述。
                     */
                    std::string m_statusMessageSimplified;
                    bool m_statusMessageSimplifiedHasBeenSet;

                    /**
                     * 伸缩活动中生命周期挂钩的执行结果。
                     */
                    std::vector<LifecycleActionResultInfo> m_lifecycleActionResultSet;
                    bool m_lifecycleActionResultSetHasBeenSet;

                    /**
                     * 伸缩活动状态详细描述。
                     */
                    std::vector<DetailedStatusMessage> m_detailedStatusMessageSet;
                    bool m_detailedStatusMessageSetHasBeenSet;

                    /**
                     * 执行命令结果。
                     */
                    std::vector<InvocationResult> m_invocationResultSet;
                    bool m_invocationResultSetHasBeenSet;

                    /**
                     * 伸缩活动相关实例信息集合。
                     */
                    std::vector<RelatedInstance> m_relatedInstanceSet;
                    bool m_relatedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_
