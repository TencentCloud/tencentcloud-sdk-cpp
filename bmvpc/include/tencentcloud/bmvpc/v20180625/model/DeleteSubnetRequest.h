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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETESUBNETREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETESUBNETREQUEST_H_

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
                * DeleteSubnet请求参数结构体
                */
                class DeleteSubnetRequest : public AbstractModel
                {
                public:
                    DeleteSubnetRequest();
                    ~DeleteSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId 私有网络ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param _vpcId 私有网络ID。可通过DescribeVpcs接口返回值中的VpcId获取。
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
                     * 获取子网实例ID。可通过DescribeSubnets接口返回值中的SubnetId获取。
                     * @return SubnetId 子网实例ID。可通过DescribeSubnets接口返回值中的SubnetId获取。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。可通过DescribeSubnets接口返回值中的SubnetId获取。
                     * @param _subnetId 子网实例ID。可通过DescribeSubnets接口返回值中的SubnetId获取。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。可通过DescribeSubnets接口返回值中的SubnetId获取。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETESUBNETREQUEST_H_
