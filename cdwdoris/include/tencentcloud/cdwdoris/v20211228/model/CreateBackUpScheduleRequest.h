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
                     * 
                     */
                    std::string GetWeekDays() const;

                    /**
                     * 设置选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * @param _weekDays 选择的星期 逗号分隔
废弃：使用ScheduleInfo
                     * 
                     */
                    void SetWeekDays(const std::string& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取执行小时
废弃：使用ScheduleInfo
                     * @return ExecuteHour 执行小时
废弃：使用ScheduleInfo
                     * 
                     */
                    int64_t GetExecuteHour() const;

                    /**
                     * 设置执行小时
废弃：使用ScheduleInfo
                     * @param _executeHour 执行小时
废弃：使用ScheduleInfo
                     * 
                     */
                    void SetExecuteHour(const int64_t& _executeHour);

                    /**
                     * 判断参数 ExecuteHour 是否已赋值
                     * @return ExecuteHour 是否已赋值
                     * 
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

                private:

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
