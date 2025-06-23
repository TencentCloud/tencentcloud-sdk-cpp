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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmIndicatorInfo.h>
#include <tencentcloud/wedata/v20210820/model/QuietPeriod.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务告警信息
                */
                class TaskAlarmInfo : public AbstractModel
                {
                public:
                    TaskAlarmInfo();
                    ~TaskAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RegularName 规则名称
                     * 
                     */
                    std::string GetRegularName() const;

                    /**
                     * 设置规则名称
                     * @param _regularName 规则名称
                     * 
                     */
                    void SetRegularName(const std::string& _regularName);

                    /**
                     * 判断参数 RegularName 是否已赋值
                     * @return RegularName 是否已赋值
                     * 
                     */
                    bool RegularNameHasBeenSet() const;

                    /**
                     * 获取规则状态(0表示关闭，1表示打开)
                     * @return RegularStatus 规则状态(0表示关闭，1表示打开)
                     * 
                     */
                    uint64_t GetRegularStatus() const;

                    /**
                     * 设置规则状态(0表示关闭，1表示打开)
                     * @param _regularStatus 规则状态(0表示关闭，1表示打开)
                     * 
                     */
                    void SetRegularStatus(const uint64_t& _regularStatus);

                    /**
                     * 判断参数 RegularStatus 是否已赋值
                     * @return RegularStatus 是否已赋值
                     * 
                     */
                    bool RegularStatusHasBeenSet() const;

                    /**
                     * 获取告警级别(0表示普通，1表示重要，2表示紧急)
                     * @return AlarmLevel 告警级别(0表示普通，1表示重要，2表示紧急)
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别(0表示普通，1表示重要，2表示紧急)
                     * @param _alarmLevel 告警级别(0表示普通，1表示重要，2表示紧急)
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @return AlarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @param _alarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取任务类型(201表示实时，202表示离线)
                     * @return TaskType 任务类型(201表示实时，202表示离线)
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型(201表示实时，202表示离线)
                     * @param _taskType 任务类型(201表示实时，202表示离线)
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RegularId 规则ID
                     * 
                     */
                    std::string GetRegularId() const;

                    /**
                     * 设置规则ID
                     * @param _regularId 规则ID
                     * 
                     */
                    void SetRegularId(const std::string& _regularId);

                    /**
                     * 判断参数 RegularId 是否已赋值
                     * @return RegularId 是否已赋值
                     * 
                     */
                    bool RegularIdHasBeenSet() const;

                    /**
                     * 获取告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * @return AlarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * @param _alarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedTime 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedTime 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取告警接收人ID，多个用逗号隔开
                     * @return AlarmRecipientId 告警接收人ID，多个用逗号隔开
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人ID，多个用逗号隔开
                     * @param _alarmRecipientId 告警接收人ID，多个用逗号隔开
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientName 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientName 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorInfos 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmIndicatorInfo> GetAlarmIndicatorInfos() const;

                    /**
                     * 设置指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicatorInfos 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicatorInfos(const std::vector<AlarmIndicatorInfo>& _alarmIndicatorInfos);

                    /**
                     * 判断参数 AlarmIndicatorInfos 是否已赋值
                     * @return AlarmIndicatorInfos 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorInfosHasBeenSet() const;

                    /**
                     * 获取告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientType 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientType 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientType(const uint64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取免打扰时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuietPeriods 免打扰时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuietPeriod> GetQuietPeriods() const;

                    /**
                     * 设置免打扰时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quietPeriods 免打扰时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuietPeriods(const std::vector<QuietPeriod>& _quietPeriods);

                    /**
                     * 判断参数 QuietPeriods 是否已赋值
                     * @return QuietPeriods 是否已赋值
                     * 
                     */
                    bool QuietPeriodsHasBeenSet() const;

                    /**
                     * 获取企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeComHook 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeComHook() const;

                    /**
                     * 设置企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weComHook 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeComHook(const std::string& _weComHook);

                    /**
                     * 判断参数 WeComHook 是否已赋值
                     * @return WeComHook 是否已赋值
                     * 
                     */
                    bool WeComHookHasBeenSet() const;

                    /**
                     * 获取最近操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最近操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最近操作时间
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
                     * 获取最近操作人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUin 最近操作人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置最近操作人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUin 最近操作人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取关联任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCount 关联任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置关联任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCount 关联任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取监控对象类型,1:所有任务,2:指定任务,3:指定责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控对象类型,1:所有任务,2:指定任务,3:指定责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置监控对象类型,1:所有任务,2:指定任务,3:指定责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控对象类型,1:所有任务,2:指定任务,3:指定责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取监控对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorObjectIds 监控对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置监控对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorObjectIds 监控对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorObjectIds(const std::vector<std::string>& _monitorObjectIds);

                    /**
                     * 判断参数 MonitorObjectIds 是否已赋值
                     * @return MonitorObjectIds 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdsHasBeenSet() const;

                    /**
                     * 获取最近一次告警的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestAlarmInstanceId 最近一次告警的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestAlarmInstanceId() const;

                    /**
                     * 设置最近一次告警的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestAlarmInstanceId 最近一次告警的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestAlarmInstanceId(const std::string& _latestAlarmInstanceId);

                    /**
                     * 判断参数 LatestAlarmInstanceId 是否已赋值
                     * @return LatestAlarmInstanceId 是否已赋值
                     * 
                     */
                    bool LatestAlarmInstanceIdHasBeenSet() const;

                    /**
                     * 获取最近一次告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestAlarmTime 最近一次告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestAlarmTime() const;

                    /**
                     * 设置最近一次告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestAlarmTime 最近一次告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestAlarmTime(const std::string& _latestAlarmTime);

                    /**
                     * 判断参数 LatestAlarmTime 是否已赋值
                     * @return LatestAlarmTime 是否已赋值
                     * 
                     */
                    bool LatestAlarmTimeHasBeenSet() const;

                    /**
                     * 获取告警规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 告警规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置告警规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 告警规则描述
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
                     * 获取飞书群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LarkWebHooks 飞书群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLarkWebHooks() const;

                    /**
                     * 设置飞书群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _larkWebHooks 飞书群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLarkWebHooks(const std::string& _larkWebHooks);

                    /**
                     * 判断参数 LarkWebHooks 是否已赋值
                     * @return LarkWebHooks 是否已赋值
                     * 
                     */
                    bool LarkWebHooksHasBeenSet() const;

                    /**
                     * 获取钉钉群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DingDingWebHooks 钉钉群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDingDingWebHooks() const;

                    /**
                     * 设置钉钉群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dingDingWebHooks 钉钉群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDingDingWebHooks(const std::string& _dingDingWebHooks);

                    /**
                     * 判断参数 DingDingWebHooks 是否已赋值
                     * @return DingDingWebHooks 是否已赋值
                     * 
                     */
                    bool DingDingWebHooksHasBeenSet() const;

                    /**
                     * 获取业务类型, 0-非默认, 1-默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessType 业务类型, 0-非默认, 1-默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBusinessType() const;

                    /**
                     * 设置业务类型, 0-非默认, 1-默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessType 业务类型, 0-非默认, 1-默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessType(const int64_t& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取alarm message rule
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmMessageRule alarm message rule
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmMessageRule() const;

                    /**
                     * 设置alarm message rule
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmMessageRule alarm message rule
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmMessageRule(const std::string& _alarmMessageRule);

                    /**
                     * 判断参数 AlarmMessageRule 是否已赋值
                     * @return AlarmMessageRule 是否已赋值
                     * 
                     */
                    bool AlarmMessageRuleHasBeenSet() const;

                    /**
                     * 获取 0- wedata, 1-inlong
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTarget  0- wedata, 1-inlong
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReportTarget() const;

                    /**
                     * 设置 0- wedata, 1-inlong
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTarget  0- wedata, 1-inlong
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportTarget(const int64_t& _reportTarget);

                    /**
                     * 判断参数 ReportTarget 是否已赋值
                     * @return ReportTarget 是否已赋值
                     * 
                     */
                    bool ReportTargetHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_regularName;
                    bool m_regularNameHasBeenSet;

                    /**
                     * 规则状态(0表示关闭，1表示打开)
                     */
                    uint64_t m_regularStatus;
                    bool m_regularStatusHasBeenSet;

                    /**
                     * 告警级别(0表示普通，1表示重要，2表示紧急)
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 任务类型(201表示实时，202表示离线)
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_regularId;
                    bool m_regularIdHasBeenSet;

                    /**
                     * 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * 告警接收人ID，多个用逗号隔开
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmIndicatorInfo> m_alarmIndicatorInfos;
                    bool m_alarmIndicatorInfosHasBeenSet;

                    /**
                     * 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 免打扰时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuietPeriod> m_quietPeriods;
                    bool m_quietPeriodsHasBeenSet;

                    /**
                     * 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weComHook;
                    bool m_weComHookHasBeenSet;

                    /**
                     * 最近操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最近操作人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * 关联任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 监控对象类型,1:所有任务,2:指定任务,3:指定责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 监控对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * 最近一次告警的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestAlarmInstanceId;
                    bool m_latestAlarmInstanceIdHasBeenSet;

                    /**
                     * 最近一次告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestAlarmTime;
                    bool m_latestAlarmTimeHasBeenSet;

                    /**
                     * 告警规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 飞书群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_larkWebHooks;
                    bool m_larkWebHooksHasBeenSet;

                    /**
                     * 钉钉群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dingDingWebHooks;
                    bool m_dingDingWebHooksHasBeenSet;

                    /**
                     * 业务类型, 0-非默认, 1-默认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * alarm message rule
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmMessageRule;
                    bool m_alarmMessageRuleHasBeenSet;

                    /**
                     *  0- wedata, 1-inlong
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reportTarget;
                    bool m_reportTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
