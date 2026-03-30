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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsoleAccount.h>
#include <tencentcloud/cls/v20201016/model/AnonymousLoginInfo.h>
#include <tencentcloud/cls/v20201016/model/AuthRoleInfo.h>
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
                * ModifyConsole请求参数结构体
                */
                class ModifyConsoleRequest : public AbstractModel
                {
                public:
                    ModifyConsoleRequest();
                    ~ModifyConsoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DataSight控制台ConsoleId</p>
                     * @return ConsoleId <p>DataSight控制台ConsoleId</p>
                     * 
                     */
                    std::string GetConsoleId() const;

                    /**
                     * 设置<p>DataSight控制台ConsoleId</p>
                     * @param _consoleId <p>DataSight控制台ConsoleId</p>
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
                     * 获取<p>访问方式：public - 公网，internal - 内网</p>
                     * @return AccessMode <p>访问方式：public - 公网，internal - 内网</p>
                     * 
                     */
                    std::vector<std::string> GetAccessMode() const;

                    /**
                     * 设置<p>访问方式：public - 公网，internal - 内网</p>
                     * @param _accessMode <p>访问方式：public - 公网，internal - 内网</p>
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
                     * 获取<p>登录方式：0 - 账号密码鉴权，1 - 匿名登陆，2 - 第三方认证登录</p>
                     * @return LoginMode <p>登录方式：0 - 账号密码鉴权，1 - 匿名登陆，2 - 第三方认证登录</p>
                     * 
                     */
                    uint64_t GetLoginMode() const;

                    /**
                     * 设置<p>登录方式：0 - 账号密码鉴权，1 - 匿名登陆，2 - 第三方认证登录</p>
                     * @param _loginMode <p>登录方式：0 - 账号密码鉴权，1 - 匿名登陆，2 - 第三方认证登录</p>
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
                     * 获取<p>用户账号信息</p><p>“账号密码鉴权“登录方式必传</p>
                     * @return Accounts <p>用户账号信息</p><p>“账号密码鉴权“登录方式必传</p>
                     * 
                     */
                    std::vector<ConsoleAccount> GetAccounts() const;

                    /**
                     * 设置<p>用户账号信息</p><p>“账号密码鉴权“登录方式必传</p>
                     * @param _accounts <p>用户账号信息</p><p>“账号密码鉴权“登录方式必传</p>
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
                     * 获取<p>匿名登录账号信息</p><p>“匿名登录”登录方式必传</p>
                     * @return AnonymousLogin <p>匿名登录账号信息</p><p>“匿名登录”登录方式必传</p>
                     * 
                     */
                    AnonymousLoginInfo GetAnonymousLogin() const;

                    /**
                     * 设置<p>匿名登录账号信息</p><p>“匿名登录”登录方式必传</p>
                     * @param _anonymousLogin <p>匿名登录账号信息</p><p>“匿名登录”登录方式必传</p>
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
                     * 获取<p>内网类型，默认为0</p>
                     * @return IntranetType <p>内网类型，默认为0</p>
                     * 
                     */
                    uint64_t GetIntranetType() const;

                    /**
                     * 设置<p>内网类型，默认为0</p>
                     * @param _intranetType <p>内网类型，默认为0</p>
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
                     * @return IntranetRegion <p>内网地域</p>
                     * 
                     */
                    std::string GetIntranetRegion() const;

                    /**
                     * 设置<p>内网地域</p>
                     * @param _intranetRegion <p>内网地域</p>
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
                     * @return VpcId <p>内网私有网络VpcId</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>内网私有网络VpcId</p>
                     * @param _vpcId <p>内网私有网络VpcId</p>
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
                     * @return SubnetId <p>内网子网SubnetId</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>内网子网SubnetId</p>
                     * @param _subnetId <p>内网子网SubnetId</p>
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
                     * 获取<p>Auth用户角色信息</p><p>“第三方认证登录”登录方式必传</p>
                     * @return AuthRoles <p>Auth用户角色信息</p><p>“第三方认证登录”登录方式必传</p>
                     * 
                     */
                    std::vector<AuthRoleInfo> GetAuthRoles() const;

                    /**
                     * 设置<p>Auth用户角色信息</p><p>“第三方认证登录”登录方式必传</p>
                     * @param _authRoles <p>Auth用户角色信息</p><p>“第三方认证登录”登录方式必传</p>
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
                     * 获取<p>自定义隐藏参数</p>
                     * @return HideParams <p>自定义隐藏参数</p>
                     * 
                     */
                    std::vector<std::string> GetHideParams() const;

                    /**
                     * 设置<p>自定义隐藏参数</p>
                     * @param _hideParams <p>自定义隐藏参数</p>
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
                     * 获取<p>访问控制规则</p><p>“第三方认证登录”登录方式必传 AccessMode: internal &amp;&amp; Action: ACCEPT 规则</p>
                     * @return AccessControlRules <p>访问控制规则</p><p>“第三方认证登录”登录方式必传 AccessMode: internal &amp;&amp; Action: ACCEPT 规则</p>
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置<p>访问控制规则</p><p>“第三方认证登录”登录方式必传 AccessMode: internal &amp;&amp; Action: ACCEPT 规则</p>
                     * @param _accessControlRules <p>访问控制规则</p><p>“第三方认证登录”登录方式必传 AccessMode: internal &amp;&amp; Action: ACCEPT 规则</p>
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
                     * @return Remarks <p>备注</p>
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remarks <p>备注</p>
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
                     * @return Menus <p>自定义显示菜单</p>
                     * 
                     */
                    std::vector<std::string> GetMenus() const;

                    /**
                     * 设置<p>自定义显示菜单</p>
                     * @param _menus <p>自定义显示菜单</p>
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
                     * <p>DataSight控制台ConsoleId</p>
                     */
                    std::string m_consoleId;
                    bool m_consoleIdHasBeenSet;

                    /**
                     * <p>访问方式：public - 公网，internal - 内网</p>
                     */
                    std::vector<std::string> m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>登录方式：0 - 账号密码鉴权，1 - 匿名登陆，2 - 第三方认证登录</p>
                     */
                    uint64_t m_loginMode;
                    bool m_loginModeHasBeenSet;

                    /**
                     * <p>自定义域名前缀</p>
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * <p>用户账号信息</p><p>“账号密码鉴权“登录方式必传</p>
                     */
                    std::vector<ConsoleAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>匿名登录账号信息</p><p>“匿名登录”登录方式必传</p>
                     */
                    AnonymousLoginInfo m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * <p>内网类型，默认为0</p>
                     */
                    uint64_t m_intranetType;
                    bool m_intranetTypeHasBeenSet;

                    /**
                     * <p>内网地域</p>
                     */
                    std::string m_intranetRegion;
                    bool m_intranetRegionHasBeenSet;

                    /**
                     * <p>内网私有网络VpcId</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>内网子网SubnetId</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Auth用户角色信息</p><p>“第三方认证登录”登录方式必传</p>
                     */
                    std::vector<AuthRoleInfo> m_authRoles;
                    bool m_authRolesHasBeenSet;

                    /**
                     * <p>自定义隐藏参数</p>
                     */
                    std::vector<std::string> m_hideParams;
                    bool m_hideParamsHasBeenSet;

                    /**
                     * <p>访问控制规则</p><p>“第三方认证登录”登录方式必传 AccessMode: internal &amp;&amp; Action: ACCEPT 规则</p>
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>自定义显示菜单</p>
                     */
                    std::vector<std::string> m_menus;
                    bool m_menusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLEREQUEST_H_
