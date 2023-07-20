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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDTO_H_

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
                * 智能运维事件详情
                */
                class EventDto : public AbstractModel
                {
                public:
                    EventDto();
                    ~EventDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取基线、任务实例id
                     * @return InstanceId 基线、任务实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置基线、任务实例id
                     * @param _instanceId 基线、任务实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取产生事件时间
                     * @return EventTime 产生事件时间
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置产生事件时间
                     * @param _eventTime 产生事件时间
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return EventName 事件名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
                     * @param _eventName 事件名称
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
                     * 获取事件状态.取值范围:

- new:表示新建
 
- processing:表示处理中
                     * @return EventStatus 事件状态.取值范围:

- new:表示新建
 
- processing:表示处理中
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置事件状态.取值范围:

- new:表示新建
 
- processing:表示处理中
                     * @param _eventStatus 事件状态.取值范围:

- new:表示新建
 
- processing:表示处理中
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取事件类别/(基线or任务).取值范围:

- baseline: 表示基线

- task: 表示任务
                     * @return EventType 事件类别/(基线or任务).取值范围:

- baseline: 表示基线

- task: 表示任务
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类别/(基线or任务).取值范围:

- baseline: 表示基线

- task: 表示任务
                     * @param _eventType 事件类别/(基线or任务).取值范围:

- baseline: 表示基线

- task: 表示任务
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
                     * 获取是否告警
                     * @return IsAlarm 是否告警
                     * 
                     */
                    std::string GetIsAlarm() const;

                    /**
                     * 设置是否告警
                     * @param _isAlarm 是否告警
                     * 
                     */
                    void SetIsAlarm(const std::string& _isAlarm);

                    /**
                     * 判断参数 IsAlarm 是否已赋值
                     * @return IsAlarm 是否已赋值
                     * 
                     */
                    bool IsAlarmHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取所属任务/基线的名称
                     * @return BelongTo 所属任务/基线的名称
                     * 
                     */
                    std::string GetBelongTo() const;

                    /**
                     * 设置所属任务/基线的名称
                     * @param _belongTo 所属任务/基线的名称
                     * 
                     */
                    void SetBelongTo(const std::string& _belongTo);

                    /**
                     * 判断参数 BelongTo 是否已赋值
                     * @return BelongTo 是否已赋值
                     * 
                     */
                    bool BelongToHasBeenSet() const;

                    /**
                     * 获取基线、任务id
                     * @return BaselineId 基线、任务id
                     * 
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置基线、任务id
                     * @param _baselineId 基线、任务id
                     * 
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基线、任务实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 产生事件时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件状态.取值范围:

- new:表示新建
 
- processing:表示处理中
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 事件类别/(基线or任务).取值范围:

- baseline: 表示基线

- task: 表示任务
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 是否告警
                     */
                    std::string m_isAlarm;
                    bool m_isAlarmHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 所属任务/基线的名称
                     */
                    std::string m_belongTo;
                    bool m_belongToHasBeenSet;

                    /**
                     * 基线、任务id
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTDTO_H_
