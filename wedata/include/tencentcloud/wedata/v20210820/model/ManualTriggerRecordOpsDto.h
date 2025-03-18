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
                     * 获取运行触发记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId 运行触发记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置运行触发记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId 运行触发记录ID
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
                     * 获取用户提交运行时配置的运行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerName 用户提交运行时配置的运行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置用户提交运行时配置的运行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerName 用户提交运行时配置的运行名称
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
                     * 获取用户提交运行的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 用户提交运行的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置用户提交运行的备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 用户提交运行的备注
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
                     * 获取数据时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatetimeList 数据时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDatetimeList() const;

                    /**
                     * 设置数据时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datetimeList 数据时间列表
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
                     * 获取任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCnt 任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskCnt() const;

                    /**
                     * 设置任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCnt 任务数
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
                     * 获取实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCnt 实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCnt() const;

                    /**
                     * 设置实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCnt 实例数
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
                     * 获取已完成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedInstanceCnt 已完成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFinishedInstanceCnt() const;

                    /**
                     * 设置已完成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedInstanceCnt 已完成的实例数
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
                     * 获取成功的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessInstanceCnt 成功的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessInstanceCnt() const;

                    /**
                     * 设置成功的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successInstanceCnt 成功的实例数
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
                     * 获取记录运行状态
 INIT, RUNNING, FINISHED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 记录运行状态
 INIT, RUNNING, FINISHED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录运行状态
 INIT, RUNNING, FINISHED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 记录运行状态
 INIT, RUNNING, FINISHED
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
                     * 获取用户提交运行时的入参，主要用于前端反显和记录原始提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerParams 用户提交运行时的入参，主要用于前端反显和记录原始提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerParams() const;

                    /**
                     * 设置用户提交运行时的入参，主要用于前端反显和记录原始提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerParams 用户提交运行时的入参，主要用于前端反显和记录原始提交信息
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
                     * 获取用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 用户主账号ID
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
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 用户ID
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
                     * 获取用户展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户展示名
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
                     * 获取租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 租户ID
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
                     * 获取数据实例时间的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone 数据实例时间的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置数据实例时间的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone 数据实例时间的时区
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
                     * 获取时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * @return TimeType 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * @param _timeType 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 运行触发记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * 用户提交运行时配置的运行名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 用户提交运行的备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 数据时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_datetimeList;
                    bool m_datetimeListHasBeenSet;

                    /**
                     * 任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskCnt;
                    bool m_taskCntHasBeenSet;

                    /**
                     * 实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCnt;
                    bool m_instanceCntHasBeenSet;

                    /**
                     * 已完成的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_finishedInstanceCnt;
                    bool m_finishedInstanceCntHasBeenSet;

                    /**
                     * 成功的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successInstanceCnt;
                    bool m_successInstanceCntHasBeenSet;

                    /**
                     * 记录运行状态
 INIT, RUNNING, FINISHED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户提交运行时的入参，主要用于前端反显和记录原始提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerParams;
                    bool m_triggerParamsHasBeenSet;

                    /**
                     * 用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 用户展示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据实例时间的时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MANUALTRIGGERRECORDOPSDTO_H_
