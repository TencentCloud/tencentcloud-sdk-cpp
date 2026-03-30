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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsoleAccount.h>
#include <tencentcloud/cls/v20201016/model/AnonymousLoginInfo.h>
#include <tencentcloud/cls/v20201016/model/AuthRoleInfo.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AccessControlRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight控制台实例
                */
                class Console : public AbstractModel
                {
                public:
                    Console();
                    ~Console() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DataSight控制台Id</p>
                     * @return ConsoleId <p>DataSight控制台Id</p>
                     * 
                     */
                    std::string GetConsoleId() const;

                    /**
                     * 设置<p>DataSight控制台Id</p>
                     * @param _consoleId <p>DataSight控制台Id</p>
                     * 
                     */
                    void SetConsoleId(const std::string& _consoleId);

                    /**
                     * 判断参数 ConsoleId 是否已赋值
                     * @return ConsoleId 是否已赋值
                     * 
                     */
                    bool ConsoleIdHasBeenSet() const;

                    /**
                     * 获取<p>访问方式：public-公网，internal-内网</p>
                     * @return AccessMode <p>访问方式：public-公网，internal-内网</p>
                     * 
                     */
                    std::vector<std::string> GetAccessMode() const;

                    /**
                     * 设置<p>访问方式：public-公网，internal-内网</p>
                     * @param _accessMode <p>访问方式：public-公网，internal-内网</p>
                     * 
                     */
                    void SetAccessMode(const std::vector<std::string>& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>登录方式：0-账号密码鉴权，1-匿名登录，2-第三方认证登录</p>
                     * @return LoginMode <p>登录方式：0-账号密码鉴权，1-匿名登录，2-第三方认证登录</p>
                     * 
                     */
                    uint64_t GetLoginMode() const;

                    /**
                     * 设置<p>登录方式：0-账号密码鉴权，1-匿名登录，2-第三方认证登录</p>
                     * @param _loginMode <p>登录方式：0-账号密码鉴权，1-匿名登录，2-第三方认证登录</p>
                     * 
                     */
                    void SetLoginMode(const uint64_t& _loginMode);

                    /**
                     * 判断参数 LoginMode 是否已赋值
                     * @return LoginMode 是否已赋值
                     * 
                     */
                    bool LoginModeHasBeenSet() const;

                    /**
                     * 获取<p>自定义域名前缀</p>
                     * @return DomainPrefix <p>自定义域名前缀</p>
                     * 
                     */
                    std::string GetDomainPrefix() const;

                    /**
                     * 设置<p>自定义域名前缀</p>
                     * @param _domainPrefix <p>自定义域名前缀</p>
                     * 
                     */
                    void SetDomainPrefix(const std::string& _domainPrefix);

                    /**
                     * 判断参数 DomainPrefix 是否已赋值
                     * @return DomainPrefix 是否已赋值
                     * 
                     */
                    bool DomainPrefixHasBeenSet() const;

                    /**
                     * 获取<p>用户账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Accounts <p>用户账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsoleAccount> GetAccounts() const;

                    /**
                     * 设置<p>用户账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accounts <p>用户账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccounts(const std::vector<ConsoleAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取<p>内网类型，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntranetType <p>内网类型，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntranetType() const;

                    /**
                     * 设置<p>内网类型，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intranetType <p>内网类型，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntranetType(const uint64_t& _intranetType);

                    /**
                     * 判断参数 IntranetType 是否已赋值
                     * @return IntranetType 是否已赋值
                     * 
                     */
                    bool IntranetTypeHasBeenSet() const;

                    /**
                     * 获取<p>内网地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntranetRegion <p>内网地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntranetRegion() const;

                    /**
                     * 设置<p>内网地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intranetRegion <p>内网地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntranetRegion(const std::string& _intranetRegion);

                    /**
                     * 判断参数 IntranetRegion 是否已赋值
                     * @return IntranetRegion 是否已赋值
                     * 
                     */
                    bool IntranetRegionHasBeenSet() const;

                    /**
                     * 获取<p>内网私有网络VpcId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>内网私有网络VpcId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>内网私有网络VpcId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>内网私有网络VpcId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>内网子网SubnetId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId <p>内网子网SubnetId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>内网子网SubnetId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId <p>内网子网SubnetId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>匿名登录账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnonymousLogin <p>匿名登录账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AnonymousLoginInfo GetAnonymousLogin() const;

                    /**
                     * 设置<p>匿名登录账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anonymousLogin <p>匿名登录账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnonymousLogin(const AnonymousLoginInfo& _anonymousLogin);

                    /**
                     * 判断参数 AnonymousLogin 是否已赋值
                     * @return AnonymousLogin 是否已赋值
                     * 
                     */
                    bool AnonymousLoginHasBeenSet() const;

                    /**
                     * 获取<p>auth用户角色信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthRoles <p>auth用户角色信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuthRoleInfo> GetAuthRoles() const;

                    /**
                     * 设置<p>auth用户角色信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authRoles <p>auth用户角色信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthRoles(const std::vector<AuthRoleInfo>& _authRoles);

                    /**
                     * 判断参数 AuthRoles 是否已赋值
                     * @return AuthRoles 是否已赋值
                     * 
                     */
                    bool AuthRolesHasBeenSet() const;

                    /**
                     * 获取<p>绑定的标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>绑定的标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>绑定的标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>绑定的标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>自定义隐藏参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HideParams <p>自定义隐藏参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHideParams() const;

                    /**
                     * 设置<p>自定义隐藏参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hideParams <p>自定义隐藏参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHideParams(const std::vector<std::string>& _hideParams);

                    /**
                     * 判断参数 HideParams 是否已赋值
                     * @return HideParams 是否已赋值
                     * 
                     */
                    bool HideParamsHasBeenSet() const;

                    /**
                     * 获取<p>访问控制规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessControlRules <p>访问控制规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置<p>访问控制规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessControlRules <p>访问控制规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessControlRules(const std::vector<AccessControlRule>& _accessControlRules);

                    /**
                     * 判断参数 AccessControlRules 是否已赋值
                     * @return AccessControlRules 是否已赋值
                     * 
                     */
                    bool AccessControlRulesHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remarks <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remarks <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取<p>自定义显示菜单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Menus <p>自定义显示菜单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMenus() const;

                    /**
                     * 设置<p>自定义显示菜单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _menus <p>自定义显示菜单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMenus(const std::vector<std::string>& _menus);

                    /**
                     * 判断参数 Menus 是否已赋值
                     * @return Menus 是否已赋值
                     * 
                     */
                    bool MenusHasBeenSet() const;

                private:

                    /**
                     * <p>DataSight控制台Id</p>
                     */
                    std::string m_consoleId;
                    bool m_consoleIdHasBeenSet;

                    /**
                     * <p>访问方式：public-公网，internal-内网</p>
                     */
                    std::vector<std::string> m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>登录方式：0-账号密码鉴权，1-匿名登录，2-第三方认证登录</p>
                     */
                    uint64_t m_loginMode;
                    bool m_loginModeHasBeenSet;

                    /**
                     * <p>自定义域名前缀</p>
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * <p>用户账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsoleAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>内网类型，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intranetType;
                    bool m_intranetTypeHasBeenSet;

                    /**
                     * <p>内网地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intranetRegion;
                    bool m_intranetRegionHasBeenSet;

                    /**
                     * <p>内网私有网络VpcId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>内网子网SubnetId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>匿名登录账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AnonymousLoginInfo m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * <p>auth用户角色信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuthRoleInfo> m_authRoles;
                    bool m_authRolesHasBeenSet;

                    /**
                     * <p>绑定的标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自定义隐藏参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hideParams;
                    bool m_hideParamsHasBeenSet;

                    /**
                     * <p>访问控制规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>自定义显示菜单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_menus;
                    bool m_menusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_
