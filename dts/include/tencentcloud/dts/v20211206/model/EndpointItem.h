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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 数据订阅的实例节点信息
                */
                class EndpointItem : public AbstractModel
                {
                public:
                    EndpointItem();
                    ~EndpointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源库所在地域。如果 AccessType 为 ccn，请填vpc所在地域，因为此时不知道源库在哪个地域。其他接入方式，请填订阅任务所在地域，因为确保订阅任务与源库在同一地域是最优的网络方案。
                     * @return DatabaseRegion 源库所在地域。如果 AccessType 为 ccn，请填vpc所在地域，因为此时不知道源库在哪个地域。其他接入方式，请填订阅任务所在地域，因为确保订阅任务与源库在同一地域是最优的网络方案。
                     * 
                     */
                    std::string GetDatabaseRegion() const;

                    /**
                     * 设置源库所在地域。如果 AccessType 为 ccn，请填vpc所在地域，因为此时不知道源库在哪个地域。其他接入方式，请填订阅任务所在地域，因为确保订阅任务与源库在同一地域是最优的网络方案。
                     * @param _databaseRegion 源库所在地域。如果 AccessType 为 ccn，请填vpc所在地域，因为此时不知道源库在哪个地域。其他接入方式，请填订阅任务所在地域，因为确保订阅任务与源库在同一地域是最优的网络方案。
                     * 
                     */
                    void SetDatabaseRegion(const std::string& _databaseRegion);

                    /**
                     * 判断参数 DatabaseRegion 是否已赋值
                     * @return DatabaseRegion 是否已赋值
                     * 
                     */
                    bool DatabaseRegionHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return User 用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
                     * @param _user 用户名
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
                     * 获取密码。作为入参时必填，作为出参时为空。
                     * @return Password 密码。作为入参时必填，作为出参时为空。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码。作为入参时必填，作为出参时为空。
                     * @param _password 密码。作为入参时必填，作为出参时为空。
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
                     * 获取目标实例ID。如果 AccessType 为 cdb，此项必填。配置InstanceId时会查询并校验实例信息。mysql的查询接口经过了鉴权，请确保子用户有 cdb:DescribeDBInstances 的接口权限。
                     * @return InstanceId 目标实例ID。如果 AccessType 为 cdb，此项必填。配置InstanceId时会查询并校验实例信息。mysql的查询接口经过了鉴权，请确保子用户有 cdb:DescribeDBInstances 的接口权限。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置目标实例ID。如果 AccessType 为 cdb，此项必填。配置InstanceId时会查询并校验实例信息。mysql的查询接口经过了鉴权，请确保子用户有 cdb:DescribeDBInstances 的接口权限。
                     * @param _instanceId 目标实例ID。如果 AccessType 为 cdb，此项必填。配置InstanceId时会查询并校验实例信息。mysql的查询接口经过了鉴权，请确保子用户有 cdb:DescribeDBInstances 的接口权限。
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
                     * 获取云主机ID。如果 AccessType 为 cvm，此项必填。
                     * @return CvmInstanceId 云主机ID。如果 AccessType 为 cvm，此项必填。
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置云主机ID。如果 AccessType 为 cvm，此项必填。
                     * @param _cvmInstanceId 云主机ID。如果 AccessType 为 cvm，此项必填。
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
                     * 获取专线网关ID。如果 AccessType 为 dcg，此项必填。
                     * @return UniqDcgId 专线网关ID。如果 AccessType 为 dcg，此项必填。
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID。如果 AccessType 为 dcg，此项必填。
                     * @param _uniqDcgId 专线网关ID。如果 AccessType 为 dcg，此项必填。
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
                     * 获取云联网ID。如果 AccessType 为 ccn，此项必填。 
                     * @return CcnId 云联网ID。如果 AccessType 为 ccn，此项必填。 
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。如果 AccessType 为 ccn，此项必填。 
                     * @param _ccnId 云联网ID。如果 AccessType 为 ccn，此项必填。 
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
                     * 获取vpn网关ID。如果 AccessType 为 vpncloud，此项必填。
                     * @return UniqVpnGwId vpn网关ID。如果 AccessType 为 vpncloud，此项必填。
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置vpn网关ID。如果 AccessType 为 vpncloud，此项必填。
                     * @param _uniqVpnGwId vpn网关ID。如果 AccessType 为 vpncloud，此项必填。
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
                     * 获取VpcID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * @return VpcId VpcID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * @param _vpcId VpcID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
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
                     * 获取子网ID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * @return SubnetId 子网ID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     * @param _subnetId 子网ID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
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
                     * 获取数据库地址，支持域名与IP。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet，此项必填。
                     * @return HostName 数据库地址，支持域名与IP。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet，此项必填。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置数据库地址，支持域名与IP。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet，此项必填。
                     * @param _hostName 数据库地址，支持域名与IP。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet，此项必填。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取数据库端口。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet\cvm，此项必填。
                     * @return Port 数据库端口。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet\cvm，此项必填。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置数据库端口。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet\cvm，此项必填。
                     * @param _port 数据库端口。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet\cvm，此项必填。
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
                     * 获取是否走加密传输，枚举值：UnEncrypted-不加密，Encrypted-加密。只有mysql支持，不填默认不加密，其他产品不填。
                     * @return EncryptConn 是否走加密传输，枚举值：UnEncrypted-不加密，Encrypted-加密。只有mysql支持，不填默认不加密，其他产品不填。
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置是否走加密传输，枚举值：UnEncrypted-不加密，Encrypted-加密。只有mysql支持，不填默认不加密，其他产品不填。
                     * @param _encryptConn 是否走加密传输，枚举值：UnEncrypted-不加密，Encrypted-加密。只有mysql支持，不填默认不加密，其他产品不填。
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
                     * 获取数据库网络环境。如果 AccessType 为 ccn 此项必填。枚举值：UserIDC-自建idc，TencentVPC-腾讯云，Aws-aws，AliYun-阿里云，Others-其他。
                     * @return DatabaseNetEnv 数据库网络环境。如果 AccessType 为 ccn 此项必填。枚举值：UserIDC-自建idc，TencentVPC-腾讯云，Aws-aws，AliYun-阿里云，Others-其他。
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置数据库网络环境。如果 AccessType 为 ccn 此项必填。枚举值：UserIDC-自建idc，TencentVPC-腾讯云，Aws-aws，AliYun-阿里云，Others-其他。
                     * @param _databaseNetEnv 数据库网络环境。如果 AccessType 为 ccn 此项必填。枚举值：UserIDC-自建idc，TencentVPC-腾讯云，Aws-aws，AliYun-阿里云，Others-其他。
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
                     * 获取云联网网关所属的主账号uin、跨账号云联网需要。
                     * @return CcnOwnerUin 云联网网关所属的主账号uin、跨账号云联网需要。
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置云联网网关所属的主账号uin、跨账号云联网需要。
                     * @param _ccnOwnerUin 云联网网关所属的主账号uin、跨账号云联网需要。
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
                     * 获取为业务添加的额外信息。参数名作key，参数值作value。 
tdpg必填参数：PgDatabase-订阅的库名；
mongo选填参数：InstanceType-实例类型：replicaset-副本集，cluster-分片集，主要用于控制台跳转到mongo实例页面，如不填不影响任务运行；
全业务选填参数：EngineVersion-内核版本。
                     * @return ExtraAttr 为业务添加的额外信息。参数名作key，参数值作value。 
tdpg必填参数：PgDatabase-订阅的库名；
mongo选填参数：InstanceType-实例类型：replicaset-副本集，cluster-分片集，主要用于控制台跳转到mongo实例页面，如不填不影响任务运行；
全业务选填参数：EngineVersion-内核版本。
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置为业务添加的额外信息。参数名作key，参数值作value。 
tdpg必填参数：PgDatabase-订阅的库名；
mongo选填参数：InstanceType-实例类型：replicaset-副本集，cluster-分片集，主要用于控制台跳转到mongo实例页面，如不填不影响任务运行；
全业务选填参数：EngineVersion-内核版本。
                     * @param _extraAttr 为业务添加的额外信息。参数名作key，参数值作value。 
tdpg必填参数：PgDatabase-订阅的库名；
mongo选填参数：InstanceType-实例类型：replicaset-副本集，cluster-分片集，主要用于控制台跳转到mongo实例页面，如不填不影响任务运行；
全业务选填参数：EngineVersion-内核版本。
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

                private:

                    /**
                     * 源库所在地域。如果 AccessType 为 ccn，请填vpc所在地域，因为此时不知道源库在哪个地域。其他接入方式，请填订阅任务所在地域，因为确保订阅任务与源库在同一地域是最优的网络方案。
                     */
                    std::string m_databaseRegion;
                    bool m_databaseRegionHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码。作为入参时必填，作为出参时为空。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 目标实例ID。如果 AccessType 为 cdb，此项必填。配置InstanceId时会查询并校验实例信息。mysql的查询接口经过了鉴权，请确保子用户有 cdb:DescribeDBInstances 的接口权限。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云主机ID。如果 AccessType 为 cvm，此项必填。
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID。如果 AccessType 为 dcg，此项必填。
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * 云联网ID。如果 AccessType 为 ccn，此项必填。 
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * vpn网关ID。如果 AccessType 为 vpncloud，此项必填。
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * VpcID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID。如果 AccessType 为 dcg\ccn\vpncloud\vpc，此项必填。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库地址，支持域名与IP。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet，此项必填。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 数据库端口。如果 AccessType 为 dcg\ccn\vpncloud\vpc\extranet\intranet\cvm，此项必填。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 是否走加密传输，枚举值：UnEncrypted-不加密，Encrypted-加密。只有mysql支持，不填默认不加密，其他产品不填。
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * 数据库网络环境。如果 AccessType 为 ccn 此项必填。枚举值：UserIDC-自建idc，TencentVPC-腾讯云，Aws-aws，AliYun-阿里云，Others-其他。
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * 云联网网关所属的主账号uin、跨账号云联网需要。
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                    /**
                     * 为业务添加的额外信息。参数名作key，参数值作value。 
tdpg必填参数：PgDatabase-订阅的库名；
mongo选填参数：InstanceType-实例类型：replicaset-副本集，cluster-分片集，主要用于控制台跳转到mongo实例页面，如不填不影响任务运行；
全业务选填参数：EngineVersion-内核版本。
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_
