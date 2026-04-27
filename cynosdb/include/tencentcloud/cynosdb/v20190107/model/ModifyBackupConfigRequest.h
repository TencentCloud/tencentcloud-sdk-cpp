/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogicBackupConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/SnapshotBackupConfig.h>
#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyBackupConfig请求参数结构体
                */
                class ModifyBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyBackupConfigRequest();
                    ~ModifyBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @return BackupTimeBeg <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 设置<p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @param _backupTimeBeg <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    void SetBackupTimeBeg(const uint64_t& _backupTimeBeg);

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     * 
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取<p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @return BackupTimeEnd <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 设置<p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @param _backupTimeEnd <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    void SetBackupTimeEnd(const uint64_t& _backupTimeEnd);

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     * 
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600<em>24</em>7=604800，最大为158112000</p>
                     * @return ReserveDuration <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600<em>24</em>7=604800，最大为158112000</p>
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 设置<p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600<em>24</em>7=604800，最大为158112000</p>
                     * @param _reserveDuration <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600<em>24</em>7=604800，最大为158112000</p>
                     * 
                     */
                    void SetReserveDuration(const uint64_t& _reserveDuration);

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     * 
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取<p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份</p>
                     * @return BackupFreq <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份</p>
                     * 
                     */
                    std::vector<std::string> GetBackupFreq() const;

                    /**
                     * 设置<p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份</p>
                     * @param _backupFreq <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份</p>
                     * 
                     */
                    void SetBackupFreq(const std::vector<std::string>& _backupFreq);

                    /**
                     * 判断参数 BackupFreq 是否已赋值
                     * @return BackupFreq 是否已赋值
                     * 
                     */
                    bool BackupFreqHasBeenSet() const;

                    /**
                     * 获取<p>该参数目前不支持修改，无需填写。</p>
                     * @return BackupType <p>该参数目前不支持修改，无需填写。</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>该参数目前不支持修改，无需填写。</p>
                     * @param _backupType <p>该参数目前不支持修改，无需填写。</p>
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>逻辑备份配置</p>
                     * @return LogicBackupConfig <p>逻辑备份配置</p>
                     * 
                     */
                    LogicBackupConfigInfo GetLogicBackupConfig() const;

                    /**
                     * 设置<p>逻辑备份配置</p>
                     * @param _logicBackupConfig <p>逻辑备份配置</p>
                     * 
                     */
                    void SetLogicBackupConfig(const LogicBackupConfigInfo& _logicBackupConfig);

                    /**
                     * 判断参数 LogicBackupConfig 是否已赋值
                     * @return LogicBackupConfig 是否已赋值
                     * 
                     */
                    bool LogicBackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否删除自动逻辑备份</p>
                     * @return DeleteAutoLogicBackup <p>是否删除自动逻辑备份</p>
                     * 
                     */
                    bool GetDeleteAutoLogicBackup() const;

                    /**
                     * 设置<p>是否删除自动逻辑备份</p>
                     * @param _deleteAutoLogicBackup <p>是否删除自动逻辑备份</p>
                     * 
                     */
                    void SetDeleteAutoLogicBackup(const bool& _deleteAutoLogicBackup);

                    /**
                     * 判断参数 DeleteAutoLogicBackup 是否已赋值
                     * @return DeleteAutoLogicBackup 是否已赋值
                     * 
                     */
                    bool DeleteAutoLogicBackupHasBeenSet() const;

                    /**
                     * 获取<p>二级快照备份参数</p>
                     * @return SnapshotSecondaryBackupConfig <p>二级快照备份参数</p>
                     * 
                     */
                    SnapshotBackupConfig GetSnapshotSecondaryBackupConfig() const;

                    /**
                     * 设置<p>二级快照备份参数</p>
                     * @param _snapshotSecondaryBackupConfig <p>二级快照备份参数</p>
                     * 
                     */
                    void SetSnapshotSecondaryBackupConfig(const SnapshotBackupConfig& _snapshotSecondaryBackupConfig);

                    /**
                     * 判断参数 SnapshotSecondaryBackupConfig 是否已赋值
                     * @return SnapshotSecondaryBackupConfig 是否已赋值
                     * 
                     */
                    bool SnapshotSecondaryBackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>稀疏备份配置</p>
                     * @return SparseBackupConfig <p>稀疏备份配置</p>
                     * 
                     */
                    SparseBackupConfig GetSparseBackupConfig() const;

                    /**
                     * 设置<p>稀疏备份配置</p>
                     * @param _sparseBackupConfig <p>稀疏备份配置</p>
                     * 
                     */
                    void SetSparseBackupConfig(const SparseBackupConfig& _sparseBackupConfig);

                    /**
                     * 判断参数 SparseBackupConfig 是否已赋值
                     * @return SparseBackupConfig 是否已赋值
                     * 
                     */
                    bool SparseBackupConfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600<em>24</em>7=604800，最大为158112000</p>
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周一到周日的备份方式，full-全量备份，increment-增量备份</p>
                     */
                    std::vector<std::string> m_backupFreq;
                    bool m_backupFreqHasBeenSet;

                    /**
                     * <p>该参数目前不支持修改，无需填写。</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>逻辑备份配置</p>
                     */
                    LogicBackupConfigInfo m_logicBackupConfig;
                    bool m_logicBackupConfigHasBeenSet;

                    /**
                     * <p>是否删除自动逻辑备份</p>
                     */
                    bool m_deleteAutoLogicBackup;
                    bool m_deleteAutoLogicBackupHasBeenSet;

                    /**
                     * <p>二级快照备份参数</p>
                     */
                    SnapshotBackupConfig m_snapshotSecondaryBackupConfig;
                    bool m_snapshotSecondaryBackupConfigHasBeenSet;

                    /**
                     * <p>稀疏备份配置</p>
                     */
                    SparseBackupConfig m_sparseBackupConfig;
                    bool m_sparseBackupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
