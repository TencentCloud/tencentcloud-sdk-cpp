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
                     * 获取定期备份策略是否激活。
                     * @return IsActivated 定期备份策略是否激活。
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置定期备份策略是否激活。
                     * @param _isActivated 定期备份策略是否激活。
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
                     * 获取使用该定期备份策略创建出来的备份是否永久保留。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPermanent 使用该定期备份策略创建出来的备份是否永久保留。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置使用该定期备份策略创建出来的备份是否永久保留。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPermanent 使用该定期备份策略创建出来的备份是否永久保留。
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
                     * 获取使用该定期备份策略创建出来的备份是否永久保留。
                     * @return NextTriggerTime 使用该定期备份策略创建出来的备份是否永久保留。
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置使用该定期备份策略创建出来的备份是否永久保留。
                     * @param _nextTriggerTime 使用该定期备份策略创建出来的备份是否永久保留。
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
                     * 获取NORMAL
                     * @return AutoBackupPolicyState NORMAL
                     * 
                     */
                    std::string GetAutoBackupPolicyState() const;

                    /**
                     * 设置NORMAL
                     * @param _autoBackupPolicyState NORMAL
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
                     * 获取备份策略的名称。
                     * @return AutoBackupPolicyName 备份策略的名称。
                     * 
                     */
                    std::string GetAutoBackupPolicyName() const;

                    /**
                     * 设置备份策略的名称。
                     * @param _autoBackupPolicyName 备份策略的名称。
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
                     * 获取定期备份的执行策略。
                     * @return Policy 定期备份的执行策略。
                     * 
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置定期备份的执行策略。
                     * @param _policy 定期备份的执行策略。
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
                     * 获取备份策略ID。
                     * @return AutoBackupPolicyId 备份策略ID。
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置备份策略ID。
                     * @param _autoBackupPolicyId 备份策略ID。
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
                     * 获取备份策略的创建时间。
                     * @return CreateTime 备份策略的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置备份策略的创建时间。
                     * @param _createTime 备份策略的创建时间。
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
                     * 获取使用该定期备份策略创建出来的备份保留天数。
                     * @return RetentionDays 使用该定期备份策略创建出来的备份保留天数。
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置使用该定期备份策略创建出来的备份保留天数。
                     * @param _retentionDays 使用该定期备份策略创建出来的备份保留天数。
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
                     * 获取用户AppId。
                     * @return AppId 用户AppId。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户AppId。
                     * @param _appId 用户AppId。
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
                     * 获取定期备份策略绑定的实例ID列表。
                     * @return InstanceIdSet 定期备份策略绑定的实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置定期备份策略绑定的实例ID列表。
                     * @param _instanceIdSet 定期备份策略绑定的实例ID列表。
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
                     * 获取该定期快照创建的快照最大保留月数
                     * @return RetentionMonths 该定期快照创建的快照最大保留月数
                     * 
                     */
                    uint64_t GetRetentionMonths() const;

                    /**
                     * 设置该定期快照创建的快照最大保留月数
                     * @param _retentionMonths 该定期快照创建的快照最大保留月数
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
                     * 获取该定期快照创建的快照最大保留数量
                     * @return RetentionAmount 该定期快照创建的快照最大保留数量
                     * 
                     */
                    uint64_t GetRetentionAmount() const;

                    /**
                     * 设置该定期快照创建的快照最大保留数量
                     * @param _retentionAmount 该定期快照创建的快照最大保留数量
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
                     * 获取创建人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 创建人。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置创建人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName 创建人。
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
                     * 获取主账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 主账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置主账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 主账号uin。
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
                     * 获取子账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 子账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 子账号uin。
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
                     * 获取策略存储类型
                     * @return StorageType 策略存储类型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置策略存储类型
                     * @param _storageType 策略存储类型
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
                     * 获取备份库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaultId 备份库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vaultId 备份库ID
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
                     * 获取高级保留策略
                     * @return AdvancedRetentionPolicy 高级保留策略
                     * 
                     */
                    AdvancedRetentionPolicy GetAdvancedRetentionPolicy() const;

                    /**
                     * 设置高级保留策略
                     * @param _advancedRetentionPolicy 高级保留策略
                     * 
                     */
                    void SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy);

                    /**
                     * 判断参数 AdvancedRetentionPolicy 是否已赋值
                     * @return AdvancedRetentionPolicy 是否已赋值
                     * 
                     */
                    bool AdvancedRetentionPolicyHasBeenSet() const;

                private:

                    /**
                     * 定期备份策略是否激活。
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 使用该定期备份策略创建出来的备份是否永久保留。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 使用该定期备份策略创建出来的备份是否永久保留。
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * NORMAL
                     */
                    std::string m_autoBackupPolicyState;
                    bool m_autoBackupPolicyStateHasBeenSet;

                    /**
                     * 备份策略的名称。
                     */
                    std::string m_autoBackupPolicyName;
                    bool m_autoBackupPolicyNameHasBeenSet;

                    /**
                     * 定期备份的执行策略。
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 备份策略ID。
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * 备份策略的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 使用该定期备份策略创建出来的备份保留天数。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 用户AppId。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 定期备份策略绑定的实例ID列表。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 该定期快照创建的快照最大保留月数
                     */
                    uint64_t m_retentionMonths;
                    bool m_retentionMonthsHasBeenSet;

                    /**
                     * 该定期快照创建的快照最大保留数量
                     */
                    uint64_t m_retentionAmount;
                    bool m_retentionAmountHasBeenSet;

                    /**
                     * 创建人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 主账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 子账号uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 策略存储类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 备份库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 高级保留策略
                     */
                    AdvancedRetentionPolicy m_advancedRetentionPolicy;
                    bool m_advancedRetentionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOBACKUPPOLICY_H_
