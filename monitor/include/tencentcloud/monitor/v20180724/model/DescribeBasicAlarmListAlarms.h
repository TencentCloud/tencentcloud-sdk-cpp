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
                     * 获取<p>该条告警的ID</p>
                     * @return Id <p>该条告警的ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>该条告警的ID</p>
                     * @param _id <p>该条告警的ID</p>
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
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName <p>项目名称</p>
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
                     * 获取<p>告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效</p>
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
                     * 获取<p>告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmStatus <p>告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmStatus() const;

                    /**
                     * 设置<p>告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmStatus <p>告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效</p>
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
                     * 获取<p>策略组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>策略组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>策略组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId <p>策略组ID</p>
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
                     * 获取<p>策略组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>策略组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>策略组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>策略组名</p>
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
                     * 获取<p>发生时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOccurTime <p>发生时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstOccurTime() const;

                    /**
                     * 设置<p>发生时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstOccurTime <p>发生时间</p>
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
                     * 获取<p>持续时间，单位s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>持续时间，单位s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>持续时间，单位s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>持续时间，单位s</p>
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
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOccurTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOccurTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOccurTime <p>结束时间</p>
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
                     * 获取<p>告警内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>告警内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>告警内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>告警内容</p>
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
                     * 获取<p>告警对象</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjName <p>告警对象</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置<p>告警对象</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objName <p>告警对象</p>
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
                     * 获取<p>告警对象ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjId <p>告警对象ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjId() const;

                    /**
                     * 设置<p>告警对象ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objId <p>告警对象ID</p>
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
                     * 获取<p>策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewName <p>策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewName <p>策略类型</p>
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
                     * 获取<p>VPC，只有CVM有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vpc <p>VPC，只有CVM有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置<p>VPC，只有CVM有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpc <p>VPC，只有CVM有</p>
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
                     * 获取<p>指标ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricId <p>指标ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置<p>指标ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricId <p>指标ID</p>
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
                     * 获取<p>指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName <p>指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName <p>指标名</p>
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
                     * 获取<p>告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmType <p>告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置<p>告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmType <p>告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警</p>
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
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
                     * 获取<p>告警对象维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions <p>告警对象维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>告警对象维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions <p>告警对象维度信息</p>
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
                     * 获取<p>通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay <p>通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置<p>通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay <p>通知方式</p>
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
                     * 获取<p>所属实例组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroup <p>所属实例组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceGroup> GetInstanceGroup() const;

                    /**
                     * 设置<p>所属实例组信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroup <p>所属实例组信息</p>
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
                     * <p>该条告警的ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>告警状态ID，0表示未恢复；1表示已恢复；2,3,5表示数据不足；4表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>告警状态，ALARM表示未恢复；OK表示已恢复；NO_DATA表示数据不足；NO_CONF表示已失效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * <p>策略组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>策略组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>发生时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * <p>持续时间，单位s</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * <p>告警内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>告警对象</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * <p>告警对象ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objId;
                    bool m_objIdHasBeenSet;

                    /**
                     * <p>策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>VPC，只有CVM有</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * <p>指标ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * <p>指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>告警类型，0表示指标告警，2表示产品事件告警，3表示平台事件告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>告警对象维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * <p>所属实例组信息</p>
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
