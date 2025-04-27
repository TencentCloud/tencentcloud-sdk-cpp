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
                     * 获取IPv6 CIdr Block
                     * @return IPv6CidrBlock IPv6 CIdr Block
                     * 
                     */
                    std::string GetIPv6CidrBlock() const;

                    /**
                     * 设置IPv6 CIdr Block
                     * @param _iPv6CidrBlock IPv6 CIdr Block
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
                     * 获取网络运营商类型 取值范围:'BGP'-默认, 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调
                     * @return ISPType 网络运营商类型 取值范围:'BGP'-默认, 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调
                     * 
                     */
                    std::string GetISPType() const;

                    /**
                     * 设置网络运营商类型 取值范围:'BGP'-默认, 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调
                     * @param _iSPType 网络运营商类型 取值范围:'BGP'-默认, 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调
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
                     * 获取IPv6 Cidr 的类型：`GUA`(全球单播地址), `ULA`(唯一本地地址)
                     * @return AddressType IPv6 Cidr 的类型：`GUA`(全球单播地址), `ULA`(唯一本地地址)
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置IPv6 Cidr 的类型：`GUA`(全球单播地址), `ULA`(唯一本地地址)
                     * @param _addressType IPv6 Cidr 的类型：`GUA`(全球单播地址), `ULA`(唯一本地地址)
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
                     * IPv6 CIdr Block
                     */
                    std::string m_iPv6CidrBlock;
                    bool m_iPv6CidrBlockHasBeenSet;

                    /**
                     * 网络运营商类型 取值范围:'BGP'-默认, 'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调
                     */
                    std::string m_iSPType;
                    bool m_iSPTypeHasBeenSet;

                    /**
                     * IPv6 Cidr 的类型：`GUA`(全球单播地址), `ULA`(唯一本地地址)
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ISPIPV6CIDRBLOCK_H_
