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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsDimensions.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsGroupInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductEventList返回的Events
                */
                class DescribeProductEventListEvents : public AbstractModel
                {
                public:
                    DescribeProductEventListEvents();
                    ~DescribeProductEventListEvents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCName 事件中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventCName() const;

                    /**
                     * 设置事件中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCName 事件中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCName(const std::string& _eventCName);

                    /**
                     * 判断参数 EventCName 是否已赋值
                     * @return EventCName 是否已赋值
                     * 
                     */
                    bool EventCNameHasBeenSet() const;

                    /**
                     * 获取事件英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventEName 事件英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventEName() const;

                    /**
                     * 设置事件英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventEName 事件英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventEName(const std::string& _eventEName);

                    /**
                     * 判断参数 EventEName 是否已赋值
                     * @return EventEName 是否已赋值
                     * 
                     */
                    bool EventENameHasBeenSet() const;

                    /**
                     * 获取事件简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件简称
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
                     * 获取产品中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCName 产品中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCName() const;

                    /**
                     * 设置产品中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCName 产品中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCName(const std::string& _productCName);

                    /**
                     * 判断参数 ProductCName 是否已赋值
                     * @return ProductCName 是否已赋值
                     * 
                     */
                    bool ProductCNameHasBeenSet() const;

                    /**
                     * 获取产品英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductEName 产品英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductEName() const;

                    /**
                     * 设置产品英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productEName 产品英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductEName(const std::string& _productEName);

                    /**
                     * 判断参数 ProductEName 是否已赋值
                     * @return ProductEName 是否已赋值
                     * 
                     */
                    bool ProductENameHasBeenSet() const;

                    /**
                     * 获取产品简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
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
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
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
                     * 获取是否支持告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportAlarm 是否支持告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSupportAlarm() const;

                    /**
                     * 设置是否支持告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportAlarm 是否支持告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportAlarm(const int64_t& _supportAlarm);

                    /**
                     * 判断参数 SupportAlarm 是否已赋值
                     * @return SupportAlarm 是否已赋值
                     * 
                     */
                    bool SupportAlarmHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions 实例对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeProductEventListEventsDimensions> GetDimensions() const;

                    /**
                     * 设置实例对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions 实例对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensions(const std::vector<DescribeProductEventListEventsDimensions>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取实例对象附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionMsg 实例对象附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeProductEventListEventsDimensions> GetAdditionMsg() const;

                    /**
                     * 设置实例对象附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionMsg 实例对象附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdditionMsg(const std::vector<DescribeProductEventListEventsDimensions>& _additionMsg);

                    /**
                     * 判断参数 AdditionMsg 是否已赋值
                     * @return AdditionMsg 是否已赋值
                     * 
                     */
                    bool AdditionMsgHasBeenSet() const;

                    /**
                     * 获取是否配置告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAlarmConfig 是否配置告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAlarmConfig() const;

                    /**
                     * 设置是否配置告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAlarmConfig 是否配置告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAlarmConfig(const int64_t& _isAlarmConfig);

                    /**
                     * 判断参数 IsAlarmConfig 是否已赋值
                     * @return IsAlarmConfig 是否已赋值
                     * 
                     */
                    bool IsAlarmConfigHasBeenSet() const;

                    /**
                     * 获取策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupInfo 策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeProductEventListEventsGroupInfo> GetGroupInfo() const;

                    /**
                     * 设置策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupInfo 策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupInfo(const std::vector<DescribeProductEventListEventsGroupInfo>& _groupInfo);

                    /**
                     * 判断参数 GroupInfo 是否已赋值
                     * @return GroupInfo 是否已赋值
                     * 
                     */
                    bool GroupInfoHasBeenSet() const;

                    /**
                     * 获取显示名称ViewName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewName 显示名称ViewName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置显示名称ViewName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewName 显示名称ViewName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                private:

                    /**
                     * 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventCName;
                    bool m_eventCNameHasBeenSet;

                    /**
                     * 事件英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventEName;
                    bool m_eventENameHasBeenSet;

                    /**
                     * 事件简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 产品中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCName;
                    bool m_productCNameHasBeenSet;

                    /**
                     * 产品英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productEName;
                    bool m_productENameHasBeenSet;

                    /**
                     * 产品简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否支持告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_supportAlarm;
                    bool m_supportAlarmHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeProductEventListEventsDimensions> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 实例对象附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeProductEventListEventsDimensions> m_additionMsg;
                    bool m_additionMsgHasBeenSet;

                    /**
                     * 是否配置告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAlarmConfig;
                    bool m_isAlarmConfigHasBeenSet;

                    /**
                     * 策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeProductEventListEventsGroupInfo> m_groupInfo;
                    bool m_groupInfoHasBeenSet;

                    /**
                     * 显示名称ViewName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_
