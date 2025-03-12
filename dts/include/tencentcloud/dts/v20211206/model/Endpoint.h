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
                     * @return Region 地域英文名，如：ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文名，如：ap-guangzhou
                     * @param _region 地域英文名，如：ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填
                     * @return Role 节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填
                     * @param _role 节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。
                     * @return DbKernel 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。
                     * 
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。
                     * @param _dbKernel 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。
                     * 
                     */
                    void SetDbKernel(const std::string& _dbKernel);

                    /**
                     * 判断参数 DbKernel 是否已赋值
                     * @return DbKernel 是否已赋值
                     * 
                     */
                    bool DbKernelHasBeenSet() const;

                    /**
                     * 获取数据库实例ID，格式如：cdb-powiqx8q
                     * @return InstanceId 数据库实例ID，格式如：cdb-powiqx8q
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，格式如：cdb-powiqx8q
                     * @param _instanceId 数据库实例ID，格式如：cdb-powiqx8q
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例的IP地址，接入类型为非cdb时此项必填
                     * @return Ip 实例的IP地址，接入类型为非cdb时此项必填
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例的IP地址，接入类型为非cdb时此项必填
                     * @param _ip 实例的IP地址，接入类型为非cdb时此项必填
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
                     * 获取实例端口，接入类型为非cdb时此项必填
                     * @return Port 实例端口，接入类型为非cdb时此项必填
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置实例端口，接入类型为非cdb时此项必填
                     * @param _port 实例端口，接入类型为非cdb时此项必填
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
                     * 获取用户名，对于访问需要用户名密码认证的实例必填
                     * @return User 用户名，对于访问需要用户名密码认证的实例必填
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，对于访问需要用户名密码认证的实例必填
                     * @param _user 用户名，对于访问需要用户名密码认证的实例必填
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码，对于访问需要用户名密码认证的实例必填
                     * @return Password 密码，对于访问需要用户名密码认证的实例必填
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，对于访问需要用户名密码认证的实例必填
                     * @param _password 密码，对于访问需要用户名密码认证的实例必填
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取数据库名，数据库为cdwpg时，需要提供
                     * @return DbName 数据库名，数据库为cdwpg时，需要提供
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名，数据库为cdwpg时，需要提供
                     * @param _dbName 数据库名，数据库为cdwpg时，需要提供
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
                     * @return VpcId 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
                     * @param _vpcId 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
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
                     * 获取私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
                     * @return SubnetId 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
                     * @param _subnetId 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
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
                     * 获取CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * @return CvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * @param _cvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
                     * @return UniqDcgId 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
                     * @param _uniqDcgId 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
                     * 
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     * 
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
                     * @return UniqVpnGwId VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
                     * @param _uniqVpnGwId VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
                     * 
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     * 
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
                     * @return CcnId 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
                     * @param _ccnId 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
                     * @return Supplier 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
                     * @param _supplier 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
                     * 
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     * 
                     */
                    bool SupplierHasBeenSet() const;

                    /**
                     * 获取数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
                     * @return EngineVersion 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
                     * @param _engineVersion 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取实例所属账号，如果为跨账号实例此项必填
                     * @return Account 实例所属账号，如果为跨账号实例此项必填
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置实例所属账号，如果为跨账号实例此项必填
                     * @param _account 实例所属账号，如果为跨账号实例此项必填
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
                     * 获取资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
                     * @return AccountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
                     * @param _accountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
                     * @return AccountRole 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
                     * 
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
                     * @param _accountRole 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
                     * 
                     */
                    void SetAccountRole(const std::string& _accountRole);

                    /**
                     * 判断参数 AccountRole 是否已赋值
                     * @return AccountRole 是否已赋值
                     * 
                     */
                    bool AccountRoleHasBeenSet() const;

                    /**
                     * 获取外部角色id
                     * @return RoleExternalId 外部角色id
                     * 
                     */
                    std::string GetRoleExternalId() const;

                    /**
                     * 设置外部角色id
                     * @param _roleExternalId 外部角色id
                     * 
                     */
                    void SetRoleExternalId(const std::string& _roleExternalId);

                    /**
                     * 判断参数 RoleExternalId 是否已赋值
                     * @return RoleExternalId 是否已赋值
                     * 
                     */
                    bool RoleExternalIdHasBeenSet() const;

                    /**
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @return TmpSecretId 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @param _tmpSecretId 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @return TmpSecretKey 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @param _tmpSecretKey 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @return TmpToken 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * @param _tmpToken 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     * 
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     * 
                     */
                    bool TmpTokenHasBeenSet() const;

                    /**
                     * 获取是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     * @return EncryptConn 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     * @param _encryptConn 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     * 
                     */
                    void SetEncryptConn(const std::string& _encryptConn);

                    /**
                     * 判断参数 EncryptConn 是否已赋值
                     * @return EncryptConn 是否已赋值
                     * 
                     */
                    bool EncryptConnHasBeenSet() const;

                    /**
                     * 获取数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     * @return DatabaseNetEnv 数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     * @param _databaseNetEnv 数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     * 
                     */
                    void SetDatabaseNetEnv(const std::string& _databaseNetEnv);

                    /**
                     * 判断参数 DatabaseNetEnv 是否已赋值
                     * @return DatabaseNetEnv 是否已赋值
                     * 
                     */
                    bool DatabaseNetEnvHasBeenSet() const;

                    /**
                     * 获取数据库为跨账号云联网下的实例时、表示云联网所属主账号
                     * @return CcnOwnerUin 数据库为跨账号云联网下的实例时、表示云联网所属主账号
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置数据库为跨账号云联网下的实例时、表示云联网所属主账号
                     * @param _ccnOwnerUin 数据库为跨账号云联网下的实例时、表示云联网所属主账号
                     * 
                     */
                    void SetCcnOwnerUin(const std::string& _ccnOwnerUin);

                    /**
                     * 判断参数 CcnOwnerUin 是否已赋值
                     * @return CcnOwnerUin 是否已赋值
                     * 
                     */
                    bool CcnOwnerUinHasBeenSet() const;

                    /**
                     * 获取数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID
                     * @return ChildInstanceId 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID
                     * 
                     */
                    std::string GetChildInstanceId() const;

                    /**
                     * 设置数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID
                     * @param _childInstanceId 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID
                     * 
                     */
                    void SetChildInstanceId(const std::string& _childInstanceId);

                    /**
                     * 判断参数 ChildInstanceId 是否已赋值
                     * @return ChildInstanceId 是否已赋值
                     * 
                     */
                    bool ChildInstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw
                     * @return ChildInstanceType 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw
                     * 
                     */
                    std::string GetChildInstanceType() const;

                    /**
                     * 设置数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw
                     * @param _childInstanceType 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw
                     * 
                     */
                    void SetChildInstanceType(const std::string& _childInstanceType);

                    /**
                     * 判断参数 ChildInstanceType 是否已赋值
                     * @return ChildInstanceType 是否已赋值
                     * 
                     */
                    bool ChildInstanceTypeHasBeenSet() const;

                    /**
                     * 获取tdsql的分片id。如节点类型为set必填。
                     * @return SetId tdsql的分片id。如节点类型为set必填。
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置tdsql的分片id。如节点类型为set必填。
                     * @param _setId tdsql的分片id。如节点类型为set必填。
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                private:

                    /**
                     * 地域英文名，如：ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * 数据库实例ID，格式如：cdb-powiqx8q
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例的IP地址，接入类型为非cdb时此项必填
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例端口，接入类型为非cdb时此项必填
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 用户名，对于访问需要用户名密码认证的实例必填
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码，对于访问需要用户名密码认证的实例必填
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 数据库名，数据库为cdwpg时，需要提供
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * 数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例所属账号，如果为跨账号实例此项必填
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * 跨账号同步时的角色，只允许[a-zA-Z0-9\-\_]+，如果为跨账号实例此项必填
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * 外部角色id
                     */
                    std::string m_roleExternalId;
                    bool m_roleExternalIdHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * 数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * 数据库为跨账号云联网下的实例时、表示云联网所属主账号
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                    /**
                     * 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID
                     */
                    std::string m_childInstanceId;
                    bool m_childInstanceIdHasBeenSet;

                    /**
                     * 数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw
                     */
                    std::string m_childInstanceType;
                    bool m_childInstanceTypeHasBeenSet;

                    /**
                     * tdsql的分片id。如节点类型为set必填。
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
