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
                     * 获取<p>地域英文名，如：ap-guangzhou</p>
                     * @return Region <p>地域英文名，如：ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域英文名，如：ap-guangzhou</p>
                     * @param _region <p>地域英文名，如：ap-guangzhou</p>
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
                     * 获取<p>节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填</p>
                     * @return Role <p>节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填</p>
                     * @param _role <p>节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填</p>
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
                     * 获取<p>数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。</p>
                     * @return DbKernel <p>数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。</p>
                     * 
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置<p>数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。</p>
                     * @param _dbKernel <p>数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。</p>
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
                     * 获取<p>数据库实例ID，格式如：cdb-powiqx8q</p>
                     * @return InstanceId <p>数据库实例ID，格式如：cdb-powiqx8q</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>数据库实例ID，格式如：cdb-powiqx8q</p>
                     * @param _instanceId <p>数据库实例ID，格式如：cdb-powiqx8q</p>
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
                     * 获取<p>实例的IP地址，接入类型为非cdb时此项必填</p>
                     * @return Ip <p>实例的IP地址，接入类型为非cdb时此项必填</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>实例的IP地址，接入类型为非cdb时此项必填</p>
                     * @param _ip <p>实例的IP地址，接入类型为非cdb时此项必填</p>
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
                     * 获取<p>实例端口，接入类型为非cdb时此项必填</p>
                     * @return Port <p>实例端口，接入类型为非cdb时此项必填</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>实例端口，接入类型为非cdb时此项必填</p>
                     * @param _port <p>实例端口，接入类型为非cdb时此项必填</p>
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
                     * 获取<p>用户名，对于访问需要用户名密码认证的实例必填</p>
                     * @return User <p>用户名，对于访问需要用户名密码认证的实例必填</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户名，对于访问需要用户名密码认证的实例必填</p>
                     * @param _user <p>用户名，对于访问需要用户名密码认证的实例必填</p>
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
                     * 获取<p>密码，对于访问需要用户名密码认证的实例必填</p>
                     * @return Password <p>密码，对于访问需要用户名密码认证的实例必填</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码，对于访问需要用户名密码认证的实例必填</p>
                     * @param _password <p>密码，对于访问需要用户名密码认证的实例必填</p>
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
                     * 获取<p>数据库名，数据库为cdwpg时，需要提供</p>
                     * @return DbName <p>数据库名，数据库为cdwpg时，需要提供</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名，数据库为cdwpg时，需要提供</p>
                     * @param _dbName <p>数据库名，数据库为cdwpg时，需要提供</p>
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
                     * 获取<p>私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto</p>
                     * @return VpcId <p>私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto</p>
                     * @param _vpcId <p>私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto</p>
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
                     * 获取<p>私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz</p>
                     * @return SubnetId <p>私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz</p>
                     * @param _subnetId <p>私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz</p>
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
                     * 获取<p>CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段</p>
                     * @return CvmInstanceId <p>CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段</p>
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置<p>CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段</p>
                     * @param _cvmInstanceId <p>CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段</p>
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
                     * 获取<p>专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb</p>
                     * @return UniqDcgId <p>专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb</p>
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置<p>专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb</p>
                     * @param _uniqDcgId <p>专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb</p>
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
                     * 获取<p>VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q</p>
                     * @return UniqVpnGwId <p>VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q</p>
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置<p>VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q</p>
                     * @param _uniqVpnGwId <p>VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q</p>
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
                     * 获取<p>云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc</p>
                     * @return CcnId <p>云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc</p>
                     * @param _ccnId <p>云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc</p>
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
                     * 获取<p>云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others</p>
                     * @return Supplier <p>云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others</p>
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置<p>云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others</p>
                     * @param _supplier <p>云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others</p>
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
                     * 获取<p>数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6</p>
                     * @return EngineVersion <p>数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6</p>
                     * @param _engineVersion <p>数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6</p>
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
                     * 获取<p>实例所属账号，如果为跨账号实例此项必填</p>
                     * @return Account <p>实例所属账号，如果为跨账号实例此项必填</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>实例所属账号，如果为跨账号实例此项必填</p>
                     * @param _account <p>实例所属账号，如果为跨账号实例此项必填</p>
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
                     * 获取<p>资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)</p>
                     * @return AccountMode <p>资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)</p>
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置<p>资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)</p>
                     * @param _accountMode <p>资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)</p>
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
                     * 获取<p>跨账号同步时的角色，只允许[a-zA-Z0-9-_]+，如果为跨账号实例此项必填</p>
                     * @return AccountRole <p>跨账号同步时的角色，只允许[a-zA-Z0-9-_]+，如果为跨账号实例此项必填</p>
                     * 
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置<p>跨账号同步时的角色，只允许[a-zA-Z0-9-_]+，如果为跨账号实例此项必填</p>
                     * @param _accountRole <p>跨账号同步时的角色，只允许[a-zA-Z0-9-_]+，如果为跨账号实例此项必填</p>
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
                     * 获取<p>外部角色id</p>
                     * @return RoleExternalId <p>外部角色id</p>
                     * 
                     */
                    std::string GetRoleExternalId() const;

                    /**
                     * 设置<p>外部角色id</p>
                     * @param _roleExternalId <p>外部角色id</p>
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
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @return TmpSecretId <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @param _tmpSecretId <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
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
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @return TmpSecretKey <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @param _tmpSecretKey <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
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
                     * 获取<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @return TmpToken <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置<p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     * @param _tmpToken <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
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
                     * 获取<p>是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted</p>
                     * @return EncryptConn <p>是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted</p>
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置<p>是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted</p>
                     * @param _encryptConn <p>是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted</p>
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
                     * 获取<p>数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；</p>
                     * @return DatabaseNetEnv <p>数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；</p>
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置<p>数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；</p>
                     * @param _databaseNetEnv <p>数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；</p>
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
                     * 获取<p>数据库为跨账号云联网下的实例时、表示云联网所属主账号</p>
                     * @return CcnOwnerUin <p>数据库为跨账号云联网下的实例时、表示云联网所属主账号</p>
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置<p>数据库为跨账号云联网下的实例时、表示云联网所属主账号</p>
                     * @param _ccnOwnerUin <p>数据库为跨账号云联网下的实例时、表示云联网所属主账号</p>
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
                     * 获取<p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID</p>
                     * @return ChildInstanceId <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID</p>
                     * 
                     */
                    std::string GetChildInstanceId() const;

                    /**
                     * 设置<p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID</p>
                     * @param _childInstanceId <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID</p>
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
                     * 获取<p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw</p>
                     * @return ChildInstanceType <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw</p>
                     * 
                     */
                    std::string GetChildInstanceType() const;

                    /**
                     * 设置<p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw</p>
                     * @param _childInstanceType <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw</p>
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
                     * 获取<p>tdsql的分片id。如节点类型为set必填。</p>
                     * @return SetId <p>tdsql的分片id。如节点类型为set必填。</p>
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置<p>tdsql的分片id。如节点类型为set必填。</p>
                     * @param _setId <p>tdsql的分片id。如节点类型为set必填。</p>
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
                     * <p>地域英文名，如：ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>节点类型，proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>数据库内核类型，tdsql中用于区分不同内核：percona,mariadb,mysql。注意TDSQL-C MySQL、TDSQL PostgreSQL无需填写此项值。</p>
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * <p>数据库实例ID，格式如：cdb-powiqx8q</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例的IP地址，接入类型为非cdb时此项必填</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>实例端口，接入类型为非cdb时此项必填</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>用户名，对于访问需要用户名密码认证的实例必填</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>密码，对于访问需要用户名密码认证的实例必填</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>数据库名，数据库为cdwpg时，需要提供</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>私有网络ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：vpc-92jblxto</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络下的子网ID，对于私有网络、专线、VPN的接入方式此项必填，格式如：subnet-3paxmkdz</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段</p>
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * <p>专线网关ID，对于专线接入类型此项必填，格式如：dcg-0rxtqqxb</p>
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * <p>VPN网关ID，对于vpn接入类型此项必填，格式如：vpngw-9ghexg7q</p>
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * <p>云联网ID，对于云联网接入类型此项必填，如：ccn-afp6kltc</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>云厂商类型，当实例为RDS实例时，填写为aliyun, 其他情况均填写others，默认为others</p>
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * <p>数据库版本，当实例为RDS实例时才有效，其他实例忽略，格式如：5.6或者5.7，默认为5.6</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>实例所属账号，如果为跨账号实例此项必填</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>资源所属账号 为空或self(表示本账号内资源)、other(表示跨账号资源)</p>
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * <p>跨账号同步时的角色，只允许[a-zA-Z0-9-_]+，如果为跨账号实例此项必填</p>
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * <p>外部角色id</p>
                     */
                    std::string m_roleExternalId;
                    bool m_roleExternalIdHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * <p>临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号同步文档(https://cloud.tencent.com/document/product/571/68729)第4节中关于角色的定义。</p>
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * <p>是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted</p>
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * <p>数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；</p>
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * <p>数据库为跨账号云联网下的实例时、表示云联网所属主账号</p>
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                    /**
                     * <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的ID</p>
                     */
                    std::string m_childInstanceId;
                    bool m_childInstanceIdHasBeenSet;

                    /**
                     * <p>数据库为cynos、且是cynos集群内的一个子数据库实例时、该参数为该子实例的类型、例如：只读实例传ro、读写实例传rw</p>
                     */
                    std::string m_childInstanceType;
                    bool m_childInstanceTypeHasBeenSet;

                    /**
                     * <p>tdsql的分片id。如节点类型为set必填。</p>
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
