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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_SUBSCRIBEPRIVATEZONESERVICERESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_SUBSCRIBEPRIVATEZONESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * SubscribePrivateZoneService返回参数结构体
                */
                class SubscribePrivateZoneServiceResponse : public AbstractModel
                {
                public:
                    SubscribePrivateZoneServiceResponse();
                    ~SubscribePrivateZoneServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域解析服务开通状态
                     * @return ServiceStatus 私有域解析服务开通状态
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                private:

                    /**
                     * 私有域解析服务开通状态
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_SUBSCRIBEPRIVATEZONESERVICERESPONSE_H_
