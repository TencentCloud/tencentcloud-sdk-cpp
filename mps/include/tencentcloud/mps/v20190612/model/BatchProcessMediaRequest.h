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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>
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
                * BatchProcessMedia请求参数结构体
                */
                class BatchProcessMediaRequest : public AbstractModel
                {
                public:
                    BatchProcessMediaRequest();
                    ~BatchProcessMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体处理的文件输入信息。
                     * @return InputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    std::vector<MediaInputInfo> GetInputInfo() const;

                    /**
                     * 设置媒体处理的文件输入信息。
                     * @param _inputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    void SetInputInfo(const std::vector<MediaInputInfo>& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
注意：当InputInfo.Type为URL时，该参数是必填项
                     * @return OutputStorage 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
注意：当InputInfo.Type为URL时，该参数是必填项
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
注意：当InputInfo.Type为URL时，该参数是必填项
                     * @param _outputStorage 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
注意：当InputInfo.Type为URL时，该参数是必填项
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
如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * @return OutputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与 InputInfo 中文件所在的目录一致。
                     * @param _outputDir 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与 InputInfo 中文件所在的目录一致。
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
                     * 获取智能字幕
                     * @return SmartSubtitlesTask 智能字幕
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置智能字幕
                     * @param _smartSubtitlesTask 智能字幕
                     * 
                     */
                    void SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

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
                     * 获取任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * @return TasksPriority 任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     * @param _tasksPriority 任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
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

                    /**
                     * 获取资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     * @return ResourceId 资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     * @param _resourceId 资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取是否跳过元信息获取，可选值： 
0：表示不跳过 
1：表示跳过 
默认值：0	
                     * @return SkipMateData 是否跳过元信息获取，可选值： 
0：表示不跳过 
1：表示跳过 
默认值：0	
                     * 
                     */
                    int64_t GetSkipMateData() const;

                    /**
                     * 设置是否跳过元信息获取，可选值： 
0：表示不跳过 
1：表示跳过 
默认值：0	
                     * @param _skipMateData 是否跳过元信息获取，可选值： 
0：表示不跳过 
1：表示跳过 
默认值：0	
                     * 
                     */
                    void SetSkipMateData(const int64_t& _skipMateData);

                    /**
                     * 判断参数 SkipMateData 是否已赋值
                     * @return SkipMateData 是否已赋值
                     * 
                     */
                    bool SkipMateDataHasBeenSet() const;

                private:

                    /**
                     * 媒体处理的文件输入信息。
                     */
                    std::vector<MediaInputInfo> m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。
注意：当InputInfo.Type为URL时，该参数是必填项
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如`/movie/201907/`。
如果不填，表示与 InputInfo 中文件所在的目录一致。
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 智能字幕
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * 任务的事件通知信息，不填代表不获取事件通知。
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 是否跳过元信息获取，可选值： 
0：表示不跳过 
1：表示跳过 
默认值：0	
                     */
                    int64_t m_skipMateData;
                    bool m_skipMateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_
