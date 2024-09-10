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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPCONFIGSREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/NewBackupConfig.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBackupConfigs请求参数结构体
                */
                class ModifyBackupConfigsRequest : public AbstractModel
                {
                public:
                    ModifyBackupConfigsRequest();
                    ~ModifyBackupConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取常规备份存储时长，范围[1, 3650]。
                     * @return Days 常规备份存储时长，范围[1, 3650]。
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置常规备份存储时长，范围[1, 3650]。
                     * @param _days 常规备份存储时长，范围[1, 3650]。
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00。
                     * @return StartBackupTime 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00。
                     * 
                     */
                    std::string GetStartBackupTime() const;

                    /**
                     * 设置每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00。
                     * @param _startBackupTime 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00。
                     * 
                     */
                    void SetStartBackupTime(const std::string& _startBackupTime);

                    /**
                     * 判断参数 StartBackupTime 是否已赋值
                     * @return StartBackupTime 是否已赋值
                     * 
                     */
                    bool StartBackupTimeHasBeenSet() const;

                    /**
                     * 获取每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59。
                     * @return EndBackupTime 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59。
                     * 
                     */
                    std::string GetEndBackupTime() const;

                    /**
                     * 设置每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59。
                     * @param _endBackupTime 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59。
                     * 
                     */
                    void SetEndBackupTime(const std::string& _endBackupTime);

                    /**
                     * 判断参数 EndBackupTime 是否已赋值
                     * @return EndBackupTime 是否已赋值
                     * 
                     */
                    bool EndBackupTimeHasBeenSet() const;

                    /**
                     * 获取执行备份周期，枚举值：Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
                     * @return WeekDays 执行备份周期，枚举值：Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置执行备份周期，枚举值：Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
                     * @param _weekDays 执行备份周期，枚举值：Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
                     * 
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取沉降到归档存储时长，-1表示关闭归档设置。
                     * @return ArchiveDays 沉降到归档存储时长，-1表示关闭归档设置。
                     * 
                     */
                    int64_t GetArchiveDays() const;

                    /**
                     * 设置沉降到归档存储时长，-1表示关闭归档设置。
                     * @param _archiveDays 沉降到归档存储时长，-1表示关闭归档设置。
                     * 
                     */
                    void SetArchiveDays(const int64_t& _archiveDays);

                    /**
                     * 判断参数 ArchiveDays 是否已赋值
                     * @return ArchiveDays 是否已赋值
                     * 
                     */
                    bool ArchiveDaysHasBeenSet() const;

                    /**
                     * 获取超期备份配置。
                     * @return BackupConfigSet 超期备份配置。
                     * 
                     */
                    std::vector<NewBackupConfig> GetBackupConfigSet() const;

                    /**
                     * 设置超期备份配置。
                     * @param _backupConfigSet 超期备份配置。
                     * 
                     */
                    void SetBackupConfigSet(const std::vector<NewBackupConfig>& _backupConfigSet);

                    /**
                     * 判断参数 BackupConfigSet 是否已赋值
                     * @return BackupConfigSet 是否已赋值
                     * 
                     */
                    bool BackupConfigSetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 常规备份存储时长，范围[1, 3650]。
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00。
                     */
                    std::string m_startBackupTime;
                    bool m_startBackupTimeHasBeenSet;

                    /**
                     * 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59。
                     */
                    std::string m_endBackupTime;
                    bool m_endBackupTimeHasBeenSet;

                    /**
                     * 执行备份周期，枚举值：Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 沉降到归档存储时长，-1表示关闭归档设置。
                     */
                    int64_t m_archiveDays;
                    bool m_archiveDaysHasBeenSet;

                    /**
                     * 超期备份配置。
                     */
                    std::vector<NewBackupConfig> m_backupConfigSet;
                    bool m_backupConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPCONFIGSREQUEST_H_
