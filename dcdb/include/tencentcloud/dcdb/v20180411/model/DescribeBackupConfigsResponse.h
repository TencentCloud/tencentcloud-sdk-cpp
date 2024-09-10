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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPCONFIGSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/BackupConfig.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeBackupConfigs返回参数结构体
                */
                class DescribeBackupConfigsResponse : public AbstractModel
                {
                public:
                    DescribeBackupConfigsResponse();
                    ~DescribeBackupConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

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
                    std::vector<BackupConfig> GetBackupConfigSet() const;

                    /**
                     * 判断参数 BackupConfigSet 是否已赋值
                     * @return BackupConfigSet 是否已赋值
                     * 
                     */
                    bool BackupConfigSetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
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
                    std::vector<BackupConfig> m_backupConfigSet;
                    bool m_backupConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPCONFIGSRESPONSE_H_
