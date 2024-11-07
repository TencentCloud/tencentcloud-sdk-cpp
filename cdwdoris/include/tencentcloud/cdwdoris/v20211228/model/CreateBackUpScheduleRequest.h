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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupTableContent.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/CosSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScheduleInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CreateBackUpSchedule请求参数结构体
                */
                class CreateBackUpScheduleRequest : public AbstractModel
                {
                public:
                    CreateBackUpScheduleRequest();
                    ~CreateBackUpScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取操作类型 create(创建) update(编辑修改)
                     * @return OperationType 操作类型 create(创建) update(编辑修改)
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型 create(创建) update(编辑修改)
                     * @param _operationType 操作类型 create(创建) update(编辑修改)
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取编辑时需要传
                     * @return ScheduleId 编辑时需要传
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置编辑时需要传
                     * @param _scheduleId 编辑时需要传
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * @return WeekDays 选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * @deprecated
                     */
                    std::string GetWeekDays() const;

                    /**
                     * 设置选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * @param _weekDays 选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * @deprecated
                     */
                    void SetWeekDays(const std::string& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * @deprecated
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取执行小时
废弃：使用ScheduleInfo
                     * @return ExecuteHour 执行小时
废弃：使用ScheduleInfo
                     * @deprecated
                     */
                    int64_t GetExecuteHour() const;

                    /**
                     * 设置执行小时
废弃：使用ScheduleInfo
                     * @param _executeHour 执行小时
废弃：使用ScheduleInfo
                     * @deprecated
                     */
                    void SetExecuteHour(const int64_t& _executeHour);

                    /**
                     * 判断参数 ExecuteHour 是否已赋值
                     * @return ExecuteHour 是否已赋值
                     * @deprecated
                     */
                    bool ExecuteHourHasBeenSet() const;

                    /**
                     * 获取备份表列表
                     * @return BackUpTables 备份表列表
                     * 
                     */
                    std::vector<BackupTableContent> GetBackUpTables() const;

                    /**
                     * 设置备份表列表
                     * @param _backUpTables 备份表列表
                     * 
                     */
                    void SetBackUpTables(const std::vector<BackupTableContent>& _backUpTables);

                    /**
                     * 判断参数 BackUpTables 是否已赋值
                     * @return BackUpTables 是否已赋值
                     * 
                     */
                    bool BackUpTablesHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @return BackupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @param _backupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取远端doris集群的连接信息
                     * @return DorisSourceInfo 远端doris集群的连接信息
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置远端doris集群的连接信息
                     * @param _dorisSourceInfo 远端doris集群的连接信息
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是一次性备份。2时是远端备份
                     * @return BackupTimeType 0为默认。1时是一次性备份。2时是远端备份
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置0为默认。1时是一次性备份。2时是远端备份
                     * @param _backupTimeType 0为默认。1时是一次性备份。2时是远端备份
                     * 
                     */
                    void SetBackupTimeType(const int64_t& _backupTimeType);

                    /**
                     * 判断参数 BackupTimeType 是否已赋值
                     * @return BackupTimeType 是否已赋值
                     * 
                     */
                    bool BackupTimeTypeHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是备份完成后立即恢复
                     * @return RestoreType 0为默认。1时是备份完成后立即恢复
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置0为默认。1时是备份完成后立即恢复
                     * @param _restoreType 0为默认。1时是备份完成后立即恢复
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是提供自定义的secret连接cos
                     * @return AuthType 0为默认。1时是提供自定义的secret连接cos
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置0为默认。1时是提供自定义的secret连接cos
                     * @param _authType 0为默认。1时是提供自定义的secret连接cos
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取cos认证的信息
                     * @return CosSourceInfo cos认证的信息
                     * 
                     */
                    CosSourceInfo GetCosSourceInfo() const;

                    /**
                     * 设置cos认证的信息
                     * @param _cosSourceInfo cos认证的信息
                     * 
                     */
                    void SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * 
                     */
                    bool CosSourceInfoHasBeenSet() const;

                    /**
                     * 获取调度任务名
                     * @return ScheduleName 调度任务名
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置调度任务名
                     * @param _scheduleName 调度任务名
                     * 
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     * 
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取调度信息
                     * @return ScheduleInfo 调度信息
                     * 
                     */
                    ScheduleInfo GetScheduleInfo() const;

                    /**
                     * 设置调度信息
                     * @param _scheduleInfo 调度信息
                     * 
                     */
                    void SetScheduleInfo(const ScheduleInfo& _scheduleInfo);

                    /**
                     * 判断参数 ScheduleInfo 是否已赋值
                     * @return ScheduleInfo 是否已赋值
                     * 
                     */
                    bool ScheduleInfoHasBeenSet() const;

                    /**
                     * 获取更新任务状态：
3-暂停,
2-删除,
1-启动
                     * @return UpdateStatus 更新任务状态：
3-暂停,
2-删除,
1-启动
                     * 
                     */
                    int64_t GetUpdateStatus() const;

                    /**
                     * 设置更新任务状态：
3-暂停,
2-删除,
1-启动
                     * @param _updateStatus 更新任务状态：
3-暂停,
2-删除,
1-启动
                     * 
                     */
                    void SetUpdateStatus(const int64_t& _updateStatus);

                    /**
                     * 判断参数 UpdateStatus 是否已赋值
                     * @return UpdateStatus 是否已赋值
                     * 
                     */
                    bool UpdateStatusHasBeenSet() const;

                    /**
                     * 获取当前任务的cos桶信息
                     * @return CosBucket 当前任务的cos桶信息
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置当前任务的cos桶信息
                     * @param _cosBucket 当前任务的cos桶信息
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型 create(创建) update(编辑修改)
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 编辑时需要传
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     */
                    std::string m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 执行小时
废弃：使用ScheduleInfo
                     */
                    int64_t m_executeHour;
                    bool m_executeHourHasBeenSet;

                    /**
                     * 备份表列表
                     */
                    std::vector<BackupTableContent> m_backUpTables;
                    bool m_backUpTablesHasBeenSet;

                    /**
                     * 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 远端doris集群的连接信息
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * 0为默认。1时是一次性备份。2时是远端备份
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * 0为默认。1时是备份完成后立即恢复
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 0为默认。1时是提供自定义的secret连接cos
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * cos认证的信息
                     */
                    CosSourceInfo m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                    /**
                     * 调度任务名
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * 调度信息
                     */
                    ScheduleInfo m_scheduleInfo;
                    bool m_scheduleInfoHasBeenSet;

                    /**
                     * 更新任务状态：
3-暂停,
2-删除,
1-启动
                     */
                    int64_t m_updateStatus;
                    bool m_updateStatusHasBeenSet;

                    /**
                     * 当前任务的cos桶信息
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
