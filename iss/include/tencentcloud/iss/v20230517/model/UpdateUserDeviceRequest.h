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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_

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
                * UpdateUserDevice请求参数结构体
                */
                class UpdateUserDeviceRequest : public AbstractModel
                {
                public:
                    UpdateUserDeviceRequest();
                    ~UpdateUserDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID（从获取设备列表接口ListDevices中获取）
                     * @return DeviceId 设备ID（从获取设备列表接口ListDevices中获取）
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID（从获取设备列表接口ListDevices中获取）
                     * @param _deviceId 设备ID（从获取设备列表接口ListDevices中获取）
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
                     * 获取设备名称（仅支持中文、英文、数字、_、-，长度不超过32个字符）
                     * @return Name 设备名称（仅支持中文、英文、数字、_、-，长度不超过32个字符）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名称（仅支持中文、英文、数字、_、-，长度不超过32个字符）
                     * @param _name 设备名称（仅支持中文、英文、数字、_、-，长度不超过32个字符）
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
                     * 获取设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）
                     * @return TransportProtocol 设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）
                     * @param _transportProtocol 设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）
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
                     * 获取设备密码（仅国标，网关设备支持）
                     * @return Password 设备密码（仅国标，网关设备支持）
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设备密码（仅国标，网关设备支持）
                     * @param _password 设备密码（仅国标，网关设备支持）
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
                     * 获取设备描述（仅支持中文、英文、数字、_、-，长度不超过128位）
                     * @return Description 设备描述（仅支持中文、英文、数字、_、-，长度不超过128位）
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备描述（仅支持中文、英文、数字、_、-，长度不超过128位）
                     * @param _description 设备描述（仅支持中文、英文、数字、_、-，长度不超过128位）
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
                     * 获取设备接入Ip（仅网关接入支持）
                     * @return Ip 设备接入Ip（仅网关接入支持）
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置设备接入Ip（仅网关接入支持）
                     * @param _ip 设备接入Ip（仅网关接入支持）
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
                     * 获取设备Port（仅网关接入支持）
                     * @return Port 设备Port（仅网关接入支持）
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置设备Port（仅网关接入支持）
                     * @param _port 设备Port（仅网关接入支持）
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
                     * 获取设备用户名（仅网关接入支持）
                     * @return Username 设备用户名（仅网关接入支持）
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置设备用户名（仅网关接入支持）
                     * @param _username 设备用户名（仅网关接入支持）
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * 设备ID（从获取设备列表接口ListDevices中获取）
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称（仅支持中文、英文、数字、_、-，长度不超过32个字符）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * 设备密码（仅国标，网关设备支持）
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 设备描述（仅支持中文、英文、数字、_、-，长度不超过128位）
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备接入Ip（仅网关接入支持）
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 设备Port（仅网关接入支持）
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 设备用户名（仅网关接入支持）
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_
