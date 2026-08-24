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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPDETAIL_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ApplyDisk.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份详情
                */
                class BackupDetail : public AbstractModel
                {
                public:
                    BackupDetail();
                    ~BackupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份组ID
                     * @return BackupId 备份组ID
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份组ID
                     * @param _backupId 备份组ID
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取备份策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoBackupPolicyId 备份策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置备份策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoBackupPolicyId 备份策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoBackupPolicyId(const std::string& _autoBackupPolicyId);

                    /**
                     * 判断参数 AutoBackupPolicyId 是否已赋值
                     * @return AutoBackupPolicyId 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyIdHasBeenSet() const;

                    /**
                     * 获取备份和云盘绑定关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupBindDisk 备份和云盘绑定关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApplyDisk> GetBackupBindDisk() const;

                    /**
                     * 设置备份和云盘绑定关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupBindDisk 备份和云盘绑定关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupBindDisk(const std::vector<ApplyDisk>& _backupBindDisk);

                    /**
                     * 判断参数 BackupBindDisk 是否已赋值
                     * @return BackupBindDisk 是否已赋值
                     * 
                     */
                    bool BackupBindDiskHasBeenSet() const;

                private:

                    /**
                     * 备份组ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 备份策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * 备份和云盘绑定关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplyDisk> m_backupBindDisk;
                    bool m_backupBindDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPDETAIL_H_
