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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_IPADDRESSINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_IPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 应用型负载均衡可用区子网映射中的 IP 信息数据结构
                */
                class IPAddressInfo : public AbstractModel
                {
                public:
                    IPAddressInfo();
                    ~IPAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 地址
                     * @return Address IP 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置IP 地址
                     * @param _address IP 地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取EIP AddressId
                     * @return AddressId EIP AddressId
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP AddressId
                     * @param _addressId EIP AddressId
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                private:

                    /**
                     * IP 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * EIP AddressId
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_IPADDRESSINFO_H_
