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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATESUBNETREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATESUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/SubnetCreateInputInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateSubnet请求参数结构体
                */
                class CreateSubnetRequest : public AbstractModel
                {
                public:
                    CreateSubnetRequest();
                    ~CreateSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取系统分配的私有网络ID，例如：vpc-kd7d06of
                     * @return VpcId 系统分配的私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置系统分配的私有网络ID，例如：vpc-kd7d06of
                     * @param _vpcId 系统分配的私有网络ID，例如：vpc-kd7d06of
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
                     * 获取子网信息
                     * @return SubnetSet 子网信息
                     * 
                     */
                    std::vector<SubnetCreateInputInfo> GetSubnetSet() const;

                    /**
                     * 设置子网信息
                     * @param _subnetSet 子网信息
                     * 
                     */
                    void SetSubnetSet(const std::vector<SubnetCreateInputInfo>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                private:

                    /**
                     * 系统分配的私有网络ID，例如：vpc-kd7d06of
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网信息
                     */
                    std::vector<SubnetCreateInputInfo> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATESUBNETREQUEST_H_
