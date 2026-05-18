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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_

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
                * 设备的基本信息
                */
                class DeviceBaseInfo : public AbstractModel
                {
                public:
                    DeviceBaseInfo();
                    ~DeviceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>设备唯一ID</p>
                     * @return DeviceId <p>设备唯一ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备唯一ID</p>
                     * @param _deviceId <p>设备唯一ID</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>设备创建的时间，单位：ms</p>
                     * @return CreateTime <p>设备创建的时间，单位：ms</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>设备创建的时间，单位：ms</p>
                     * @param _createTime <p>设备创建的时间，单位：ms</p>
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
                     * 获取<p>设备最后在线时间，单位：ms</p>
                     * @return LastTime <p>设备最后在线时间，单位：ms</p>
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置<p>设备最后在线时间，单位：ms</p>
                     * @param _lastTime <p>设备最后在线时间，单位：ms</p>
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取<p>设备的备注</p>
                     * @return Remark <p>设备的备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>设备的备注</p>
                     * @param _remark <p>设备的备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）</p>
                     * @return AccessScope <p>接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）</p>
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置<p>接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）</p>
                     * @param _accessScope <p>接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）</p>
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
                     * 获取<p>license授权有效期 0：月度授权 1：永久授权</p>
                     * @return LicensePayMode <p>license授权有效期 0：月度授权 1：永久授权</p>
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置<p>license授权有效期 0：月度授权 1：永久授权</p>
                     * @param _licensePayMode <p>license授权有效期 0：月度授权 1：永久授权</p>
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
                     * 获取<p>付费方 0：厂商付费 1：客户付费</p>
                     * @return Payer <p>付费方 0：厂商付费 1：客户付费</p>
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 设置<p>付费方 0：厂商付费 1：客户付费</p>
                     * @param _payer <p>付费方 0：厂商付费 1：客户付费</p>
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
                     * 获取<p>设备分组ID</p>
                     * @return GroupId <p>设备分组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>设备分组ID</p>
                     * @param _groupId <p>设备分组ID</p>
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
                     * 获取<p>设备分组名称</p>
                     * @return GroupName <p>设备分组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>设备分组名称</p>
                     * @param _groupName <p>设备分组名称</p>
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
                     * 获取<p>设备无流量包处理方式，0: 按量付费，1: 截断加速</p>
                     * @return FlowTrunc <p>设备无流量包处理方式，0: 按量付费，1: 截断加速</p>
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置<p>设备无流量包处理方式，0: 按量付费，1: 截断加速</p>
                     * @param _flowTrunc <p>设备无流量包处理方式，0: 按量付费，1: 截断加速</p>
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
                     * 获取<p>设备sn</p>
                     * @return Sn <p>设备sn</p>
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置<p>设备sn</p>
                     * @param _sn <p>设备sn</p>
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取<p>厂商</p>
                     * @return Vendor <p>厂商</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>厂商</p>
                     * @param _vendor <p>厂商</p>
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
                     * 获取<p>可接入地域列表。</p>
                     * @return AllowedRegions <p>可接入地域列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedRegions() const;

                    /**
                     * 设置<p>可接入地域列表。</p>
                     * @param _allowedRegions <p>可接入地域列表。</p>
                     * 
                     */
                    void SetAllowedRegions(const std::vector<std::string>& _allowedRegions);

                    /**
                     * 判断参数 AllowedRegions 是否已赋值
                     * @return AllowedRegions 是否已赋值
                     * 
                     */
                    bool AllowedRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>设备唯一ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>设备创建的时间，单位：ms</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>设备最后在线时间，单位：ms</p>
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * <p>设备的备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）</p>
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * <p>license授权有效期 0：月度授权 1：永久授权</p>
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * <p>付费方 0：厂商付费 1：客户付费</p>
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * <p>设备分组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>设备分组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>设备无流量包处理方式，0: 按量付费，1: 截断加速</p>
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                    /**
                     * <p>设备sn</p>
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * <p>厂商</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>可接入地域列表。</p>
                     */
                    std::vector<std::string> m_allowedRegions;
                    bool m_allowedRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
