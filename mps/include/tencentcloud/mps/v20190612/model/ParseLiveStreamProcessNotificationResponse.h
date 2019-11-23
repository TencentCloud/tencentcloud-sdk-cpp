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


                    /**
                     * 获取直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
<li>ProcessEof：直播流处理结束。</li>
                     * @return NotificationType 直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
<li>ProcessEof：直播流处理结束。</li>
                     */
                    std::string GetNotificationType() const;

                    /**
                     * 判断参数 NotificationType 是否已赋值
                     * @return NotificationType 是否已赋值
                     */
                    bool NotificationTypeHasBeenSet() const;

                    /**
                     * 获取视频处理任务 ID。
                     * @return TaskId 视频处理任务 ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取直播流处理错误信息，当 NotificationType 为 ProcessEof 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessEofInfo 直播流处理错误信息，当 NotificationType 为 ProcessEof 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamProcessErrorInfo GetProcessEofInfo() const;

                    /**
                     * 判断参数 ProcessEofInfo 是否已赋值
                     * @return ProcessEofInfo 是否已赋值
                     */
                    bool ProcessEofInfoHasBeenSet() const;

                    /**
                     * 获取内容审核结果，当 NotificationType 为 AiReviewResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiReviewResultInfo 内容审核结果，当 NotificationType 为 AiReviewResult 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveStreamAiReviewResultInfo GetAiReviewResultInfo() const;

                    /**
                     * 判断参数 AiReviewResultInfo 是否已赋值
                     * @return AiReviewResultInfo 是否已赋值
                     */
                    bool AiReviewResultInfoHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 直播流处理结果类型，包含：
<li>AiReviewResult：内容审核结果；</li>
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
                     * 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长50个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长1000个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
