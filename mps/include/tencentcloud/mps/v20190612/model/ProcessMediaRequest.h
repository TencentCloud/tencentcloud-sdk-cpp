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
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/Activity.h>


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
                     * 获取<p>媒体处理的文件输入信息。</p>
                     * @return InputInfo <p>媒体处理的文件输入信息。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>媒体处理的文件输入信息。</p>
                     * @param _inputInfo <p>媒体处理的文件输入信息。</p>
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
                     * 获取<p>媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。<br>注意：当InputInfo.Type为URL时，该参数是必填项</p>
                     * @return OutputStorage <p>媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。<br>注意：当InputInfo.Type为URL时，该参数是必填项</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。<br>注意：当InputInfo.Type为URL时，该参数是必填项</p>
                     * @param _outputStorage <p>媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。<br>注意：当InputInfo.Type为URL时，该参数是必填项</p>
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
                     * 获取<p>媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如<code>/movie/201907/</code>。<br>如果不填，表示与 InputInfo 中文件所在的目录一致。</p>
                     * @return OutputDir <p>媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如<code>/movie/201907/</code>。<br>如果不填，表示与 InputInfo 中文件所在的目录一致。</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如<code>/movie/201907/</code>。<br>如果不填，表示与 InputInfo 中文件所在的目录一致。</p>
                     * @param _outputDir <p>媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如<code>/movie/201907/</code>。<br>如果不填，表示与 InputInfo 中文件所在的目录一致。</p>
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
                     * 获取<p>编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li><li>即输出设置的优先级：编排子任务节点 &gt; 任务接口指定 &gt; 对应编排内的配置 </li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。<p>注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。</p>
                     * @return ScheduleId <p>编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li><li>即输出设置的优先级：编排子任务节点 &gt; 任务接口指定 &gt; 对应编排内的配置 </li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。<p>注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。</p>
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置<p>编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li><li>即输出设置的优先级：编排子任务节点 &gt; 任务接口指定 &gt; 对应编排内的配置 </li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。<p>注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。</p>
                     * @param _scheduleId <p>编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li><li>即输出设置的优先级：编排子任务节点 &gt; 任务接口指定 &gt; 对应编排内的配置 </li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。<p>注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。</p>
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
                     * 获取<p>媒体处理类型任务参数。</p>
                     * @return MediaProcessTask <p>媒体处理类型任务参数。</p>
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>媒体处理类型任务参数。</p>
                     * @param _mediaProcessTask <p>媒体处理类型任务参数。</p>
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
                     * 获取<p>视频内容审核类型任务参数。</p>
                     * @return AiContentReviewTask <p>视频内容审核类型任务参数。</p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>视频内容审核类型任务参数。</p>
                     * @param _aiContentReviewTask <p>视频内容审核类型任务参数。</p>
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
                     * 获取<p>视频内容分析类型任务参数。</p>
                     * @return AiAnalysisTask <p>视频内容分析类型任务参数。</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>视频内容分析类型任务参数。</p>
                     * @param _aiAnalysisTask <p>视频内容分析类型任务参数。</p>
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
                     * 获取<p>视频内容识别类型任务参数。</p>
                     * @return AiRecognitionTask <p>视频内容识别类型任务参数。</p>
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>视频内容识别类型任务参数。</p>
                     * @param _aiRecognitionTask <p>视频内容识别类型任务参数。</p>
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
                     * 获取<p>媒体质检类型任务参数。</p>
                     * @return AiQualityControlTask <p>媒体质检类型任务参数。</p>
                     * 
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置<p>媒体质检类型任务参数。</p>
                     * @param _aiQualityControlTask <p>媒体质检类型任务参数。</p>
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
                     * 获取<p>智能字幕</p>
                     * @return SmartSubtitlesTask <p>智能字幕</p>
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>智能字幕</p>
                     * @param _smartSubtitlesTask <p>智能字幕</p>
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
                     * 获取<p>智能擦除类型任务参数</p>
                     * @return SmartEraseTask <p>智能擦除类型任务参数</p>
                     * 
                     */
                    SmartEraseTaskInput GetSmartEraseTask() const;

                    /**
                     * 设置<p>智能擦除类型任务参数</p>
                     * @param _smartEraseTask <p>智能擦除类型任务参数</p>
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskInput& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

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
                     * 获取<p>任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * @return TasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     * @param _tasksPriority <p>任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
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
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。</p>
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
                     * 获取<p>任务类型，默认Online</p><li> Online：实时任务</li><li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * @return TaskType <p>任务类型，默认Online</p><li> Online：实时任务</li><li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型，默认Online</p><li> Online：实时任务</li><li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     * @param _taskType <p>任务类型，默认Online</p><li> Online：实时任务</li><li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
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
                     * 获取<p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * @return ResourceId <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     * @param _resourceId <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
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
                     * 获取<p>媒体编排任务组<br>注意：填写此参数ScheduleId字段将失效，Activities优先级大于ScheduleId</p>
                     * @return Activities <p>媒体编排任务组<br>注意：填写此参数ScheduleId字段将失效，Activities优先级大于ScheduleId</p>
                     * 
                     */
                    std::vector<Activity> GetActivities() const;

                    /**
                     * 设置<p>媒体编排任务组<br>注意：填写此参数ScheduleId字段将失效，Activities优先级大于ScheduleId</p>
                     * @param _activities <p>媒体编排任务组<br>注意：填写此参数ScheduleId字段将失效，Activities优先级大于ScheduleId</p>
                     * 
                     */
                    void SetActivities(const std::vector<Activity>& _activities);

                    /**
                     * 判断参数 Activities 是否已赋值
                     * @return Activities 是否已赋值
                     * 
                     */
                    bool ActivitiesHasBeenSet() const;

                    /**
                     * 获取<p>是否跳过元信息获取，可选值：<br>0：表示不跳过<br>1：表示跳过<br>默认值：0</p>
                     * @return SkipMateData <p>是否跳过元信息获取，可选值：<br>0：表示不跳过<br>1：表示跳过<br>默认值：0</p>
                     * 
                     */
                    int64_t GetSkipMateData() const;

                    /**
                     * 设置<p>是否跳过元信息获取，可选值：<br>0：表示不跳过<br>1：表示跳过<br>默认值：0</p>
                     * @param _skipMateData <p>是否跳过元信息获取，可选值：<br>0：表示不跳过<br>1：表示跳过<br>默认值：0</p>
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
                     * <p>媒体处理的文件输入信息。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。<br>注意：当InputInfo.Type为URL时，该参数是必填项</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>媒体处理生成的文件输出的目标目录，必选以 / 开头和结尾，如<code>/movie/201907/</code>。<br>如果不填，表示与 InputInfo 中文件所在的目录一致。</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若创建任务接口（ProcessMedia）有指定输出，将覆盖原有编排的默认输出。</li><li>即输出设置的优先级：编排子任务节点 &gt; 任务接口指定 &gt; 对应编排内的配置 </li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessMedia）有设置，将覆盖原有编排的默认回调。<p>注意3：编排的 Trigger 只是用来自动化触发场景，在手动发起的请求中已经配置的 Trigger 无意义。</p>
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>媒体处理类型任务参数。</p>
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>视频内容审核类型任务参数。</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>视频内容分析类型任务参数。</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>视频内容识别类型任务参数。</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>媒体质检类型任务参数。</p>
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * <p>智能字幕</p>
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>智能擦除类型任务参数</p>
                     */
                    SmartEraseTaskInput m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                    /**
                     * <p>任务的事件通知信息，不填代表不获取事件通知。</p>
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>任务流的优先级，数值越大优先级越高，取值范围是-10到 10，不填代表0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不传该参数或者参数为空字符串则本次请求不做去重操作。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>任务类型，默认Online</p><li> Online：实时任务</li><li> Offline：闲时任务，不保证实效性，默认3天内处理完</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>资源ID，需要保证对应资源是开启状态。默认为账号主资源ID。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>媒体编排任务组<br>注意：填写此参数ScheduleId字段将失效，Activities优先级大于ScheduleId</p>
                     */
                    std::vector<Activity> m_activities;
                    bool m_activitiesHasBeenSet;

                    /**
                     * <p>是否跳过元信息获取，可选值：<br>0：表示不跳过<br>1：表示跳过<br>默认值：0</p>
                     */
                    int64_t m_skipMateData;
                    bool m_skipMateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
