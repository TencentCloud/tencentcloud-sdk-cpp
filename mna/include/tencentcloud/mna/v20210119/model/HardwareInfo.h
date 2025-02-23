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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_

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
                * 硬件信息
                */
                class HardwareInfo : public AbstractModel
                {
                public:
                    HardwareInfo();
                    ~HardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
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
                     * 获取厂商备注
                     * @return VendorDescription 厂商备注
                     * 
                     */
                    std::string GetVendorDescription() const;

                    /**
                     * 设置厂商备注
                     * @param _vendorDescription 厂商备注
                     * 
                     */
                    void SetVendorDescription(const std::string& _vendorDescription);

                    /**
                     * 判断参数 VendorDescription 是否已赋值
                     * @return VendorDescription 是否已赋值
                     * 
                     */
                    bool VendorDescriptionHasBeenSet() const;

                    /**
                     * 获取license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * @return LicenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     * @param _licenseChargingMode license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：后续将废弃此参数，新接入请使用LicensePayMode和Payer
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
                     * 获取license授权有效期 
0：月度授权 
1：永久授权
                     * @return LicensePayMode license授权有效期 
0：月度授权 
1：永久授权
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置license授权有效期 
0：月度授权 
1：永久授权
                     * @param _licensePayMode license授权有效期 
0：月度授权 
1：永久授权
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

                    /**
                     * 获取设备分组ID
                     * @return GroupId 设备分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置设备分组ID
                     * @param _groupId 设备分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取设备分组名称
                     * @return GroupName 设备分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置设备分组名称
                     * @param _groupName 设备分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取设备无流量包处理方式，0: 按量付费，1: 截断加速	
                     * @return FlowTrunc 设备无流量包处理方式，0: 按量付费，1: 截断加速	
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置设备无流量包处理方式，0: 按量付费，1: 截断加速	
                     * @param _flowTrunc 设备无流量包处理方式，0: 按量付费，1: 截断加速	
                     * 
                     */
                    void SetFlowTrunc(const int64_t& _flowTrunc);

                    /**
                     * 判断参数 FlowTrunc 是否已赋值
                     * @return FlowTrunc 是否已赋值
                     * 
                     */
                    bool FlowTruncHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 激活时间
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 最后在线时间
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 厂商备注
                     */
                    std::string m_vendorDescription;
                    bool m_vendorDescriptionHasBeenSet;

                    /**
                     * license计费模式： 1，租户月付费 2，厂商月付费 3，license永久授权
注：后续将废弃此参数，新接入请使用LicensePayMode和Payer
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 硬件序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * license授权有效期 
0：月度授权 
1：永久授权
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

                    /**
                     * 设备分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 设备分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 设备无流量包处理方式，0: 按量付费，1: 截断加速	
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_
