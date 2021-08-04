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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_

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
                * DescribeDataBackupOverview返回参数结构体
                */
                class DescribeDataBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDataBackupOverviewResponse();
                    ~DescribeDataBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前地域的数据备份总容量（包含自动备份和手动备份，单位为字节）。
                     * @return DataBackupVolume 当前地域的数据备份总容量（包含自动备份和手动备份，单位为字节）。
                     */
                    int64_t GetDataBackupVolume() const;

                    /**
                     * 判断参数 DataBackupVolume 是否已赋值
                     * @return DataBackupVolume 是否已赋值
                     */
                    bool DataBackupVolumeHasBeenSet() const;

                    /**
                     * 获取当前地域的数据备份总个数。
                     * @return DataBackupCount 当前地域的数据备份总个数。
                     */
                    int64_t GetDataBackupCount() const;

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取当前地域的自动备份总容量。
                     * @return AutoBackupVolume 当前地域的自动备份总容量。
                     */
                    int64_t GetAutoBackupVolume() const;

                    /**
                     * 判断参数 AutoBackupVolume 是否已赋值
                     * @return AutoBackupVolume 是否已赋值
                     */
                    bool AutoBackupVolumeHasBeenSet() const;

                    /**
                     * 获取当前地域的自动备份总个数。
                     * @return AutoBackupCount 当前地域的自动备份总个数。
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取当前地域的手动备份总容量。
                     * @return ManualBackupVolume 当前地域的手动备份总容量。
                     */
                    int64_t GetManualBackupVolume() const;

                    /**
                     * 判断参数 ManualBackupVolume 是否已赋值
                     * @return ManualBackupVolume 是否已赋值
                     */
                    bool ManualBackupVolumeHasBeenSet() const;

                    /**
                     * 获取当前地域的手动备份总个数。
                     * @return ManualBackupCount 当前地域的手动备份总个数。
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     */
                    bool ManualBackupCountHasBeenSet() const;

                private:

                    /**
                     * 当前地域的数据备份总容量（包含自动备份和手动备份，单位为字节）。
                     */
                    int64_t m_dataBackupVolume;
                    bool m_dataBackupVolumeHasBeenSet;

                    /**
                     * 当前地域的数据备份总个数。
                     */
                    int64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 当前地域的自动备份总容量。
                     */
                    int64_t m_autoBackupVolume;
                    bool m_autoBackupVolumeHasBeenSet;

                    /**
                     * 当前地域的自动备份总个数。
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 当前地域的手动备份总容量。
                     */
                    int64_t m_manualBackupVolume;
                    bool m_manualBackupVolumeHasBeenSet;

                    /**
                     * 当前地域的手动备份总个数。
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABACKUPOVERVIEWRESPONSE_H_
