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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_

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
                * DescribeUsedIpAddress请求参数结构体
                */
                class DescribeUsedIpAddressRequest : public AbstractModel
                {
                public:
                    DescribeUsedIpAddressRequest();
                    ~DescribeUsedIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param VpcId VPC实例ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例ID。
                     * @return SubnetId 子网实例ID。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。
                     * @param SubnetId 子网实例ID。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取查询是否占用的ip列表
                     * @return IpAddresses 查询是否占用的ip列表
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置查询是否占用的ip列表
                     * @param IpAddresses 查询是否占用的ip列表
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param Offset 偏移量。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param Limit 请求对象个数。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 查询是否占用的ip列表
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
