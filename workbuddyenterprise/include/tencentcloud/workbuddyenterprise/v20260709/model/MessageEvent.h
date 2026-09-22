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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENT_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/MessageEventMessage.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/MessageEventToolCall.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 消息事件
                */
                class MessageEvent : public AbstractModel
                {
                public:
                    MessageEvent();
                    ~MessageEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sequence <p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置<p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sequence <p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取<p>类型 USER/TOOL/ASSISTANT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType <p>类型 USER/TOOL/ASSISTANT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>类型 USER/TOOL/ASSISTANT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType <p>类型 USER/TOOL/ASSISTANT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>发生时间 ISO8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OccurredAt <p>发生时间 ISO8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOccurredAt() const;

                    /**
                     * 设置<p>发生时间 ISO8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _occurredAt <p>发生时间 ISO8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOccurredAt(const std::string& _occurredAt);

                    /**
                     * 判断参数 OccurredAt 是否已赋值
                     * @return OccurredAt 是否已赋值
                     * 
                     */
                    bool OccurredAtHasBeenSet() const;

                    /**
                     * 获取<p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MessageEventMessage GetMessage() const;

                    /**
                     * 设置<p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const MessageEventMessage& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>工具调用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolCall <p>工具调用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MessageEventToolCall GetToolCall() const;

                    /**
                     * 设置<p>工具调用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolCall <p>工具调用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolCall(const MessageEventToolCall& _toolCall);

                    /**
                     * 判断参数 ToolCall 是否已赋值
                     * @return ToolCall 是否已赋值
                     * 
                     */
                    bool ToolCallHasBeenSet() const;

                private:

                    /**
                     * <p>序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * <p>类型 USER/TOOL/ASSISTANT</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>发生时间 ISO8601</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_occurredAt;
                    bool m_occurredAtHasBeenSet;

                    /**
                     * <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MessageEventMessage m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>工具调用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MessageEventToolCall m_toolCall;
                    bool m_toolCallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENT_H_
