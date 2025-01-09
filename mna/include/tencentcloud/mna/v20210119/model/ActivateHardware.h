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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_

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
                * 激活设备
                */
                class ActivateHardware : public AbstractModel
                {
                public:
                    ActivateHardware();
                    ~ActivateHardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取厂商名称
                     * @return Vendor 厂商名称
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置厂商名称
                     * @param _vendor 厂商名称
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取设备SN序列号
                     * @return SN 设备SN序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置设备SN序列号
                     * @param _sN 设备SN序列号
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
                     * 获取设备密钥
                     * @return DataKey 设备密钥
                     * 
                     */
                    std::string GetDataKey() const;

                    /**
                     * 设置设备密钥
                     * @param _dataKey 设备密钥
                     * 
                     */
                    void SetDataKey(const std::string& _dataKey);

                    /**
                     * 判断参数 DataKey 是否已赋值
                     * @return DataKey 是否已赋值
                     * 
                     */
                    bool DataKeyHasBeenSet() const;

                    /**
                     * 获取接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @return AccessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @param _accessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    void SetAccessScope(const int64_t& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                    /**
                     * 获取当付费方为租户时，可选择租户license付费方式：
0，月度授权
1，永久授权
若不传则默认为月度授权。
当付费方为厂商时，此参数无效

                     * @return LicensePayMode 当付费方为租户时，可选择租户license付费方式：
0，月度授权
1，永久授权
若不传则默认为月度授权。
当付费方为厂商时，此参数无效

                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置当付费方为租户时，可选择租户license付费方式：
0，月度授权
1，永久授权
若不传则默认为月度授权。
当付费方为厂商时，此参数无效

                     * @param _licensePayMode 当付费方为租户时，可选择租户license付费方式：
0，月度授权
1，永久授权
若不传则默认为月度授权。
当付费方为厂商时，此参数无效

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
                     * 获取设备分组名称，预留参数，需要分组时传入GroupId
                     * @return GroupName 设备分组名称，预留参数，需要分组时传入GroupId
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置设备分组名称，预留参数，需要分组时传入GroupId
                     * @param _groupName 设备分组名称，预留参数，需要分组时传入GroupId
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

                    /**
                     * 获取激活后的设备ID
                     * @return DeviceId 激活后的设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置激活后的设备ID
                     * @param _deviceId 激活后的设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * 厂商名称
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 设备SN序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备密钥
                     */
                    std::string m_dataKey;
                    bool m_dataKeyHasBeenSet;

                    /**
                     * 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * 当付费方为租户时，可选择租户license付费方式：
0，月度授权
1，永久授权
若不传则默认为月度授权。
当付费方为厂商时，此参数无效

                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * 设备分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 设备分组名称，预留参数，需要分组时传入GroupId
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 设备无流量包处理方式，0: 按量付费，1: 截断加速
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                    /**
                     * 激活后的设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
