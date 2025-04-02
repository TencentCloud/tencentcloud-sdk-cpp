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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_

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
                * 数据库信息
                */
                class DBInfo : public AbstractModel
                {
                public:
                    DBInfo();
                    ~DBInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示节点角色，针对分布式数据库，如mongodb中的mongos节点。tdsqlmysql的可选项：proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填。
                     * @return Role 表示节点角色，针对分布式数据库，如mongodb中的mongos节点。tdsqlmysql的可选项：proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置表示节点角色，针对分布式数据库，如mongodb中的mongos节点。tdsqlmysql的可选项：proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填。
                     * @param _role 表示节点角色，针对分布式数据库，如mongodb中的mongos节点。tdsqlmysql的可选项：proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填。
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
                     * 获取内核版本，针对mariadb的不同内核版本等
                     * @return DbKernel 内核版本，针对mariadb的不同内核版本等
                     * 
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置内核版本，针对mariadb的不同内核版本等
                     * @param _dbKernel 内核版本，针对mariadb的不同内核版本等
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
                     * 获取实例的IP地址，对于公网、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * @return Host 实例的IP地址，对于公网、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置实例的IP地址，对于公网、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * @param _host 实例的IP地址，对于公网、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
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
                     * 获取实例的端口，对于公网、云主机自建、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * @return Port 实例的端口，对于公网、云主机自建、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置实例的端口，对于公网、云主机自建、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     * @param _port 实例的端口，对于公网、云主机自建、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
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
                     * 获取实例的用户名
                     * @return User 实例的用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置实例的用户名
                     * @param _user 实例的用户名
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
                     * 获取实例的密码
                     * @return Password 实例的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例的密码
                     * @param _password 实例的密码
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
                     * 获取CVM实例短ID，格式如：ins-olgl39y8；与云服务器控制台页面显示的实例ID相同；如果接入类型为云主机自建的方式，此项必填
                     * @return CvmInstanceId CVM实例短ID，格式如：ins-olgl39y8；与云服务器控制台页面显示的实例ID相同；如果接入类型为云主机自建的方式，此项必填
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例短ID，格式如：ins-olgl39y8；与云服务器控制台页面显示的实例ID相同；如果接入类型为云主机自建的方式，此项必填
                     * @param _cvmInstanceId CVM实例短ID，格式如：ins-olgl39y8；与云服务器控制台页面显示的实例ID相同；如果接入类型为云主机自建的方式，此项必填
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
                     * 获取VPN网关ID，格式如：vpngw-9ghexg7q；如果接入类型为vpncloud的方式，此项必填
                     * @return UniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q；如果接入类型为vpncloud的方式，此项必填
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN网关ID，格式如：vpngw-9ghexg7q；如果接入类型为vpncloud的方式，此项必填
                     * @param _uniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q；如果接入类型为vpncloud的方式，此项必填
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
                     * 获取专线网关ID，格式如：dcg-0rxtqqxb；如果接入类型为专线接入的方式，此项必填
                     * @return UniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb；如果接入类型为专线接入的方式，此项必填
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID，格式如：dcg-0rxtqqxb；如果接入类型为专线接入的方式，此项必填
                     * @param _uniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb；如果接入类型为专线接入的方式，此项必填
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
                     * 获取数据库实例ID，格式如：cdb-powiqx8q；如果接入类型为云数据库的方式，此项必填
                     * @return InstanceId 数据库实例ID，格式如：cdb-powiqx8q；如果接入类型为云数据库的方式，此项必填
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，格式如：cdb-powiqx8q；如果接入类型为云数据库的方式，此项必填
                     * @param _instanceId 数据库实例ID，格式如：cdb-powiqx8q；如果接入类型为云数据库的方式，此项必填
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
                     * 获取云联网ID，如：ccn-afp6kltc 注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnGwId 云联网ID，如：ccn-afp6kltc 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCcnGwId() const;

                    /**
                     * 设置云联网ID，如：ccn-afp6kltc 注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnGwId 云联网ID，如：ccn-afp6kltc 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcnGwId(const std::string& _ccnGwId);

                    /**
                     * 判断参数 CcnGwId 是否已赋值
                     * @return CcnGwId 是否已赋值
                     * 
                     */
                    bool CcnGwIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID，格式如：vpc-92jblxto；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * @return VpcId 私有网络ID，格式如：vpc-92jblxto；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，格式如：vpc-92jblxto；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * @param _vpcId 私有网络ID，格式如：vpc-92jblxto；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
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
                     * 获取私有网络下的子网ID，格式如：subnet-3paxmkdz；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * @return SubnetId 私有网络下的子网ID，格式如：subnet-3paxmkdz；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，格式如：subnet-3paxmkdz；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     * @param _subnetId 私有网络下的子网ID，格式如：subnet-3paxmkdz；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
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
                     * 获取数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * @return EngineVersion 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * @param _engineVersion 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
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
                     * 获取实例所属账号
                     * @return Account 实例所属账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置实例所属账号
                     * @param _account 实例所属账号
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
                     * 获取跨账号迁移时的角色,只允许[a-zA-Z0-9\-\_]+
                     * @return AccountRole 跨账号迁移时的角色,只允许[a-zA-Z0-9\-\_]+
                     * 
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置跨账号迁移时的角色,只允许[a-zA-Z0-9\-\_]+
                     * @param _accountRole 跨账号迁移时的角色,只允许[a-zA-Z0-9\-\_]+
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
                     * 获取资源所属账号 为空或self(表示本账号内资源)、other(表示其他账户资源)
                     * @return AccountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示其他账户资源)
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置资源所属账号 为空或self(表示本账号内资源)、other(表示其他账户资源)
                     * @param _accountMode 资源所属账号 为空或self(表示本账号内资源)、other(表示其他账户资源)
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
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @return TmpSecretId 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @param _tmpSecretId 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
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
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @return TmpSecretKey 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @param _tmpSecretKey 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
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
                     * 获取临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @return TmpToken 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     * @param _tmpToken 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
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
                     * 表示节点角色，针对分布式数据库，如mongodb中的mongos节点。tdsqlmysql的可选项：proxy表示节点类型为主机，set表示节点类型为节点。proxy类型必须填在数组第一项。tdsqlmysql类型的源/目标配置必填。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 内核版本，针对mariadb的不同内核版本等
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * 实例的IP地址，对于公网、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例的端口，对于公网、云主机自建、专线、VPN、云联网、自研上云、VPC等接入方式此项必填
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例的用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 实例的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * CVM实例短ID，格式如：ins-olgl39y8；与云服务器控制台页面显示的实例ID相同；如果接入类型为云主机自建的方式，此项必填
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * VPN网关ID，格式如：vpngw-9ghexg7q；如果接入类型为vpncloud的方式，此项必填
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 专线网关ID，格式如：dcg-0rxtqqxb；如果接入类型为专线接入的方式，此项必填
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * 数据库实例ID，格式如：cdb-powiqx8q；如果接入类型为云数据库的方式，此项必填
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云联网ID，如：ccn-afp6kltc 注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccnGwId;
                    bool m_ccnGwIdHasBeenSet;

                    /**
                     * 私有网络ID，格式如：vpc-92jblxto；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，格式如：subnet-3paxmkdz；如果接入类型为vpc、vpncloud、ccn、dcg的方式，此项必填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例所属账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 跨账号迁移时的角色,只允许[a-zA-Z0-9\-\_]+
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * 资源所属账号 为空或self(表示本账号内资源)、other(表示其他账户资源)
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 临时密钥Id，可通过申请扮演角色临时访问凭证获取临时密钥https://cloud.tencent.com/document/product/1312/48197，其中角色资源RoleArn的定义可参考DTS跨账号迁移文档(https://cloud.tencent.com/document/product/571/54117)第4节中关于角色的定义。
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * 是否走加密传输、UnEncrypted表示不走加密传输，Encrypted表示走加密传输，默认UnEncrypted
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

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

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_
