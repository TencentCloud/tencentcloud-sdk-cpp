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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTask.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTask.h>
#include <tencentcloud/mps/v20190612/model/ScheduleTask.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseNotification返回参数结构体
                */
                class ParseNotificationResponse : public AbstractModel
                {
                public:
                    ParseNotificationResponse();
                    ~ParseNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持事件类型，目前取值有：
<li>WorkflowTask：视频工作流处理任务。</li>
<li>EditMediaTask：视频编辑任务。</li>
<li>ScheduleTask：编排任务。</li>
                     * @return EventType 支持事件类型，目前取值有：
<li>WorkflowTask：视频工作流处理任务。</li>
<li>EditMediaTask：视频编辑任务。</li>
<li>ScheduleTask：编排任务。</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取视频处理任务信息，仅当 EventType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowTaskEvent 视频处理任务信息，仅当 EventType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTask GetWorkflowTaskEvent() const;

                    /**
                     * 判断参数 WorkflowTaskEvent 是否已赋值
                     * @return WorkflowTaskEvent 是否已赋值
                     * 
                     */
                    bool WorkflowTaskEventHasBeenSet() const;

                    /**
                     * 获取视频编辑任务信息，仅当 EventType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaTaskEvent 视频编辑任务信息，仅当 EventType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EditMediaTask GetEditMediaTaskEvent() const;

                    /**
                     * 判断参数 EditMediaTaskEvent 是否已赋值
                     * @return EditMediaTaskEvent 是否已赋值
                     * 
                     */
                    bool EditMediaTaskEventHasBeenSet() const;

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
                     * 获取编排任务信息，仅当 EventType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTaskEvent 编排任务信息，仅当 EventType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleTask GetScheduleTaskEvent() const;

                    /**
                     * 判断参数 ScheduleTaskEvent 是否已赋值
                     * @return ScheduleTaskEvent 是否已赋值
                     * 
                     */
                    bool ScheduleTaskEventHasBeenSet() const;

                    /**
                     * 获取- 过期时间，事件通知签名过期 UNIX 时间戳。
- 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。
- Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。

                     * @return Timestamp - 过期时间，事件通知签名过期 UNIX 时间戳。
- 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。
- Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。

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
                     * @return Sign 事件通知安全签名 Sign = MD5（Timestamp + NotifyKey）。说明：媒体处理把Timestamp 和 TaskNotifyConfig 里面的NotifyKey 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自媒体处理后台。
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
                     * 支持事件类型，目前取值有：
<li>WorkflowTask：视频工作流处理任务。</li>
<li>EditMediaTask：视频编辑任务。</li>
<li>ScheduleTask：编排任务。</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 视频处理任务信息，仅当 EventType 为 WorkflowTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTask m_workflowTaskEvent;
                    bool m_workflowTaskEventHasBeenSet;

                    /**
                     * 视频编辑任务信息，仅当 EventType 为 EditMediaTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaTaskEvent;
                    bool m_editMediaTaskEventHasBeenSet;

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
                     * 编排任务信息，仅当 EventType 为 ScheduleTask，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleTask m_scheduleTaskEvent;
                    bool m_scheduleTaskEventHasBeenSet;

                    /**
                     * - 过期时间，事件通知签名过期 UNIX 时间戳。
- 来自媒体处理的消息通知默认过期时间是10分钟，如果一条消息通知中的 Timestamp 值所指定的时间已经过期，则可以判定这条通知无效，进而可以防止网络重放攻击。
- Timestamp 的格式为十进制 UNIX 时间戳，即从1970年01月01日（UTC/GMT 的午夜）开始所经过的秒数。

                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件通知安全签名 Sign = MD5（Timestamp + NotifyKey）。说明：媒体处理把Timestamp 和 TaskNotifyConfig 里面的NotifyKey 进行字符串拼接后通过 MD5 计算得出 Sign 值，并将其放在通知消息里，您的后台服务器在收到通知消息后可以根据同样的算法确认 Sign 是否正确，进而确认消息是否确实来自媒体处理后台。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
