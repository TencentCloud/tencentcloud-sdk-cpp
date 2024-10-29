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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
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
                     * 获取操作系统名称，只能是Linux、Windows或MySQL
                     * @return OsName 操作系统名称，只能是Linux、Windows或MySQL
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称，只能是Linux、Windows或MySQL
                     * @param _osName 操作系统名称，只能是Linux、Windows或MySQL
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

                private:

                    /**
                     * 操作系统名称，只能是Linux、Windows或MySQL
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_
