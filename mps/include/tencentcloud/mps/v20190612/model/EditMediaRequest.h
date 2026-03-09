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
                     * 获取<p>输入的视频文件信息。</p>
                     * @return FileInfos <p>输入的视频文件信息。</p>
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>输入的视频文件信息。</p>
                     * @param _fileInfos <p>输入的视频文件信息。</p>
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
                     * 获取<p>媒体处理输出文件的目标存储。</p>
                     * @return OutputStorage <p>媒体处理输出文件的目标存储。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>媒体处理输出文件的目标存储。</p>
                     * @param _outputStorage <p>媒体处理输出文件的目标存储。</p>
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
                     * 获取<p>媒体处理输出文件的目标路径。</p><p>注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。</p>
                     * @return OutputObjectPath <p>媒体处理输出文件的目标路径。</p><p>注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。</p>
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>媒体处理输出文件的目标路径。</p><p>注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。</p>
                     * @param _outputObjectPath <p>媒体处理输出文件的目标路径。</p><p>注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。</p>
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
                     * 获取<p>【剪辑】任务生成的文件配置。</p>
                     * @return OutputConfig <p>【剪辑】任务生成的文件配置。</p>
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>【剪辑】任务生成的文件配置。</p>
                     * @param _outputConfig <p>【剪辑】任务生成的文件配置。</p>
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
                     * 获取<p>【合成】任务配置。</p><p>注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。</p>
                     * @return ComposeConfig <p>【合成】任务配置。</p><p>注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。</p>
                     * 
                     */
                    ComposeMediaConfig GetComposeConfig() const;

                    /**
                     * 设置<p>【合成】任务配置。</p><p>注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。</p>
                     * @param _composeConfig <p>【合成】任务配置。</p><p>注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。</p>
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
                     * 获取<p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * @return TaskNotifyConfig <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     * @param _taskNotifyConfig <p>任务的事件通知信息，不填代表不获取事件通知。</p>
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
                     * 获取<p>任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * @return TasksPriority <p>任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * @param _tasksPriority <p>任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
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
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
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
                     * 获取<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。</p>
                     * @return ResourceId <p>资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。</p>
                     * @param _resourceId <p>资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>输入的视频文件信息。</p>
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>媒体处理输出文件的目标存储。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>媒体处理输出文件的目标路径。</p><p>注意：对于复杂合成任务，路径中的文件名只可为数字、字母、-、_ 的组合，最长 64 个字符。</p>
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>【剪辑】任务生成的文件配置。</p>
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>【合成】任务配置。</p><p>注意：当其不为空时，认为是合成任务，否则按剪辑任务处理。</p>
                     */
                    ComposeMediaConfig m_composeConfig;
                    bool m_composeConfigHasBeenSet;

                    /**
                     * <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>任务优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
