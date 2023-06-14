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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPSECUREADDDEVICEREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPSECUREADDDEVICEREQUEST_H_

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
                * AppSecureAddDevice请求参数结构体
                */
                class AppSecureAddDeviceRequest : public AbstractModel
                {
                public:
                    AppSecureAddDeviceRequest();
                    ~AppSecureAddDeviceRequest() = default;
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
                     * 获取设备签名
                     * @return DeviceSignature 设备签名
                     * 
                     */
                    std::string GetDeviceSignature() const;

                    /**
                     * 设置设备签名
                     * @param _deviceSignature 设备签名
                     * 
                     */
                    void SetDeviceSignature(const std::string& _deviceSignature);

                    /**
                     * 判断参数 DeviceSignature 是否已赋值
                     * @return DeviceSignature 是否已赋值
                     * 
                     */
                    bool DeviceSignatureHasBeenSet() const;

                private:

                    /**
                     * 访问Token
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 设备签名
                     */
                    std::string m_deviceSignature;
                    bool m_deviceSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPSECUREADDDEVICEREQUEST_H_
