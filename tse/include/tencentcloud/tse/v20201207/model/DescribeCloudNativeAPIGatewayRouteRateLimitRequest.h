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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayRouteRateLimit请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayRouteRateLimitRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayRouteRateLimitRequest();
                    ~DescribeCloudNativeAPIGatewayRouteRateLimitRequest() = default;
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
                     * 获取路由Id，或路由名称。
不支持“未命名”
                     * @return Id 路由Id，或路由名称。
不支持“未命名”
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置路由Id，或路由名称。
不支持“未命名”
                     * @param _id 路由Id，或路由名称。
不支持“未命名”
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 网关Id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 路由Id，或路由名称。
不支持“未命名”
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_
