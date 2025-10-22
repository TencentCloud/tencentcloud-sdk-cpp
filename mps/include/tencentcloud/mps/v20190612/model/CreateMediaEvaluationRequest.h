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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMEDIAEVALUATIONREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMEDIAEVALUATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/EvaluationTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
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
                * CreateMediaEvaluation请求参数结构体
                */
                class CreateMediaEvaluationRequest : public AbstractModel
                {
                public:
                    CreateMediaEvaluationRequest();
                    ~CreateMediaEvaluationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取评测的原文件输入信息。目前输入对象的类型有 COS 和 URL。
                     * @return InputInfo 评测的原文件输入信息。目前输入对象的类型有 COS 和 URL。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置评测的原文件输入信息。目前输入对象的类型有 COS 和 URL。
                     * @param _inputInfo 评测的原文件输入信息。目前输入对象的类型有 COS 和 URL。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取评测任务参数。
                     * @return EvaluationTask 评测任务参数。
                     * 
                     */
                    EvaluationTaskInput GetEvaluationTask() const;

                    /**
                     * 设置评测任务参数。
                     * @param _evaluationTask 评测任务参数。
                     * 
                     */
                    void SetEvaluationTask(const EvaluationTaskInput& _evaluationTask);

                    /**
                     * 判断参数 EvaluationTask 是否已赋值
                     * @return EvaluationTask 是否已赋值
                     * 
                     */
                    bool EvaluationTaskHasBeenSet() const;

                    /**
                     * 获取评测的输出文件的目标存储。不填则继承 InputInfo 中的存储位置。目前输出对象存储位置的类型有COS。
                     * @return OutputStorage 评测的输出文件的目标存储。不填则继承 InputInfo 中的存储位置。目前输出对象存储位置的类型有COS。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置评测的输出文件的目标存储。不填则继承 InputInfo 中的存储位置。目前输出对象存储位置的类型有COS。
                     * @param _outputStorage 评测的输出文件的目标存储。不填则继承 InputInfo 中的存储位置。目前输出对象存储位置的类型有COS。
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
                     * 获取评测生成文件的输出目录，必选以 / 开头和结尾，如/movie/201907/。 如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * @return OutputDir 评测生成文件的输出目录，必选以 / 开头和结尾，如/movie/201907/。 如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置评测生成文件的输出目录，必选以 / 开头和结尾，如/movie/201907/。 如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * @param _outputDir 评测生成文件的输出目录，必选以 / 开头和结尾，如/movie/201907/。 如果不填，表示与 InputInfo 中文件所在的目录一致。
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
                     * 获取任务的事件通知信息，不填代表不获取事件通知。
                     * @return TaskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置任务的事件通知信息，不填代表不获取事件通知。
                     * @param _taskNotifyConfig 任务的事件通知信息，不填代表不获取事件通知。
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
                     * 获取任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * @return TasksPriority 任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * @param _tasksPriority 任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 评测的原文件输入信息。目前输入对象的类型有 COS 和 URL。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 评测任务参数。
                     */
                    EvaluationTaskInput m_evaluationTask;
                    bool m_evaluationTaskHasBeenSet;

                    /**
                     * 评测的输出文件的目标存储。不填则继承 InputInfo 中的存储位置。目前输出对象存储位置的类型有COS。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 评测生成文件的输出目录，必选以 / 开头和结尾，如/movie/201907/。 如果不填，表示与 InputInfo 中文件所在的目录一致。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMEDIAEVALUATIONREQUEST_H_
