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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步中的描述源端和目的端的信息
                */
                class Endpoint : public AbstractModel
                {
                public:
                    Endpoint();
                    ~Endpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域英文名，如：ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域英文名，如：ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文名，如：ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 地域英文名，如：ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取tdsql mysql版的节点类型，枚举值为proxy、set
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role tdsql mysql版的节点类型，枚举值为proxy、set
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRole() const;

                    /**
                     * 设置tdsql mysql版的节点类型，枚举值为proxy、set
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Role tdsql mysql版的节点类型，枚举值为proxy、set
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbKernel 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbKernel 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbKernel(const std::string& _dbKernel);

                    /**
                     * 判断参数 DbKernel 是否已赋值
                     * @return DbKernel 是否已赋值
                     */
                    bool DbKernelHasBeenSet() const;

                    /**
                     * 获取数据库实例ID，格式如：cdb-powiqx8q
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 数据库实例ID，格式如：cdb-powiqx8q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，格式如：cdb-powiqx8q
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 数据库实例ID，格式如：cdb-powiqx8q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例的IP地址，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 实例的IP地址，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例的IP地址，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ip 实例的IP地址，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例端口，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 实例端口，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置实例端口，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 实例端口，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取用户名，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户名，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param User 用户名，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Password 密码，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取数据库名，数据库为cdwpg时，需要提供
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 数据库名，数据库为cdwpg时，需要提供
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名，数据库为cdwpg时，需要提供
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbName 数据库名，数据库为cdwpg时，需要提供
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqDcgId 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqDcgId 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpnGwId VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqVpnGwId VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnId 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CcnId 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Supplier 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Supplier 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     */
                    bool SupplierHasBeenSet() const;

                    /**
                     * 获取数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineVersion 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取实例所属账号，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Account 实例所属账号，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置实例所属账号，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Account 实例所属账号，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountRole 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccountRole 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccountRole(const std::string& _accountRole);

                    /**
                     * 判断参数 AccountRole 是否已赋值
                     * @return AccountRole 是否已赋值
                     */
                    bool AccountRoleHasBeenSet() const;

                    /**
                     * 获取外部角色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleExternalId 外部角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleExternalId() const;

                    /**
                     * 设置外部角色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoleExternalId 外部角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoleExternalId(const std::string& _roleExternalId);

                    /**
                     * 判断参数 RoleExternalId 是否已赋值
                     * @return RoleExternalId 是否已赋值
                     */
                    bool RoleExternalIdHasBeenSet() const;

                    /**
                     * 获取临时密钥Id，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretId 临时密钥Id，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时密钥Id，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TmpSecretId 临时密钥Id，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时密钥Key，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretKey 临时密钥Key，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥Key，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TmpSecretKey 临时密钥Key，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取临时Token，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpToken 临时Token，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置临时Token，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TmpToken 临时Token，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     */
                    bool TmpTokenHasBeenSet() const;

                    /**
                     * 获取是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptConn 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EncryptConn 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEncryptConn(const std::string& _encryptConn);

                    /**
                     * 判断参数 EncryptConn 是否已赋值
                     * @return EncryptConn 是否已赋值
                     */
                    bool EncryptConnHasBeenSet() const;

                private:

                    /**
                     * 地域英文名，如：ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * tdsql mysql版的节点类型，枚举值为proxy、set
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * 数据库实例ID，格式如：cdb-powiqx8q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例的IP地址，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例端口，接入类型为非cdb时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 用户名，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码，对于访问需要用户名密码认证的实例必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 数据库名，数据库为cdwpg时，需要提供
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例所属账号，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * 外部角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleExternalId;
                    bool m_roleExternalIdHasBeenSet;

                    /**
                     * 临时密钥Id，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥Key，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 临时Token，如果为跨账号实例此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
