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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取该参数因兼容性问题暂时保留，请忽略。
                     * @return AutoBackupType 该参数因兼容性问题暂时保留，请忽略。
                     * 
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     * 
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                    /**
                     * 获取备份周期，默认为每天自动备份，Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     * @return WeekDays 备份周期，默认为每天自动备份，Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
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
                     * 获取备份任务发起时间段。
                     * @return TimePeriod 备份任务发起时间段。
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
                     * 获取全量备份文件保存天数。默认为7天。如需保存更多天数，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
                     * @return BackupStorageDays 全量备份文件保存天数。默认为7天。如需保存更多天数，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
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
                     * 获取该参数不再使用，请忽略。
                     * @return BinlogStorageDays 该参数不再使用，请忽略。
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
                     * 该参数因兼容性问题暂时保留，请忽略。
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * 备份周期，默认为每天自动备份，Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 备份任务发起时间段。
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * 全量备份文件保存天数。默认为7天。如需保存更多天数，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                    /**
                     * 该参数不再使用，请忽略。
                     */
                    int64_t m_binlogStorageDays;
                    bool m_binlogStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEAUTOBACKUPCONFIGRESPONSE_H_
