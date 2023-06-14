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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPSEGMENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ip段数据结构
                */
                class IpSegment : public AbstractModel
                {
                public:
                    IpSegment();
                    ~IpSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip地址
                     * @return Ip ip地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip地址
                     * @param _ip ip地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取ip掩码，如果为32位ip，填0
                     * @return Mask ip掩码，如果为32位ip，填0
                     * 
                     */
                    uint64_t GetMask() const;

                    /**
                     * 设置ip掩码，如果为32位ip，填0
                     * @param _mask ip掩码，如果为32位ip，填0
                     * 
                     */
                    void SetMask(const uint64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                private:

                    /**
                     * ip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * ip掩码，如果为32位ip，填0
                     */
                    uint64_t m_mask;
                    bool m_maskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPSEGMENT_H_
