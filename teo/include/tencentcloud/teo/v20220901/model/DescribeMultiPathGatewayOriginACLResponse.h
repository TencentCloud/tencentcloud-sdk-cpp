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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYORIGINACLRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYORIGINACLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayOriginACLInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeMultiPathGatewayOriginACL返回参数结构体
                */
                class DescribeMultiPathGatewayOriginACLResponse : public AbstractModel
                {
                public:
                    DescribeMultiPathGatewayOriginACLResponse();
                    ~DescribeMultiPathGatewayOriginACLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取多通道网关实例与回源 IP 网段的绑定关系详情。
                     * @return MultiPathGatewayOriginACLInfo 多通道网关实例与回源 IP 网段的绑定关系详情。
                     * 
                     */
                    MultiPathGatewayOriginACLInfo GetMultiPathGatewayOriginACLInfo() const;

                    /**
                     * 判断参数 MultiPathGatewayOriginACLInfo 是否已赋值
                     * @return MultiPathGatewayOriginACLInfo 是否已赋值
                     * 
                     */
                    bool MultiPathGatewayOriginACLInfoHasBeenSet() const;

                private:

                    /**
                     * 多通道网关实例与回源 IP 网段的绑定关系详情。
                     */
                    MultiPathGatewayOriginACLInfo m_multiPathGatewayOriginACLInfo;
                    bool m_multiPathGatewayOriginACLInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYORIGINACLRESPONSE_H_
