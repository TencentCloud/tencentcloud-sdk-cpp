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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogicBackupConfigInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                    std::string ToJsonString() const;


                    /**
                     * 获取表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     * @return BackupTimeBeg 表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     * 
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     * @return BackupTimeEnd 表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     * 
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600*24*7=604800
                     * @return ReserveDuration 表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600*24*7=604800
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     * 
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份
                     * @return BackupFreq 备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份
                     * 
                     */
                    std::vector<std::string> GetBackupFreq() const;

                    /**
                     * 判断参数 BackupFreq 是否已赋值
                     * @return BackupFreq 是否已赋值
                     * 
                     */
                    bool BackupFreqHasBeenSet() const;

                    /**
                     * 获取备份方式，logic-逻辑备份，snapshot-快照备份
                     * @return BackupType 备份方式，logic-逻辑备份，snapshot-快照备份
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取跨地域逻辑备份配置修改时间
                     * @return LogicCrossRegionsConfigUpdateTime 跨地域逻辑备份配置修改时间
                     * 
                     */
                    std::string GetLogicCrossRegionsConfigUpdateTime() const;

                    /**
                     * 判断参数 LogicCrossRegionsConfigUpdateTime 是否已赋值
                     * @return LogicCrossRegionsConfigUpdateTime 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsConfigUpdateTimeHasBeenSet() const;

                    /**
                     * 获取自动逻辑备份配置
                     * @return LogicBackupConfig 自动逻辑备份配置
                     * 
                     */
                    LogicBackupConfigInfo GetLogicBackupConfig() const;

                    /**
                     * 判断参数 LogicBackupConfig 是否已赋值
                     * @return LogicBackupConfig 是否已赋值
                     * 
                     */
                    bool LogicBackupConfigHasBeenSet() const;

                private:

                    /**
                     * 表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * 表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * 表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600*24*7=604800
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * 备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份
                     */
                    std::vector<std::string> m_backupFreq;
                    bool m_backupFreqHasBeenSet;

                    /**
                     * 备份方式，logic-逻辑备份，snapshot-快照备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 跨地域逻辑备份配置修改时间
                     */
                    std::string m_logicCrossRegionsConfigUpdateTime;
                    bool m_logicCrossRegionsConfigUpdateTimeHasBeenSet;

                    /**
                     * 自动逻辑备份配置
                     */
                    LogicBackupConfigInfo m_logicBackupConfig;
                    bool m_logicBackupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
