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
                     * 获取标识 EIP 的唯一 ID。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @return AddressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置标识 EIP 的唯一 ID。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @param _addressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
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
                     * 获取表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li>TRUE：表示解绑 EIP 之后分配普通公网 IP。</li><li>FALSE：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：FALSE。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。</li>
                     * @return ReallocateNormalPublicIp 表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li>TRUE：表示解绑 EIP 之后分配普通公网 IP。</li><li>FALSE：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：FALSE。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。</li>
                     * 
                     */
                    bool GetReallocateNormalPublicIp() const;

                    /**
                     * 设置表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li>TRUE：表示解绑 EIP 之后分配普通公网 IP。</li><li>FALSE：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：FALSE。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。</li>
                     * @param _reallocateNormalPublicIp 表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li>TRUE：表示解绑 EIP 之后分配普通公网 IP。</li><li>FALSE：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：FALSE。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。</li>
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
                     * 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 表示解绑 EIP 之后是否分配普通公网 IP。取值范围：<li>TRUE：表示解绑 EIP 之后分配普通公网 IP。</li><li>FALSE：表示解绑 EIP 之后不分配普通公网 IP。</li>默认取值：FALSE。<br><br>只有满足以下条件时才能指定该参数：<li>只有在解绑主网卡的主内网 IP 上的 EIP 时才能指定该参数。</li><li>解绑 EIP 后重新分配普通公网 IP 操作一个账号每天最多操作 10 次；详情可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。</li>
                     */
                    bool m_reallocateNormalPublicIp;
                    bool m_reallocateNormalPublicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_
