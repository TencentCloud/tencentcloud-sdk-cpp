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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * RevertDspmAssetAccount请求参数结构体
                */
                class RevertDspmAssetAccountRequest : public AbstractModel
                {
                public:
                    RevertDspmAssetAccountRequest();
                    ~RevertDspmAssetAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return AssetId 实例id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置实例id
                     * @param _assetId 实例id
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
                     * 获取是否回退权限
                     * @return PrivilegeFlag 是否回退权限
                     * 
                     */
                    int64_t GetPrivilegeFlag() const;

                    /**
                     * 设置是否回退权限
                     * @param _privilegeFlag 是否回退权限
                     * 
                     */
                    void SetPrivilegeFlag(const int64_t& _privilegeFlag);

                    /**
                     * 判断参数 PrivilegeFlag 是否已赋值
                     * @return PrivilegeFlag 是否已赋值
                     * 
                     */
                    bool PrivilegeFlagHasBeenSet() const;

                    /**
                     * 获取是否回退密码
                     * @return PasswordFlag 是否回退密码
                     * 
                     */
                    int64_t GetPasswordFlag() const;

                    /**
                     * 设置是否回退密码
                     * @param _passwordFlag 是否回退密码
                     * 
                     */
                    void SetPasswordFlag(const int64_t& _passwordFlag);

                    /**
                     * 判断参数 PasswordFlag 是否已赋值
                     * @return PasswordFlag 是否已赋值
                     * 
                     */
                    bool PasswordFlagHasBeenSet() const;

                    /**
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险id
                     * @param _riskId 风险id
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

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
                     * 是否回退权限
                     */
                    int64_t m_privilegeFlag;
                    bool m_privilegeFlagHasBeenSet;

                    /**
                     * 是否回退密码
                     */
                    int64_t m_passwordFlag;
                    bool m_passwordFlagHasBeenSet;

                    /**
                     * 风险id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_
