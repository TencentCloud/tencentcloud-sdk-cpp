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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamTaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>
#include <tencentcloud/mps/v20190612/model/LiveSmartSubtitlesTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessLiveStream请求参数结构体
                */
                class ProcessLiveStreamRequest : public AbstractModel
                {
                public:
                    ProcessLiveStreamRequest();
                    ~ProcessLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>直播流 URL（必须是直播流地址，支持 rtmp，hls 和 flv, trtc,webrtc,srt等）。<br>trtc地址如下：<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> 为trtc的房间号id, 为数字<br><code>&lt;sdkappid&gt;</code> 为trtc的sdk app id<br><code>&lt;userid&gt;</code> 为服务进入房间的用户id,可以区分谁是机器人<br><code>&lt;usersig&gt;</code> 为trtc 用户的签名</p><p>webrtc 支持<a href="https://cloud.tencent.com/product/leb">LEB</a>的直播流，地址获取请<a href="https://cloud.tencent.com/document/product/267/32720">参考</a></p><p>srt支持地址请<a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">参考</a></p>
                     * @return Url <p>直播流 URL（必须是直播流地址，支持 rtmp，hls 和 flv, trtc,webrtc,srt等）。<br>trtc地址如下：<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> 为trtc的房间号id, 为数字<br><code>&lt;sdkappid&gt;</code> 为trtc的sdk app id<br><code>&lt;userid&gt;</code> 为服务进入房间的用户id,可以区分谁是机器人<br><code>&lt;usersig&gt;</code> 为trtc 用户的签名</p><p>webrtc 支持<a href="https://cloud.tencent.com/product/leb">LEB</a>的直播流，地址获取请<a href="https://cloud.tencent.com/document/product/267/32720">参考</a></p><p>srt支持地址请<a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">参考</a></p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>直播流 URL（必须是直播流地址，支持 rtmp，hls 和 flv, trtc,webrtc,srt等）。<br>trtc地址如下：<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> 为trtc的房间号id, 为数字<br><code>&lt;sdkappid&gt;</code> 为trtc的sdk app id<br><code>&lt;userid&gt;</code> 为服务进入房间的用户id,可以区分谁是机器人<br><code>&lt;usersig&gt;</code> 为trtc 用户的签名</p><p>webrtc 支持<a href="https://cloud.tencent.com/product/leb">LEB</a>的直播流，地址获取请<a href="https://cloud.tencent.com/document/product/267/32720">参考</a></p><p>srt支持地址请<a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">参考</a></p>
                     * @param _url <p>直播流 URL（必须是直播流地址，支持 rtmp，hls 和 flv, trtc,webrtc,srt等）。<br>trtc地址如下：<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> 为trtc的房间号id, 为数字<br><code>&lt;sdkappid&gt;</code> 为trtc的sdk app id<br><code>&lt;userid&gt;</code> 为服务进入房间的用户id,可以区分谁是机器人<br><code>&lt;usersig&gt;</code> 为trtc 用户的签名</p><p>webrtc 支持<a href="https://cloud.tencent.com/product/leb">LEB</a>的直播流，地址获取请<a href="https://cloud.tencent.com/document/product/267/32720">参考</a></p><p>srt支持地址请<a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">参考</a></p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>任务的事件通知信息，用于指定直播流处理的结果。</p>
                     * @return TaskNotifyConfig <p>任务的事件通知信息，用于指定直播流处理的结果。</p>
                     * 
                     */
                    LiveStreamTaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>任务的事件通知信息，用于指定直播流处理的结果。</p>
                     * @param _taskNotifyConfig <p>任务的事件通知信息，用于指定直播流处理的结果。</p>
                     * 
                     */
                    void SetTaskNotifyConfig(const LiveStreamTaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取<p>直播流处理输出文件的目标存储。如处理有文件输出，该参数为必填项。</p>
                     * @return OutputStorage <p>直播流处理输出文件的目标存储。如处理有文件输出，该参数为必填项。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>直播流处理输出文件的目标存储。如处理有文件输出，该参数为必填项。</p>
                     * @param _outputStorage <p>直播流处理输出文件的目标存储。如处理有文件输出，该参数为必填项。</p>
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
                     * 获取<p>直播流处理生成的文件输出的目标目录，如<code>/movie/201909/</code>，如果不填为 <code>/</code> 目录。</p>
                     * @return OutputDir <p>直播流处理生成的文件输出的目标目录，如<code>/movie/201909/</code>，如果不填为 <code>/</code> 目录。</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>直播流处理生成的文件输出的目标目录，如<code>/movie/201909/</code>，如果不填为 <code>/</code> 目录。</p>
                     * @param _outputDir <p>直播流处理生成的文件输出的目标目录，如<code>/movie/201909/</code>，如果不填为 <code>/</code> 目录。</p>
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
                     * 获取<p>智能字幕任务参数。</p>
                     * @return SmartSubtitlesTask <p>智能字幕任务参数。</p>
                     * 
                     */
                    LiveSmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>智能字幕任务参数。</p>
                     * @param _smartSubtitlesTask <p>智能字幕任务参数。</p>
                     * 
                     */
                    void SetSmartSubtitlesTask(const LiveSmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
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
                     * 获取<p>直播编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若对直播流发起处理（ProcessLiveStream）有输出，将覆盖原有编排的默认输出。</li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessLiveStream）有设置，将覆盖原有编排的默认回调。
                     * @return ScheduleId <p>直播编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若对直播流发起处理（ProcessLiveStream）有输出，将覆盖原有编排的默认输出。</li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessLiveStream）有设置，将覆盖原有编排的默认回调。
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置<p>直播编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若对直播流发起处理（ProcessLiveStream）有输出，将覆盖原有编排的默认输出。</li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessLiveStream）有设置，将覆盖原有编排的默认回调。
                     * @param _scheduleId <p>直播编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若对直播流发起处理（ProcessLiveStream）有输出，将覆盖原有编排的默认输出。</li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessLiveStream）有设置，将覆盖原有编排的默认回调。
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
                     * <p>直播流 URL（必须是直播流地址，支持 rtmp，hls 和 flv, trtc,webrtc,srt等）。<br>trtc地址如下：<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> 为trtc的房间号id, 为数字<br><code>&lt;sdkappid&gt;</code> 为trtc的sdk app id<br><code>&lt;userid&gt;</code> 为服务进入房间的用户id,可以区分谁是机器人<br><code>&lt;usersig&gt;</code> 为trtc 用户的签名</p><p>webrtc 支持<a href="https://cloud.tencent.com/product/leb">LEB</a>的直播流，地址获取请<a href="https://cloud.tencent.com/document/product/267/32720">参考</a></p><p>srt支持地址请<a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">参考</a></p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>任务的事件通知信息，用于指定直播流处理的结果。</p>
                     */
                    LiveStreamTaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>直播流处理输出文件的目标存储。如处理有文件输出，该参数为必填项。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>直播流处理生成的文件输出的目标目录，如<code>/movie/201909/</code>，如果不填为 <code>/</code> 目录。</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>视频内容审核类型任务参数。</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>视频内容识别类型任务参数。</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>视频内容分析类型任务参数。</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>媒体质检类型任务参数。</p>
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * <p>智能字幕任务参数。</p>
                     */
                    LiveSmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>直播编排ID。<br>注意1：对于OutputStorage、OutputDir参数：</p><li>当服务编排中子任务节点配置了OutputStorage、OutputDir时，该子任务节点中配置的输出作为子任务的输出。</li><li>当服务编排中子任务节点没有配置OutputStorage、OutputDir时，若对直播流发起处理（ProcessLiveStream）有输出，将覆盖原有编排的默认输出。</li>注意2：对于TaskNotifyConfig参数，若创建任务接口（ProcessLiveStream）有设置，将覆盖原有编排的默认回调。
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
