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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ISPIPV6CIDRBLOCK_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ISPIPV6CIDRBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 返回多运营商IPv6 Cidr Block
                */
                class ISPIPv6CidrBlock : public AbstractModel
                {
                public:
                    ISPIPv6CidrBlock();
                    ~ISPIPv6CidrBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IPv6网段</p>
                     * @return IPv6CidrBlock <p>IPv6网段</p>
                     * 
                     */
                    std::string GetIPv6CidrBlock() const;

                    /**
                     * 设置<p>IPv6网段</p>
                     * @param _iPv6CidrBlock <p>IPv6网段</p>
                     * 
                     */
                    void SetIPv6CidrBlock(const std::string& _iPv6CidrBlock);

                    /**
                     * 判断参数 IPv6CidrBlock 是否已赋值
                     * @return IPv6CidrBlock 是否已赋值
                     * 
                     */
                    bool IPv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>网络运营商类型</p><p>枚举值：</p><ul><li>BGP： 默认</li><li>CMCC： 中国移动</li><li>CTCC： 中国电信</li><li>CUCC： 中国联通</li></ul>
                     * @return ISPType <p>网络运营商类型</p><p>枚举值：</p><ul><li>BGP： 默认</li><li>CMCC： 中国移动</li><li>CTCC： 中国电信</li><li>CUCC： 中国联通</li></ul>
                     * 
                     */
                    std::string GetISPType() const;

                    /**
                     * 设置<p>网络运营商类型</p><p>枚举值：</p><ul><li>BGP： 默认</li><li>CMCC： 中国移动</li><li>CTCC： 中国电信</li><li>CUCC： 中国联通</li></ul>
                     * @param _iSPType <p>网络运营商类型</p><p>枚举值：</p><ul><li>BGP： 默认</li><li>CMCC： 中国移动</li><li>CTCC： 中国电信</li><li>CUCC： 中国联通</li></ul>
                     * 
                     */
                    void SetISPType(const std::string& _iSPType);

                    /**
                     * 判断参数 ISPType 是否已赋值
                     * @return ISPType 是否已赋值
                     * 
                     */
                    bool ISPTypeHasBeenSet() const;

                    /**
                     * 获取<p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * @return AddressType <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * @param _addressType <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                private:

                    /**
                     * <p>IPv6网段</p>
                     */
                    std::string m_iPv6CidrBlock;
                    bool m_iPv6CidrBlockHasBeenSet;

                    /**
                     * <p>网络运营商类型</p><p>枚举值：</p><ul><li>BGP： 默认</li><li>CMCC： 中国移动</li><li>CTCC： 中国电信</li><li>CUCC： 中国联通</li></ul>
                     */
                    std::string m_iSPType;
                    bool m_iSPTypeHasBeenSet;

                    /**
                     * <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ISPIPV6CIDRBLOCK_H_
