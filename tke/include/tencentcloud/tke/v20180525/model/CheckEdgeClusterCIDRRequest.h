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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckEdgeClusterCIDR请求参数结构体
                */
                class CheckEdgeClusterCIDRRequest : public AbstractModel
                {
                public:
                    CheckEdgeClusterCIDRRequest();
                    ~CheckEdgeClusterCIDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群的vpc-id
                     * @return VpcId 集群的vpc-id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群的vpc-id
                     * @param _vpcId 集群的vpc-id
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
                     * 获取集群的pod CIDR
                     * @return PodCIDR 集群的pod CIDR
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置集群的pod CIDR
                     * @param _podCIDR 集群的pod CIDR
                     * 
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     * 
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取集群的service CIDR
                     * @return ServiceCIDR 集群的service CIDR
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置集群的service CIDR
                     * @param _serviceCIDR 集群的service CIDR
                     * 
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                private:

                    /**
                     * 集群的vpc-id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群的pod CIDR
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * 集群的service CIDR
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_
