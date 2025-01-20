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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6SubnetCidrBlock.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssignIpv6SubnetCidrBlock返回参数结构体
                */
                class AssignIpv6SubnetCidrBlockResponse : public AbstractModel
                {
                public:
                    AssignIpv6SubnetCidrBlockResponse();
                    ~AssignIpv6SubnetCidrBlockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配 `IPv6` 子网段列表。
                     * @return Ipv6SubnetCidrBlockSet 分配 `IPv6` 子网段列表。
                     * 
                     */
                    std::vector<Ipv6SubnetCidrBlock> GetIpv6SubnetCidrBlockSet() const;

                    /**
                     * 判断参数 Ipv6SubnetCidrBlockSet 是否已赋值
                     * @return Ipv6SubnetCidrBlockSet 是否已赋值
                     * 
                     */
                    bool Ipv6SubnetCidrBlockSetHasBeenSet() const;

                private:

                    /**
                     * 分配 `IPv6` 子网段列表。
                     */
                    std::vector<Ipv6SubnetCidrBlock> m_ipv6SubnetCidrBlockSet;
                    bool m_ipv6SubnetCidrBlockSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKRESPONSE_H_
