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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

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
                * ModifyAddressAttribute请求参数结构体
                */
                class ModifyAddressAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAddressAttributeRequest();
                    ~ModifyAddressAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     * @return AddressId <p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     * @param _addressId <p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取<p>修改后的 EIP 名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * @return AddressName <p>修改后的 EIP 名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置<p>修改后的 EIP 名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * @param _addressName <p>修改后的 EIP 名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取<p>设定EIP是否直通，&quot;TRUE&quot;表示直通，&quot;FALSE&quot;表示非直通。<br>注意：该参数仅对 EIP 直通功能可见的用户可以设定，EIP 必须为绑定状态，绑定的对象为 CVM 。</p>
                     * @return EipDirectConnection <p>设定EIP是否直通，&quot;TRUE&quot;表示直通，&quot;FALSE&quot;表示非直通。<br>注意：该参数仅对 EIP 直通功能可见的用户可以设定，EIP 必须为绑定状态，绑定的对象为 CVM 。</p>
                     * 
                     */
                    std::string GetEipDirectConnection() const;

                    /**
                     * 设置<p>设定EIP是否直通，&quot;TRUE&quot;表示直通，&quot;FALSE&quot;表示非直通。<br>注意：该参数仅对 EIP 直通功能可见的用户可以设定，EIP 必须为绑定状态，绑定的对象为 CVM 。</p>
                     * @param _eipDirectConnection <p>设定EIP是否直通，&quot;TRUE&quot;表示直通，&quot;FALSE&quot;表示非直通。<br>注意：该参数仅对 EIP 直通功能可见的用户可以设定，EIP 必须为绑定状态，绑定的对象为 CVM 。</p>
                     * 
                     */
                    void SetEipDirectConnection(const std::string& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     * 
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取<p>设定EIP是否在网卡可见</p>
                     * @return EipVisibleOnEni <p>设定EIP是否在网卡可见</p>
                     * 
                     */
                    bool GetEipVisibleOnEni() const;

                    /**
                     * 设置<p>设定EIP是否在网卡可见</p>
                     * @param _eipVisibleOnEni <p>设定EIP是否在网卡可见</p>
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
                     * <p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>修改后的 EIP 名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。</p>
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * <p>设定EIP是否直通，&quot;TRUE&quot;表示直通，&quot;FALSE&quot;表示非直通。<br>注意：该参数仅对 EIP 直通功能可见的用户可以设定，EIP 必须为绑定状态，绑定的对象为 CVM 。</p>
                     */
                    std::string m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                    /**
                     * <p>设定EIP是否在网卡可见</p>
                     */
                    bool m_eipVisibleOnEni;
                    bool m_eipVisibleOnEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
