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
                     * @return HardwareId 硬件id
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置硬件id
                     * @param _hardwareId 硬件id
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
                     * @return SN 硬件序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置硬件序列号
                     * @param _sN 硬件序列号
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
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * @return Status 激活状态， 空：全部； 1:待激活； 2:已激活
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置激活状态， 空：全部； 1:待激活； 2:已激活
                     * @param _status 激活状态， 空：全部； 1:待激活； 2:已激活
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
                     * @return ActiveTime 激活时间
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置激活时间
                     * @param _activeTime 激活时间
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
                     * @return Description 厂商备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置厂商备注
                     * @param _description 厂商备注
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
                     * @return DeviceId 设备id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
                     * @param _deviceId 设备id
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
注：设备为租户付费且未激活（未选择月付还是永久付费）时，此参数返回1，仅代表租户付费。后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * @return LicenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：设备为租户付费且未激活（未选择月付还是永久付费）时，此参数返回1，仅代表租户付费。后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：设备为租户付费且未激活（未选择月付还是永久付费）时，此参数返回1，仅代表租户付费。后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * @param _licenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：设备为租户付费且未激活（未选择月付还是永久付费）时，此参数返回1，仅代表租户付费。后续将废弃此参数，新接入请使用LicensePayMode和Payer
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
                     * @return LastOnlineTime 最后在线时间
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置最后在线时间
                     * @param _lastOnlineTime 最后在线时间
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                    /**
                     * 获取license授权有效期
0：月度授权
1：永久授权
-1：未知
                     * @return LicensePayMode license授权有效期
0：月度授权
1：永久授权
-1：未知
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置license授权有效期
0：月度授权
1：永久授权
-1：未知
                     * @param _licensePayMode license授权有效期
0：月度授权
1：永久授权
-1：未知
                     * 
                     */
                    void SetLicensePayMode(const int64_t& _licensePayMode);

                    /**
                     * 判断参数 LicensePayMode 是否已赋值
                     * @return LicensePayMode 是否已赋值
                     * 
                     */
                    bool LicensePayModeHasBeenSet() const;

                    /**
                     * 获取付费方
0：客户付费
1：厂商付费
                     * @return Payer 付费方
0：客户付费
1：厂商付费
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 设置付费方
0：客户付费
1：厂商付费
                     * @param _payer 付费方
0：客户付费
1：厂商付费
                     * 
                     */
                    void SetPayer(const int64_t& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

                private:

                    /**
                     * 硬件id
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                    /**
                     * 硬件序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 激活状态， 空：全部； 1:待激活； 2:已激活
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 激活时间
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 厂商备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：设备为租户付费且未激活（未选择月付还是永久付费）时，此参数返回1，仅代表租户付费。后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * 最后在线时间
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * license授权有效期
0：月度授权
1：永久授权
-1：未知
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * 付费方
0：客户付费
1：厂商付费
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_
