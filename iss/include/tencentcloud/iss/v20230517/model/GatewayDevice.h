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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYDEVICE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYDEVICE_H_

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
                * 网关设备数据
                */
                class GatewayDevice : public AbstractModel
                {
                public:
                    GatewayDevice();
                    ~GatewayDevice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceId 设备ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网关接入协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolType 网关接入协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置网关接入协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolType 网关接入协议类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网关接入协议名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolTypeName 网关接入协议名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocolTypeName() const;

                    /**
                     * 设置网关接入协议名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolTypeName 网关接入协议名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocolTypeName(const std::string& _protocolTypeName);

                    /**
                     * 判断参数 ProtocolTypeName 是否已赋值
                     * @return ProtocolTypeName 是否已赋值
                     * 
                     */
                    bool ProtocolTypeNameHasBeenSet() const;

                    /**
                     * 获取设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 设备名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 设备类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置设备类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 设备类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 设备内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置设备内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 设备内网IP
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 设备端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置设备端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 设备端口
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备下通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelNum 设备下通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChannelNum() const;

                    /**
                     * 设置设备下通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelNum 设备下通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelNum(const int64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取设备状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 设备状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置设备状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 设备状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 网关接入协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 网关接入协议名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocolTypeName;
                    bool m_protocolTypeNameHasBeenSet;

                    /**
                     * 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设备内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 设备端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 设备下通道数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 设备状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYDEVICE_H_
