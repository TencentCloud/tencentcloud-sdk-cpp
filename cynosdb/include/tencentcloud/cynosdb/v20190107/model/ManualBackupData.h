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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MANUALBACKUPDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MANUALBACKUPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CrossRegionBackupItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 手动备份任务信息
                */
                class ManualBackupData : public AbstractModel
                {
                public:
                    ManualBackupData();
                    ~ManualBackupData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份类型。snapshot-快照备份
                     * @return BackupType 备份类型。snapshot-快照备份
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型。snapshot-快照备份
                     * @param _backupType 备份类型。snapshot-快照备份
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
                     * 获取备份方式。auto-自动备份，manual-手动
                     * @return BackupMethod 备份方式。auto-自动备份，manual-手动
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式。auto-自动备份，manual-手动
                     * @param _backupMethod 备份方式。auto-自动备份，manual-手动
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取备份时间
                     * @return SnapshotTime 备份时间
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置备份时间
                     * @param _snapshotTime 备份时间
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取跨地域备份项详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossRegionBackupInfos 跨地域备份项详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CrossRegionBackupItem> GetCrossRegionBackupInfos() const;

                    /**
                     * 设置跨地域备份项详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossRegionBackupInfos 跨地域备份项详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossRegionBackupInfos(const std::vector<CrossRegionBackupItem>& _crossRegionBackupInfos);

                    /**
                     * 判断参数 CrossRegionBackupInfos 是否已赋值
                     * @return CrossRegionBackupInfos 是否已赋值
                     * 
                     */
                    bool CrossRegionBackupInfosHasBeenSet() const;

                private:

                    /**
                     * 备份类型。snapshot-快照备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份方式。auto-自动备份，manual-手动
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份时间
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * 跨地域备份项详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CrossRegionBackupItem> m_crossRegionBackupInfos;
                    bool m_crossRegionBackupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MANUALBACKUPDATA_H_
