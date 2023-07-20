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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件实例
                */
                class EventCaseAuditLogOptDto : public AbstractModel
                {
                public:
                    EventCaseAuditLogOptDto();
                    ~EventCaseAuditLogOptDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CaseId 事件实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置事件实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _caseId 事件实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType 事件类型
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
                     * 获取事件分割类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 事件分割类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件分割类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventSubType 事件分割类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBroadcastType 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBroadcastType 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取事件实例存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TTL 事件实例存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置事件实例存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tTL 事件实例存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取事件实例存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeUnit 事件实例存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置事件实例存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeUnit 事件实例存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimension 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimension 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取事件实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 事件实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置事件实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 事件实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件实例触发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventTriggerTimestamp 事件实例触发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventTriggerTimestamp() const;

                    /**
                     * 设置事件实例触发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventTriggerTimestamp 事件实例触发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventTriggerTimestamp(const std::string& _eventTriggerTimestamp);

                    /**
                     * 判断参数 EventTriggerTimestamp 是否已赋值
                     * @return EventTriggerTimestamp 是否已赋值
                     * 
                     */
                    bool EventTriggerTimestampHasBeenSet() const;

                    /**
                     * 获取事件实例消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTimestamp 事件实例消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTimestamp() const;

                    /**
                     * 设置事件实例消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTimestamp 事件实例消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTimestamp(const std::string& _logTimestamp);

                    /**
                     * 判断参数 LogTimestamp 是否已赋值
                     * @return LogTimestamp 是否已赋值
                     * 
                     */
                    bool LogTimestampHasBeenSet() const;

                    /**
                     * 获取事件实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 事件实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 事件实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 事件实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件分割类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 事件实例存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 事件实例存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 事件实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件实例触发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventTriggerTimestamp;
                    bool m_eventTriggerTimestampHasBeenSet;

                    /**
                     * 事件实例消费时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTimestamp;
                    bool m_logTimestampHasBeenSet;

                    /**
                     * 事件实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASEAUDITLOGOPTDTO_H_
