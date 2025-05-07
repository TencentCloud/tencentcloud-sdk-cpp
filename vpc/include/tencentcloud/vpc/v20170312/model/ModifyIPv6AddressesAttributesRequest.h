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
                     * 获取弹性公网IPv6唯一ID列表。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressIds。
                     * @return IPv6AddressIds 弹性公网IPv6唯一ID列表。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressIds。
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置弹性公网IPv6唯一ID列表。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressIds。
                     * @param _iPv6AddressIds 弹性公网IPv6唯一ID列表。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressIds。
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
                     * 获取弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符"-"和下划线"_"，不能包含空格。
                     * @return IPv6AddressName 弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符"-"和下划线"_"，不能包含空格。
                     * 
                     */
                    std::string GetIPv6AddressName() const;

                    /**
                     * 设置弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符"-"和下划线"_"，不能包含空格。
                     * @param _iPv6AddressName 弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符"-"和下划线"_"，不能包含空格。
                     * 
                     */
                    void SetIPv6AddressName(const std::string& _iPv6AddressName);

                    /**
                     * 判断参数 IPv6AddressName 是否已赋值
                     * @return IPv6AddressName 是否已赋值
                     * 
                     */
                    bool IPv6AddressNameHasBeenSet() const;

                private:

                    /**
                     * 弹性公网IPv6唯一ID列表。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressIds。
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                    /**
                     * 弹性公网IPv6地址名称，长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符"-"和下划线"_"，不能包含空格。
                     */
                    std::string m_iPv6AddressName;
                    bool m_iPv6AddressNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTESREQUEST_H_
