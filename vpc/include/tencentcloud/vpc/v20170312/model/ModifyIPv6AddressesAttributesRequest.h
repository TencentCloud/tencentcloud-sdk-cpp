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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyIPv6AddressesAttributes请求参数结构体
                */
                class ModifyIPv6AddressesAttributesRequest : public AbstractModel
                {
                public:
                    ModifyIPv6AddressesAttributesRequest();
                    ~ModifyIPv6AddressesAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>弹性公网IPv6唯一ID列表。可以使用<a href="https://cloud.tencent.com/document/api/215/113677">DescribeIPv6Addresses</a>接口获取IPv6AddressIds。</p>
                     * @return IPv6AddressIds <p>弹性公网IPv6唯一ID列表。可以使用<a href="https://cloud.tencent.com/document/api/215/113677">DescribeIPv6Addresses</a>接口获取IPv6AddressIds。</p>
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置<p>弹性公网IPv6唯一ID列表。可以使用<a href="https://cloud.tencent.com/document/api/215/113677">DescribeIPv6Addresses</a>接口获取IPv6AddressIds。</p>
                     * @param _iPv6AddressIds <p>弹性公网IPv6唯一ID列表。可以使用<a href="https://cloud.tencent.com/document/api/215/113677">DescribeIPv6Addresses</a>接口获取IPv6AddressIds。</p>
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                    /**
                     * 获取<p>弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * @return IPv6AddressName <p>弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * 
                     */
                    std::string GetIPv6AddressName() const;

                    /**
                     * 设置<p>弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * @param _iPv6AddressName <p>弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * 
                     */
                    void SetIPv6AddressName(const std::string& _iPv6AddressName);

                    /**
                     * 判断参数 IPv6AddressName 是否已赋值
                     * @return IPv6AddressName 是否已赋值
                     * 
                     */
                    bool IPv6AddressNameHasBeenSet() const;

                    /**
                     * 获取<p>是否开启弹性公网IPv6地址网卡可见</p>
                     * @return EipVisibleOnEni <p>是否开启弹性公网IPv6地址网卡可见</p>
                     * 
                     */
                    bool GetEipVisibleOnEni() const;

                    /**
                     * 设置<p>是否开启弹性公网IPv6地址网卡可见</p>
                     * @param _eipVisibleOnEni <p>是否开启弹性公网IPv6地址网卡可见</p>
                     * 
                     */
                    void SetEipVisibleOnEni(const bool& _eipVisibleOnEni);

                    /**
                     * 判断参数 EipVisibleOnEni 是否已赋值
                     * @return EipVisibleOnEni 是否已赋值
                     * 
                     */
                    bool EipVisibleOnEniHasBeenSet() const;

                private:

                    /**
                     * <p>弹性公网IPv6唯一ID列表。可以使用<a href="https://cloud.tencent.com/document/api/215/113677">DescribeIPv6Addresses</a>接口获取IPv6AddressIds。</p>
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                    /**
                     * <p>弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     */
                    std::string m_iPv6AddressName;
                    bool m_iPv6AddressNameHasBeenSet;

                    /**
                     * <p>是否开启弹性公网IPv6地址网卡可见</p>
                     */
                    bool m_eipVisibleOnEni;
                    bool m_eipVisibleOnEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTESREQUEST_H_
