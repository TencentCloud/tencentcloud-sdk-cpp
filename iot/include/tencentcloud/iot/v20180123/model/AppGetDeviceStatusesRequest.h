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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPGETDEVICESTATUSESREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPGETDEVICESTATUSESREQUEST_H_

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
                * AppGetDeviceStatuses请求参数结构体
                */
                class AppGetDeviceStatusesRequest : public AbstractModel
                {
                public:
                    AppGetDeviceStatusesRequest();
                    ~AppGetDeviceStatusesRequest() = default;
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
                     * 获取设备Id列表（单次限制1000个设备）
                     * @return DeviceIds 设备Id列表（单次限制1000个设备）
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置设备Id列表（单次限制1000个设备）
                     * @param _deviceIds 设备Id列表（单次限制1000个设备）
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * 访问Token
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 设备Id列表（单次限制1000个设备）
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPGETDEVICESTATUSESREQUEST_H_
