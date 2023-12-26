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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_

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
                * 获取设备列表的响应
                */
                class ListDeviceInfo : public AbstractModel
                {
                public:
                    ListDeviceInfo();
                    ~ListDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备 ID
                     * @return DeviceId 设备 ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备 ID
                     * @param _deviceId 设备 ID
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
                     * 获取设备编码
                     * @return Code 设备编码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置设备编码
                     * @param _code 设备编码
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
                     * 获取设备状态。0:未注册，1:在线，2:离线，3:禁用
                     * @return Status 设备状态。0:未注册，1:在线，2:离线，3:禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置设备状态。0:未注册，1:在线，2:离线，3:禁用
                     * @param _status 设备状态。0:未注册，1:在线，2:离线，3:禁用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备流传输协议。1:UDP,2:TCP
                     * @return TransportProtocol 设备流传输协议。1:UDP,2:TCP
                     * 
                     */
                    uint64_t GetTransportProtocol() const;

                    /**
                     * 设置设备流传输协议。1:UDP,2:TCP
                     * @param _transportProtocol 设备流传输协议。1:UDP,2:TCP
                     * 
                     */
                    void SetTransportProtocol(const uint64_t& _transportProtocol);

                    /**
                     * 判断参数 TransportProtocol 是否已赋值
                     * @return TransportProtocol 是否已赋值
                     * 
                     */
                    bool TransportProtocolHasBeenSet() const;

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
                     * 获取设备类型。1:IPC,2:NVR
                     * @return Type 设备类型。1:IPC,2:NVR
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置设备类型。1:IPC,2:NVR
                     * @param _type 设备类型。1:IPC,2:NVR
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取设备接入服务节点 ID
                     * @return ClusterId 设备接入服务节点 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置设备接入服务节点 ID
                     * @param _clusterId 设备接入服务节点 ID
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
                     * 获取服务节点名称
                     * @return ClusterName 服务节点名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置服务节点名称
                     * @param _clusterName 服务节点名称
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
                     * 获取接入协议。1:RTMP,2:GB,3:GW
                     * @return AccessProtocol 接入协议。1:RTMP,2:GB,3:GW
                     * 
                     */
                    uint64_t GetAccessProtocol() const;

                    /**
                     * 设置接入协议。1:RTMP,2:GB,3:GW
                     * @param _accessProtocol 接入协议。1:RTMP,2:GB,3:GW
                     * 
                     */
                    void SetAccessProtocol(const uint64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取设备所属组织 ID
                     * @return OrganizationId 设备所属组织 ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置设备所属组织 ID
                     * @param _organizationId 设备所属组织 ID
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
                     * 获取通道数量
                     * @return ChannelNum 通道数量
                     * 
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置通道数量
                     * @param _channelNum 通道数量
                     * 
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                private:

                    /**
                     * 设备 ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备编码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 设备状态。0:未注册，1:在线，2:离线，3:禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备流传输协议。1:UDP,2:TCP
                     */
                    uint64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备类型。1:IPC,2:NVR
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设备密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备接入服务节点 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 服务节点名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 接入协议。1:RTMP,2:GB,3:GW
                     */
                    uint64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * 设备所属组织 ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 通道数量
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_
