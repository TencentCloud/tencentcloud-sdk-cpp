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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS黑白名单
                */
                class DDoSUserAllowBlockIP : public AbstractModel
                {
                public:
                    DDoSUserAllowBlockIP();
                    ~DDoSUserAllowBlockIP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端IP。
                     * @return Ip 客户端IP。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置客户端IP。
                     * @param Ip 客户端IP。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取掩码。
                     * @return Mask 掩码。
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置掩码。
                     * @param Mask 掩码。
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取类型，取值有：
<li>block ：丢弃 ；</li>
<li>allow ：允许。</li>
                     * @return Type 类型，取值有：
<li>block ：丢弃 ；</li>
<li>allow ：允许。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，取值有：
<li>block ：丢弃 ；</li>
<li>allow ：允许。</li>
                     * @param Type 类型，取值有：
<li>block ：丢弃 ；</li>
<li>allow ：允许。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取10位时间戳，例如1199116800。
                     * @return UpdateTime 10位时间戳，例如1199116800。
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置10位时间戳，例如1199116800。
                     * @param UpdateTime 10位时间戳，例如1199116800。
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取客户端IP2，设置IP范围时使用，例如 1.1.1.1-1.1.1.2。
                     * @return Ip2 客户端IP2，设置IP范围时使用，例如 1.1.1.1-1.1.1.2。
                     */
                    std::string GetIp2() const;

                    /**
                     * 设置客户端IP2，设置IP范围时使用，例如 1.1.1.1-1.1.1.2。
                     * @param Ip2 客户端IP2，设置IP范围时使用，例如 1.1.1.1-1.1.1.2。
                     */
                    void SetIp2(const std::string& _ip2);

                    /**
                     * 判断参数 Ip2 是否已赋值
                     * @return Ip2 是否已赋值
                     */
                    bool Ip2HasBeenSet() const;

                    /**
                     * 获取掩码2，设置IP网段范围时使用，例如 1.1.1.0/24-1.1.2.0/24。
                     * @return Mask2 掩码2，设置IP网段范围时使用，例如 1.1.1.0/24-1.1.2.0/24。
                     */
                    int64_t GetMask2() const;

                    /**
                     * 设置掩码2，设置IP网段范围时使用，例如 1.1.1.0/24-1.1.2.0/24。
                     * @param Mask2 掩码2，设置IP网段范围时使用，例如 1.1.1.0/24-1.1.2.0/24。
                     */
                    void SetMask2(const int64_t& _mask2);

                    /**
                     * 判断参数 Mask2 是否已赋值
                     * @return Mask2 是否已赋值
                     */
                    bool Mask2HasBeenSet() const;

                private:

                    /**
                     * 客户端IP。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 掩码。
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * 类型，取值有：
<li>block ：丢弃 ；</li>
<li>allow ：允许。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 10位时间戳，例如1199116800。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 客户端IP2，设置IP范围时使用，例如 1.1.1.1-1.1.1.2。
                     */
                    std::string m_ip2;
                    bool m_ip2HasBeenSet;

                    /**
                     * 掩码2，设置IP网段范围时使用，例如 1.1.1.0/24-1.1.2.0/24。
                     */
                    int64_t m_mask2;
                    bool m_mask2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_
