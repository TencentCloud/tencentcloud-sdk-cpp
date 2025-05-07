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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RENEWADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RENEWADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RenewAddresses请求参数结构体
                */
                class RenewAddressesRequest : public AbstractModel
                {
                public:
                    RenewAddressesRequest();
                    ~RenewAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @return AddressIds EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * @param _addressIds EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取续费参数
                     * @return AddressChargePrepaid 续费参数
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置续费参数
                     * @param _addressChargePrepaid 续费参数
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * EIP唯一标识ID列表，形如'eip-xxxx'，可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * 续费参数
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RENEWADDRESSESREQUEST_H_
