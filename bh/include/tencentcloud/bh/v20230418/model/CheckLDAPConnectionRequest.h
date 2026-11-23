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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CHECKLDAPCONNECTIONREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CHECKLDAPCONNECTIONREQUEST_H_

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
                * CheckLDAPConnection请求参数结构体
                */
                class CheckLDAPConnectionRequest : public AbstractModel
                {
                public:
                    CheckLDAPConnectionRequest();
                    ~CheckLDAPConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否开启LDAP认证，必须为true</p>
                     * @return Enable <p>是否开启LDAP认证，必须为true</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启LDAP认证，必须为true</p>
                     * @param _enable <p>是否开启LDAP认证，必须为true</p>
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
                     * 获取<p>网络域id</p>
                     * @return DomainId <p>网络域id</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>网络域id</p>
                     * @param _domainId <p>网络域id</p>
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
                     * 获取<p>用户名称映射属性</p>
                     * @return AttributeUserName <p>用户名称映射属性</p>
                     * 
                     */
                    std::string GetAttributeUserName() const;

                    /**
                     * 设置<p>用户名称映射属性</p>
                     * @param _attributeUserName <p>用户名称映射属性</p>
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
                     * <p>是否开启LDAP认证，必须为true</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>服务器地址</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

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
                     * <p>备用服务器地址</p>
                     */
                    std::string m_ipBackup;
                    bool m_ipBackupHasBeenSet;

                    /**
                     * <p>网络域id</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>用户名称映射属性</p>
                     */
                    std::string m_attributeUserName;
                    bool m_attributeUserNameHasBeenSet;

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

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CHECKLDAPCONNECTIONREQUEST_H_
