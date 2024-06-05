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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTask.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTask.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamProcessTask.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/ScheduleTask.h>
#include <tencentcloud/mps/v20190612/model/LiveScheduleTask.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail返回参数结构体
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，目前取值有：<li>WorkflowTask：视频工作流处理任务。</li><li>EditMediaTask：视频编辑任务。</li><li>LiveStreamProcessTask：直播流处理任务。</li><li>ScheduleTask：编排处理任务。</li><li>EvaluationTask：评测任务。</li>
                     * @return TaskType 任务类型，目前取值有：<li>WorkflowTask：视频工作流处理任务。</li><li>EditMediaTask：视频编辑任务。</li><li>LiveStreamProcessTask：直播流处理任务。</li><li>ScheduleTask：编排处理任务。</li><li>EvaluationTask：评测任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @return Status 任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return BeginProcessTime 任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return FinishTime 任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取视频编辑任务信息，仅当 TaskType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaTask 视频编辑任务信息，仅当 TaskType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EditMediaTask GetEditMediaTask() const;

                    /**
                     * 判断参数 EditMediaTask 是否已赋值
                     * @return EditMediaTask 是否已赋值
                     * 
                     */
                    bool EditMediaTaskHasBeenSet() const;

                    /**
                     * 获取视频处理任务信息，仅当 TaskType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowTask 视频处理任务信息，仅当 TaskType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTask GetWorkflowTask() const;

                    /**
                     * 判断参数 WorkflowTask 是否已赋值
                     * @return WorkflowTask 是否已赋值
                     * 
                     */
                    bool WorkflowTaskHasBeenSet() const;

                    /**
                     * 获取直播流处理任务信息，仅当 TaskType 为 LiveStreamProcessTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveStreamProcessTask 直播流处理任务信息，仅当 TaskType 为 LiveStreamProcessTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamProcessTask GetLiveStreamProcessTask() const;

                    /**
                     * 判断参数 LiveStreamProcessTask 是否已赋值
                     * @return LiveStreamProcessTask 是否已赋值
                     * 
                     */
                    bool LiveStreamProcessTaskHasBeenSet() const;

                    /**
                     * 获取任务的事件通知信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNotifyConfig 任务的事件通知信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取任务流的优先级，取值范围为 [-10, 10]。
                     * @return TasksPriority 任务流的优先级，取值范围为 [-10, 10]。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取扩展信息字段，仅用于特定场景。
                     * @return ExtInfo 扩展信息字段，仅用于特定场景。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取编排处理任务信息，仅当 TaskType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTask 编排处理任务信息，仅当 TaskType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleTask GetScheduleTask() const;

                    /**
                     * 判断参数 ScheduleTask 是否已赋值
                     * @return ScheduleTask 是否已赋值
                     * 
                     */
                    bool ScheduleTaskHasBeenSet() const;

                    /**
                     * 获取直播编排处理任务信息，仅当 TaskType 为 LiveScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveScheduleTask 直播编排处理任务信息，仅当 TaskType 为 LiveScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveScheduleTask GetLiveScheduleTask() const;

                    /**
                     * 判断参数 LiveScheduleTask 是否已赋值
                     * @return LiveScheduleTask 是否已赋值
                     * 
                     */
                    bool LiveScheduleTaskHasBeenSet() const;

                private:

                    /**
                     * 任务类型，目前取值有：<li>WorkflowTask：视频工作流处理任务。</li><li>EditMediaTask：视频编辑任务。</li><li>LiveStreamProcessTask：直播流处理任务。</li><li>ScheduleTask：编排处理任务。</li><li>EvaluationTask：评测任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 视频编辑任务信息，仅当 TaskType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * 视频处理任务信息，仅当 TaskType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTask m_workflowTask;
                    bool m_workflowTaskHasBeenSet;

                    /**
                     * 直播流处理任务信息，仅当 TaskType 为 LiveStreamProcessTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamProcessTask m_liveStreamProcessTask;
                    bool m_liveStreamProcessTaskHasBeenSet;

                    /**
                     * 任务的事件通知信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 任务流的优先级，取值范围为 [-10, 10]。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 扩展信息字段，仅用于特定场景。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 编排处理任务信息，仅当 TaskType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleTask m_scheduleTask;
                    bool m_scheduleTaskHasBeenSet;

                    /**
                     * 直播编排处理任务信息，仅当 TaskType 为 LiveScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveScheduleTask m_liveScheduleTask;
                    bool m_liveScheduleTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKDETAILRESPONSE_H_
