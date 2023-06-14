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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 工作流信息详情。
                */
                class WorkflowInfo : public AbstractModel
                {
                public:
                    WorkflowInfo();
                    ~WorkflowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流 ID。
                     * @return WorkflowId 工作流 ID。
                     * 
                     */
                    int64_t GetWorkflowId() const;

                    /**
                     * 设置工作流 ID。
                     * @param _workflowId 工作流 ID。
                     * 
                     */
                    void SetWorkflowId(const int64_t& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称。
                     * @return WorkflowName 工作流名称。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称。
                     * @param _workflowName 工作流名称。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
                     * @return Status 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
                     * @param _status 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取工作流绑定的输入规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @return Trigger 工作流绑定的输入规则，当上传视频命中该规则到该对象时即触发工作流。
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置工作流绑定的输入规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @param _trigger 工作流绑定的输入规则，当上传视频命中该规则到该对象时即触发工作流。
                     * 
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取媒体处理类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaProcessTask 媒体处理类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置媒体处理类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaProcessTask 媒体处理类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     * 
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiContentReviewTask 视频内容审核类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置视频内容审核类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiContentReviewTask 视频内容审核类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取视频内容分析类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiAnalysisTask 视频内容分析类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置视频内容分析类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiAnalysisTask 视频内容分析类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取视频内容识别类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiRecognitionTask 视频内容识别类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置视频内容识别类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiRecognitionTask 视频内容识别类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取任务的事件通知信息，不填代表不获取事件通知。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知信息，不填代表不获取事件通知。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TaskPriority 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTaskPriority() const;

                    /**
                     * 设置任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _taskPriority 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    void SetTaskPriority(const int64_t& _taskPriority);

                    /**
                     * 判断参数 TaskPriority 是否已赋值
                     * @return TaskPriority 是否已赋值
                     * 
                     */
                    bool TaskPriorityHasBeenSet() const;

                    /**
                     * 获取媒体处理生成的文件输出的目标目录，如`/movie/201907/`。
                     * @return OutputDir 媒体处理生成的文件输出的目标目录，如`/movie/201907/`。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标目录，如`/movie/201907/`。
                     * @param _outputDir 媒体处理生成的文件输出的目标目录，如`/movie/201907/`。
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取工作流创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 工作流创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置工作流创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 工作流创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取工作流最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return UpdateTime 工作流最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置工作流最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _updateTime 工作流最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 工作流 ID。
                     */
                    int64_t m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作流绑定的输入规则，当上传视频命中该规则到该对象时即触发工作流。
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 媒体处理的文件输出存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * 视频内容审核类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * 视频内容分析类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * 视频内容识别类型任务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 任务的事件通知信息，不填代表不获取事件通知。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_taskPriority;
                    bool m_taskPriorityHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标目录，如`/movie/201907/`。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 工作流创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 工作流最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWINFO_H_
