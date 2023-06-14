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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETAVAILABLEIPSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETAVAILABLEIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeSubnetAvailableIps请求参数结构体
                */
                class DescribeSubnetAvailableIpsRequest : public AbstractModel
                {
                public:
                    DescribeSubnetAvailableIpsRequest();
                    ~DescribeSubnetAvailableIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络子网ID
                     * @return SubnetId 私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param _subnetId 私有网络子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取CIDR前缀，例如10.0.1
                     * @return Cidr CIDR前缀，例如10.0.1
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置CIDR前缀，例如10.0.1
                     * @param _cidr CIDR前缀，例如10.0.1
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                private:

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CIDR前缀，例如10.0.1
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETAVAILABLEIPSREQUEST_H_
