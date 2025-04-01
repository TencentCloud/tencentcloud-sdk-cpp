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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
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
                     * 获取0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     * @return Status 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     * @param _status 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
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
                     * 获取首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirstOnlineTime() const;

                    /**
                     * 设置首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstOnlineTime(const int64_t& _firstOnlineTime);

                    /**
                     * 判断参数 FirstOnlineTime 是否已赋值
                     * @return FirstOnlineTime 是否已赋值
                     * 
                     */
                    bool FirstOnlineTimeHasBeenSet() const;

                    /**
                     * 获取最后一次上线时间
                     * @return LoginTime 最后一次上线时间
                     * 
                     */
                    int64_t GetLoginTime() const;

                    /**
                     * 设置最后一次上线时间
                     * @param _loginTime 最后一次上线时间
                     * 
                     */
                    void SetLoginTime(const int64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取设备创建时间
                     * @return CreateTime 设备创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置设备创建时间
                     * @param _createTime 设备创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备固件版本
                     * @return Version 设备固件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置设备固件版本
                     * @param _version 设备固件版本
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
                     * 获取设备证书
                     * @return DeviceCert 设备证书
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 设置设备证书
                     * @param _deviceCert 设备证书
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
                     * 获取日志级别
                     * @return LogLevel 日志级别
                     * 
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 设置日志级别
                     * @param _logLevel 日志级别
                     * 
                     */
                    void SetLogLevel(const int64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 设备地址
                     * @return DevAddr LoRaWAN 设备地址
                     * 
                     */
                    std::string GetDevAddr() const;

                    /**
                     * 设置LoRaWAN 设备地址
                     * @param _devAddr LoRaWAN 设备地址
                     * 
                     */
                    void SetDevAddr(const std::string& _devAddr);

                    /**
                     * 判断参数 DevAddr 是否已赋值
                     * @return DevAddr 是否已赋值
                     * 
                     */
                    bool DevAddrHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用密钥
                     * @return AppKey LoRaWAN 应用密钥
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置LoRaWAN 应用密钥
                     * @param _appKey LoRaWAN 应用密钥
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 设备唯一标识
                     * @return DevEUI LoRaWAN 设备唯一标识
                     * 
                     */
                    std::string GetDevEUI() const;

                    /**
                     * 设置LoRaWAN 设备唯一标识
                     * @param _devEUI LoRaWAN 设备唯一标识
                     * 
                     */
                    void SetDevEUI(const std::string& _devEUI);

                    /**
                     * 判断参数 DevEUI 是否已赋值
                     * @return DevEUI 是否已赋值
                     * 
                     */
                    bool DevEUIHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用会话密钥
                     * @return AppSKey LoRaWAN 应用会话密钥
                     * 
                     */
                    std::string GetAppSKey() const;

                    /**
                     * 设置LoRaWAN 应用会话密钥
                     * @param _appSKey LoRaWAN 应用会话密钥
                     * 
                     */
                    void SetAppSKey(const std::string& _appSKey);

                    /**
                     * 判断参数 AppSKey 是否已赋值
                     * @return AppSKey 是否已赋值
                     * 
                     */
                    bool AppSKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 网络会话密钥
                     * @return NwkSKey LoRaWAN 网络会话密钥
                     * 
                     */
                    std::string GetNwkSKey() const;

                    /**
                     * 设置LoRaWAN 网络会话密钥
                     * @param _nwkSKey LoRaWAN 网络会话密钥
                     * 
                     */
                    void SetNwkSKey(const std::string& _nwkSKey);

                    /**
                     * 判断参数 NwkSKey 是否已赋值
                     * @return NwkSKey 是否已赋值
                     * 
                     */
                    bool NwkSKeyHasBeenSet() const;

                    /**
                     * 获取创建人Id
                     * @return CreateUserId 创建人Id
                     * 
                     */
                    int64_t GetCreateUserId() const;

                    /**
                     * 设置创建人Id
                     * @param _createUserId 创建人Id
                     * 
                     */
                    void SetCreateUserId(const int64_t& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取创建人昵称
                     * @return CreatorNickName 创建人昵称
                     * 
                     */
                    std::string GetCreatorNickName() const;

                    /**
                     * 设置创建人昵称
                     * @param _creatorNickName 创建人昵称
                     * 
                     */
                    void SetCreatorNickName(const std::string& _creatorNickName);

                    /**
                     * 判断参数 CreatorNickName 是否已赋值
                     * @return CreatorNickName 是否已赋值
                     * 
                     */
                    bool CreatorNickNameHasBeenSet() const;

                    /**
                     * 获取启用/禁用状态
                     * @return EnableState 启用/禁用状态
                     * 
                     */
                    int64_t GetEnableState() const;

                    /**
                     * 设置启用/禁用状态
                     * @param _enableState 启用/禁用状态
                     * 
                     */
                    void SetEnableState(const int64_t& _enableState);

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取设备类型（设备、子设备、网关）
                     * @return DeviceType 设备类型（设备、子设备、网关）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型（设备、子设备、网关）
                     * @param _deviceType 设备类型（设备、子设备、网关）
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取是否是 lora 设备
                     * @return IsLora 是否是 lora 设备
                     * 
                     */
                    bool GetIsLora() const;

                    /**
                     * 设置是否是 lora 设备
                     * @param _isLora 是否是 lora 设备
                     * 
                     */
                    void SetIsLora(const bool& _isLora);

                    /**
                     * 判断参数 IsLora 是否已赋值
                     * @return IsLora 是否已赋值
                     * 
                     */
                    bool IsLoraHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备密钥，密钥加密的设备返回
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstOnlineTime;
                    bool m_firstOnlineTimeHasBeenSet;

                    /**
                     * 最后一次上线时间
                     */
                    int64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 设备创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备固件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 设备证书
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 日志级别
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * LoRaWAN 设备地址
                     */
                    std::string m_devAddr;
                    bool m_devAddrHasBeenSet;

                    /**
                     * LoRaWAN 应用密钥
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * LoRaWAN 设备唯一标识
                     */
                    std::string m_devEUI;
                    bool m_devEUIHasBeenSet;

                    /**
                     * LoRaWAN 应用会话密钥
                     */
                    std::string m_appSKey;
                    bool m_appSKeyHasBeenSet;

                    /**
                     * LoRaWAN 网络会话密钥
                     */
                    std::string m_nwkSKey;
                    bool m_nwkSKeyHasBeenSet;

                    /**
                     * 创建人Id
                     */
                    int64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * 创建人昵称
                     */
                    std::string m_creatorNickName;
                    bool m_creatorNickNameHasBeenSet;

                    /**
                     * 启用/禁用状态
                     */
                    int64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 设备类型（设备、子设备、网关）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 是否是 lora 设备
                     */
                    bool m_isLora;
                    bool m_isLoraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_
