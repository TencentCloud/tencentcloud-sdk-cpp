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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDUSERDEVICEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDUSERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddUserDevice请求参数结构体
                */
                class AddUserDeviceRequest : public AbstractModel
                {
                public:
                    AddUserDeviceRequest();
                    ~AddUserDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）</p>
                     * @return Name <p>设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）</p>
                     * @param _name <p>设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）</p>
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
                     * 获取<p>设备接入协议（1:RTMP,2:GB,6:ISUP）</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li><li>6： ISUP</li></ul><p>默认值：2</p>
                     * @return AccessProtocol <p>设备接入协议（1:RTMP,2:GB,6:ISUP）</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li><li>6： ISUP</li></ul><p>默认值：2</p>
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置<p>设备接入协议（1:RTMP,2:GB,6:ISUP）</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li><li>6： ISUP</li></ul><p>默认值：2</p>
                     * @param _accessProtocol <p>设备接入协议（1:RTMP,2:GB,6:ISUP）</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li><li>6： ISUP</li></ul><p>默认值：2</p>
                     * 
                     */
                    void SetAccessProtocol(const int64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取<p>设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP，则设备类型只能选择IPC）</p><p>枚举值：</p><ul><li>1： IPC</li><li>2： NVR</li></ul>
                     * @return Type <p>设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP，则设备类型只能选择IPC）</p><p>枚举值：</p><ul><li>1： IPC</li><li>2： NVR</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP，则设备类型只能选择IPC）</p><p>枚举值：</p><ul><li>1： IPC</li><li>2： NVR</li></ul>
                     * @param _type <p>设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP，则设备类型只能选择IPC）</p><p>枚举值：</p><ul><li>1： IPC</li><li>2： NVR</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>设备所属组织ID，从查询组织接口DescribeOrganization中获取</p>
                     * @return OrganizationId <p>设备所属组织ID，从查询组织接口DescribeOrganization中获取</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>设备所属组织ID，从查询组织接口DescribeOrganization中获取</p>
                     * @param _organizationId <p>设备所属组织ID，从查询组织接口DescribeOrganization中获取</p>
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>设备接入服务节点ID（从查询设备可用服务节点接口DescribeRegionDomain中获取的Value字段）</p>
                     * @return ClusterId <p>设备接入服务节点ID（从查询设备可用服务节点接口DescribeRegionDomain中获取的Value字段）</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>设备接入服务节点ID（从查询设备可用服务节点接口DescribeRegionDomain中获取的Value字段）</p>
                     * @param _clusterId <p>设备接入服务节点ID（从查询设备可用服务节点接口DescribeRegionDomain中获取的Value字段）</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)</p>
                     * @return TransportProtocol <p>设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)</p>
                     * @param _transportProtocol <p>设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)</p>
                     * 
                     */
                    void SetTransportProtocol(const int64_t& _transportProtocol);

                    /**
                     * 判断参数 TransportProtocol 是否已赋值
                     * @return TransportProtocol 是否已赋值
                     * 
                     */
                    bool TransportProtocolHasBeenSet() const;

                    /**
                     * 获取<p>设备密码（国标设备必填，长度为1-64个字符）</p>
                     * @return Password <p>设备密码（国标设备必填，长度为1-64个字符）</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>设备密码（国标设备必填，长度为1-64个字符）</p>
                     * @param _password <p>设备密码（国标设备必填，长度为1-64个字符）</p>
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
                     * 获取<p>设备描述，长度不超过128个字符</p>
                     * @return Description <p>设备描述，长度不超过128个字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>设备描述，长度不超过128个字符</p>
                     * @param _description <p>设备描述，长度不超过128个字符</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>设备接入网关ID（已不再使用，保留用于兼容，可忽略）</p>
                     * @return GatewayId <p>设备接入网关ID（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>设备接入网关ID（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _gatewayId <p>设备接入网关ID（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>网关接入协议类型（已不再使用，保留用于兼容，可忽略）</p>
                     * @return ProtocolType <p>网关接入协议类型（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>网关接入协议类型（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _protocolType <p>网关接入协议类型（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    void SetProtocolType(const int64_t& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
                     * @return Ip <p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _ip <p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
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
                     * 获取<p>设备端口（已不再使用，保留用于兼容，可忽略）</p><p>取值范围：[1, 65535]</p><p>单位： 端口</p>
                     * @return Port <p>设备端口（已不再使用，保留用于兼容，可忽略）</p><p>取值范围：[1, 65535]</p><p>单位： 端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>设备端口（已不再使用，保留用于兼容，可忽略）</p><p>取值范围：[1, 65535]</p><p>单位： 端口</p>
                     * @param _port <p>设备端口（已不再使用，保留用于兼容，可忽略）</p><p>取值范围：[1, 65535]</p><p>单位： 端口</p>
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
                     * 获取<p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     * @return Username <p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _username <p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>设备 SN（已不再使用，保留用于兼容，可忽略）</p>
                     * @return SNCode <p>设备 SN（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    std::string GetSNCode() const;

                    /**
                     * 设置<p>设备 SN（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _sNCode <p>设备 SN（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    void SetSNCode(const std::string& _sNCode);

                    /**
                     * 判断参数 SNCode 是否已赋值
                     * @return SNCode 是否已赋值
                     * 
                     */
                    bool SNCodeHasBeenSet() const;

                    /**
                     * 获取<p>RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * @return AppName <p>RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * @param _appName <p>RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * @return StreamName <p>RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * @param _streamName <p>RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * <p>设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设备接入协议（1:RTMP,2:GB,6:ISUP）</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li><li>6： ISUP</li></ul><p>默认值：2</p>
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * <p>设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP，则设备类型只能选择IPC）</p><p>枚举值：</p><ul><li>1： IPC</li><li>2： NVR</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>设备所属组织ID，从查询组织接口DescribeOrganization中获取</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>设备接入服务节点ID（从查询设备可用服务节点接口DescribeRegionDomain中获取的Value字段）</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>设备密码（国标设备必填，长度为1-64个字符）</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>设备描述，长度不超过128个字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>设备接入网关ID（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>网关接入协议类型（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>设备端口（已不再使用，保留用于兼容，可忽略）</p><p>取值范围：[1, 65535]</p><p>单位： 端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>设备 SN（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_sNCode;
                    bool m_sNCodeHasBeenSet;

                    /**
                     * <p>RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDUSERDEVICEREQUEST_H_
