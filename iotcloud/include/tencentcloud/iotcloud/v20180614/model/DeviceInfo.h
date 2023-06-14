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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/DeviceTag.h>
#include <tencentcloud/iotcloud/v20180614/model/DeviceLabel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 设备详细信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备是否在线，0不在线，1在线
                     * @return Online 设备是否在线，0不在线，1在线
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置设备是否在线，0不在线，1在线
                     * @param _online 设备是否在线，0不在线，1在线
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取设备登录时间
                     * @return LoginTime 设备登录时间
                     * 
                     */
                    uint64_t GetLoginTime() const;

                    /**
                     * 设置设备登录时间
                     * @param _loginTime 设备登录时间
                     * 
                     */
                    void SetLoginTime(const uint64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取设备版本
                     * @return Version 设备版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置设备版本
                     * @param _version 设备版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取设备证书，证书加密的设备返回
                     * @return DeviceCert 设备证书，证书加密的设备返回
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 设置设备证书，证书加密的设备返回
                     * @param _deviceCert 设备证书，证书加密的设备返回
                     * 
                     */
                    void SetDeviceCert(const std::string& _deviceCert);

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取设备密钥，密钥加密的设备返回
                     * @return DevicePsk 设备密钥，密钥加密的设备返回
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 设置设备密钥，密钥加密的设备返回
                     * @param _devicePsk 设备密钥，密钥加密的设备返回
                     * 
                     */
                    void SetDevicePsk(const std::string& _devicePsk);

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     * 
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取设备属性
                     * @return Tags 设备属性
                     * 
                     */
                    std::vector<DeviceTag> GetTags() const;

                    /**
                     * 设置设备属性
                     * @param _tags 设备属性
                     * 
                     */
                    void SetTags(const std::vector<DeviceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    uint64_t GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
                     * 
                     */
                    void SetDeviceType(const uint64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取国际移动设备识别码 IMEI
                     * @return Imei 国际移动设备识别码 IMEI
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置国际移动设备识别码 IMEI
                     * @param _imei 国际移动设备识别码 IMEI
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取运营商类型
                     * @return Isp 运营商类型
                     * 
                     */
                    uint64_t GetIsp() const;

                    /**
                     * 设置运营商类型
                     * @param _isp 运营商类型
                     * 
                     */
                    void SetIsp(const uint64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取NB IOT运营商处的DeviceID
                     * @return NbiotDeviceID NB IOT运营商处的DeviceID
                     * 
                     */
                    std::string GetNbiotDeviceID() const;

                    /**
                     * 设置NB IOT运营商处的DeviceID
                     * @param _nbiotDeviceID NB IOT运营商处的DeviceID
                     * 
                     */
                    void SetNbiotDeviceID(const std::string& _nbiotDeviceID);

                    /**
                     * 判断参数 NbiotDeviceID 是否已赋值
                     * @return NbiotDeviceID 是否已赋值
                     * 
                     */
                    bool NbiotDeviceIDHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return ConnIP IP地址
                     * 
                     */
                    uint64_t GetConnIP() const;

                    /**
                     * 设置IP地址
                     * @param _connIP IP地址
                     * 
                     */
                    void SetConnIP(const uint64_t& _connIP);

                    /**
                     * 判断参数 ConnIP 是否已赋值
                     * @return ConnIP 是否已赋值
                     * 
                     */
                    bool ConnIPHasBeenSet() const;

                    /**
                     * 获取设备最后更新时间
                     * @return LastUpdateTime 设备最后更新时间
                     * 
                     */
                    uint64_t GetLastUpdateTime() const;

                    /**
                     * 设置设备最后更新时间
                     * @param _lastUpdateTime 设备最后更新时间
                     * 
                     */
                    void SetLastUpdateTime(const uint64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取LoRa设备的dev eui
                     * @return LoraDevEui LoRa设备的dev eui
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 设置LoRa设备的dev eui
                     * @param _loraDevEui LoRa设备的dev eui
                     * 
                     */
                    void SetLoraDevEui(const std::string& _loraDevEui);

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     * 
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取LoRa设备的Mote type
                     * @return LoraMoteType LoRa设备的Mote type
                     * 
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 设置LoRa设备的Mote type
                     * @param _loraMoteType LoRa设备的Mote type
                     * 
                     */
                    void SetLoraMoteType(const uint64_t& _loraMoteType);

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFirstOnlineTime() const;

                    /**
                     * 设置首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstOnlineTime(const uint64_t& _firstOnlineTime);

                    /**
                     * 判断参数 FirstOnlineTime 是否已赋值
                     * @return FirstOnlineTime 是否已赋值
                     * 
                     */
                    bool FirstOnlineTimeHasBeenSet() const;

                    /**
                     * 获取最近下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOfflineTime 最近下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastOfflineTime() const;

                    /**
                     * 设置最近下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOfflineTime 最近下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOfflineTime(const uint64_t& _lastOfflineTime);

                    /**
                     * 判断参数 LastOfflineTime 是否已赋值
                     * @return LastOfflineTime 是否已赋值
                     * 
                     */
                    bool LastOfflineTimeHasBeenSet() const;

                    /**
                     * 获取设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 设备日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 设置设备日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logLevel 设备日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogLevel(const uint64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取设备证书获取状态, 1 已获取过设备密钥，0 未获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertState 设备证书获取状态, 1 已获取过设备密钥，0 未获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCertState() const;

                    /**
                     * 设置设备证书获取状态, 1 已获取过设备密钥，0 未获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certState 设备证书获取状态, 1 已获取过设备密钥，0 未获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertState(const uint64_t& _certState);

                    /**
                     * 判断参数 CertState 是否已赋值
                     * @return CertState 是否已赋值
                     * 
                     */
                    bool CertStateHasBeenSet() const;

                    /**
                     * 获取设备可用状态，0禁用，1启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableState 设备可用状态，0禁用，1启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 设置设备可用状态，0禁用，1启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableState 设备可用状态，0禁用，1启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableState(const uint64_t& _enableState);

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                    /**
                     * 获取设备标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 设备标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeviceLabel> GetLabels() const;

                    /**
                     * 设置设备标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 设备标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<DeviceLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取MQTT客户端IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIP MQTT客户端IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置MQTT客户端IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIP MQTT客户端IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取ota最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirmwareUpdateTime ota最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFirmwareUpdateTime() const;

                    /**
                     * 设置ota最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firmwareUpdateTime ota最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirmwareUpdateTime(const uint64_t& _firmwareUpdateTime);

                    /**
                     * 判断参数 FirmwareUpdateTime 是否已赋值
                     * @return FirmwareUpdateTime 是否已赋值
                     * 
                     */
                    bool FirmwareUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备是否在线，0不在线，1在线
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 设备登录时间
                     */
                    uint64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 设备版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 设备证书，证书加密的设备返回
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 设备密钥，密钥加密的设备返回
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * 设备属性
                     */
                    std::vector<DeviceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 设备类型
                     */
                    uint64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 国际移动设备识别码 IMEI
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 运营商类型
                     */
                    uint64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * NB IOT运营商处的DeviceID
                     */
                    std::string m_nbiotDeviceID;
                    bool m_nbiotDeviceIDHasBeenSet;

                    /**
                     * IP地址
                     */
                    uint64_t m_connIP;
                    bool m_connIPHasBeenSet;

                    /**
                     * 设备最后更新时间
                     */
                    uint64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * LoRa设备的dev eui
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * LoRa设备的Mote type
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_firstOnlineTime;
                    bool m_firstOnlineTimeHasBeenSet;

                    /**
                     * 最近下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastOfflineTime;
                    bool m_lastOfflineTimeHasBeenSet;

                    /**
                     * 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * 设备证书获取状态, 1 已获取过设备密钥，0 未获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_certState;
                    bool m_certStateHasBeenSet;

                    /**
                     * 设备可用状态，0禁用，1启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                    /**
                     * 设备标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * MQTT客户端IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * ota最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_firmwareUpdateTime;
                    bool m_firmwareUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICEINFO_H_
