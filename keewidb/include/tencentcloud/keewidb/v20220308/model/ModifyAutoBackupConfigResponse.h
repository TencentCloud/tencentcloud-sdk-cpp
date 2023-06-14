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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_

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
                * ModifyAutoBackupConfig返回参数结构体
                */
                class ModifyAutoBackupConfigResponse : public AbstractModel
                {
                public:
                    ModifyAutoBackupConfigResponse();
                    ~ModifyAutoBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取增量备份文件保存天数。
                     * @return BackupStorageDays 增量备份文件保存天数。
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
                     * 获取全量备份文件保存天数。
                     * @return BinlogStorageDays 全量备份文件保存天数。
                     * 
                     */
                    int64_t GetBinlogStorageDays() const;

                    /**
                     * 判断参数 BinlogStorageDays 是否已赋值
                     * @return BinlogStorageDays 是否已赋值
                     * 
                     */
                    bool BinlogStorageDaysHasBeenSet() const;

                    /**
                     * 获取备份时间段。
                     * @return TimePeriod 备份时间段。
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
                     * 获取备份周期。Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     * @return WeekDays 备份周期。Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                private:

                    /**
                     * 增量备份文件保存天数。
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                    /**
                     * 全量备份文件保存天数。
                     */
                    int64_t m_binlogStorageDays;
                    bool m_binlogStorageDaysHasBeenSet;

                    /**
                     * 备份时间段。
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * 备份周期。Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGRESPONSE_H_
