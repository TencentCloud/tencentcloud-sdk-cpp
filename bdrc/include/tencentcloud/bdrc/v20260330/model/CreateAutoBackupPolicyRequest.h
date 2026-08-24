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
                     * 获取通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。
                     * @return IsPermanent 通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。
                     * @param _isPermanent 通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。
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
                     * 获取定期备份策略的名称。
                     * @return AutoBackupPolicyName 定期备份策略的名称。
                     * 
                     */
                    std::string GetAutoBackupPolicyName() const;

                    /**
                     * 设置定期备份策略的名称。
                     * @param _autoBackupPolicyName 定期备份策略的名称。
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
                     * 获取是否激活定期备份策略。
                     * @return IsActivated 是否激活定期备份策略。
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置是否激活定期备份策略。
                     * @param _isActivated 是否激活定期备份策略。
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
                     * 获取通过定期备份策略创建出的备份保留时间。
                     * @return RetentionDays 通过定期备份策略创建出的备份保留时间。
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置通过定期备份策略创建出的备份保留时间。
                     * @param _retentionDays 通过定期备份策略创建出的备份保留时间。
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
                     * 获取该定期备份策略创建的备份可以保留的月数，该参数不可与IsPermanent/RetentionDays参数冲突。
                     * @return RetentionMonths 该定期备份策略创建的备份可以保留的月数，该参数不可与IsPermanent/RetentionDays参数冲突。
                     * 
                     */
                    uint64_t GetRetentionMonths() const;

                    /**
                     * 设置该定期备份策略创建的备份可以保留的月数，该参数不可与IsPermanent/RetentionDays参数冲突。
                     * @param _retentionMonths 该定期备份策略创建的备份可以保留的月数，该参数不可与IsPermanent/RetentionDays参数冲突。
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
                     * 获取通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份，该参数不可与IsPermanent参数冲突。
                     * @return RetentionAmount 通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份，该参数不可与IsPermanent参数冲突。
                     * 
                     */
                    uint64_t GetRetentionAmount() const;

                    /**
                     * 设置通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份，该参数不可与IsPermanent参数冲突。
                     * @param _retentionAmount 通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份，该参数不可与IsPermanent参数冲突。
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
                     * 获取备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON
                     * @return StorageType 备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON
                     * @param _storageType 备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON
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
                     * 获取备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。
                     * @return VaultId 备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。
                     * @param _vaultId 备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。
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
                     * 获取定期备份高级保留策略，该参数不可与IsPermanent参数冲突。
                     * @return AdvancedRetentionPolicy 定期备份高级保留策略，该参数不可与IsPermanent参数冲突。
                     * 
                     */
                    AdvancedRetentionPolicy GetAdvancedRetentionPolicy() const;

                    /**
                     * 设置定期备份高级保留策略，该参数不可与IsPermanent参数冲突。
                     * @param _advancedRetentionPolicy 定期备份高级保留策略，该参数不可与IsPermanent参数冲突。
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
                     * 定期备份的执行策略。
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 通过该定期备份策略创建的备份是否永久保留。false表示非永久保留，true表示永久保留，默认为false。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 定期备份策略的名称。
                     */
                    std::string m_autoBackupPolicyName;
                    bool m_autoBackupPolicyNameHasBeenSet;

                    /**
                     * 是否激活定期备份策略。
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 通过定期备份策略创建出的备份保留时间。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 该定期备份策略创建的备份可以保留的月数，该参数不可与IsPermanent/RetentionDays参数冲突。
                     */
                    uint64_t m_retentionMonths;
                    bool m_retentionMonthsHasBeenSet;

                    /**
                     * 通过该定期备份策略最多保留的备份个数，超过该个数限制后自动删除最先创建的备份，该参数不可与IsPermanent参数冲突。
                     */
                    uint64_t m_retentionAmount;
                    bool m_retentionAmountHasBeenSet;

                    /**
                     * 备份存储类型。COMMON表示走普通模式（不需要备份库），VAULT表示走备份库（必须关联一个备份库）。默认为COMMON
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 备份库ID，创建agent备份策略时必须指定。当StorageType为VAULT时必传。
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 定期备份高级保留策略，该参数不可与IsPermanent参数冲突。
                     */
                    AdvancedRetentionPolicy m_advancedRetentionPolicy;
                    bool m_advancedRetentionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEAUTOBACKUPPOLICYREQUEST_H_
