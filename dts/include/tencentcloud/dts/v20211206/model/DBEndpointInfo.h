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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DBInfo.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class DBEndpointInfo : public AbstractModel
                {
                public:
                    DBEndpointInfo();
                    ~DBEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所在地域
                     * @return Region 实例所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param _region 实例所在地域
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
                     * 获取实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
                     * @return AccessType 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
                     * @param _accessType 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
                     * @return DatabaseType 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
                     * @param _databaseType 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取节点类型，simple表示普通节点、cluster表示集群节点；
对于mongo业务，取值为replicaset(mongodb副本集)、standalone(mongodb单节点)、cluster(mongodb集群)；
对于redis实例，simple(单节点)、cluster-cache(直连集群)、cluster-proxy(代理集群)；
                     * @return NodeType 节点类型，simple表示普通节点、cluster表示集群节点；
对于mongo业务，取值为replicaset(mongodb副本集)、standalone(mongodb单节点)、cluster(mongodb集群)；
对于redis实例，simple(单节点)、cluster-cache(直连集群)、cluster-proxy(代理集群)；
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型，simple表示普通节点、cluster表示集群节点；
对于mongo业务，取值为replicaset(mongodb副本集)、standalone(mongodb单节点)、cluster(mongodb集群)；
对于redis实例，simple(单节点)、cluster-cache(直连集群)、cluster-proxy(代理集群)；
                     * @param _nodeType 节点类型，simple表示普通节点、cluster表示集群节点；
对于mongo业务，取值为replicaset(mongodb副本集)、standalone(mongodb单节点)、cluster(mongodb集群)；
对于redis实例，simple(单节点)、cluster-cache(直连集群)、cluster-proxy(代理集群)；
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取实例具体的连接信息，如ip、port、接入方式等
                     * @return Info 实例具体的连接信息，如ip、port、接入方式等
                     * 
                     */
                    std::vector<DBInfo> GetInfo() const;

                    /**
                     * 设置实例具体的连接信息，如ip、port、接入方式等
                     * @param _info 实例具体的连接信息，如ip、port、接入方式等
                     * 
                     */
                    void SetInfo(const std::vector<DBInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取实例服务提供商，如:"aliyun","others"
                     * @return Supplier 实例服务提供商，如:"aliyun","others"
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置实例服务提供商，如:"aliyun","others"
                     * @param _supplier 实例服务提供商，如:"aliyun","others"
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
                     * 获取此参数为数组类型，可以传多个键值对结构对象。
MongoDB可定义如下的参数：
'AuthDatabase':'admin',
'AuthFlag': "1",
'AuthMechanism':"SCRAM-SHA-1",
"fetchMethod":"oplog",
"connectMode":"srv",
"EncryptedConnProtocol":"mongo_atlas_ssl"；
其中fetchMethod表示迁移方式，还可支持change_stream；EncryptedConnProtocol值为mongo_atlas_ssl表示使用atlas ssl连接方式。
                     * @return ExtraAttr 此参数为数组类型，可以传多个键值对结构对象。
MongoDB可定义如下的参数：
'AuthDatabase':'admin',
'AuthFlag': "1",
'AuthMechanism':"SCRAM-SHA-1",
"fetchMethod":"oplog",
"connectMode":"srv",
"EncryptedConnProtocol":"mongo_atlas_ssl"；
其中fetchMethod表示迁移方式，还可支持change_stream；EncryptedConnProtocol值为mongo_atlas_ssl表示使用atlas ssl连接方式。
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置此参数为数组类型，可以传多个键值对结构对象。
MongoDB可定义如下的参数：
'AuthDatabase':'admin',
'AuthFlag': "1",
'AuthMechanism':"SCRAM-SHA-1",
"fetchMethod":"oplog",
"connectMode":"srv",
"EncryptedConnProtocol":"mongo_atlas_ssl"；
其中fetchMethod表示迁移方式，还可支持change_stream；EncryptedConnProtocol值为mongo_atlas_ssl表示使用atlas ssl连接方式。
                     * @param _extraAttr 此参数为数组类型，可以传多个键值对结构对象。
MongoDB可定义如下的参数：
'AuthDatabase':'admin',
'AuthFlag': "1",
'AuthMechanism':"SCRAM-SHA-1",
"fetchMethod":"oplog",
"connectMode":"srv",
"EncryptedConnProtocol":"mongo_atlas_ssl"；
其中fetchMethod表示迁移方式，还可支持change_stream；EncryptedConnProtocol值为mongo_atlas_ssl表示使用atlas ssl连接方式。
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

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
                     * 获取tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，Info中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，Info中需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。
                     * @return ConnectType tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，Info中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，Info中需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。
                     * 
                     */
                    std::string GetConnectType() const;

                    /**
                     * 设置tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，Info中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，Info中需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。
                     * @param _connectType tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，Info中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，Info中需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。
                     * 
                     */
                    void SetConnectType(const std::string& _connectType);

                    /**
                     * 判断参数 ConnectType 是否已赋值
                     * @return ConnectType 是否已赋值
                     * 
                     */
                    bool ConnectTypeHasBeenSet() const;

                    /**
                     * 获取云联网网关所属账号，如果云联网网关为其他账号资源需要填写
                     * @return CcnOwnerUin 云联网网关所属账号，如果云联网网关为其他账号资源需要填写
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置云联网网关所属账号，如果云联网网关为其他账号资源需要填写
                     * @param _ccnOwnerUin 云联网网关所属账号，如果云联网网关为其他账号资源需要填写
                     * 
                     */
                    void SetCcnOwnerUin(const std::string& _ccnOwnerUin);

                    /**
                     * 判断参数 CcnOwnerUin 是否已赋值
                     * @return CcnOwnerUin 是否已赋值
                     * 
                     */
                    bool CcnOwnerUinHasBeenSet() const;

                private:

                    /**
                     * 实例所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 节点类型，simple表示普通节点、cluster表示集群节点；
对于mongo业务，取值为replicaset(mongodb副本集)、standalone(mongodb单节点)、cluster(mongodb集群)；
对于redis实例，simple(单节点)、cluster-cache(直连集群)、cluster-proxy(代理集群)；
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 实例具体的连接信息，如ip、port、接入方式等
                     */
                    std::vector<DBInfo> m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 实例服务提供商，如:"aliyun","others"
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * 此参数为数组类型，可以传多个键值对结构对象。
MongoDB可定义如下的参数：
'AuthDatabase':'admin',
'AuthFlag': "1",
'AuthMechanism':"SCRAM-SHA-1",
"fetchMethod":"oplog",
"connectMode":"srv",
"EncryptedConnProtocol":"mongo_atlas_ssl"；
其中fetchMethod表示迁移方式，还可支持change_stream；EncryptedConnProtocol值为mongo_atlas_ssl表示使用atlas ssl连接方式。
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * 数据库所属网络环境，AccessType为云联网(ccn)时必填， UserIDC表示用户IDC、TencentVPC表示腾讯云VPC；
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * tdsql连接方式：proxy-通过tdsql proxy主机访问各个set节点，注意只有在自研上云的网络环境下才能通过这种方式连接，Info中只需要提供proxy主机信息。set-直连set节点，如选择直连set方式，Info中需要正确填写proxy主机信息及所有set节点信息。源端是tdsqlmysql类型必填。
                     */
                    std::string m_connectType;
                    bool m_connectTypeHasBeenSet;

                    /**
                     * 云联网网关所属账号，如果云联网网关为其他账号资源需要填写
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_
