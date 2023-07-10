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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICERATELIMITREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICERATELIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteCloudNativeAPIGatewayServiceRateLimit请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayServiceRateLimitRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayServiceRateLimitRequest();
                    ~DeleteCloudNativeAPIGatewayServiceRateLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关Id
                     * @return GatewayId 网关Id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关Id
                     * @param _gatewayId 网关Id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务名称，或服务ID
                     * @return Name 服务名称，或服务ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称，或服务ID
                     * @param _name 服务名称，或服务ID
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 网关Id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务名称，或服务ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICERATELIMITREQUEST_H_
