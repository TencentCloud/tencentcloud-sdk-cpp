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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例备份统计项
                */
                class BackupSummaryItem : public AbstractModel
                {
                public:
                    BackupSummaryItem();
                    ~BackupSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取该实例自动数据备份的个数。
                     * @return AutoBackupCount 该实例自动数据备份的个数。
                     * 
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 设置该实例自动数据备份的个数。
                     * @param _autoBackupCount 该实例自动数据备份的个数。
                     * 
                     */
                    void SetAutoBackupCount(const int64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取该实例自动数据备份的容量。
                     * @return AutoBackupVolume 该实例自动数据备份的容量。
                     * 
                     */
                    int64_t GetAutoBackupVolume() const;

                    /**
                     * 设置该实例自动数据备份的容量。
                     * @param _autoBackupVolume 该实例自动数据备份的容量。
                     * 
                     */
                    void SetAutoBackupVolume(const int64_t& _autoBackupVolume);

                    /**
                     * 判断参数 AutoBackupVolume 是否已赋值
                     * @return AutoBackupVolume 是否已赋值
                     * 
                     */
                    bool AutoBackupVolumeHasBeenSet() const;

                    /**
                     * 获取该实例手动数据备份的个数。
                     * @return ManualBackupCount 该实例手动数据备份的个数。
                     * 
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 设置该实例手动数据备份的个数。
                     * @param _manualBackupCount 该实例手动数据备份的个数。
                     * 
                     */
                    void SetManualBackupCount(const int64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取该实例手动数据备份的容量。
                     * @return ManualBackupVolume 该实例手动数据备份的容量。
                     * 
                     */
                    int64_t GetManualBackupVolume() const;

                    /**
                     * 设置该实例手动数据备份的容量。
                     * @param _manualBackupVolume 该实例手动数据备份的容量。
                     * 
                     */
                    void SetManualBackupVolume(const int64_t& _manualBackupVolume);

                    /**
                     * 判断参数 ManualBackupVolume 是否已赋值
                     * @return ManualBackupVolume 是否已赋值
                     * 
                     */
                    bool ManualBackupVolumeHasBeenSet() const;

                    /**
                     * 获取该实例总的数据备份（包含自动备份和手动备份）个数。
                     * @return DataBackupCount 该实例总的数据备份（包含自动备份和手动备份）个数。
                     * 
                     */
                    int64_t GetDataBackupCount() const;

                    /**
                     * 设置该实例总的数据备份（包含自动备份和手动备份）个数。
                     * @param _dataBackupCount 该实例总的数据备份（包含自动备份和手动备份）个数。
                     * 
                     */
                    void SetDataBackupCount(const int64_t& _dataBackupCount);

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取该实例总的数据备份容量。
                     * @return DataBackupVolume 该实例总的数据备份容量。
                     * 
                     */
                    int64_t GetDataBackupVolume() const;

                    /**
                     * 设置该实例总的数据备份容量。
                     * @param _dataBackupVolume 该实例总的数据备份容量。
                     * 
                     */
                    void SetDataBackupVolume(const int64_t& _dataBackupVolume);

                    /**
                     * 判断参数 DataBackupVolume 是否已赋值
                     * @return DataBackupVolume 是否已赋值
                     * 
                     */
                    bool DataBackupVolumeHasBeenSet() const;

                    /**
                     * 获取该实例日志备份的个数。
                     * @return BinlogBackupCount 该实例日志备份的个数。
                     * 
                     */
                    int64_t GetBinlogBackupCount() const;

                    /**
                     * 设置该实例日志备份的个数。
                     * @param _binlogBackupCount 该实例日志备份的个数。
                     * 
                     */
                    void SetBinlogBackupCount(const int64_t& _binlogBackupCount);

                    /**
                     * 判断参数 BinlogBackupCount 是否已赋值
                     * @return BinlogBackupCount 是否已赋值
                     * 
                     */
                    bool BinlogBackupCountHasBeenSet() const;

                    /**
                     * 获取该实例日志备份的容量。
                     * @return BinlogBackupVolume 该实例日志备份的容量。
                     * 
                     */
                    int64_t GetBinlogBackupVolume() const;

                    /**
                     * 设置该实例日志备份的容量。
                     * @param _binlogBackupVolume 该实例日志备份的容量。
                     * 
                     */
                    void SetBinlogBackupVolume(const int64_t& _binlogBackupVolume);

                    /**
                     * 判断参数 BinlogBackupVolume 是否已赋值
                     * @return BinlogBackupVolume 是否已赋值
                     * 
                     */
                    bool BinlogBackupVolumeHasBeenSet() const;

                    /**
                     * 获取该实例的总备份（包含数据备份和日志备份）占用容量。
                     * @return BackupVolume 该实例的总备份（包含数据备份和日志备份）占用容量。
                     * 
                     */
                    int64_t GetBackupVolume() const;

                    /**
                     * 设置该实例的总备份（包含数据备份和日志备份）占用容量。
                     * @param _backupVolume 该实例的总备份（包含数据备份和日志备份）占用容量。
                     * 
                     */
                    void SetBackupVolume(const int64_t& _backupVolume);

                    /**
                     * 判断参数 BackupVolume 是否已赋值
                     * @return BackupVolume 是否已赋值
                     * 
                     */
                    bool BackupVolumeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 该实例自动数据备份的个数。
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 该实例自动数据备份的容量。
                     */
                    int64_t m_autoBackupVolume;
                    bool m_autoBackupVolumeHasBeenSet;

                    /**
                     * 该实例手动数据备份的个数。
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * 该实例手动数据备份的容量。
                     */
                    int64_t m_manualBackupVolume;
                    bool m_manualBackupVolumeHasBeenSet;

                    /**
                     * 该实例总的数据备份（包含自动备份和手动备份）个数。
                     */
                    int64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 该实例总的数据备份容量。
                     */
                    int64_t m_dataBackupVolume;
                    bool m_dataBackupVolumeHasBeenSet;

                    /**
                     * 该实例日志备份的个数。
                     */
                    int64_t m_binlogBackupCount;
                    bool m_binlogBackupCountHasBeenSet;

                    /**
                     * 该实例日志备份的容量。
                     */
                    int64_t m_binlogBackupVolume;
                    bool m_binlogBackupVolumeHasBeenSet;

                    /**
                     * 该实例的总备份（包含数据备份和日志备份）占用容量。
                     */
                    int64_t m_backupVolume;
                    bool m_backupVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_
