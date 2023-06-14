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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateWorkflow请求参数结构体
                */
                class CreateWorkflowRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRequest();
                    ~CreateWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流名称，最多128字符。同一个用户该名称唯一。
                     * @return WorkflowName 工作流名称，最多128字符。同一个用户该名称唯一。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称，最多128字符。同一个用户该名称唯一。
                     * @param _workflowName 工作流名称，最多128字符。同一个用户该名称唯一。
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
                     * 获取工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @return Trigger 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     * @param _trigger 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
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
                     * 获取媒体处理的文件输出存储位置。不填则继承 Trigger 中的存储位置。
                     * @return OutputStorage 媒体处理的文件输出存储位置。不填则继承 Trigger 中的存储位置。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理的文件输出存储位置。不填则继承 Trigger 中的存储位置。
                     * @param _outputStorage 媒体处理的文件输出存储位置。不填则继承 Trigger 中的存储位置。
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
                     * 获取媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与触发文件所在的目录一致。
                     * @return OutputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与触发文件所在的目录一致。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与触发文件所在的目录一致。
                     * @param _outputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与触发文件所在的目录一致。
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
                     * 获取媒体处理类型任务参数。
                     * @return MediaProcessTask 媒体处理类型任务参数。
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置媒体处理类型任务参数。
                     * @param _mediaProcessTask 媒体处理类型任务参数。
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
                     * @return AiContentReviewTask 视频内容审核类型任务参数。
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置视频内容审核类型任务参数。
                     * @param _aiContentReviewTask 视频内容审核类型任务参数。
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
                     * @return AiAnalysisTask 视频内容分析类型任务参数。
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置视频内容分析类型任务参数。
                     * @param _aiAnalysisTask 视频内容分析类型任务参数。
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
                     * @return AiRecognitionTask 视频内容识别类型任务参数。
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置视频内容识别类型任务参数。
                     * @param _aiRecognitionTask 视频内容识别类型任务参数。
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
                     * 获取任务的事件通知配置，不填代表不获取事件通知。
                     * @return TaskNotifyConfig 任务的事件通知配置，不填代表不获取事件通知。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知配置，不填代表不获取事件通知。
                     * @param _taskNotifyConfig 任务的事件通知配置，不填代表不获取事件通知。
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
                     * 获取工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TaskPriority 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTaskPriority() const;

                    /**
                     * 设置工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _taskPriority 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    void SetTaskPriority(const int64_t& _taskPriority);

                    /**
                     * 判断参数 TaskPriority 是否已赋值
                     * @return TaskPriority 是否已赋值
                     * 
                     */
                    bool TaskPriorityHasBeenSet() const;

                private:

                    /**
                     * 工作流名称，最多128字符。同一个用户该名称唯一。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流绑定的触发规则，当上传视频命中该规则到该对象时即触发工作流。
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 媒体处理的文件输出存储位置。不填则继承 Trigger 中的存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与触发文件所在的目录一致。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 媒体处理类型任务参数。
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * 视频内容审核类型任务参数。
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * 视频内容分析类型任务参数。
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * 视频内容识别类型任务参数。
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 任务的事件通知配置，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 工作流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_taskPriority;
                    bool m_taskPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_
