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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTO_H_

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
                * 手动工作流触发运行记录实体
                */
                class ManualTriggerRecordOpsDto : public AbstractModel
                {
                public:
                    ManualTriggerRecordOpsDto();
                    ~ManualTriggerRecordOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行触发记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId <p>运行触发记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>运行触发记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId <p>运行触发记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取<p>用户提交运行时配置的运行名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerName <p>用户提交运行时配置的运行名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置<p>用户提交运行时配置的运行名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerName <p>用户提交运行时配置的运行名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取<p>用户提交运行的备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>用户提交运行的备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>用户提交运行的备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>用户提交运行的备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatetimeList <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDatetimeList() const;

                    /**
                     * 设置<p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datetimeList <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatetimeList(const std::vector<std::string>& _datetimeList);

                    /**
                     * 判断参数 DatetimeList 是否已赋值
                     * @return DatetimeList 是否已赋值
                     * 
                     */
                    bool DatetimeListHasBeenSet() const;

                    /**
                     * 获取<p>任务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCnt <p>任务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskCnt() const;

                    /**
                     * 设置<p>任务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCnt <p>任务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCnt(const uint64_t& _taskCnt);

                    /**
                     * 判断参数 TaskCnt 是否已赋值
                     * @return TaskCnt 是否已赋值
                     * 
                     */
                    bool TaskCntHasBeenSet() const;

                    /**
                     * 获取<p>实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCnt <p>实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCnt() const;

                    /**
                     * 设置<p>实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCnt <p>实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCnt(const uint64_t& _instanceCnt);

                    /**
                     * 判断参数 InstanceCnt 是否已赋值
                     * @return InstanceCnt 是否已赋值
                     * 
                     */
                    bool InstanceCntHasBeenSet() const;

                    /**
                     * 获取<p>已完成的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedInstanceCnt <p>已完成的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFinishedInstanceCnt() const;

                    /**
                     * 设置<p>已完成的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedInstanceCnt <p>已完成的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishedInstanceCnt(const uint64_t& _finishedInstanceCnt);

                    /**
                     * 判断参数 FinishedInstanceCnt 是否已赋值
                     * @return FinishedInstanceCnt 是否已赋值
                     * 
                     */
                    bool FinishedInstanceCntHasBeenSet() const;

                    /**
                     * 获取<p>成功的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessInstanceCnt <p>成功的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessInstanceCnt() const;

                    /**
                     * 设置<p>成功的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successInstanceCnt <p>成功的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessInstanceCnt(const uint64_t& _successInstanceCnt);

                    /**
                     * 判断参数 SuccessInstanceCnt 是否已赋值
                     * @return SuccessInstanceCnt 是否已赋值
                     * 
                     */
                    bool SuccessInstanceCntHasBeenSet() const;

                    /**
                     * 获取<p>记录运行状态<br> INIT, RUNNING, FINISHED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>记录运行状态<br> INIT, RUNNING, FINISHED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>记录运行状态<br> INIT, RUNNING, FINISHED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>记录运行状态<br> INIT, RUNNING, FINISHED</p>
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
                     * 获取<p>用户提交运行时的入参，主要用于前端反显和记录原始提交信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerParams <p>用户提交运行时的入参，主要用于前端反显和记录原始提交信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerParams() const;

                    /**
                     * 设置<p>用户提交运行时的入参，主要用于前端反显和记录原始提交信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerParams <p>用户提交运行时的入参，主要用于前端反显和记录原始提交信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerParams(const std::string& _triggerParams);

                    /**
                     * 判断参数 TriggerParams 是否已赋值
                     * @return TriggerParams 是否已赋值
                     * 
                     */
                    bool TriggerParamsHasBeenSet() const;

                    /**
                     * 获取<p>用户主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin <p>用户主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>用户主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin <p>用户主账号ID</p>
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

                    /**
                     * 获取<p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin <p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置<p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin <p>用户ID</p>
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
                     * 获取<p>用户展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>租户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId <p>租户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置<p>租户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId <p>租户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>数据实例时间的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>数据实例时间的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>数据实例时间的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>数据实例时间的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理</p>
                     * @return TimeType <p>时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理</p>
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置<p>时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理</p>
                     * @param _timeType <p>时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理</p>
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>触发类型</p><p>枚举值：</p><ul><li>SUB_PROCESS_TRIGGER： 由嵌套工作流 SP 任务触发</li><li>SUB_PROCESS_MAKEUP： 由嵌套工作流 SP 任务补录触发</li><li>MANUAL_RUN_BY_USER： 手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerSource <p>触发类型</p><p>枚举值：</p><ul><li>SUB_PROCESS_TRIGGER： 由嵌套工作流 SP 任务触发</li><li>SUB_PROCESS_MAKEUP： 由嵌套工作流 SP 任务补录触发</li><li>MANUAL_RUN_BY_USER： 手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerSource() const;

                    /**
                     * 设置<p>触发类型</p><p>枚举值：</p><ul><li>SUB_PROCESS_TRIGGER： 由嵌套工作流 SP 任务触发</li><li>SUB_PROCESS_MAKEUP： 由嵌套工作流 SP 任务补录触发</li><li>MANUAL_RUN_BY_USER： 手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerSource <p>触发类型</p><p>枚举值：</p><ul><li>SUB_PROCESS_TRIGGER： 由嵌套工作流 SP 任务触发</li><li>SUB_PROCESS_MAKEUP： 由嵌套工作流 SP 任务补录触发</li><li>MANUAL_RUN_BY_USER： 手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerSource(const std::string& _triggerSource);

                    /**
                     * 判断参数 TriggerSource 是否已赋值
                     * @return TriggerSource 是否已赋值
                     * 
                     */
                    bool TriggerSourceHasBeenSet() const;

                    /**
                     * 获取<p>触发实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerSourceId <p>触发实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerSourceId() const;

                    /**
                     * 设置<p>触发实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerSourceId <p>触发实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerSourceId(const std::string& _triggerSourceId);

                    /**
                     * 判断参数 TriggerSourceId 是否已赋值
                     * @return TriggerSourceId 是否已赋值
                     * 
                     */
                    bool TriggerSourceIdHasBeenSet() const;

                    /**
                     * 获取<p>父嵌套工作流任务 ID。仅 <code>triggerSource</code> 以 <code>SUB_PROCESS_</code> 开头时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSpTaskId <p>父嵌套工作流任务 ID。仅 <code>triggerSource</code> 以 <code>SUB_PROCESS_</code> 开头时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSpTaskId() const;

                    /**
                     * 设置<p>父嵌套工作流任务 ID。仅 <code>triggerSource</code> 以 <code>SUB_PROCESS_</code> 开头时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSpTaskId <p>父嵌套工作流任务 ID。仅 <code>triggerSource</code> 以 <code>SUB_PROCESS_</code> 开头时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSpTaskId(const std::string& _parentSpTaskId);

                    /**
                     * 判断参数 ParentSpTaskId 是否已赋值
                     * @return ParentSpTaskId 是否已赋值
                     * 
                     */
                    bool ParentSpTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>父嵌套工作流任务实例名称（即任务名称）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSpInstanceName <p>父嵌套工作流任务实例名称（即任务名称）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSpInstanceName() const;

                    /**
                     * 设置<p>父嵌套工作流任务实例名称（即任务名称）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSpInstanceName <p>父嵌套工作流任务实例名称（即任务名称）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSpInstanceName(const std::string& _parentSpInstanceName);

                    /**
                     * 判断参数 ParentSpInstanceName 是否已赋值
                     * @return ParentSpInstanceName 是否已赋值
                     * 
                     */
                    bool ParentSpInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>父嵌套工作流任务实例数据时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSpInstanceDataTime <p>父嵌套工作流任务实例数据时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSpInstanceDataTime() const;

                    /**
                     * 设置<p>父嵌套工作流任务实例数据时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSpInstanceDataTime <p>父嵌套工作流任务实例数据时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSpInstanceDataTime(const std::string& _parentSpInstanceDataTime);

                    /**
                     * 判断参数 ParentSpInstanceDataTime 是否已赋值
                     * @return ParentSpInstanceDataTime 是否已赋值
                     * 
                     */
                    bool ParentSpInstanceDataTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeList <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetScheduleTimeList() const;

                    /**
                     * 设置<p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeList <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTimeList(const std::vector<std::string>& _scheduleTimeList);

                    /**
                     * 判断参数 ScheduleTimeList 是否已赋值
                     * @return ScheduleTimeList 是否已赋值
                     * 
                     */
                    bool ScheduleTimeListHasBeenSet() const;

                private:

                    /**
                     * <p>运行触发记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>用户提交运行时配置的运行名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <p>用户提交运行的备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_datetimeList;
                    bool m_datetimeListHasBeenSet;

                    /**
                     * <p>任务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskCnt;
                    bool m_taskCntHasBeenSet;

                    /**
                     * <p>实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCnt;
                    bool m_instanceCntHasBeenSet;

                    /**
                     * <p>已完成的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_finishedInstanceCnt;
                    bool m_finishedInstanceCntHasBeenSet;

                    /**
                     * <p>成功的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successInstanceCnt;
                    bool m_successInstanceCntHasBeenSet;

                    /**
                     * <p>记录运行状态<br> INIT, RUNNING, FINISHED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>用户提交运行时的入参，主要用于前端反显和记录原始提交信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerParams;
                    bool m_triggerParamsHasBeenSet;

                    /**
                     * <p>用户主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * <p>用户展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>租户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>数据实例时间的时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理</p>
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * <p>触发类型</p><p>枚举值：</p><ul><li>SUB_PROCESS_TRIGGER： 由嵌套工作流 SP 任务触发</li><li>SUB_PROCESS_MAKEUP： 由嵌套工作流 SP 任务补录触发</li><li>MANUAL_RUN_BY_USER： 手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerSource;
                    bool m_triggerSourceHasBeenSet;

                    /**
                     * <p>触发实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerSourceId;
                    bool m_triggerSourceIdHasBeenSet;

                    /**
                     * <p>父嵌套工作流任务 ID。仅 <code>triggerSource</code> 以 <code>SUB_PROCESS_</code> 开头时有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSpTaskId;
                    bool m_parentSpTaskIdHasBeenSet;

                    /**
                     * <p>父嵌套工作流任务实例名称（即任务名称）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSpInstanceName;
                    bool m_parentSpInstanceNameHasBeenSet;

                    /**
                     * <p>父嵌套工作流任务实例数据时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSpInstanceDataTime;
                    bool m_parentSpInstanceDataTimeHasBeenSet;

                    /**
                     * <p>数据时间列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_scheduleTimeList;
                    bool m_scheduleTimeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTO_H_
