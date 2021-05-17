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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_SRCADDRESSINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_SRCADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 移动网络加速源地址结构体
                */
                class SrcAddressInfo : public AbstractModel
                {
                public:
                    SrcAddressInfo();
                    ~SrcAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户私网 ipv4 地址
                     * @return SrcIpv4 用户私网 ipv4 地址
                     */
                    std::string GetSrcIpv4() const;

                    /**
                     * 设置用户私网 ipv4 地址
                     * @param SrcIpv4 用户私网 ipv4 地址
                     */
                    void SetSrcIpv4(const std::string& _srcIpv4);

                    /**
                     * 判断参数 SrcIpv4 是否已赋值
                     * @return SrcIpv4 是否已赋值
                     */
                    bool SrcIpv4HasBeenSet() const;

                    /**
                     * 获取用户公网 ipv4 地址
                     * @return SrcPublicIpv4 用户公网 ipv4 地址
                     */
                    std::string GetSrcPublicIpv4() const;

                    /**
                     * 设置用户公网 ipv4 地址
                     * @param SrcPublicIpv4 用户公网 ipv4 地址
                     */
                    void SetSrcPublicIpv4(const std::string& _srcPublicIpv4);

                    /**
                     * 判断参数 SrcPublicIpv4 是否已赋值
                     * @return SrcPublicIpv4 是否已赋值
                     */
                    bool SrcPublicIpv4HasBeenSet() const;

                    /**
                     * 获取用户 ipv6 地址
                     * @return SrcIpv6 用户 ipv6 地址
                     */
                    std::string GetSrcIpv6() const;

                    /**
                     * 设置用户 ipv6 地址
                     * @param SrcIpv6 用户 ipv6 地址
                     */
                    void SetSrcIpv6(const std::string& _srcIpv6);

                    /**
                     * 判断参数 SrcIpv6 是否已赋值
                     * @return SrcIpv6 是否已赋值
                     */
                    bool SrcIpv6HasBeenSet() const;

                private:

                    /**
                     * 用户私网 ipv4 地址
                     */
                    std::string m_srcIpv4;
                    bool m_srcIpv4HasBeenSet;

                    /**
                     * 用户公网 ipv4 地址
                     */
                    std::string m_srcPublicIpv4;
                    bool m_srcPublicIpv4HasBeenSet;

                    /**
                     * 用户 ipv6 地址
                     */
                    std::string m_srcIpv6;
                    bool m_srcIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_SRCADDRESSINFO_H_
