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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESREQUEST_H_

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
                * DescribeVpcPrivateIpAddresses请求参数结构体
                */
                class DescribeVpcPrivateIpAddressesRequest : public AbstractModel
                {
                public:
                    DescribeVpcPrivateIpAddressesRequest();
                    ~DescribeVpcPrivateIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * @return VpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * @param _vpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取内网`IP`地址列表，批量查询单次请求最多支持`10`个。
                     * @return PrivateIpAddresses 内网`IP`地址列表，批量查询单次请求最多支持`10`个。
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置内网`IP`地址列表，批量查询单次请求最多支持`10`个。
                     * @param _privateIpAddresses 内网`IP`地址列表，批量查询单次请求最多支持`10`个。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 内网`IP`地址列表，批量查询单次请求最多支持`10`个。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESREQUEST_H_
