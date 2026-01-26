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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_LDAPSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_LDAPSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * LDAP配置信息
                */
                class LDAPSetting : public AbstractModel
                {
                public:
                    LDAPSetting();
                    ~LDAPSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启LDAP认证，false-不开启，true-开启
                     * @return Enable 是否开启LDAP认证，false-不开启，true-开启
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启LDAP认证，false-不开启，true-开启
                     * @param _enable 是否开启LDAP认证，false-不开启，true-开启
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
                     * 获取用户属性
                     * @return AttributeUser 用户属性
                     * 
                     */
                    std::string GetAttributeUser() const;

                    /**
                     * 设置用户属性
                     * @param _attributeUser 用户属性
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
                     * 获取用户名属性
                     * @return AttributeUserName 用户名属性
                     * 
                     */
                    std::string GetAttributeUserName() const;

                    /**
                     * 设置用户名属性
                     * @param _attributeUserName 用户名属性
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
                     * 获取自动同步，false-不开启，true-开启
                     * @return AutoSync 自动同步，false-不开启，true-开启
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置自动同步，false-不开启，true-开启
                     * @param _autoSync 自动同步，false-不开启，true-开启
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
                     * 获取覆盖用户信息，false-不开启，true-开启
                     * @return Overwrite 覆盖用户信息，false-不开启，true-开启
                     * 
                     */
                    bool GetOverwrite() const;

                    /**
                     * 设置覆盖用户信息，false-不开启，true-开启
                     * @param _overwrite 覆盖用户信息，false-不开启，true-开启
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
                     * 获取同步周期，30～60000之间的整数
                     * @return SyncPeriod 同步周期，30～60000之间的整数
                     * 
                     */
                    uint64_t GetSyncPeriod() const;

                    /**
                     * 设置同步周期，30～60000之间的整数
                     * @param _syncPeriod 同步周期，30～60000之间的整数
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
                     * 获取是否同步全部，false-不开启，true-开启
                     * @return SyncAll 是否同步全部，false-不开启，true-开启
                     * 
                     */
                    bool GetSyncAll() const;

                    /**
                     * 设置是否同步全部，false-不开启，true-开启
                     * @param _syncAll 是否同步全部，false-不开启，true-开启
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
                     * 获取同步OU列表
                     * @return SyncUnitSet 同步OU列表
                     * 
                     */
                    std::vector<std::string> GetSyncUnitSet() const;

                    /**
                     * 设置同步OU列表
                     * @param _syncUnitSet 同步OU列表
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
                     * 获取组织单元属性
                     * @return AttributeUnit 组织单元属性
                     * 
                     */
                    std::string GetAttributeUnit() const;

                    /**
                     * 设置组织单元属性
                     * @param _attributeUnit 组织单元属性
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
                     * 获取用户姓名属性
                     * @return AttributeRealName 用户姓名属性
                     * 
                     */
                    std::string GetAttributeRealName() const;

                    /**
                     * 设置用户姓名属性
                     * @param _attributeRealName 用户姓名属性
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
                     * 获取手机号属性
                     * @return AttributePhone 手机号属性
                     * 
                     */
                    std::string GetAttributePhone() const;

                    /**
                     * 设置手机号属性
                     * @param _attributePhone 手机号属性
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
                     * 获取邮箱属性
                     * @return AttributeEmail 邮箱属性
                     * 
                     */
                    std::string GetAttributeEmail() const;

                    /**
                     * 设置邮箱属性
                     * @param _attributeEmail 邮箱属性
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
                     * 获取请求LDAP服务的堡垒机实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 请求LDAP服务的堡垒机实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置请求LDAP服务的堡垒机实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 请求LDAP服务的堡垒机实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取网络域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainId 网络域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainId 网络域Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 是否开启LDAP认证，false-不开启，true-开启
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 服务器地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备用服务器地址
                     */
                    std::string m_ipBackup;
                    bool m_ipBackupHasBeenSet;

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
                     * 用户属性
                     */
                    std::string m_attributeUser;
                    bool m_attributeUserHasBeenSet;

                    /**
                     * 用户名属性
                     */
                    std::string m_attributeUserName;
                    bool m_attributeUserNameHasBeenSet;

                    /**
                     * 自动同步，false-不开启，true-开启
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                    /**
                     * 覆盖用户信息，false-不开启，true-开启
                     */
                    bool m_overwrite;
                    bool m_overwriteHasBeenSet;

                    /**
                     * 同步周期，30～60000之间的整数
                     */
                    uint64_t m_syncPeriod;
                    bool m_syncPeriodHasBeenSet;

                    /**
                     * 是否同步全部，false-不开启，true-开启
                     */
                    bool m_syncAll;
                    bool m_syncAllHasBeenSet;

                    /**
                     * 同步OU列表
                     */
                    std::vector<std::string> m_syncUnitSet;
                    bool m_syncUnitSetHasBeenSet;

                    /**
                     * 组织单元属性
                     */
                    std::string m_attributeUnit;
                    bool m_attributeUnitHasBeenSet;

                    /**
                     * 用户姓名属性
                     */
                    std::string m_attributeRealName;
                    bool m_attributeRealNameHasBeenSet;

                    /**
                     * 手机号属性
                     */
                    std::string m_attributePhone;
                    bool m_attributePhoneHasBeenSet;

                    /**
                     * 邮箱属性
                     */
                    std::string m_attributeEmail;
                    bool m_attributeEmailHasBeenSet;

                    /**
                     * 请求LDAP服务的堡垒机实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 网络域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_LDAPSETTING_H_
