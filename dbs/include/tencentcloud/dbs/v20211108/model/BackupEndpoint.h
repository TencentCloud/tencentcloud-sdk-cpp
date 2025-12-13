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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPENDPOINT_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份源实例详情
                */
                class BackupEndpoint : public AbstractModel
                {
                public:
                    BackupEndpoint();
                    ~BackupEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库类型。目前支持的值["mysql", "mariadb", "percona"]。注意，该值必须和备份计划的类型一致。
                     * @return DatabaseType 数据库类型。目前支持的值["mysql", "mariadb", "percona"]。注意，该值必须和备份计划的类型一致。
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置数据库类型。目前支持的值["mysql", "mariadb", "percona"]。注意，该值必须和备份计划的类型一致。
                     * @param _databaseType 数据库类型。目前支持的值["mysql", "mariadb", "percona"]。注意，该值必须和备份计划的类型一致。
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
                     * 获取实例接入类型，支持的值包括：
"extranet" - 外网;
"cvm" - cvm自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网接入。
                     * @return AccessType 实例接入类型，支持的值包括：
"extranet" - 外网;
"cvm" - cvm自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网接入。
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置实例接入类型，支持的值包括：
"extranet" - 外网;
"cvm" - cvm自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网接入。
                     * @param _accessType 实例接入类型，支持的值包括：
"extranet" - 外网;
"cvm" - cvm自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网接入。
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
                     * 获取用户名。
                     * @return UserName 用户名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名。
                     * @param _userName 用户名。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取登录密码。
                     * @return Password 登录密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置登录密码。
                     * @param _password 登录密码。
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
                     * 获取接入地域。
                     * @return Region 接入地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置接入地域。
                     * @param _region 接入地域。
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
                     * 获取服务提供商，支持的值包括["aliyun", "aws", "others"]。
                     * @return Supplier 服务提供商，支持的值包括["aliyun", "aws", "others"]。
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置服务提供商，支持的值包括["aliyun", "aws", "others"]。
                     * @param _supplier 服务提供商，支持的值包括["aliyun", "aws", "others"]。
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
                     * 获取实例 Ip。
                     * @return Ip 实例 Ip。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例 Ip。
                     * @param _ip 实例 Ip。
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
                     * 获取实例端口号。
                     * @return Port 实例端口号。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例端口号。
                     * @param _port 实例端口号。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取云数据库实例ID，格式如：cdb-qcloudtest。
                     * @return InstanceId 云数据库实例ID，格式如：cdb-qcloudtest。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云数据库实例ID，格式如：cdb-qcloudtest。
                     * @param _instanceId 云数据库实例ID，格式如：cdb-qcloudtest。
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
                     * 获取CVM 实例ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要填写该字段。
                     * @return CvmInstanceId CVM 实例ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要填写该字段。
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM 实例ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要填写该字段。
                     * @param _cvmInstanceId CVM 实例ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要填写该字段。
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
                     * 获取专线网关ID，格式如：dcg-0rxtqqxb。
                     * @return UniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb。
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID，格式如：dcg-0rxtqqxb。
                     * @param _uniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb。
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
                     * 获取VPN网关ID，格式如：vpngw-9ghexg7q。
                     * @return UniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q。
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN网关ID，格式如：vpngw-9ghexg7q。
                     * @param _uniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q。
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
                     * 获取私有网络ID，格式如：vpc-92jblxto。
                     * @return VpcId 私有网络ID，格式如：vpc-92jblxto。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，格式如：vpc-92jblxto。
                     * @param _vpcId 私有网络ID，格式如：vpc-92jblxto。
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
                     * 获取子网ID，格式如：subnet-3paxmkdz。
                     * @return SubnetId 子网ID，格式如：subnet-3paxmkdz。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID，格式如：subnet-3paxmkdz。
                     * @param _subnetId 子网ID，格式如：subnet-3paxmkdz。
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
                     * 获取云联网ID，如：ccn-afp6kltc。
                     * @return CcnId 云联网ID，如：ccn-afp6kltc。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID，如：ccn-afp6kltc。
                     * @param _ccnId 云联网ID，如：ccn-afp6kltc。
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
                     * 获取数据库版本，当实例为 RDS 或 AWS 实例时才有效，格式如：5.6或者5.7，默认为5.6。
                     * @return EngineVersion 数据库版本，当实例为 RDS 或 AWS 实例时才有效，格式如：5.6或者5.7，默认为5.6。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本，当实例为 RDS 或 AWS 实例时才有效，格式如：5.6或者5.7，默认为5.6。
                     * @param _engineVersion 数据库版本，当实例为 RDS 或 AWS 实例时才有效，格式如：5.6或者5.7，默认为5.6。
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
                     * 获取mariadb三引擎版本。
                     * @return DBKernel mariadb三引擎版本。
                     * 
                     */
                    std::string GetDBKernel() const;

                    /**
                     * 设置mariadb三引擎版本。
                     * @param _dBKernel mariadb三引擎版本。
                     * 
                     */
                    void SetDBKernel(const std::string& _dBKernel);

                    /**
                     * 判断参数 DBKernel 是否已赋值
                     * @return DBKernel 是否已赋值
                     * 
                     */
                    bool DBKernelHasBeenSet() const;

                private:

                    /**
                     * 数据库类型。目前支持的值["mysql", "mariadb", "percona"]。注意，该值必须和备份计划的类型一致。
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 实例接入类型，支持的值包括：
"extranet" - 外网;
"cvm" - cvm自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网接入。
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 登录密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 接入地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 服务提供商，支持的值包括["aliyun", "aws", "others"]。
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * 实例 Ip。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例端口号。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 云数据库实例ID，格式如：cdb-qcloudtest。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CVM 实例ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要填写该字段。
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID，格式如：dcg-0rxtqqxb。
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * VPN网关ID，格式如：vpngw-9ghexg7q。
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 私有网络ID，格式如：vpc-92jblxto。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID，格式如：subnet-3paxmkdz。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 云联网ID，如：ccn-afp6kltc。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 数据库版本，当实例为 RDS 或 AWS 实例时才有效，格式如：5.6或者5.7，默认为5.6。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * mariadb三引擎版本。
                     */
                    std::string m_dBKernel;
                    bool m_dBKernelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPENDPOINT_H_
