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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6CidrBlock返回参数结构体
                */
                class AssignIpv6CidrBlockResponse : public AbstractModel
                {
                public:
                    AssignIpv6CidrBlockResponse();
                    ~AssignIpv6CidrBlockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配的 `IPv6` 网段。形如：`3402:4e00:20:1000::/56`。	
                     * @return Ipv6CidrBlock 分配的 `IPv6` 网段。形如：`3402:4e00:20:1000::/56`。	
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 分配的 `IPv6` 网段。形如：`3402:4e00:20:1000::/56`。	
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKRESPONSE_H_
