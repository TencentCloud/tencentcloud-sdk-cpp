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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AppUpdateDevice请求参数结构体
                */
                class AppUpdateDeviceRequest : public AbstractModel
                {
                public:
                    AppUpdateDeviceRequest();
                    ~AppUpdateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问Token
                     * @return AccessToken 访问Token
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置访问Token
                     * @param _accessToken 访问Token
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取设备别名
                     * @return AliasName 设备别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置设备别名
                     * @param _aliasName 设备别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * 访问Token
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICEREQUEST_H_
