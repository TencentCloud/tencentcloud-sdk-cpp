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
                     * 获取<p>设备ID（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * @return DeviceId <p>设备ID（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备ID（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * @param _deviceId <p>设备ID（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
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
                     * 获取<p>设备名称（仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位）</p>
                     * @return Name <p>设备名称（仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>设备名称（仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位）</p>
                     * @param _name <p>设备名称（仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位）</p>
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
                     * 获取<p>设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）</p>
                     * @return TransportProtocol <p>设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）</p>
                     * @param _transportProtocol <p>设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）</p>
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
                     * 获取<p>设备密码（仅国标设备支持，长度不超过 64 位）</p>
                     * @return Password <p>设备密码（仅国标设备支持，长度不超过 64 位）</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>设备密码（仅国标设备支持，长度不超过 64 位）</p>
                     * @param _password <p>设备密码（仅国标设备支持，长度不超过 64 位）</p>
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
                     * 获取<p>设备描述（长度不超过128位）</p>
                     * @return Description <p>设备描述（长度不超过128位）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>设备描述（长度不超过128位）</p>
                     * @param _description <p>设备描述（长度不超过128位）</p>
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
                     * 获取<p>设备Port（已不再使用，保留用于兼容，可忽略）</p>
                     * @return Port <p>设备Port（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>设备Port（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _port <p>设备Port（已不再使用，保留用于兼容，可忽略）</p>
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
                     * 获取<p>网关设备接入协议（已不再使用，保留用于兼容，可忽略）</p>
                     * @return ProtocolType <p>网关设备接入协议（已不再使用，保留用于兼容，可忽略）</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>网关设备接入协议（已不再使用，保留用于兼容，可忽略）</p>
                     * @param _protocolType <p>网关设备接入协议（已不再使用，保留用于兼容，可忽略）</p>
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
                     * 获取<p>音频关开（0：关闭；1：开启）默认开启，关闭时丢弃音频</p>
                     * @return AudioSwitch <p>音频关开（0：关闭；1：开启）默认开启，关闭时丢弃音频</p>
                     * 
                     */
                    int64_t GetAudioSwitch() const;

                    /**
                     * 设置<p>音频关开（0：关闭；1：开启）默认开启，关闭时丢弃音频</p>
                     * @param _audioSwitch <p>音频关开（0：关闭；1：开启）默认开启，关闭时丢弃音频</p>
                     * 
                     */
                    void SetAudioSwitch(const int64_t& _audioSwitch);

                    /**
                     * 判断参数 AudioSwitch 是否已赋值
                     * @return AudioSwitch 是否已赋值
                     * 
                     */
                    bool AudioSwitchHasBeenSet() const;

                    /**
                     * 获取<p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     * @return SubscribeSwitch <p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     * 
                     */
                    int64_t GetSubscribeSwitch() const;

                    /**
                     * 设置<p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     * @param _subscribeSwitch <p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     * 
                     */
                    void SetSubscribeSwitch(const int64_t& _subscribeSwitch);

                    /**
                     * 判断参数 SubscribeSwitch 是否已赋值
                     * @return SubscribeSwitch 是否已赋值
                     * 
                     */
                    bool SubscribeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否开启静音帧（0：关闭；1 开启）</p>
                     * @return SilentFrameSwitch <p>是否开启静音帧（0：关闭；1 开启）</p>
                     * 
                     */
                    int64_t GetSilentFrameSwitch() const;

                    /**
                     * 设置<p>是否开启静音帧（0：关闭；1 开启）</p>
                     * @param _silentFrameSwitch <p>是否开启静音帧（0：关闭；1 开启）</p>
                     * 
                     */
                    void SetSilentFrameSwitch(const int64_t& _silentFrameSwitch);

                    /**
                     * 判断参数 SilentFrameSwitch 是否已赋值
                     * @return SilentFrameSwitch 是否已赋值
                     * 
                     */
                    bool SilentFrameSwitchHasBeenSet() const;

                    /**
                     * 获取<p>时钟同步开关（仅国标设备生效）</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值： 1</p>
                     * @return TimeSyncSwitch <p>时钟同步开关（仅国标设备生效）</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值： 1</p>
                     * 
                     */
                    int64_t GetTimeSyncSwitch() const;

                    /**
                     * 设置<p>时钟同步开关（仅国标设备生效）</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值： 1</p>
                     * @param _timeSyncSwitch <p>时钟同步开关（仅国标设备生效）</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值： 1</p>
                     * 
                     */
                    void SetTimeSyncSwitch(const int64_t& _timeSyncSwitch);

                    /**
                     * 判断参数 TimeSyncSwitch 是否已赋值
                     * @return TimeSyncSwitch 是否已赋值
                     * 
                     */
                    bool TimeSyncSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>设备ID（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>设备名称（仅支持中文、英文、数字、空格、中英文括号、_、-, 长度不超过128位）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设备流传输协议，仅国标设备有效，填0则不做更改（1:UDP,2:TCP）</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>设备密码（仅国标设备支持，长度不超过 64 位）</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>设备描述（长度不超过128位）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>设备接入IP（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>设备Port（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>设备用户名（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>网关设备接入协议（已不再使用，保留用于兼容，可忽略）</p>
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>音频关开（0：关闭；1：开启）默认开启，关闭时丢弃音频</p>
                     */
                    int64_t m_audioSwitch;
                    bool m_audioSwitchHasBeenSet;

                    /**
                     * <p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     */
                    int64_t m_subscribeSwitch;
                    bool m_subscribeSwitchHasBeenSet;

                    /**
                     * <p>是否开启静音帧（0：关闭；1 开启）</p>
                     */
                    int64_t m_silentFrameSwitch;
                    bool m_silentFrameSwitchHasBeenSet;

                    /**
                     * <p>时钟同步开关（仅国标设备生效）</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul><p>默认值： 1</p>
                     */
                    int64_t m_timeSyncSwitch;
                    bool m_timeSyncSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_
