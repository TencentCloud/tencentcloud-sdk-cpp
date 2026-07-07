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
                     * 获取<p>IP地址。</p>
                     * @return IpAddress <p>IP地址。</p>
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置<p>IP地址。</p>
                     * @param _ipAddress <p>IP地址。</p>
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
                     * 获取<p>IP类型。</p>
                     * @return IspType <p>IP类型。</p>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>IP类型。</p>
                     * @param _ispType <p>IP类型。</p>
                     * 
                     */
                    void SetIspType(const std::string& _ispType);

                    /**
                     * 判断参数 IspType 是否已赋值
                     * @return IspType 是否已赋值
                     * 
                     */
                    bool IspTypeHasBeenSet() const;

                    /**
                     * 获取<p>Ddos类型</p>
                     * @return DdosProtectionType <p>Ddos类型</p>
                     * 
                     */
                    std::string GetDdosProtectionType() const;

                    /**
                     * 设置<p>Ddos类型</p>
                     * @param _ddosProtectionType <p>Ddos类型</p>
                     * 
                     */
                    void SetDdosProtectionType(const std::string& _ddosProtectionType);

                    /**
                     * 判断参数 DdosProtectionType 是否已赋值
                     * @return DdosProtectionType 是否已赋值
                     * 
                     */
                    bool DdosProtectionTypeHasBeenSet() const;

                private:

                    /**
                     * <p>IP地址。</p>
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * <p>IP类型。</p>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>Ddos类型</p>
                     */
                    std::string m_ddosProtectionType;
                    bool m_ddosProtectionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_IPADDRESSINFOSET_H_
