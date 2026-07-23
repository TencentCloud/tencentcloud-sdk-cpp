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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPROREQUEST_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPROREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * AssessDeviceRiskPro请求参数结构体
                */
                class AssessDeviceRiskProRequest : public AbstractModel
                {
                public:
                    AssessDeviceRiskProRequest();
                    ~AssessDeviceRiskProRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * @return DeviceToken <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * @param _deviceToken <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取<p>客户端 IP 地址（IPv4或IPv6）</p>
                     * @return UserIp <p>客户端 IP 地址（IPv4或IPv6）</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>客户端 IP 地址（IPv4或IPv6）</p>
                     * @param _userIp <p>客户端 IP 地址（IPv4或IPv6）</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                private:

                    /**
                     * <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * <p>客户端 IP 地址（IPv4或IPv6）</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPROREQUEST_H_
