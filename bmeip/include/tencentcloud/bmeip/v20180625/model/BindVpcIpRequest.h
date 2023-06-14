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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDVPCIPREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDVPCIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * BindVpcIp请求参数结构体
                */
                class BindVpcIpRequest : public AbstractModel
                {
                public:
                    BindVpcIpRequest();
                    ~BindVpcIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Eip实例ID
                     * @return EipId Eip实例ID
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置Eip实例ID
                     * @param _eipId Eip实例ID
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取EIP归属VpcId，例如vpc-k7j1t2x1
                     * @return VpcId EIP归属VpcId，例如vpc-k7j1t2x1
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置EIP归属VpcId，例如vpc-k7j1t2x1
                     * @param _vpcId EIP归属VpcId，例如vpc-k7j1t2x1
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
                     * 获取绑定的VPC内IP地址
                     * @return VpcIp 绑定的VPC内IP地址
                     * 
                     */
                    std::string GetVpcIp() const;

                    /**
                     * 设置绑定的VPC内IP地址
                     * @param _vpcIp 绑定的VPC内IP地址
                     * 
                     */
                    void SetVpcIp(const std::string& _vpcIp);

                    /**
                     * 判断参数 VpcIp 是否已赋值
                     * @return VpcIp 是否已赋值
                     * 
                     */
                    bool VpcIpHasBeenSet() const;

                private:

                    /**
                     * Eip实例ID
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * EIP归属VpcId，例如vpc-k7j1t2x1
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 绑定的VPC内IP地址
                     */
                    std::string m_vpcIp;
                    bool m_vpcIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDVPCIPREQUEST_H_
