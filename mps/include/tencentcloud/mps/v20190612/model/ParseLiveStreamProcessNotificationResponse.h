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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamProcessErrorInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiRecognitionResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiAnalysisResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiQualityControlResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamRecordResultInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseLiveStreamProcessNotification返回参数结构体
                */
                class ParseLiveStreamProcessNotificationResponse : public AbstractModel
                {
                public:
                    ParseLiveStreamProcessNotificationResponse();
                    ~ParseLiveStreamProcessNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
<li>AiRecognitionResult：内容识别结果；</li>
<li>LiveRecordResult：直播录制结果；</li>
<li>AiQualityControlResult：媒体质检结果；</li>
<li>ProcessEof：直播流处理结束。</li>
                     * @return NotificationType 直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
<li>AiRecognitionResult：内容识别结果；</li>
<li>LiveRecordResult：直播录制结果；</li>
<li>AiQualityControlResult：媒体质检结果；</li>
<li>ProcessEof：直播流处理结束。</li>
                     * 
                     */
                    std::string GetNotificationType() const;

                    /**
                     * 判断参数 NotificationType 是否已赋值
                     * @return NotificationType 是否已赋值
                     * 
                     */
                    bool NotificationTypeHasBeenSet() const;

                    /**
                     * 获取视频处理任务 ID。
                     * @return TaskId 视频处理任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取直播流处理错误信息，当 NotificationType 为 ProcessEof 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessEofInfo 直播流处理错误信息，当 NotificationType 为 ProcessEof 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamProcessErrorInfo GetProcessEofInfo() const;

                    /**
                     * 判断参数 ProcessEofInfo 是否已赋值
                     * @return ProcessEofInfo 是否已赋值
                     * 
                     */
                    bool ProcessEofInfoHasBeenSet() const;

                    /**
                     * 获取内容审核结果，当 NotificationType 为 AiReviewResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiReviewResultInfo 内容审核结果，当 NotificationType 为 AiReviewResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamAiReviewResultInfo GetAiReviewResultInfo() const;

                    /**
                     * 判断参数 AiReviewResultInfo 是否已赋值
                     * @return AiReviewResultInfo 是否已赋值
                     * 
                     */
                    bool AiReviewResultInfoHasBeenSet() const;

                    /**
                     * 获取内容识别结果，当 NotificationType 为 AiRecognitionResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiRecognitionResultInfo 内容识别结果，当 NotificationType 为 AiRecognitionResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamAiRecognitionResultInfo GetAiRecognitionResultInfo() const;

                    /**
                     * 判断参数 AiRecognitionResultInfo 是否已赋值
                     * @return AiRecognitionResultInfo 是否已赋值
                     * 
                     */
                    bool AiRecognitionResultInfoHasBeenSet() const;

                    /**
                     * 获取内容分析结果，当 NotificationType 为 AiAnalysisResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiAnalysisResultInfo 内容分析结果，当 NotificationType 为 AiAnalysisResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamAiAnalysisResultInfo GetAiAnalysisResultInfo() const;

                    /**
                     * 判断参数 AiAnalysisResultInfo 是否已赋值
                     * @return AiAnalysisResultInfo 是否已赋值
                     * 
                     */
                    bool AiAnalysisResultInfoHasBeenSet() const;

                    /**
                     * 获取媒体质检结果，当 NotificationType 为 AiQualityControlResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiQualityControlResultInfo 媒体质检结果，当 NotificationType 为 AiQualityControlResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamAiQualityControlResultInfo GetAiQualityControlResultInfo() const;

                    /**
                     * 判断参数 AiQualityControlResultInfo 是否已赋值
                     * @return AiQualityControlResultInfo 是否已赋值
                     * 
                     */
                    bool AiQualityControlResultInfoHasBeenSet() const;

                    /**
                     * 获取直播录制结果，当 NotificationType 为 LiveRecordResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveRecordResultInfo 直播录制结果，当 NotificationType 为 LiveRecordResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveStreamRecordResultInfo GetLiveRecordResultInfo() const;

                    /**
                     * 判断参数 LiveRecordResultInfo 是否已赋值
                     * @return LiveRecordResultInfo 是否已赋值
                     * 
                     */
                    bool LiveRecordResultInfoHasBeenSet() const;

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
                     * 获取- 过期时间，事件通知签名过期 UNIX 时间戳。 - 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。 - Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp - 过期时间，事件通知签名过期 UNIX 时间戳。 - 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。 - Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取事件通知安全签名 Sign = MD5（Timestamp + NotifyKey）。说明：媒体处理把Timestamp 和 TaskNotifyConfig 里面的NotifyKey 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自媒体处理后台。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sign 事件通知安全签名 Sign = MD5（Timestamp + NotifyKey）。说明：媒体处理把Timestamp 和 TaskNotifyConfig 里面的NotifyKey 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自媒体处理后台。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                private:

                    /**
                     * 直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
<li>AiRecognitionResult：内容识别结果；</li>
<li>LiveRecordResult：直播录制结果；</li>
<li>AiQualityControlResult：媒体质检结果；</li>
<li>ProcessEof：直播流处理结束。</li>
                     */
                    std::string m_notificationType;
                    bool m_notificationTypeHasBeenSet;

                    /**
                     * 视频处理任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 直播流处理错误信息，当 NotificationType 为 ProcessEof 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamProcessErrorInfo m_processEofInfo;
                    bool m_processEofInfoHasBeenSet;

                    /**
                     * 内容审核结果，当 NotificationType 为 AiReviewResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamAiReviewResultInfo m_aiReviewResultInfo;
                    bool m_aiReviewResultInfoHasBeenSet;

                    /**
                     * 内容识别结果，当 NotificationType 为 AiRecognitionResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamAiRecognitionResultInfo m_aiRecognitionResultInfo;
                    bool m_aiRecognitionResultInfoHasBeenSet;

                    /**
                     * 内容分析结果，当 NotificationType 为 AiAnalysisResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamAiAnalysisResultInfo m_aiAnalysisResultInfo;
                    bool m_aiAnalysisResultInfoHasBeenSet;

                    /**
                     * 媒体质检结果，当 NotificationType 为 AiQualityControlResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamAiQualityControlResultInfo m_aiQualityControlResultInfo;
                    bool m_aiQualityControlResultInfoHasBeenSet;

                    /**
                     * 直播录制结果，当 NotificationType 为 LiveRecordResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamRecordResultInfo m_liveRecordResultInfo;
                    bool m_liveRecordResultInfoHasBeenSet;

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
                     * - 过期时间，事件通知签名过期 UNIX 时间戳。 - 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。 - Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件通知安全签名 Sign = MD5（Timestamp + NotifyKey）。说明：媒体处理把Timestamp 和 TaskNotifyConfig 里面的NotifyKey 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自媒体处理后台。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
