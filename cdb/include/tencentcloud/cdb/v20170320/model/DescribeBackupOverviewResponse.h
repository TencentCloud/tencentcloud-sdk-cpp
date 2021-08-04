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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_

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
                * DescribeBackupOverview返回参数结构体
                */
                class DescribeBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBackupOverviewResponse();
                    ~DescribeBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户在当前地域备份的总个数（包含数据备份和日志备份）。
                     * @return BackupCount 用户在当前地域备份的总个数（包含数据备份和日志备份）。
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取用户在当前地域备份的总容量
                     * @return BackupVolume 用户在当前地域备份的总容量
                     */
                    int64_t GetBackupVolume() const;

                    /**
                     * 判断参数 BackupVolume 是否已赋值
                     * @return BackupVolume 是否已赋值
                     */
                    bool BackupVolumeHasBeenSet() const;

                    /**
                     * 获取用户在当前地域备份的计费容量，即超出赠送容量的部分。
                     * @return BillingVolume 用户在当前地域备份的计费容量，即超出赠送容量的部分。
                     */
                    int64_t GetBillingVolume() const;

                    /**
                     * 判断参数 BillingVolume 是否已赋值
                     * @return BillingVolume 是否已赋值
                     */
                    bool BillingVolumeHasBeenSet() const;

                    /**
                     * 获取用户在当前地域获得的赠送备份容量。
                     * @return FreeVolume 用户在当前地域获得的赠送备份容量。
                     */
                    int64_t GetFreeVolume() const;

                    /**
                     * 判断参数 FreeVolume 是否已赋值
                     * @return FreeVolume 是否已赋值
                     */
                    bool FreeVolumeHasBeenSet() const;

                private:

                    /**
                     * 用户在当前地域备份的总个数（包含数据备份和日志备份）。
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 用户在当前地域备份的总容量
                     */
                    int64_t m_backupVolume;
                    bool m_backupVolumeHasBeenSet;

                    /**
                     * 用户在当前地域备份的计费容量，即超出赠送容量的部分。
                     */
                    int64_t m_billingVolume;
                    bool m_billingVolumeHasBeenSet;

                    /**
                     * 用户在当前地域获得的赠送备份容量。
                     */
                    int64_t m_freeVolume;
                    bool m_freeVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
