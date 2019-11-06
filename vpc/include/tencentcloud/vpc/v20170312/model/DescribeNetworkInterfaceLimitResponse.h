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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_

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
                * DescribeNetworkInterfaceLimit返回参数结构体
                */
                class DescribeNetworkInterfaceLimitResponse : public AbstractModel
                {
                public:
                    DescribeNetworkInterfaceLimitResponse();
                    ~DescribeNetworkInterfaceLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取弹性网卡配额
                     * @return EniQuantity 弹性网卡配额
                     */
                    int64_t GetEniQuantity() const;

                    /**
                     * 判断参数 EniQuantity 是否已赋值
                     * @return EniQuantity 是否已赋值
                     */
                    bool EniQuantityHasBeenSet() const;

                    /**
                     * 获取每个弹性网卡可以分配的ip配额
                     * @return EniPrivateIpAddressQuantity 每个弹性网卡可以分配的ip配额
                     */
                    int64_t GetEniPrivateIpAddressQuantity() const;

                    /**
                     * 判断参数 EniPrivateIpAddressQuantity 是否已赋值
                     * @return EniPrivateIpAddressQuantity 是否已赋值
                     */
                    bool EniPrivateIpAddressQuantityHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡配额
                     */
                    int64_t m_eniQuantity;
                    bool m_eniQuantityHasBeenSet;

                    /**
                     * 每个弹性网卡可以分配的ip配额
                     */
                    int64_t m_eniPrivateIpAddressQuantity;
                    bool m_eniPrivateIpAddressQuantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_
