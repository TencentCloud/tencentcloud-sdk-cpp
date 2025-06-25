/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取是否开启LDAP认证，必须为true
                     * @return Enable 是否开启LDAP认证，必须为true
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启LDAP认证，必须为true
                     * @param _enable 是否开启LDAP认证，必须为true
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
                     * 获取服务器地址
                     * @return Ip 服务器地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置服务器地址
                     * @param _ip 服务器地址
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
                     * 获取服务端口
                     * @return Port 服务端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置服务端口
                     * @param _port 服务端口
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
                     * 获取是否开启SSL，false-不开启，true-开启
                     * @return EnableSSL 是否开启SSL，false-不开启，true-开启
                     * 
                     */
                    bool GetEnableSSL() const;

                    /**
                     * 设置是否开启SSL，false-不开启，true-开启
                     * @param _enableSSL 是否开启SSL，false-不开启，true-开启
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
                     * 获取Base DN
                     * @return BaseDN Base DN
                     * 
                     */
                    std::string GetBaseDN() const;

                    /**
                     * 设置Base DN
                     * @param _baseDN Base DN
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
                     * 获取管理员账号
                     * @return AdminAccount 管理员账号
                     * 
                     */
                    std::string GetAdminAccount() const;

                    /**
                     * 设置管理员账号
                     * @param _adminAccount 管理员账号
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
                     * 获取管理员密码
                     * @return AdminPassword 管理员密码
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置管理员密码
                     * @param _adminPassword 管理员密码
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
                     * 获取备用服务器地址
                     * @return IpBackup 备用服务器地址
                     * 
                     */
                    std::string GetIpBackup() const;

                    /**
                     * 设置备用服务器地址
                     * @param _ipBackup 备用服务器地址
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
                     * 获取网络域id
                     * @return DomainId 网络域id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域id
                     * @param _domainId 网络域id
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 是否开启LDAP认证，必须为true
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 服务器地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 服务端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 是否开启SSL，false-不开启，true-开启
                     */
                    bool m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * Base DN
                     */
                    std::string m_baseDN;
                    bool m_baseDNHasBeenSet;

                    /**
                     * 管理员账号
                     */
                    std::string m_adminAccount;
                    bool m_adminAccountHasBeenSet;

                    /**
                     * 管理员密码
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 备用服务器地址
                     */
                    std::string m_ipBackup;
                    bool m_ipBackupHasBeenSet;

                    /**
                     * 网络域id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CHECKLDAPCONNECTIONREQUEST_H_
