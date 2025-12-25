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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_EXTERNALDEVICE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_EXTERNALDEVICE_H_

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
                * 主机参数，导入外部主机时使用
                */
                class ExternalDevice : public AbstractModel
                {
                public:
                    ExternalDevice();
                    ~ExternalDevice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作系统名称，只能是主机（Linux、Windows）、数据库（MySQL、SQL Server、MariaDB、PostgreSQL、MongoDBReplicaSet、MongoDBSharded、Redis）、容器（TKE、EKS）
                     * @return OsName 操作系统名称，只能是主机（Linux、Windows）、数据库（MySQL、SQL Server、MariaDB、PostgreSQL、MongoDBReplicaSet、MongoDBSharded、Redis）、容器（TKE、EKS）
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称，只能是主机（Linux、Windows）、数据库（MySQL、SQL Server、MariaDB、PostgreSQL、MongoDBReplicaSet、MongoDBSharded、Redis）、容器（TKE、EKS）
                     * @param _osName 操作系统名称，只能是主机（Linux、Windows）、数据库（MySQL、SQL Server、MariaDB、PostgreSQL、MongoDBReplicaSet、MongoDBSharded、Redis）、容器（TKE、EKS）
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
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
                     * 获取管理端口
                     * @return Port 管理端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置管理端口
                     * @param _port 管理端口
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
                     * 获取主机名，可为空
                     * @return Name 主机名，可为空
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机名，可为空
                     * @param _name 主机名，可为空
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资产所属的部门ID
                     * @return DepartmentId 资产所属的部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置资产所属的部门ID
                     * @param _departmentId 资产所属的部门ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取资产多节点：字段ip和端口
                     * @return IpPortSet 资产多节点：字段ip和端口
                     * 
                     */
                    std::vector<std::string> GetIpPortSet() const;

                    /**
                     * 设置资产多节点：字段ip和端口
                     * @param _ipPortSet 资产多节点：字段ip和端口
                     * 
                     */
                    void SetIpPortSet(const std::vector<std::string>& _ipPortSet);

                    /**
                     * 判断参数 IpPortSet 是否已赋值
                     * @return IpPortSet 是否已赋值
                     * 
                     */
                    bool IpPortSetHasBeenSet() const;

                    /**
                     * 获取是否启用SSL,1:启用 0：禁用，仅支持Redis资产
                     * @return EnableSSL 是否启用SSL,1:启用 0：禁用，仅支持Redis资产
                     * 
                     */
                    int64_t GetEnableSSL() const;

                    /**
                     * 设置是否启用SSL,1:启用 0：禁用，仅支持Redis资产
                     * @param _enableSSL 是否启用SSL,1:启用 0：禁用，仅支持Redis资产
                     * 
                     */
                    void SetEnableSSL(const int64_t& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取SSL证书，EnableSSL时必填
                     * @return SSLCert SSL证书，EnableSSL时必填
                     * 
                     */
                    std::string GetSSLCert() const;

                    /**
                     * 设置SSL证书，EnableSSL时必填
                     * @param _sSLCert SSL证书，EnableSSL时必填
                     * 
                     */
                    void SetSSLCert(const std::string& _sSLCert);

                    /**
                     * 判断参数 SSLCert 是否已赋值
                     * @return SSLCert 是否已赋值
                     * 
                     */
                    bool SSLCertHasBeenSet() const;

                    /**
                     * 获取SSL证书名称，EnableSSL时必填
                     * @return SSLCertName SSL证书名称，EnableSSL时必填
                     * 
                     */
                    std::string GetSSLCertName() const;

                    /**
                     * 设置SSL证书名称，EnableSSL时必填
                     * @param _sSLCertName SSL证书名称，EnableSSL时必填
                     * 
                     */
                    void SetSSLCertName(const std::string& _sSLCertName);

                    /**
                     * 判断参数 SSLCertName 是否已赋值
                     * @return SSLCertName 是否已赋值
                     * 
                     */
                    bool SSLCertNameHasBeenSet() const;

                    /**
                     * 获取资产实例id
                     * @return InstanceId 资产实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产实例id
                     * @param _instanceId 资产实例id
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
                     * 获取资产所属地域
                     * @return ApCode 资产所属地域
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置资产所属地域
                     * @param _apCode 资产所属地域
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return ApName 地域名称
                     * 
                     */
                    std::string GetApName() const;

                    /**
                     * 设置地域名称
                     * @param _apName 地域名称
                     * 
                     */
                    void SetApName(const std::string& _apName);

                    /**
                     * 判断参数 ApName 是否已赋值
                     * @return ApName 是否已赋值
                     * 
                     */
                    bool ApNameHasBeenSet() const;

                    /**
                     * 获取资产所属VPC
                     * @return VpcId 资产所属VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置资产所属VPC
                     * @param _vpcId 资产所属VPC
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
                     * 获取资产所属子网
                     * @return SubnetId 资产所属子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置资产所属子网
                     * @param _subnetId 资产所属子网
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
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * 操作系统名称，只能是主机（Linux、Windows）、数据库（MySQL、SQL Server、MariaDB、PostgreSQL、MongoDBReplicaSet、MongoDBSharded、Redis）、容器（TKE、EKS）
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 管理端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 主机名，可为空
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资产所属的部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 资产多节点：字段ip和端口
                     */
                    std::vector<std::string> m_ipPortSet;
                    bool m_ipPortSetHasBeenSet;

                    /**
                     * 是否启用SSL,1:启用 0：禁用，仅支持Redis资产
                     */
                    int64_t m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * SSL证书，EnableSSL时必填
                     */
                    std::string m_sSLCert;
                    bool m_sSLCertHasBeenSet;

                    /**
                     * SSL证书名称，EnableSSL时必填
                     */
                    std::string m_sSLCertName;
                    bool m_sSLCertNameHasBeenSet;

                    /**
                     * 资产实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产所属地域
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_apName;
                    bool m_apNameHasBeenSet;

                    /**
                     * 资产所属VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资产所属子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_EXTERNALDEVICE_H_
