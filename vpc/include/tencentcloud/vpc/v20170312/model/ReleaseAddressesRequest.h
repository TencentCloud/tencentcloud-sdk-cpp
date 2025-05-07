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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEADDRESSESREQUEST_H_

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
                * ReleaseAddresses请求参数结构体
                */
                class ReleaseAddressesRequest : public AbstractModel
                {
                public:
                    ReleaseAddressesRequest();
                    ~ReleaseAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标识 EIP 的唯一 ID 列表。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。EIP 唯一 ID 形如：`eip-11112222`。
                     * @return AddressIds 标识 EIP 的唯一 ID 列表。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。EIP 唯一 ID 形如：`eip-11112222`。
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置标识 EIP 的唯一 ID 列表。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。EIP 唯一 ID 形如：`eip-11112222`。
                     * @param _addressIds 标识 EIP 的唯一 ID 列表。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。EIP 唯一 ID 形如：`eip-11112222`。
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                private:

                    /**
                     * 标识 EIP 的唯一 ID 列表。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。EIP 唯一 ID 形如：`eip-11112222`。
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEADDRESSESREQUEST_H_
