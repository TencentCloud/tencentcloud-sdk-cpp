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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINSTANCE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 描述实例的备份信息
                */
                class BackupInstance : public AbstractModel
                {
                public:
                    BackupInstance();
                    ~BackupInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例绑定的定期备份策略列表。</p>
                     * @return AutoBackupPolicyIdSet <p>实例绑定的定期备份策略列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAutoBackupPolicyIdSet() const;

                    /**
                     * 设置<p>实例绑定的定期备份策略列表。</p>
                     * @param _autoBackupPolicyIdSet <p>实例绑定的定期备份策略列表。</p>
                     * 
                     */
                    void SetAutoBackupPolicyIdSet(const std::vector<std::string>& _autoBackupPolicyIdSet);

                    /**
                     * 判断参数 AutoBackupPolicyIdSet 是否已赋值
                     * @return AutoBackupPolicyIdSet 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyIdSetHasBeenSet() const;

                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>用户AppId。</p>
                     * @return AppId <p>用户AppId。</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户AppId。</p>
                     * @param _appId <p>用户AppId。</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>实例最新备份时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestBackupTime <p>实例最新备份时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestBackupTime() const;

                    /**
                     * 设置<p>实例最新备份时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestBackupTime <p>实例最新备份时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestBackupTime(const std::string& _latestBackupTime);

                    /**
                     * 判断参数 LatestBackupTime 是否已赋值
                     * @return LatestBackupTime 是否已赋值
                     * 
                     */
                    bool LatestBackupTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例的备份组ID列表。</p>
                     * @return BackupGroupIdSet <p>实例的备份组ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetBackupGroupIdSet() const;

                    /**
                     * 设置<p>实例的备份组ID列表。</p>
                     * @param _backupGroupIdSet <p>实例的备份组ID列表。</p>
                     * 
                     */
                    void SetBackupGroupIdSet(const std::vector<std::string>& _backupGroupIdSet);

                    /**
                     * 判断参数 BackupGroupIdSet 是否已赋值
                     * @return BackupGroupIdSet 是否已赋值
                     * 
                     */
                    bool BackupGroupIdSetHasBeenSet() const;

                    /**
                     * 获取<p>修改时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime <p>修改时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime <p>修改时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>备份数据量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupSizeMb <p>备份数据量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupSizeMb() const;

                    /**
                     * 设置<p>备份数据量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupSizeMb <p>备份数据量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupSizeMb(const int64_t& _backupSizeMb);

                    /**
                     * 判断参数 BackupSizeMb 是否已赋值
                     * @return BackupSizeMb 是否已赋值
                     * 
                     */
                    bool BackupSizeMbHasBeenSet() const;

                private:

                    /**
                     * <p>实例绑定的定期备份策略列表。</p>
                     */
                    std::vector<std::string> m_autoBackupPolicyIdSet;
                    bool m_autoBackupPolicyIdSetHasBeenSet;

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户AppId。</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例最新备份时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestBackupTime;
                    bool m_latestBackupTimeHasBeenSet;

                    /**
                     * <p>实例的备份组ID列表。</p>
                     */
                    std::vector<std::string> m_backupGroupIdSet;
                    bool m_backupGroupIdSetHasBeenSet;

                    /**
                     * <p>修改时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>备份数据量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupSizeMb;
                    bool m_backupSizeMbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPINSTANCE_H_
