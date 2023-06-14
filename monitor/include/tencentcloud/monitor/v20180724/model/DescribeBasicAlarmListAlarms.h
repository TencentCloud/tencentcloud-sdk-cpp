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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/InstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBasicAlarmList返回的Alarms
                */
                class DescribeBasicAlarmListAlarms : public AbstractModel
                {
                public:
                    DescribeBasicAlarmListAlarms();
                    ~DescribeBasicAlarmListAlarms() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该条告警的ID
                     * @return Id 该条告警的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置该条告警的ID
                     * @param _id 该条告警的ID
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
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

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
                     * 获取告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmStatus 告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmStatus() const;

                    /**
                     * 设置告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmStatus 告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmStatus(const std::string& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取策略组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 策略组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 策略组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取策略组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 策略组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置策略组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 策略组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOccurTime 发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstOccurTime() const;

                    /**
                     * 设置发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstOccurTime 发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstOccurTime(const std::string& _firstOccurTime);

                    /**
                     * 判断参数 FirstOccurTime 是否已赋值
                     * @return FirstOccurTime 是否已赋值
                     * 
                     */
                    bool FirstOccurTimeHasBeenSet() const;

                    /**
                     * 获取持续时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 持续时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置持续时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 持续时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOccurTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOccurTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOccurTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOccurTime(const std::string& _lastOccurTime);

                    /**
                     * 判断参数 LastOccurTime 是否已赋值
                     * @return LastOccurTime 是否已赋值
                     * 
                     */
                    bool LastOccurTimeHasBeenSet() const;

                    /**
                     * 获取告警内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 告警内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置告警内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 告警内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取告警对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjName 告警对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置告警对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objName 告警对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     * 
                     */
                    bool ObjNameHasBeenSet() const;

                    /**
                     * 获取告警对象ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjId 告警对象ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjId() const;

                    /**
                     * 设置告警对象ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objId 告警对象ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjId(const std::string& _objId);

                    /**
                     * 判断参数 ObjId 是否已赋值
                     * @return ObjId 是否已赋值
                     * 
                     */
                    bool ObjIdHasBeenSet() const;

                    /**
                     * 获取策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewName 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewName 策略类型
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

                    /**
                     * 获取VPC，只有CVM有
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vpc VPC，只有CVM有
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC，只有CVM有
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpc VPC，只有CVM有
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取指标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricId 指标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置指标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricId 指标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmType 告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmType 告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmType(const int64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

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
                     * 获取告警对象维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions 告警对象维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置告警对象维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions 告警对象维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay 通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay 通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     * 
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取所属实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroup 所属实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceGroup> GetInstanceGroup() const;

                    /**
                     * 设置所属实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroup 所属实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroup(const std::vector<InstanceGroup>& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     * 
                     */
                    bool InstanceGroupHasBeenSet() const;

                private:

                    /**
                     * 该条告警的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 策略组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 策略组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * 持续时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * 告警内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 告警对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * 告警对象ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objId;
                    bool m_objIdHasBeenSet;

                    /**
                     * 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * VPC，只有CVM有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 指标ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 告警对象维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * 所属实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceGroup> m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_
