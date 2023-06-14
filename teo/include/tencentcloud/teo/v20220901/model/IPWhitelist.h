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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPWHITELIST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPWHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站防护IP白名单
                */
                class IPWhitelist : public AbstractModel
                {
                public:
                    IPWhitelist();
                    ~IPWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IPv4列表。
                     * @return IPv4 IPv4列表。
                     * 
                     */
                    std::vector<std::string> GetIPv4() const;

                    /**
                     * 设置IPv4列表。
                     * @param _iPv4 IPv4列表。
                     * 
                     */
                    void SetIPv4(const std::vector<std::string>& _iPv4);

                    /**
                     * 判断参数 IPv4 是否已赋值
                     * @return IPv4 是否已赋值
                     * 
                     */
                    bool IPv4HasBeenSet() const;

                    /**
                     * 获取IPv6列表。
                     * @return IPv6 IPv6列表。
                     * 
                     */
                    std::vector<std::string> GetIPv6() const;

                    /**
                     * 设置IPv6列表。
                     * @param _iPv6 IPv6列表。
                     * 
                     */
                    void SetIPv6(const std::vector<std::string>& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                private:

                    /**
                     * IPv4列表。
                     */
                    std::vector<std::string> m_iPv4;
                    bool m_iPv4HasBeenSet;

                    /**
                     * IPv6列表。
                     */
                    std::vector<std::string> m_iPv6;
                    bool m_iPv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPWHITELIST_H_
