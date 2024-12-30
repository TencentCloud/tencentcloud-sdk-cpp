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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddDevice请求参数结构体
                */
                class AddDeviceRequest : public AbstractModel
                {
                public:
                    AddDeviceRequest();
                    ~AddDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建设备的名称
                     * @return DeviceName 新建设备的名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置新建设备的名称
                     * @param _deviceName 新建设备的名称
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
                     * 获取新建设备的备注
                     * @return Remark 新建设备的备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置新建设备的备注
                     * @param _remark 新建设备的备注
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
                     * 获取新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @return DataKey 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * 
                     */
                    std::string GetDataKey() const;

                    /**
                     * 设置新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @param _dataKey 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
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
                     * 获取是否设置预置密钥
                     * @return Encrypted 是否设置预置密钥
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置是否设置预置密钥
                     * @param _encrypted 是否设置预置密钥
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。
具体含义：
公有云网关：即该设备只能接入公有云网关（就近接入）
自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入）
公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @return AccessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。
具体含义：
公有云网关：即该设备只能接入公有云网关（就近接入）
自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入）
公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。
具体含义：
公有云网关：即该设备只能接入公有云网关（就近接入）
自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入）
公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @param _accessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。
具体含义：
公有云网关：即该设备只能接入公有云网关（就近接入）
自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入）
公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
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
                     * 获取license付费方式： 
0，月度授权 
1，永久授权 
若不传则默认为月度授权，永久授权设备需要调用OrderPerLicense接口支付授权费，否则设备无法使用
                     * @return LicensePayMode license付费方式： 
0，月度授权 
1，永久授权 
若不传则默认为月度授权，永久授权设备需要调用OrderPerLicense接口支付授权费，否则设备无法使用
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置license付费方式： 
0，月度授权 
1，永久授权 
若不传则默认为月度授权，永久授权设备需要调用OrderPerLicense接口支付授权费，否则设备无法使用
                     * @param _licensePayMode license付费方式： 
0，月度授权 
1，永久授权 
若不传则默认为月度授权，永久授权设备需要调用OrderPerLicense接口支付授权费，否则设备无法使用
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
                     * 获取设备分组名称，非必选，预留参数，需要分组时传入GroupId
                     * @return GroupName 设备分组名称，非必选，预留参数，需要分组时传入GroupId
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置设备分组名称，非必选，预留参数，需要分组时传入GroupId
                     * @param _groupName 设备分组名称，非必选，预留参数，需要分组时传入GroupId
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
                     * 获取设备分组ID，非必选，如果不填写则默认设备无分组
                     * @return GroupId 设备分组ID，非必选，如果不填写则默认设备无分组
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置设备分组ID，非必选，如果不填写则默认设备无分组
                     * @param _groupId 设备分组ID，非必选，如果不填写则默认设备无分组
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
                     * 新建设备的名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 新建设备的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     */
                    std::string m_dataKey;
                    bool m_dataKeyHasBeenSet;

                    /**
                     * 是否设置预置密钥
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。
具体含义：
公有云网关：即该设备只能接入公有云网关（就近接入）
自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入）
公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * license付费方式： 
0，月度授权 
1，永久授权 
若不传则默认为月度授权，永久授权设备需要调用OrderPerLicense接口支付授权费，否则设备无法使用
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * 设备分组名称，非必选，预留参数，需要分组时传入GroupId
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 设备分组ID，非必选，如果不填写则默认设备无分组
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_
