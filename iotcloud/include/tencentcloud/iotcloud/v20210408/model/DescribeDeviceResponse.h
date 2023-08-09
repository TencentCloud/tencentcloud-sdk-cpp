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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceTag.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceLabel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeDevice返回参数结构体
                */
                class DescribeDeviceResponse : public AbstractModel
                {
                public:
                    DescribeDeviceResponse();
                    ~DescribeDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备是否在线，0不在线，1在线，3未激活
                     * @return Online 设备是否在线，0不在线，1在线，3未激活
                     * 
                     */
                    uint64_t GetOnline() const;

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
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取设备固件版本
                     * @return Version 设备固件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取设备最后更新时间
                     * @return LastUpdateTime 设备最后更新时间
                     * 
                     */
                    uint64_t GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取设备证书
                     * @return DeviceCert 设备证书
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取设备密钥
                     * @return DevicePsk 设备密钥
                     * 
                     */
                    std::string GetDevicePsk() const;

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
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return ConnIP IP地址
                     * 
                     */
                    uint64_t GetConnIP() const;

                    /**
                     * 判断参数 ConnIP 是否已赋值
                     * @return ConnIP 是否已赋值
                     * 
                     */
                    bool ConnIPHasBeenSet() const;

                    /**
                     * 获取NB IoT运营商处的DeviceID
                     * @return NbiotDeviceID NB IoT运营商处的DeviceID
                     * @deprecated
                     */
                    std::string GetNbiotDeviceID() const;

                    /**
                     * 判断参数 NbiotDeviceID 是否已赋值
                     * @return NbiotDeviceID 是否已赋值
                     * @deprecated
                     */
                    bool NbiotDeviceIDHasBeenSet() const;

                    /**
                     * 获取Lora设备的dev eui
                     * @return LoraDevEui Lora设备的dev eui
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     * 
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取Lora设备的mote type
                     * @return LoraMoteType Lora设备的mote type
                     * 
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取设备的sdk日志等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 设备的sdk日志等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFirstOnlineTime() const;

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
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备证书获取状态，0 未获取过设备密钥, 1 已获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertState 设备证书获取状态，0 未获取过设备密钥, 1 已获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCertState() const;

                    /**
                     * 判断参数 CertState 是否已赋值
                     * @return CertState 是否已赋值
                     * 
                     */
                    bool CertStateHasBeenSet() const;

                    /**
                     * 获取设备启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableState 设备启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnableState() const;

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
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取设备固件更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirmwareUpdateTime 设备固件更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFirmwareUpdateTime() const;

                    /**
                     * 判断参数 FirmwareUpdateTime 是否已赋值
                     * @return FirmwareUpdateTime 是否已赋值
                     * 
                     */
                    bool FirmwareUpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建者账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserId 创建者账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateUserId() const;

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取NB IoT运营商处的DeviceID
                     * @return NBIoTDeviceID NB IoT运营商处的DeviceID
                     * 
                     */
                    std::string GetNBIoTDeviceID() const;

                    /**
                     * 判断参数 NBIoTDeviceID 是否已赋值
                     * @return NBIoTDeviceID 是否已赋值
                     * 
                     */
                    bool NBIoTDeviceIDHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备是否在线，0不在线，1在线，3未激活
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 设备登录时间
                     */
                    uint64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 设备固件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 设备最后更新时间
                     */
                    uint64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 设备证书
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 设备密钥
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
                     * IP地址
                     */
                    uint64_t m_connIP;
                    bool m_connIPHasBeenSet;

                    /**
                     * NB IoT运营商处的DeviceID
                     */
                    std::string m_nbiotDeviceID;
                    bool m_nbiotDeviceIDHasBeenSet;

                    /**
                     * Lora设备的dev eui
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * Lora设备的mote type
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * 设备的sdk日志等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

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
                     * 设备证书获取状态，0 未获取过设备密钥, 1 已获取过设备密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_certState;
                    bool m_certStateHasBeenSet;

                    /**
                     * 设备启用状态
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
                     * 设备固件更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_firmwareUpdateTime;
                    bool m_firmwareUpdateTimeHasBeenSet;

                    /**
                     * 创建者账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * NB IoT运营商处的DeviceID
                     */
                    std::string m_nBIoTDeviceID;
                    bool m_nBIoTDeviceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_
