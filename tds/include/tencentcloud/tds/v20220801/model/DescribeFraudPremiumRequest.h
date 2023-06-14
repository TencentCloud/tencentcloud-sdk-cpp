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

#ifndef TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDPREMIUMREQUEST_H_
#define TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDPREMIUMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            namespace Model
            {
                /**
                * DescribeFraudPremium请求参数结构体
                */
                class DescribeFraudPremiumRequest : public AbstractModel
                {
                public:
                    DescribeFraudPremiumRequest();
                    ~DescribeFraudPremiumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端通过SDK获取的设备Token
                     * @return DeviceToken 客户端通过SDK获取的设备Token
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置客户端通过SDK获取的设备Token
                     * @param _deviceToken 客户端通过SDK获取的设备Token
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                private:

                    /**
                     * 客户端通过SDK获取的设备Token
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDPREMIUMREQUEST_H_
