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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 厂商硬件详细信息
                */
                class VendorHardware : public AbstractModel
                {
                public:
                    VendorHardware();
                    ~VendorHardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取硬件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HardwareId 硬件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置硬件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hardwareId 硬件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

                    /**
                     * 获取硬件序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SN 硬件序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置硬件序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sN 硬件序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取激活状态， 空：全部； 1:待激活； 2:已激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 激活状态， 空：全部； 1:待激活； 2:已激活
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置激活状态， 空：全部； 1:待激活； 2:已激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 激活状态， 空：全部； 1:待激活； 2:已激活
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

                    /**
                     * 获取激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取厂商备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 厂商备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置厂商备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 厂商备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceId 设备id
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
                     * 获取license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseChargingMode(const int64_t& _licenseChargingMode);

                    /**
                     * 判断参数 LicenseChargingMode 是否已赋值
                     * @return LicenseChargingMode 是否已赋值
                     * 
                     */
                    bool LicenseChargingModeHasBeenSet() const;

                    /**
                     * 获取最后在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOnlineTime 最后在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置最后在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOnlineTime 最后在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                private:

                    /**
                     * 硬件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                    /**
                     * 硬件序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 激活状态， 空：全部； 1:待激活； 2:已激活
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 厂商备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * 最后在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_
