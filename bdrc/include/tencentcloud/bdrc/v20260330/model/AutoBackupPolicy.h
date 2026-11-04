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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOBACKUPPOLICY_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOBACKUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/Policy.h>
#include <tencentcloud/bdrc/v20260330/model/AdvancedRetentionPolicy.h>
#include <tencentcloud/bdrc/v20260330/model/BackupResourceInfo.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 定期备份策略的详细信息
                */
                class AutoBackupPolicy : public AbstractModel
                {
                public:
                    AutoBackupPolicy();
                    ~AutoBackupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定期备份策略是否激活。</p>
                     * @return IsActivated <p>定期备份策略是否激活。</p>
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置<p>定期备份策略是否激活。</p>
                     * @param _isActivated <p>定期备份策略是否激活。</p>
                     * 
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取<p>使用该定期备份策略创建出来的备份是否永久保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPermanent <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>使用该定期备份策略创建出来的备份是否永久保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPermanent <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取<p>使用该定期备份策略创建出来的备份是否永久保留。</p>
                     * @return NextTriggerTime <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置<p>使用该定期备份策略创建出来的备份是否永久保留。</p>
                     * @param _nextTriggerTime <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
                     * 
                     */
                    void SetNextTriggerTime(const std::string& _nextTriggerTime);

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                    /**
                     * 获取<p>NORMAL</p>
                     * @return AutoBackupPolicyState <p>NORMAL</p>
                     * 
                     */
                    std::string GetAutoBackupPolicyState() const;

                    /**
                     * 设置<p>NORMAL</p>
                     * @param _autoBackupPolicyState <p>NORMAL</p>
                     * 
                     */
                    void SetAutoBackupPolicyState(const std::string& _autoBackupPolicyState);

                    /**
                     * 判断参数 AutoBackupPolicyState 是否已赋值
                     * @return AutoBackupPolicyState 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyStateHasBeenSet() const;

                    /**
                     * 获取<p>备份策略的名称。</p>
                     * @return AutoBackupPolicyName <p>备份策略的名称。</p>
                     * 
                     */
                    std::string GetAutoBackupPolicyName() const;

                    /**
                     * 设置<p>备份策略的名称。</p>
                     * @param _autoBackupPolicyName <p>备份策略的名称。</p>
                     * 
                     */
                    void SetAutoBackupPolicyName(const std::string& _autoBackupPolicyName);

                    /**
                     * 判断参数 AutoBackupPolicyName 是否已赋值
                     * @return AutoBackupPolicyName 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>定期备份的执行策略。</p>
                     * @return Policy <p>定期备份的执行策略。</p>
                     * 
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置<p>定期备份的执行策略。</p>
                     * @param _policy <p>定期备份的执行策略。</p>
                     * 
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>备份策略ID。</p>
                     * @return AutoBackupPolicyId <p>备份策略ID。</p>
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置<p>备份策略ID。</p>
                     * @param _autoBackupPolicyId <p>备份策略ID。</p>
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
                     * 获取<p>备份策略的创建时间。</p>
                     * @return CreateTime <p>备份策略的创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>备份策略的创建时间。</p>
                     * @param _createTime <p>备份策略的创建时间。</p>
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
                     * 获取<p>使用该定期备份策略创建出来的备份保留天数。</p>
                     * @return RetentionDays <p>使用该定期备份策略创建出来的备份保留天数。</p>
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置<p>使用该定期备份策略创建出来的备份保留天数。</p>
                     * @param _retentionDays <p>使用该定期备份策略创建出来的备份保留天数。</p>
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

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
                     * 获取<p>定期备份策略绑定的实例ID列表。</p>
                     * @return InstanceIdSet <p>定期备份策略绑定的实例ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置<p>定期备份策略绑定的实例ID列表。</p>
                     * @param _instanceIdSet <p>定期备份策略绑定的实例ID列表。</p>
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取<p>使用该定期备份策略创建的备份最大保留月数</p>
                     * @return RetentionMonths <p>使用该定期备份策略创建的备份最大保留月数</p>
                     * 
                     */
                    uint64_t GetRetentionMonths() const;

                    /**
                     * 设置<p>使用该定期备份策略创建的备份最大保留月数</p>
                     * @param _retentionMonths <p>使用该定期备份策略创建的备份最大保留月数</p>
                     * 
                     */
                    void SetRetentionMonths(const uint64_t& _retentionMonths);

                    /**
                     * 判断参数 RetentionMonths 是否已赋值
                     * @return RetentionMonths 是否已赋值
                     * 
                     */
                    bool RetentionMonthsHasBeenSet() const;

                    /**
                     * 获取<p>使用该定期备份策略创建的备份最大保留数量</p>
                     * @return RetentionAmount <p>使用该定期备份策略创建的备份最大保留数量</p>
                     * 
                     */
                    uint64_t GetRetentionAmount() const;

                    /**
                     * 设置<p>使用该定期备份策略创建的备份最大保留数量</p>
                     * @param _retentionAmount <p>使用该定期备份策略创建的备份最大保留数量</p>
                     * 
                     */
                    void SetRetentionAmount(const uint64_t& _retentionAmount);

                    /**
                     * 判断参数 RetentionAmount 是否已赋值
                     * @return RetentionAmount 是否已赋值
                     * 
                     */
                    bool RetentionAmountHasBeenSet() const;

                    /**
                     * 获取<p>创建人。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName <p>创建人。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>创建人。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName <p>创建人。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置<p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取<p>子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin <p>子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin <p>子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>策略存储类型</p>
                     * @return StorageType <p>策略存储类型</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>策略存储类型</p>
                     * @param _storageType <p>策略存储类型</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份库ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaultId <p>备份库ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>备份库ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vaultId <p>备份库ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取<p>高级保留策略</p>
                     * @return AdvancedRetentionPolicy <p>高级保留策略</p>
                     * 
                     */
                    AdvancedRetentionPolicy GetAdvancedRetentionPolicy() const;

                    /**
                     * 设置<p>高级保留策略</p>
                     * @param _advancedRetentionPolicy <p>高级保留策略</p>
                     * 
                     */
                    void SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy);

                    /**
                     * 判断参数 AdvancedRetentionPolicy 是否已赋值
                     * @return AdvancedRetentionPolicy 是否已赋值
                     * 
                     */
                    bool AdvancedRetentionPolicyHasBeenSet() const;

                    /**
                     * 获取<p>备份资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupResourceInfos <p>备份资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackupResourceInfo> GetBackupResourceInfos() const;

                    /**
                     * 设置<p>备份资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupResourceInfos <p>备份资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupResourceInfos(const std::vector<BackupResourceInfo>& _backupResourceInfos);

                    /**
                     * 判断参数 BackupResourceInfos 是否已赋值
                     * @return BackupResourceInfos 是否已赋值
                     * 
                     */
                    bool BackupResourceInfosHasBeenSet() const;

                private:

                    /**
                     * <p>定期备份策略是否激活。</p>
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>使用该定期备份策略创建出来的备份是否永久保留。</p>
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * <p>NORMAL</p>
                     */
                    std::string m_autoBackupPolicyState;
                    bool m_autoBackupPolicyStateHasBeenSet;

                    /**
                     * <p>备份策略的名称。</p>
                     */
                    std::string m_autoBackupPolicyName;
                    bool m_autoBackupPolicyNameHasBeenSet;

                    /**
                     * <p>定期备份的执行策略。</p>
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>备份策略ID。</p>
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * <p>备份策略的创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>使用该定期备份策略创建出来的备份保留天数。</p>
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * <p>用户AppId。</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>定期备份策略绑定的实例ID列表。</p>
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * <p>使用该定期备份策略创建的备份最大保留月数</p>
                     */
                    uint64_t m_retentionMonths;
                    bool m_retentionMonthsHasBeenSet;

                    /**
                     * <p>使用该定期备份策略创建的备份最大保留数量</p>
                     */
                    uint64_t m_retentionAmount;
                    bool m_retentionAmountHasBeenSet;

                    /**
                     * <p>创建人。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>主账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * <p>子账号uin。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>策略存储类型</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>备份库ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>高级保留策略</p>
                     */
                    AdvancedRetentionPolicy m_advancedRetentionPolicy;
                    bool m_advancedRetentionPolicyHasBeenSet;

                    /**
                     * <p>备份资源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackupResourceInfo> m_backupResourceInfos;
                    bool m_backupResourceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOBACKUPPOLICY_H_
