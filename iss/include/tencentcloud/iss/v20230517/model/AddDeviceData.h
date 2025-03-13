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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDDEVICEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDDEVICEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 增加设备接口返回数据
                */
                class AddDeviceData : public AbstractModel
                {
                public:
                    AddDeviceData();
                    ~AddDeviceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备iD
                     * @return DeviceId 设备iD
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备iD
                     * @param _deviceId 设备iD
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）
                     * @return Code 设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）
                     * @param _code 设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return Name 设备名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名称
                     * @param _name 设备名称
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
                     * 获取设备接入协议，1:RTMP,2:GB,3:GW 
                     * @return AccessProtocol 设备接入协议，1:RTMP,2:GB,3:GW 
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置设备接入协议，1:RTMP,2:GB,3:GW 
                     * @param _accessProtocol 设备接入协议，1:RTMP,2:GB,3:GW 
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
                     * 获取设备类型，1:IPC,2:NVR
                     * @return Type 设备类型，1:IPC,2:NVR
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置设备类型，1:IPC,2:NVR
                     * @param _type 设备类型，1:IPC,2:NVR
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
                     * 获取设备接入服务节点ID
                     * @return ClusterId 设备接入服务节点ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置设备接入服务节点ID
                     * @param _clusterId 设备接入服务节点ID
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
                     * 获取设备接入服务节点名称

                     * @return ClusterName 设备接入服务节点名称

                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置设备接入服务节点名称

                     * @param _clusterName 设备接入服务节点名称

                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取设备流传输协议，1:UDP,2:TCP 
                     * @return TransportProtocol 设备流传输协议，1:UDP,2:TCP 
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置设备流传输协议，1:UDP,2:TCP 
                     * @param _transportProtocol 设备流传输协议，1:UDP,2:TCP 
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
                     * 获取设备密码
                     * @return Password 设备密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设备密码
                     * @param _password 设备密码
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
                     * 获取设备描述
                     * @return Description 设备描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备描述
                     * @param _description 设备描述
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
                     * 获取设备状态，0:未注册,1:在线,2:离线,3:禁用
                     * @return Status 设备状态，0:未注册,1:在线,2:离线,3:禁用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置设备状态，0:未注册,1:在线,2:离线,3:禁用
                     * @param _status 设备状态，0:未注册,1:在线,2:离线,3:禁用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备所属组织ID
                     * @return OrganizationId 设备所属组织ID
                     * 
                     */
                    int64_t GetOrganizationId() const;

                    /**
                     * 设置设备所属组织ID
                     * @param _organizationId 设备所属组织ID
                     * 
                     */
                    void SetOrganizationId(const int64_t& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）
                     * @return GatewayId 设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）
                     * @param _gatewayId 设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）
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
                     * 获取网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * @return ProtocolType 网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     * @param _protocolType 网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
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
                     * 获取设备Port（仅网关接入需要）
                     * @return Port 设备Port（仅网关接入需要）
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置设备Port（仅网关接入需要）
                     * @param _port 设备Port（仅网关接入需要）
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
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 设备iD
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备接入协议，1:RTMP,2:GB,3:GW 
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * 设备类型，1:IPC,2:NVR
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设备接入服务节点ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 设备接入服务节点名称

                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 设备流传输协议，1:UDP,2:TCP 
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * 设备密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 设备描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备状态，0:未注册,1:在线,2:离线,3:禁用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备所属组织ID
                     */
                    int64_t m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 设备接入IP（仅网关接入需要）
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 设备Port（仅网关接入需要）
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 设备用户名（仅网关接入需要）
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDDEVICEDATA_H_
