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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupConfig返回参数结构体
                */
                class DescribeBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupConfigResponse();
                    ~DescribeBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取备份开始的最早时间点，单位为时刻。例如，2 - 凌晨2:00
                     * @return StartTimeMin 备份开始的最早时间点，单位为时刻。例如，2 - 凌晨2:00
                     */
                    int64_t GetStartTimeMin() const;

                    /**
                     * 判断参数 StartTimeMin 是否已赋值
                     * @return StartTimeMin 是否已赋值
                     */
                    bool StartTimeMinHasBeenSet() const;

                    /**
                     * 获取备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨6:00
                     * @return StartTimeMax 备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨6:00
                     */
                    int64_t GetStartTimeMax() const;

                    /**
                     * 判断参数 StartTimeMax 是否已赋值
                     * @return StartTimeMax 是否已赋值
                     */
                    bool StartTimeMaxHasBeenSet() const;

                    /**
                     * 获取备份过期时间，单位为天
                     * @return BackupExpireDays 备份过期时间，单位为天
                     */
                    int64_t GetBackupExpireDays() const;

                    /**
                     * 判断参数 BackupExpireDays 是否已赋值
                     * @return BackupExpireDays 是否已赋值
                     */
                    bool BackupExpireDaysHasBeenSet() const;

                    /**
                     * 获取备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份
                     * @return BackupMethod 备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog过期时间，单位为天
                     * @return BinlogExpireDays Binlog过期时间，单位为天
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                private:

                    /**
                     * 备份开始的最早时间点，单位为时刻。例如，2 - 凌晨2:00
                     */
                    int64_t m_startTimeMin;
                    bool m_startTimeMinHasBeenSet;

                    /**
                     * 备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨6:00
                     */
                    int64_t m_startTimeMax;
                    bool m_startTimeMaxHasBeenSet;

                    /**
                     * 备份过期时间，单位为天
                     */
                    int64_t m_backupExpireDays;
                    bool m_backupExpireDaysHasBeenSet;

                    /**
                     * 备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Binlog过期时间，单位为天
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
