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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * 公网网段信息，包含网段cidr和网关ip
                */
                class PublicNetworkSegment : public AbstractModel
                {
                public:
                    PublicNetworkSegment();
                    ~PublicNetworkSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网段Cidr
                     * @return Cidr 网段Cidr
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置网段Cidr
                     * @param _cidr 网段Cidr
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取网关Ip
                     * @return Gateway 网关Ip
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 设置网关Ip
                     * @param _gateway 网关Ip
                     * 
                     */
                    void SetGateway(const std::string& _gateway);

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                private:

                    /**
                     * 网段Cidr
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * 网关Ip
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKSEGMENT_H_
