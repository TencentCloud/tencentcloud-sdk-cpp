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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_IPADDRESSINFOSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_IPADDRESSINFOSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 加速地域公网IP信息
                */
                class IpAddressInfoSet : public AbstractModel
                {
                public:
                    IpAddressInfoSet();
                    ~IpAddressInfoSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址。
                     * @return IpAddress IP地址。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置IP地址。
                     * @param _ipAddress IP地址。
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取IP类型。
                     * @return IspType IP类型。
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置IP类型。
                     * @param _ispType IP类型。
                     * 
                     */
                    void SetIspType(const std::string& _ispType);

                    /**
                     * 判断参数 IspType 是否已赋值
                     * @return IspType 是否已赋值
                     * 
                     */
                    bool IspTypeHasBeenSet() const;

                private:

                    /**
                     * IP地址。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * IP类型。
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_IPADDRESSINFOSET_H_
