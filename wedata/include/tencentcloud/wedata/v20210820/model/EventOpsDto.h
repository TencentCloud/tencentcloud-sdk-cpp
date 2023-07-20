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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件详情
                */
                class EventOpsDto : public AbstractModel
                {
                public:
                    EventOpsDto();
                    ~EventOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取数据时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimensionFormat 数据时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置数据时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensionFormat 数据时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensionFormat(const std::string& _dimensionFormat);

                    /**
                     * 判断参数 DimensionFormat 是否已赋值
                     * @return DimensionFormat 是否已赋值
                     * 
                     */
                    bool DimensionFormatHasBeenSet() const;

                    /**
                     * 获取存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeToLive 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeToLive() const;

                    /**
                     * 设置存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeToLive 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeToLive(const uint64_t& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeUnit 存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeUnit 存活时间单位
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
                     * 获取创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTimestamp 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTimestamp 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                    /**
                     * 获取所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 所属者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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

                    /**
                     * 获取监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Listeners 监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventListenerOpsDto> GetListeners() const;

                    /**
                     * 设置监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listeners 监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListeners(const std::vector<EventListenerOpsDto>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取事件案例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCases 事件案例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventCaseOpsDto> GetEventCases() const;

                    /**
                     * 设置事件案例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCases 事件案例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCases(const std::vector<EventCaseOpsDto>& _eventCases);

                    /**
                     * 判断参数 EventCases 是否已赋值
                     * @return EventCases 是否已赋值
                     * 
                     */
                    bool EventCasesHasBeenSet() const;

                private:

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * 数据时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * 存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * 所属者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 监听器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventListenerOpsDto> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * 事件案例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventCaseOpsDto> m_eventCases;
                    bool m_eventCasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTOPSDTO_H_
