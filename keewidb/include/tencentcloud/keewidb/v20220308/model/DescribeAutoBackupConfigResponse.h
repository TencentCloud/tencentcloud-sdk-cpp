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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeAutoBackupConfig返回参数结构体
                */
                class DescribeAutoBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeAutoBackupConfigResponse();
                    ~DescribeAutoBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自动备份的周期。包括：Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     * @return WeekDays 自动备份的周期。包括：Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
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
                     * 获取自动备份时间段。
                     * @return TimePeriod 自动备份时间段。
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     * 
                     */
                    bool TimePeriodHasBeenSet() const;

                    /**
                     * 获取全量备份文件保存天数。
                     * @return BackupStorageDays 全量备份文件保存天数。
                     * 
                     */
                    int64_t GetBackupStorageDays() const;

                    /**
                     * 判断参数 BackupStorageDays 是否已赋值
                     * @return BackupStorageDays 是否已赋值
                     * 
                     */
                    bool BackupStorageDaysHasBeenSet() const;

                    /**
                     * 获取增量备份文件保存天数。
                     * @return BinlogStorageDays 增量备份文件保存天数。
                     * 
                     */
                    int64_t GetBinlogStorageDays() const;

                    /**
                     * 判断参数 BinlogStorageDays 是否已赋值
                     * @return BinlogStorageDays 是否已赋值
                     * 
                     */
                    bool BinlogStorageDaysHasBeenSet() const;

                private:

                    /**
                     * 自动备份的周期。包括：Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 自动备份时间段。
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * 全量备份文件保存天数。
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                    /**
                     * 增量备份文件保存天数。
                     */
                    int64_t m_binlogStorageDays;
                    bool m_binlogStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
