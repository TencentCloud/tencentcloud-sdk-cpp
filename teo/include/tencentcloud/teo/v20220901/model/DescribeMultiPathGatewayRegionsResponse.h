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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYREGIONSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/GatewayRegion.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeMultiPathGatewayRegions返回参数结构体
                */
                class DescribeMultiPathGatewayRegionsResponse : public AbstractModel
                {
                public:
                    DescribeMultiPathGatewayRegionsResponse();
                    ~DescribeMultiPathGatewayRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关可用地域列表。
                     * @return GatewayRegions 网关可用地域列表。
                     * 
                     */
                    std::vector<GatewayRegion> GetGatewayRegions() const;

                    /**
                     * 判断参数 GatewayRegions 是否已赋值
                     * @return GatewayRegions 是否已赋值
                     * 
                     */
                    bool GatewayRegionsHasBeenSet() const;

                private:

                    /**
                     * 网关可用地域列表。
                     */
                    std::vector<GatewayRegion> m_gatewayRegions;
                    bool m_gatewayRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYREGIONSRESPONSE_H_
