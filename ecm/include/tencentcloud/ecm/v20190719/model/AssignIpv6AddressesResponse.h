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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6Addresses返回参数结构体
                */
                class AssignIpv6AddressesResponse : public AbstractModel
                {
                public:
                    AssignIpv6AddressesResponse();
                    ~AssignIpv6AddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配给弹性网卡的IPv6地址列表。
                     * @return Ipv6AddressSet 分配给弹性网卡的IPv6地址列表。
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 判断参数 Ipv6AddressSet 是否已赋值
                     * @return Ipv6AddressSet 是否已赋值
                     * 
                     */
                    bool Ipv6AddressSetHasBeenSet() const;

                private:

                    /**
                     * 分配给弹性网卡的IPv6地址列表。
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESRESPONSE_H_
