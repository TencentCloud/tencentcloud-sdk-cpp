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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_

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
                * DisassociateAddress请求参数结构体
                */
                class DisassociateAddressRequest : public AbstractModel
                {
                public:
                    DisassociateAddressRequest();
                    ~DisassociateAddressRequest() = default;
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
                     * 获取<p>表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li><code>true</code>：表示解绑 EIP 之后分配普通公网 IP。</li><li><code>false</code>：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：<code>false</code>。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 <a href="https://cloud.tencent.com/document/api/213/1378">DescribeAddressQuota</a> 接口获取。</li></p>
                     * @return ReallocateNormalPublicIp <p>表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li><code>true</code>：表示解绑 EIP 之后分配普通公网 IP。</li><li><code>false</code>：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：<code>false</code>。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 <a href="https://cloud.tencent.com/document/api/213/1378">DescribeAddressQuota</a> 接口获取。</li></p>
                     * 
                     */
                    bool GetReallocateNormalPublicIp() const;

                    /**
                     * 设置<p>表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li><code>true</code>：表示解绑 EIP 之后分配普通公网 IP。</li><li><code>false</code>：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：<code>false</code>。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 <a href="https://cloud.tencent.com/document/api/213/1378">DescribeAddressQuota</a> 接口获取。</li></p>
                     * @param _reallocateNormalPublicIp <p>表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li><code>true</code>：表示解绑 EIP 之后分配普通公网 IP。</li><li><code>false</code>：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：<code>false</code>。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 <a href="https://cloud.tencent.com/document/api/213/1378">DescribeAddressQuota</a> 接口获取。</li></p>
                     * 
                     */
                    void SetReallocateNormalPublicIp(const bool& _reallocateNormalPublicIp);

                    /**
                     * 判断参数 ReallocateNormalPublicIp 是否已赋值
                     * @return ReallocateNormalPublicIp 是否已赋值
                     * 
                     */
                    bool ReallocateNormalPublicIpHasBeenSet() const;

                private:

                    /**
                     * <p>标识 EIP 的唯一 ID。EIP 唯一 ID 形如：<code>eip-11112222</code>。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li><code>true</code>：表示解绑 EIP 之后分配普通公网 IP。</li><li><code>false</code>：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：<code>false</code>。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 <a href="https://cloud.tencent.com/document/api/213/1378">DescribeAddressQuota</a> 接口获取。</li></p>
                     */
                    bool m_reallocateNormalPublicIp;
                    bool m_reallocateNormalPublicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_
