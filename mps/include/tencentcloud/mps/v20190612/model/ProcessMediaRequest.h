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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessMedia请求参数结构体
                */
                class ProcessMediaRequest : public AbstractModel
                {
                public:
                    ProcessMediaRequest();
                    ~ProcessMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体处理的文件输入信息。
                     * @return InputInfo 媒体处理的文件输入信息。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置媒体处理的文件输入信息。
                     * @param _inputInfo 媒体处理的文件输入信息。
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
                     * 获取编排ID。
注意1：对于OutputStorage、OutputDir参数：
<li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li>
<li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li>
<li>即输出设置的优先级：编排子任务节点 > 任务接口指定 > 对应编排内的配置 </li>
注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。

注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。
                     * @return ScheduleId 编排ID。
注意1：对于OutputStorage、OutputDir参数：
<li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li>
<li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li>
<li>即输出设置的优先级：编排子任务节点 > 任务接口指定 > 对应编排内的配置 </li>
注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。

注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置编排ID。
注意1：对于OutputStorage、OutputDir参数：
<li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li>
<li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li>
<li>即输出设置的优先级：编排子任务节点 > 任务接口指定 > 对应编排内的配置 </li>
注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。

注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。
                     * @param _scheduleId 编排ID。
注意1：对于OutputStorage、OutputDir参数：
<li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li>
<li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li>
<li>即输出设置的优先级：编排子任务节点 > 任务接口指定 > 对应编排内的配置 </li>
注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。

注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

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
                     * 获取媒体质检类型任务参数。
                     * @return AiQualityControlTask 媒体质检类型任务参数。
                     * 
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置媒体质检类型任务参数。
                     * @param _aiQualityControlTask 媒体质检类型任务参数。
                     * 
                     */
                    void SetAiQualityControlTask(const AiQualityControlTaskInput& _aiQualityControlTask);

                    /**
                     * 判断参数 AiQualityControlTask 是否已赋值
                     * @return AiQualityControlTask 是否已赋值
                     * 
                     */
                    bool AiQualityControlTaskHasBeenSet() const;

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
                     * 获取用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。
                     * @return SessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。
                     * @param _sessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。
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

                    /**
                     * 获取任务类型，默认Online
<li> Online：实时任务</li>
<li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * @return TaskType 任务类型，默认Online
<li> Online：实时任务</li>
<li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，默认Online
<li> Online：实时任务</li>
<li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * @param _taskType 任务类型，默认Online
<li> Online：实时任务</li>
<li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                    MediaInputInfo m_inputInfo;
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
                     * 编排ID。
注意1：对于OutputStorage、OutputDir参数：
<li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li>
<li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li>
<li>即输出设置的优先级：编排子任务节点 > 任务接口指定 > 对应编排内的配置 </li>
注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。

注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

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
                     * 媒体质检类型任务参数。
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

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
                     * 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 任务类型，默认Online
<li> Online：实时任务</li>
<li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 资源ID，需要保证对应资源是开启状态。默认为帐号主资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 智能字幕
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
