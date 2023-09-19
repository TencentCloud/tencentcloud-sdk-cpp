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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaFileInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/EditMediaOutputConfig.h>
#include <tencentcloud/mps/v20190612/model/ComposeMediaConfig.h>
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
                * EditMedia请求参数结构体
                */
                class EditMediaRequest : public AbstractModel
                {
                public:
                    EditMediaRequest();
                    ~EditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的视频文件信息。
                     * @return FileInfos 输入的视频文件信息。
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置输入的视频文件信息。
                     * @param _fileInfos 输入的视频文件信息。
                     * 
                     */
                    void SetFileInfos(const std::vector<EditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取媒体处理输出文件的目标存储。
                     * @return OutputStorage 媒体处理输出文件的目标存储。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理输出文件的目标存储。
                     * @param _outputStorage 媒体处理输出文件的目标存储。
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
                     * 获取媒体处理输出文件的目标路径。

注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。

                     * @return OutputObjectPath 媒体处理输出文件的目标路径。

注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。

                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置媒体处理输出文件的目标路径。

注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。

                     * @param _outputObjectPath 媒体处理输出文件的目标路径。

注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。

                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取【剪辑】任务生成的文件配置。
                     * @return OutputConfig 【剪辑】任务生成的文件配置。
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置【剪辑】任务生成的文件配置。
                     * @param _outputConfig 【剪辑】任务生成的文件配置。
                     * 
                     */
                    void SetOutputConfig(const EditMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取【合成】任务配置。

注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。
                     * @return ComposeConfig 【合成】任务配置。

注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。
                     * 
                     */
                    ComposeMediaConfig GetComposeConfig() const;

                    /**
                     * 设置【合成】任务配置。

注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。
                     * @param _composeConfig 【合成】任务配置。

注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。
                     * 
                     */
                    void SetComposeConfig(const ComposeMediaConfig& _composeConfig);

                    /**
                     * 判断参数 ComposeConfig 是否已赋值
                     * @return ComposeConfig 是否已赋值
                     * 
                     */
                    bool ComposeConfigHasBeenSet() const;

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
                     * 输入的视频文件信息。
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 媒体处理输出文件的目标存储。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理输出文件的目标路径。

注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。

                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * 【剪辑】任务生成的文件配置。
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 【合成】任务配置。

注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。
                     */
                    ComposeMediaConfig m_composeConfig;
                    bool m_composeConfigHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
