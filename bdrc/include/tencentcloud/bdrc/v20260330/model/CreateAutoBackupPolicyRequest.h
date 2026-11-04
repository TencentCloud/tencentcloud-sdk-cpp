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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEAUTOBACKUPPOLICYREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEAUTOBACKUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAutoBackupPolicy请求参数结构体
                */
                class CreateAutoBackupPolicyRequest : public AbstractModel
                {
                public:
                    CreateAutoBackupPolicyRequest();
                    ~CreateAutoBackupPolicyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。</p>
                     * @return IsPermanent <p>通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。</p>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。</p>
                     * @param _isPermanent <p>通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。</p>
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
                     * 获取<p>定期备份策略的名称。</p>
                     * @return AutoBackupPolicyName <p>定期备份策略的名称。</p>
                     * 
                     */
                    std::string GetAutoBackupPolicyName() const;

                    /**
                     * 设置<p>定期备份策略的名称。</p>
                     * @param _autoBackupPolicyName <p>定期备份策略的名称。</p>
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
                     * 获取<p>是否激活定期备份策略。</p>
                     * @return IsActivated <p>是否激活定期备份策略。</p>
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置<p>是否激活定期备份策略。</p>
                     * @param _isActivated <p>是否激活定期备份策略。</p>
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
                     * 获取<p>通过定期备份策略创建出的备份保留时间。本参数与 RetentionMonths、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @return RetentionDays <p>通过定期备份策略创建出的备份保留时间。本参数与 RetentionMonths、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置<p>通过定期备份策略创建出的备份保留时间。本参数与 RetentionMonths、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @param _retentionDays <p>通过定期备份策略创建出的备份保留时间。本参数与 RetentionMonths、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
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
                     * 获取<p>该定期备份策略创建的备份可以保留的月数。本参数与 RetentionDays、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @return RetentionMonths <p>该定期备份策略创建的备份可以保留的月数。本参数与 RetentionDays、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * 
                     */
                    uint64_t GetRetentionMonths() const;

                    /**
                     * 设置<p>该定期备份策略创建的备份可以保留的月数。本参数与 RetentionDays、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @param _retentionMonths <p>该定期备份策略创建的备份可以保留的月数。本参数与 RetentionDays、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
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
                     * 获取<p>通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份。本参数与 RetentionDays、RetentionMonths互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @return RetentionAmount <p>通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份。本参数与 RetentionDays、RetentionMonths互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * 
                     */
                    uint64_t GetRetentionAmount() const;

                    /**
                     * 设置<p>通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份。本参数与 RetentionDays、RetentionMonths互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     * @param _retentionAmount <p>通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份。本参数与 RetentionDays、RetentionMonths互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
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
                     * 获取<p>备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON</p>
                     * @return StorageType <p>备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON</p>
                     * @param _storageType <p>备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON</p>
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
                     * 获取<p>备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。</p>
                     * @return VaultId <p>备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。</p>
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。</p>
                     * @param _vaultId <p>备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。</p>
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
                     * 获取<p>定期备份高级保留策略，该参数不可与 IsPermanent 参数冲突。当 IsPermanent 为 false 或不传、且未传入 RetentionDays / RetentionMonths / RetentionAmount 时，必须传入本参数。</p>
                     * @return AdvancedRetentionPolicy <p>定期备份高级保留策略，该参数不可与 IsPermanent 参数冲突。当 IsPermanent 为 false 或不传、且未传入 RetentionDays / RetentionMonths / RetentionAmount 时，必须传入本参数。</p>
                     * 
                     */
                    AdvancedRetentionPolicy GetAdvancedRetentionPolicy() const;

                    /**
                     * 设置<p>定期备份高级保留策略，该参数不可与 IsPermanent 参数冲突。当 IsPermanent 为 false 或不传、且未传入 RetentionDays / RetentionMonths / RetentionAmount 时，必须传入本参数。</p>
                     * @param _advancedRetentionPolicy <p>定期备份高级保留策略，该参数不可与 IsPermanent 参数冲突。当 IsPermanent 为 false 或不传、且未传入 RetentionDays / RetentionMonths / RetentionAmount 时，必须传入本参数。</p>
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
                     * <p>定期备份的执行策略。</p>
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。</p>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>定期备份策略的名称。</p>
                     */
                    std::string m_autoBackupPolicyName;
                    bool m_autoBackupPolicyNameHasBeenSet;

                    /**
                     * <p>是否激活定期备份策略。</p>
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * <p>通过定期备份策略创建出的备份保留时间。本参数与 RetentionMonths、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * <p>该定期备份策略创建的备份可以保留的月数。本参数与 RetentionDays、RetentionAmount 互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     */
                    uint64_t m_retentionMonths;
                    bool m_retentionMonthsHasBeenSet;

                    /**
                     * <p>通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份。本参数与 RetentionDays、RetentionMonths互斥，不可同时传入。当 IsPermanent 为 false 或不传时，RetentionDays / RetentionMonths / RetentionAmount / AdvancedRetentionPolicy 必须传入至少一项有效值。</p>
                     */
                    uint64_t m_retentionAmount;
                    bool m_retentionAmountHasBeenSet;

                    /**
                     * <p>备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。</p>
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>定期备份高级保留策略，该参数不可与 IsPermanent 参数冲突。当 IsPermanent 为 false 或不传、且未传入 RetentionDays / RetentionMonths / RetentionAmount 时，必须传入本参数。</p>
                     */
                    AdvancedRetentionPolicy m_advancedRetentionPolicy;
                    bool m_advancedRetentionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEAUTOBACKUPPOLICYREQUEST_H_
