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
                     * 获取设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）
                     * @return Name 设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）
                     * @param _name 设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）
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
                     * 获取设备接入协议（1:RTMP,2:GB,3:GW,6:ISUP）
                     * @return AccessProtocol 设备接入协议（1:RTMP,2:GB,3:GW,6:ISUP）
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置设备接入协议（1:RTMP,2:GB,3:GW,6:ISUP）
                     * @param _accessProtocol 设备接入协议（1:RTMP,2:GB,3:GW,6:ISUP）
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
                     * 获取设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP,IVCP，则设备类型只能选择IPC）
                     * @return Type 设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP,IVCP，则设备类型只能选择IPC）
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP,IVCP，则设备类型只能选择IPC）
                     * @param _type 设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP,IVCP，则设备类型只能选择IPC）
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
                     * 获取设备所属组织ID，从查询组织接口DescribeOrganization中获取
                     * @return OrganizationId 设备所属组织ID，从查询组织接口DescribeOrganization中获取
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置设备所属组织ID，从查询组织接口DescribeOrganization中获取
                     * @param _organizationId 设备所属组织ID，从查询组织接口DescribeOrganization中获取
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
                     * 获取设备接入服务节点ID（从查询设备可用服务节点接口DescribeDeviceRegion中获取的Value字段）
                     * @return ClusterId 设备接入服务节点ID（从查询设备可用服务节点接口DescribeDeviceRegion中获取的Value字段）
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置设备接入服务节点ID（从查询设备可用服务节点接口DescribeDeviceRegion中获取的Value字段）
                     * @param _clusterId 设备接入服务节点ID（从查询设备可用服务节点接口DescribeDeviceRegion中获取的Value字段）
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
                     * 获取设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)
                     * @return TransportProtocol 设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)
                     * @param _transportProtocol 设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)
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
                     * 获取设备密码（国标，网关设备必填，长度为1-64个字符）
                     * @return Password 设备密码（国标，网关设备必填，长度为1-64个字符）
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设备密码（国标，网关设备必填，长度为1-64个字符）
                     * @param _password 设备密码（国标，网关设备必填，长度为1-64个字符）
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
                     * 获取设备描述，长度不超过128个字符
                     * @return Description 设备描述，长度不超过128个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备描述，长度不超过128个字符
                     * @param _description 设备描述，长度不超过128个字符
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
                     * 获取设备接入网关ID，从查询网关列表接口中ListGateways获取（仅网关接入需要）
                     * @return GatewayId 设备接入网关ID，从查询网关列表接口中ListGateways获取（仅网关接入需要）
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置设备接入网关ID，从查询网关列表接口中ListGateways获取（仅网关接入需要）
                     * @param _gatewayId 设备接入网关ID，从查询网关列表接口中ListGateways获取（仅网关接入需要）
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
                     * 获取网关接入协议类型（从查询网关接入协议接口DescribeGatewayProtocol中获取）1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * @return ProtocolType 网关接入协议类型（从查询网关接入协议接口DescribeGatewayProtocol中获取）1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置网关接入协议类型（从查询网关接入协议接口DescribeGatewayProtocol中获取）1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * @param _protocolType 网关接入协议类型（从查询网关接入协议接口DescribeGatewayProtocol中获取）1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
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
                     * 获取设备接入IP（仅网关接入需要）
                     * @return Ip 设备接入IP（仅网关接入需要）
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置设备接入IP（仅网关接入需要）
                     * @param _ip 设备接入IP（仅网关接入需要）
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
                     * 获取设备端口（仅网关接入需要）
                     * @return Port 设备端口（仅网关接入需要）
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置设备端口（仅网关接入需要）
                     * @param _port 设备端口（仅网关接入需要）
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
                     * 获取设备用户名（仅网关接入需要）
                     * @return Username 设备用户名（仅网关接入需要）
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置设备用户名（仅网关接入需要）
                     * @param _username 设备用户名（仅网关接入需要）
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
                     * 获取设备 SN，仅IVCP 协议设备需要
                     * @return SNCode 设备 SN，仅IVCP 协议设备需要
                     * 
                     */
                    std::string GetSNCode() const;

                    /**
                     * 设置设备 SN，仅IVCP 协议设备需要
                     * @param _sNCode 设备 SN，仅IVCP 协议设备需要
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
                     * 获取RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * @return AppName RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * @param _appName RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
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
                     * 获取RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * @return StreamName RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     * @param _streamName RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
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
                     * 设备名称，仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位；（设备名称无需全局唯一，可以重复）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备接入协议（1:RTMP,2:GB,3:GW,6:ISUP）
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * 设备类型，1:IPC,2:NVR；（若设备接入协议选择RTMP,IVCP，则设备类型只能选择IPC）
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设备所属组织ID，从查询组织接口DescribeOrganization中获取
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 设备接入服务节点ID（从查询设备可用服务节点接口DescribeDeviceRegion中获取的Value字段）
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 设备流传输协议，1:UDP,2:TCP；(国标设备有效，不填写则默认UDP协议)
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * 设备密码（国标，网关设备必填，长度为1-64个字符）
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 设备描述，长度不超过128个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备接入网关ID，从查询网关列表接口中ListGateways获取（仅网关接入需要）
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关接入协议类型（从查询网关接入协议接口DescribeGatewayProtocol中获取）1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 设备接入IP（仅网关接入需要）
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 设备端口（仅网关接入需要）
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 设备用户名（仅网关接入需要）
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 设备 SN，仅IVCP 协议设备需要
                     */
                    std::string m_sNCode;
                    bool m_sNCodeHasBeenSet;

                    /**
                     * RTMP推流地址自定义AppName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * RTMP推流地址自定义StreamName（仅RTMP需要，支持英文、数字、_、-、.、长度不超过64位）
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDUSERDEVICEREQUEST_H_
