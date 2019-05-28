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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_

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
                * AllocateAddresses请求参数结构体
                */
                class AllocateAddressesRequest : public AbstractModel
                {
                public:
                    AllocateAddressesRequest();
                    ~AllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请 EIP 数量，默认值为1。
                     * @return AddressCount 申请 EIP 数量，默认值为1。
                     */
                    int64_t GetAddressCount() const;

                    /**
                     * 设置申请 EIP 数量，默认值为1。
                     * @param AddressCount 申请 EIP 数量，默认值为1。
                     */
                    void SetAddressCount(const int64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     */
                    bool AddressCountHasBeenSet() const;

                private:

                    /**
                     * 申请 EIP 数量，默认值为1。
                     */
                    int64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
