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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_

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
                * 查询设备接口返回数据
                */
                class DescribeDeviceData : public AbstractModel
                {
                public:
                    DescribeDeviceData();
                    ~DescribeDeviceData() = default;
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
                     * 获取<p>设备接入协议，1:RTMP,2:GB,3:GW</p>
                     * @return AccessProtocol <p>设备接入协议，1:RTMP,2:GB,3:GW</p>
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置<p>设备接入协议，1:RTMP,2:GB,3:GW</p>
                     * @param _accessProtocol <p>设备接入协议，1:RTMP,2:GB,3:GW</p>
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
                     * 获取<p>设备接入服务节点id</p>
                     * @return ClusterId <p>设备接入服务节点id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>设备接入服务节点id</p>
                     * @param _clusterId <p>设备接入服务节点id</p>
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
                     * 获取<p>sip服务ID</p>
                     * @return SipId <p>sip服务ID</p>
                     * 
                     */
                    std::string GetSipId() const;

                    /**
                     * 设置<p>sip服务ID</p>
                     * @param _sipId <p>sip服务ID</p>
                     * 
                     */
                    void SetSipId(const std::string& _sipId);

                    /**
                     * 判断参数 SipId 是否已赋值
                     * @return SipId 是否已赋值
                     * 
                     */
                    bool SipIdHasBeenSet() const;

                    /**
                     * 获取<p>sip服务域</p>
                     * @return SipDomain <p>sip服务域</p>
                     * 
                     */
                    std::string GetSipDomain() const;

                    /**
                     * 设置<p>sip服务域</p>
                     * @param _sipDomain <p>sip服务域</p>
                     * 
                     */
                    void SetSipDomain(const std::string& _sipDomain);

                    /**
                     * 判断参数 SipDomain 是否已赋值
                     * @return SipDomain 是否已赋值
                     * 
                     */
                    bool SipDomainHasBeenSet() const;

                    /**
                     * 获取<p>sip服务IP地址</p>
                     * @return SipIp <p>sip服务IP地址</p>
                     * 
                     */
                    std::string GetSipIp() const;

                    /**
                     * 设置<p>sip服务IP地址</p>
                     * @param _sipIp <p>sip服务IP地址</p>
                     * 
                     */
                    void SetSipIp(const std::string& _sipIp);

                    /**
                     * 判断参数 SipIp 是否已赋值
                     * @return SipIp 是否已赋值
                     * 
                     */
                    bool SipIpHasBeenSet() const;

                    /**
                     * 获取<p>sip服务端口</p>
                     * @return SipPort <p>sip服务端口</p>
                     * 
                     */
                    int64_t GetSipPort() const;

                    /**
                     * 设置<p>sip服务端口</p>
                     * @param _sipPort <p>sip服务端口</p>
                     * 
                     */
                    void SetSipPort(const int64_t& _sipPort);

                    /**
                     * 判断参数 SipPort 是否已赋值
                     * @return SipPort 是否已赋值
                     * 
                     */
                    bool SipPortHasBeenSet() const;

                    /**
                     * 获取<p>Rtmp设备推流地址(仅rtmp设备有效)</p>
                     * @return PushStreamUrl <p>Rtmp设备推流地址(仅rtmp设备有效)</p>
                     * 
                     */
                    std::string GetPushStreamUrl() const;

                    /**
                     * 设置<p>Rtmp设备推流地址(仅rtmp设备有效)</p>
                     * @param _pushStreamUrl <p>Rtmp设备推流地址(仅rtmp设备有效)</p>
                     * 
                     */
                    void SetPushStreamUrl(const std::string& _pushStreamUrl);

                    /**
                     * 判断参数 PushStreamUrl 是否已赋值
                     * @return PushStreamUrl 是否已赋值
                     * 
                     */
                    bool PushStreamUrlHasBeenSet() const;

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
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>设备所属组织ID</p>
                     * @param _organizationId <p>设备所属组织ID</p>
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
                     * 获取<p>设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）</p>
                     * @return GatewayId <p>设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）</p>
                     * @param _gatewayId <p>设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）</p>
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
                     * 获取<p>设备所属网关名称</p>
                     * @return GatewayName <p>设备所属网关名称</p>
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置<p>设备所属网关名称</p>
                     * @param _gatewayName <p>设备所属网关名称</p>
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>设备网关协议名称</p>
                     * @return ProtocolTypeName <p>设备网关协议名称</p>
                     * 
                     */
                    std::string GetProtocolTypeName() const;

                    /**
                     * 设置<p>设备网关协议名称</p>
                     * @param _protocolTypeName <p>设备网关协议名称</p>
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
                     * 获取<p>网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）</p>
                     * @return ProtocolType <p>网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）</p>
                     * @param _protocolType <p>网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）</p>
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
                     * 获取<p>设备地域</p>
                     * @return Region <p>设备地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>设备地域</p>
                     * @param _region <p>设备地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>设备厂商</p>
                     * @return Manufacturer <p>设备厂商</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>设备厂商</p>
                     * @param _manufacturer <p>设备厂商</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>音频关开（0：关闭；1：开启）关闭时丢弃音频</p>
                     * @return AudioSwitch <p>音频关开（0：关闭；1：开启）关闭时丢弃音频</p>
                     * 
                     */
                    int64_t GetAudioSwitch() const;

                    /**
                     * 设置<p>音频关开（0：关闭；1：开启）关闭时丢弃音频</p>
                     * @param _audioSwitch <p>音频关开（0：关闭；1：开启）关闭时丢弃音频</p>
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
                     * 获取<p>RTMP推流地址自定义appName</p>
                     * @return AppName <p>RTMP推流地址自定义appName</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>RTMP推流地址自定义appName</p>
                     * @param _appName <p>RTMP推流地址自定义appName</p>
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
                     * 获取<p>RTMP推流地址自定义streamName</p>
                     * @return StreamName <p>RTMP推流地址自定义streamName</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>RTMP推流地址自定义streamName</p>
                     * @param _streamName <p>RTMP推流地址自定义streamName</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

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
                     * 获取<p>Rtmp设备安全认证推流地址(仅rtmp设备有效)</p>
                     * @return PushStreamSecureUrl <p>Rtmp设备安全认证推流地址(仅rtmp设备有效)</p>
                     * 
                     */
                    std::string GetPushStreamSecureUrl() const;

                    /**
                     * 设置<p>Rtmp设备安全认证推流地址(仅rtmp设备有效)</p>
                     * @param _pushStreamSecureUrl <p>Rtmp设备安全认证推流地址(仅rtmp设备有效)</p>
                     * 
                     */
                    void SetPushStreamSecureUrl(const std::string& _pushStreamSecureUrl);

                    /**
                     * 判断参数 PushStreamSecureUrl 是否已赋值
                     * @return PushStreamSecureUrl 是否已赋值
                     * 
                     */
                    bool PushStreamSecureUrlHasBeenSet() const;

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
                     * <p>设备接入协议，1:RTMP,2:GB,3:GW</p>
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * <p>设备类型，1:IPC,2:NVR</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>设备接入服务节点id</p>
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
                     * <p>sip服务ID</p>
                     */
                    std::string m_sipId;
                    bool m_sipIdHasBeenSet;

                    /**
                     * <p>sip服务域</p>
                     */
                    std::string m_sipDomain;
                    bool m_sipDomainHasBeenSet;

                    /**
                     * <p>sip服务IP地址</p>
                     */
                    std::string m_sipIp;
                    bool m_sipIpHasBeenSet;

                    /**
                     * <p>sip服务端口</p>
                     */
                    int64_t m_sipPort;
                    bool m_sipPortHasBeenSet;

                    /**
                     * <p>Rtmp设备推流地址(仅rtmp设备有效)</p>
                     */
                    std::string m_pushStreamUrl;
                    bool m_pushStreamUrlHasBeenSet;

                    /**
                     * <p>设备状态，0:未注册,1:在线,2:离线,3:禁用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>设备所属组织ID</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>设备接入网关ID，从查询网关列表接口中获取（仅网关接入需要）</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>设备所属网关名称</p>
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * <p>设备网关协议名称</p>
                     */
                    std::string m_protocolTypeName;
                    bool m_protocolTypeNameHasBeenSet;

                    /**
                     * <p>网关接入协议类型，1.海康SDK，2.大华SDK，3.宇视SDK，4.Onvif（仅网关接入需要）</p>
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
                     * <p>设备地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>设备厂商</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>音频关开（0：关闭；1：开启）关闭时丢弃音频</p>
                     */
                    int64_t m_audioSwitch;
                    bool m_audioSwitchHasBeenSet;

                    /**
                     * <p>订阅开关（0：关闭；1：开启）默认开启，开启状态下会订阅设备通道变化，仅国标NVR设备有效</p>
                     */
                    int64_t m_subscribeSwitch;
                    bool m_subscribeSwitchHasBeenSet;

                    /**
                     * <p>RTMP推流地址自定义appName</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>RTMP推流地址自定义streamName</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * <p>是否开启静音帧（0：关闭；1 开启）</p>
                     */
                    int64_t m_silentFrameSwitch;
                    bool m_silentFrameSwitchHasBeenSet;

                    /**
                     * <p>Rtmp设备安全认证推流地址(仅rtmp设备有效)</p>
                     */
                    std::string m_pushStreamSecureUrl;
                    bool m_pushStreamSecureUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_
