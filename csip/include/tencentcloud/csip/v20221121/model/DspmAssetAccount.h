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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产账号信息
                */
                class DspmAssetAccount : public AbstractModel
                {
                public:
                    DspmAssetAccount();
                    ~DspmAssetAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号名
                     * @return Account 账号名
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号名
                     * @param _account 账号名
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取主机地址
                     * @return Host 主机地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机地址
                     * @param _host 主机地址
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * @return AccountType 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * @param _accountType 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取所属对象。uin或个人id
                     * @return Subject 所属对象。uin或个人id
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置所属对象。uin或个人id
                     * @param _subject 所属对象。uin或个人id
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取权限信息
                     * @return Privilege 权限信息
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置权限信息
                     * @param _privilege 权限信息
                     * 
                     */
                    void SetPrivilege(const DspmDbAccountPrivilege& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取状态。 0-不活跃 1-活跃 2-已删除
                     * @return Status 状态。 0-不活跃 1-活跃 2-已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态。 0-不活跃 1-活跃 2-已删除
                     * @param _status 状态。 0-不活跃 1-活跃 2-已删除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账号创建时间。
                     * @return CreateTime 账号创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账号创建时间。
                     * @param _createTime 账号创建时间。
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
                     * 获取访问权限生效时间。
                     * @return ValidateFrom 访问权限生效时间。
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置访问权限生效时间。
                     * @param _validateFrom 访问权限生效时间。
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取访问权限失效时间。
                     * @return ValidateTo 访问权限失效时间。
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置访问权限失效时间。
                     * @param _validateTo 访问权限失效时间。
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取是否新账号
                     * @return IsNewAccount 是否新账号
                     * 
                     */
                    int64_t GetIsNewAccount() const;

                    /**
                     * 设置是否新账号
                     * @param _isNewAccount 是否新账号
                     * 
                     */
                    void SetIsNewAccount(const int64_t& _isNewAccount);

                    /**
                     * 判断参数 IsNewAccount 是否已赋值
                     * @return IsNewAccount 是否已赋值
                     * 
                     */
                    bool IsNewAccountHasBeenSet() const;

                    /**
                     * 获取身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @return IdentifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @param _identifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户。
                     * @return OwnerUin 所属云账号uin用户。
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户。
                     * @param _ownerUin 所属云账号uin用户。
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取所属个人用户信息。
                     * @return Person 所属个人用户信息。
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息。
                     * @param _person 所属个人用户信息。
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取风险统计信息
                     * @return RiskCount 风险统计信息
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置风险统计信息
                     * @param _riskCount 风险统计信息
                     * 
                     */
                    void SetRiskCount(const DspmRiskCount& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取预设权限。
                     * @return PresetPrivilege 预设权限。
                     * 
                     */
                    DspmDbAccountPrivilege GetPresetPrivilege() const;

                    /**
                     * 设置预设权限。
                     * @param _presetPrivilege 预设权限。
                     * 
                     */
                    void SetPresetPrivilege(const DspmDbAccountPrivilege& _presetPrivilege);

                    /**
                     * 判断参数 PresetPrivilege 是否已赋值
                     * @return PresetPrivilege 是否已赋值
                     * 
                     */
                    bool PresetPrivilegeHasBeenSet() const;

                private:

                    /**
                     * 账号名
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号类型。 0-未定义 1-服务账号 2-个人账号 3-临时账号
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 所属对象。uin或个人id
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 权限信息
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 状态。 0-不活跃 1-活跃 2-已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 访问权限生效时间。
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 访问权限失效时间。
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 是否新账号
                     */
                    int64_t m_isNewAccount;
                    bool m_isNewAccountHasBeenSet;

                    /**
                     * 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 所属云账号uin用户。
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 所属个人用户信息。
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 风险统计信息
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 预设权限。
                     */
                    DspmDbAccountPrivilege m_presetPrivilege;
                    bool m_presetPrivilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_
