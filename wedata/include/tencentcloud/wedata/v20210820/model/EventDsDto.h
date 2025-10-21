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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件管理- 事件实体
                */
                class EventDsDto : public AbstractModel
                {
                public:
                    EventDsDto();
                    ~EventDsDto() = default;
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
                     * 获取事件类型GENERAL、TIME_SERIES
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型GENERAL、TIME_SERIES
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型GENERAL、TIME_SERIES
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType 事件类型GENERAL、TIME_SERIES
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
                     * 获取存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeToLive 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeToLive() const;

                    /**
                     * 设置存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeToLive 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeToLive(const int64_t& _timeToLive);

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
                     * 获取事件分割类型 SECOND、MIN、HOUR、DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 事件分割类型 SECOND、MIN、HOUR、DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件分割类型 SECOND、MIN、HOUR、DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventSubType 事件分割类型 SECOND、MIN、HOUR、DAY
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
                     * 获取事件广播类型SINGLE、BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBroadcastType 事件广播类型SINGLE、BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型SINGLE、BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBroadcastType 事件广播类型SINGLE、BROADCAST
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
                     * 获取时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimensionFormat 时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensionFormat 时间格式
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTs 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTs 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取事件所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 事件所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置事件所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 事件所属人
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
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
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
                     * 获取事件监听者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Listeners 事件监听者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventListenerDTO> GetListeners() const;

                    /**
                     * 设置事件监听者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listeners 事件监听者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListeners(const std::vector<EventListenerDTO>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取事件消费有效次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidConsumeCount 事件消费有效次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValidConsumeCount() const;

                    /**
                     * 设置事件消费有效次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validConsumeCount 事件消费有效次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidConsumeCount(const int64_t& _validConsumeCount);

                    /**
                     * 判断参数 ValidConsumeCount 是否已赋值
                     * @return ValidConsumeCount 是否已赋值
                     * 
                     */
                    bool ValidConsumeCountHasBeenSet() const;

                    /**
                     * 获取事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取bundleId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId bundleId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置bundleId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId bundleId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取bundle信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo bundle信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置bundle信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo bundle信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件类型GENERAL、TIME_SERIES
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 存活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * 存活时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 事件分割类型 SECOND、MIN、HOUR、DAY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 事件广播类型SINGLE、BROADCAST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * 事件所属人
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
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件监听者信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventListenerDTO> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 事件消费有效次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_validConsumeCount;
                    bool m_validConsumeCountHasBeenSet;

                    /**
                     * 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * bundleId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * bundle信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDSDTO_H_
