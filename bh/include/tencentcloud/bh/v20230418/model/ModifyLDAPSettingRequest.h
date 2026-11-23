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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYLDAPSETTINGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYLDAPSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyLDAPSetting请求参数结构体
                */
                class ModifyLDAPSettingRequest : public AbstractModel
                {
                public:
                    ModifyLDAPSettingRequest();
                    ~ModifyLDAPSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否开启LDAP认证，false-不开启，true-开启</p>
                     * @return Enable <p>是否开启LDAP认证，false-不开启，true-开启</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启LDAP认证，false-不开启，true-开启</p>
                     * @param _enable <p>是否开启LDAP认证，false-不开启，true-开启</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>服务器地址</p>
                     * @return Ip <p>服务器地址</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>服务器地址</p>
                     * @param _ip <p>服务器地址</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>备用服务器地址</p>
                     * @return IpBackup <p>备用服务器地址</p>
                     * 
                     */
                    std::string GetIpBackup() const;

                    /**
                     * 设置<p>备用服务器地址</p>
                     * @param _ipBackup <p>备用服务器地址</p>
                     * 
                     */
                    void SetIpBackup(const std::string& _ipBackup);

                    /**
                     * 判断参数 IpBackup 是否已赋值
                     * @return IpBackup 是否已赋值
                     * 
                     */
                    bool IpBackupHasBeenSet() const;

                    /**
                     * 获取<p>服务端口</p>
                     * @return Port <p>服务端口</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>服务端口</p>
                     * @param _port <p>服务端口</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>是否开启SSL，false-不开启，true-开启</p>
                     * @return EnableSSL <p>是否开启SSL，false-不开启，true-开启</p>
                     * 
                     */
                    bool GetEnableSSL() const;

                    /**
                     * 设置<p>是否开启SSL，false-不开启，true-开启</p>
                     * @param _enableSSL <p>是否开启SSL，false-不开启，true-开启</p>
                     * 
                     */
                    void SetEnableSSL(const bool& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取<p>Base DN</p>
                     * @return BaseDN <p>Base DN</p>
                     * 
                     */
                    std::string GetBaseDN() const;

                    /**
                     * 设置<p>Base DN</p>
                     * @param _baseDN <p>Base DN</p>
                     * 
                     */
                    void SetBaseDN(const std::string& _baseDN);

                    /**
                     * 判断参数 BaseDN 是否已赋值
                     * @return BaseDN 是否已赋值
                     * 
                     */
                    bool BaseDNHasBeenSet() const;

                    /**
                     * 获取<p>管理员账号</p>
                     * @return AdminAccount <p>管理员账号</p>
                     * 
                     */
                    std::string GetAdminAccount() const;

                    /**
                     * 设置<p>管理员账号</p>
                     * @param _adminAccount <p>管理员账号</p>
                     * 
                     */
                    void SetAdminAccount(const std::string& _adminAccount);

                    /**
                     * 判断参数 AdminAccount 是否已赋值
                     * @return AdminAccount 是否已赋值
                     * 
                     */
                    bool AdminAccountHasBeenSet() const;

                    /**
                     * 获取<p>管理员密码</p>
                     * @return AdminPassword <p>管理员密码</p>
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置<p>管理员密码</p>
                     * @param _adminPassword <p>管理员密码</p>
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取<p>用户属性</p>
                     * @return AttributeUser <p>用户属性</p>
                     * 
                     */
                    std::string GetAttributeUser() const;

                    /**
                     * 设置<p>用户属性</p>
                     * @param _attributeUser <p>用户属性</p>
                     * 
                     */
                    void SetAttributeUser(const std::string& _attributeUser);

                    /**
                     * 判断参数 AttributeUser 是否已赋值
                     * @return AttributeUser 是否已赋值
                     * 
                     */
                    bool AttributeUserHasBeenSet() const;

                    /**
                     * 获取<p>用户名属性</p>
                     * @return AttributeUserName <p>用户名属性</p>
                     * 
                     */
                    std::string GetAttributeUserName() const;

                    /**
                     * 设置<p>用户名属性</p>
                     * @param _attributeUserName <p>用户名属性</p>
                     * 
                     */
                    void SetAttributeUserName(const std::string& _attributeUserName);

                    /**
                     * 判断参数 AttributeUserName 是否已赋值
                     * @return AttributeUserName 是否已赋值
                     * 
                     */
                    bool AttributeUserNameHasBeenSet() const;

                    /**
                     * 获取<p>自动同步，false-不开启，true-开启</p>
                     * @return AutoSync <p>自动同步，false-不开启，true-开启</p>
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置<p>自动同步，false-不开启，true-开启</p>
                     * @param _autoSync <p>自动同步，false-不开启，true-开启</p>
                     * 
                     */
                    void SetAutoSync(const bool& _autoSync);

                    /**
                     * 判断参数 AutoSync 是否已赋值
                     * @return AutoSync 是否已赋值
                     * 
                     */
                    bool AutoSyncHasBeenSet() const;

                    /**
                     * 获取<p>覆盖用户信息，false-不开启，true-开启</p>
                     * @return Overwrite <p>覆盖用户信息，false-不开启，true-开启</p>
                     * 
                     */
                    bool GetOverwrite() const;

                    /**
                     * 设置<p>覆盖用户信息，false-不开启，true-开启</p>
                     * @param _overwrite <p>覆盖用户信息，false-不开启，true-开启</p>
                     * 
                     */
                    void SetOverwrite(const bool& _overwrite);

                    /**
                     * 判断参数 Overwrite 是否已赋值
                     * @return Overwrite 是否已赋值
                     * 
                     */
                    bool OverwriteHasBeenSet() const;

                    /**
                     * 获取<p>同步周期，30～60000之间的整数</p>
                     * @return SyncPeriod <p>同步周期，30～60000之间的整数</p>
                     * 
                     */
                    uint64_t GetSyncPeriod() const;

                    /**
                     * 设置<p>同步周期，30～60000之间的整数</p>
                     * @param _syncPeriod <p>同步周期，30～60000之间的整数</p>
                     * 
                     */
                    void SetSyncPeriod(const uint64_t& _syncPeriod);

                    /**
                     * 判断参数 SyncPeriod 是否已赋值
                     * @return SyncPeriod 是否已赋值
                     * 
                     */
                    bool SyncPeriodHasBeenSet() const;

                    /**
                     * 获取<p>是否同步全部，false-不开启，true-开启</p>
                     * @return SyncAll <p>是否同步全部，false-不开启，true-开启</p>
                     * 
                     */
                    bool GetSyncAll() const;

                    /**
                     * 设置<p>是否同步全部，false-不开启，true-开启</p>
                     * @param _syncAll <p>是否同步全部，false-不开启，true-开启</p>
                     * 
                     */
                    void SetSyncAll(const bool& _syncAll);

                    /**
                     * 判断参数 SyncAll 是否已赋值
                     * @return SyncAll 是否已赋值
                     * 
                     */
                    bool SyncAllHasBeenSet() const;

                    /**
                     * 获取<p>同步OU列表，SyncAll为false时必传</p>
                     * @return SyncUnitSet <p>同步OU列表，SyncAll为false时必传</p>
                     * 
                     */
                    std::vector<std::string> GetSyncUnitSet() const;

                    /**
                     * 设置<p>同步OU列表，SyncAll为false时必传</p>
                     * @param _syncUnitSet <p>同步OU列表，SyncAll为false时必传</p>
                     * 
                     */
                    void SetSyncUnitSet(const std::vector<std::string>& _syncUnitSet);

                    /**
                     * 判断参数 SyncUnitSet 是否已赋值
                     * @return SyncUnitSet 是否已赋值
                     * 
                     */
                    bool SyncUnitSetHasBeenSet() const;

                    /**
                     * 获取<p>组织单元属性</p>
                     * @return AttributeUnit <p>组织单元属性</p>
                     * 
                     */
                    std::string GetAttributeUnit() const;

                    /**
                     * 设置<p>组织单元属性</p>
                     * @param _attributeUnit <p>组织单元属性</p>
                     * 
                     */
                    void SetAttributeUnit(const std::string& _attributeUnit);

                    /**
                     * 判断参数 AttributeUnit 是否已赋值
                     * @return AttributeUnit 是否已赋值
                     * 
                     */
                    bool AttributeUnitHasBeenSet() const;

                    /**
                     * 获取<p>用户姓名属性</p>
                     * @return AttributeRealName <p>用户姓名属性</p>
                     * 
                     */
                    std::string GetAttributeRealName() const;

                    /**
                     * 设置<p>用户姓名属性</p>
                     * @param _attributeRealName <p>用户姓名属性</p>
                     * 
                     */
                    void SetAttributeRealName(const std::string& _attributeRealName);

                    /**
                     * 判断参数 AttributeRealName 是否已赋值
                     * @return AttributeRealName 是否已赋值
                     * 
                     */
                    bool AttributeRealNameHasBeenSet() const;

                    /**
                     * 获取<p>手机号属性</p>
                     * @return AttributePhone <p>手机号属性</p>
                     * 
                     */
                    std::string GetAttributePhone() const;

                    /**
                     * 设置<p>手机号属性</p>
                     * @param _attributePhone <p>手机号属性</p>
                     * 
                     */
                    void SetAttributePhone(const std::string& _attributePhone);

                    /**
                     * 判断参数 AttributePhone 是否已赋值
                     * @return AttributePhone 是否已赋值
                     * 
                     */
                    bool AttributePhoneHasBeenSet() const;

                    /**
                     * 获取<p>邮箱属性</p>
                     * @return AttributeEmail <p>邮箱属性</p>
                     * 
                     */
                    std::string GetAttributeEmail() const;

                    /**
                     * 设置<p>邮箱属性</p>
                     * @param _attributeEmail <p>邮箱属性</p>
                     * 
                     */
                    void SetAttributeEmail(const std::string& _attributeEmail);

                    /**
                     * 判断参数 AttributeEmail 是否已赋值
                     * @return AttributeEmail 是否已赋值
                     * 
                     */
                    bool AttributeEmailHasBeenSet() const;

                    /**
                     * 获取<p>网络域Id</p>
                     * @return DomainId <p>网络域Id</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>网络域Id</p>
                     * @param _domainId <p>网络域Id</p>
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取<p>堡垒机实例ID</p>
                     * @return ResourceId <p>堡垒机实例ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>堡垒机实例ID</p>
                     * @param _resourceId <p>堡垒机实例ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启LDAP认证，false-不开启，true-开启</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>服务器地址</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>备用服务器地址</p>
                     */
                    std::string m_ipBackup;
                    bool m_ipBackupHasBeenSet;

                    /**
                     * <p>服务端口</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>是否开启SSL，false-不开启，true-开启</p>
                     */
                    bool m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * <p>Base DN</p>
                     */
                    std::string m_baseDN;
                    bool m_baseDNHasBeenSet;

                    /**
                     * <p>管理员账号</p>
                     */
                    std::string m_adminAccount;
                    bool m_adminAccountHasBeenSet;

                    /**
                     * <p>管理员密码</p>
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * <p>用户属性</p>
                     */
                    std::string m_attributeUser;
                    bool m_attributeUserHasBeenSet;

                    /**
                     * <p>用户名属性</p>
                     */
                    std::string m_attributeUserName;
                    bool m_attributeUserNameHasBeenSet;

                    /**
                     * <p>自动同步，false-不开启，true-开启</p>
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                    /**
                     * <p>覆盖用户信息，false-不开启，true-开启</p>
                     */
                    bool m_overwrite;
                    bool m_overwriteHasBeenSet;

                    /**
                     * <p>同步周期，30～60000之间的整数</p>
                     */
                    uint64_t m_syncPeriod;
                    bool m_syncPeriodHasBeenSet;

                    /**
                     * <p>是否同步全部，false-不开启，true-开启</p>
                     */
                    bool m_syncAll;
                    bool m_syncAllHasBeenSet;

                    /**
                     * <p>同步OU列表，SyncAll为false时必传</p>
                     */
                    std::vector<std::string> m_syncUnitSet;
                    bool m_syncUnitSetHasBeenSet;

                    /**
                     * <p>组织单元属性</p>
                     */
                    std::string m_attributeUnit;
                    bool m_attributeUnitHasBeenSet;

                    /**
                     * <p>用户姓名属性</p>
                     */
                    std::string m_attributeRealName;
                    bool m_attributeRealNameHasBeenSet;

                    /**
                     * <p>手机号属性</p>
                     */
                    std::string m_attributePhone;
                    bool m_attributePhoneHasBeenSet;

                    /**
                     * <p>邮箱属性</p>
                     */
                    std::string m_attributeEmail;
                    bool m_attributeEmailHasBeenSet;

                    /**
                     * <p>网络域Id</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>堡垒机实例ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYLDAPSETTINGREQUEST_H_
