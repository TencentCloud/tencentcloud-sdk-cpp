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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_

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
                * 修改设备接口返回数据
                */
                class UpdateDeviceData : public AbstractModel
                {
                public:
                    UpdateDeviceData();
                    ~UpdateDeviceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>设备ID</p>
                     * @return DeviceId <p>设备ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _deviceId <p>设备ID</p>
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
                     * 获取<p>设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）</p>
                     * @return Code <p>设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）</p>
                     * @param _code <p>设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）</p>
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
                     * 获取<p>设备名称</p>
                     * @return Name <p>设备名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _name <p>设备名称</p>
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
                     * 获取<p>设备接入协议，1:RTMP,2:GB</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li></ul>
                     * @return AccessProtocol <p>设备接入协议，1:RTMP,2:GB</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li></ul>
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置<p>设备接入协议，1:RTMP,2:GB</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li></ul>
                     * @param _accessProtocol <p>设备接入协议，1:RTMP,2:GB</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li></ul>
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
                     * 获取<p>设备类型，1:IPC,2:NVR</p>
                     * @return Type <p>设备类型，1:IPC,2:NVR</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>设备类型，1:IPC,2:NVR</p>
                     * @param _type <p>设备类型，1:IPC,2:NVR</p>
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
                     * 获取<p>设备接入服务节点ID</p>
                     * @return ClusterId <p>设备接入服务节点ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>设备接入服务节点ID</p>
                     * @param _clusterId <p>设备接入服务节点ID</p>
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
                     * 获取<p>设备接入服务节点名称</p>
                     * @return ClusterName <p>设备接入服务节点名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>设备接入服务节点名称</p>
                     * @param _clusterName <p>设备接入服务节点名称</p>
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
                     * 获取<p>设备流传输协议，1:UDP,2:TCP</p>
                     * @return TransportProtocol <p>设备流传输协议，1:UDP,2:TCP</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>设备流传输协议，1:UDP,2:TCP</p>
                     * @param _transportProtocol <p>设备流传输协议，1:UDP,2:TCP</p>
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
                     * 获取<p>设备密码</p>
                     * @return Password <p>设备密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>设备密码</p>
                     * @param _password <p>设备密码</p>
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
                     * 获取<p>设备描述</p>
                     * @return Description <p>设备描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>设备描述</p>
                     * @param _description <p>设备描述</p>
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
                     * 获取<p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
                     * @return Status <p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
                     * @param _status <p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
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
                     * 获取<p>设备所属组织ID</p>
                     * @return OrganizationId <p>设备所属组织ID</p>
                     * 
                     */
                    int64_t GetOrganizationId() const;

                    /**
                     * 设置<p>设备所属组织ID</p>
                     * @param _organizationId <p>设备所属组织ID</p>
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
                     * 获取<p>设备接入IP</p>
                     * @return Ip <p>设备接入IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>设备接入IP</p>
                     * @param _ip <p>设备接入IP</p>
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
                     * 获取<p>设备Port</p>
                     * @return Port <p>设备Port</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>设备Port</p>
                     * @param _port <p>设备Port</p>
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
                     * 获取<p>设备用户名</p>
                     * @return Username <p>设备用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>设备用户名</p>
                     * @param _username <p>设备用户名</p>
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
                     * 获取<p>用户Id</p>
                     * @return AppId <p>用户Id</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户Id</p>
                     * @param _appId <p>用户Id</p>
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
                     * <p>设备ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>设备编码（国标设备即我们为设备生成的20位国标编码，rtmp 设备为10 位设备编码）</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设备接入协议，1:RTMP,2:GB</p><p>枚举值：</p><ul><li>1： RTMP</li><li>2： GB</li></ul>
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * <p>设备类型，1:IPC,2:NVR</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>设备接入服务节点ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>设备接入服务节点名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>设备流传输协议，1:UDP,2:TCP</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>设备密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>设备描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>设备所属组织ID</p>
                     */
                    int64_t m_organizationId;
                    bool m_organizationIdHasBeenSet;

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
                     * <p>设备接入IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>设备Port</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>设备用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>用户Id</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_
