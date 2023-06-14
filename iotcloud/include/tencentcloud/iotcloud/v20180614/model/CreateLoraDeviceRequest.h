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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateLoraDevice请求参数结构体
                */
                class CreateLoraDeviceRequest : public AbstractModel
                {
                public:
                    CreateLoraDeviceRequest();
                    ~CreateLoraDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id ，创建产品时腾讯云为用户分配全局唯一的Id
                     * @return ProductId 产品Id ，创建产品时腾讯云为用户分配全局唯一的Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id ，创建产品时腾讯云为用户分配全局唯一的Id
                     * @param _productId 产品Id ，创建产品时腾讯云为用户分配全局唯一的Id
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
                     * 获取设备类型 ，目前支持A、B、C三种
                     * @return DeviceType 设备类型 ，目前支持A、B、C三种
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型 ，目前支持A、B、C三种
                     * @param _deviceType 设备类型 ，目前支持A、B、C三种
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
                     * 获取LoRa应用UUID
                     * @return AppEui LoRa应用UUID
                     * 
                     */
                    std::string GetAppEui() const;

                    /**
                     * 设置LoRa应用UUID
                     * @param _appEui LoRa应用UUID
                     * 
                     */
                    void SetAppEui(const std::string& _appEui);

                    /**
                     * 判断参数 AppEui 是否已赋值
                     * @return AppEui 是否已赋值
                     * 
                     */
                    bool AppEuiHasBeenSet() const;

                    /**
                     * 获取LoRa设备UUID
                     * @return DeviceEui LoRa设备UUID
                     * 
                     */
                    std::string GetDeviceEui() const;

                    /**
                     * 设置LoRa设备UUID
                     * @param _deviceEui LoRa设备UUID
                     * 
                     */
                    void SetDeviceEui(const std::string& _deviceEui);

                    /**
                     * 判断参数 DeviceEui 是否已赋值
                     * @return DeviceEui 是否已赋值
                     * 
                     */
                    bool DeviceEuiHasBeenSet() const;

                    /**
                     * 获取LoRa应用密钥
                     * @return AppKey LoRa应用密钥
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置LoRa应用密钥
                     * @param _appKey LoRa应用密钥
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
                     * 获取LoRa设备验证密钥
                     * @return AuthKey LoRa设备验证密钥
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置LoRa设备验证密钥
                     * @param _authKey LoRa设备验证密钥
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取设备备注
                     * @return Memo 设备备注
                     * 
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置设备备注
                     * @param _memo 设备备注
                     * 
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     * 
                     */
                    bool MemoHasBeenSet() const;

                private:

                    /**
                     * 产品Id ，创建产品时腾讯云为用户分配全局唯一的Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备类型 ，目前支持A、B、C三种
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * LoRa应用UUID
                     */
                    std::string m_appEui;
                    bool m_appEuiHasBeenSet;

                    /**
                     * LoRa设备UUID
                     */
                    std::string m_deviceEui;
                    bool m_deviceEuiHasBeenSet;

                    /**
                     * LoRa应用密钥
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * LoRa设备验证密钥
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * 设备备注
                     */
                    std::string m_memo;
                    bool m_memoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICEREQUEST_H_
