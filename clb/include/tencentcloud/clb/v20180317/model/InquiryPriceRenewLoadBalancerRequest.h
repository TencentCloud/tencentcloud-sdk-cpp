/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICERENEWLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICERENEWLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewLoadBalancer请求参数结构体
                */
                class InquiryPriceRenewLoadBalancerRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewLoadBalancerRequest();
                    ~InquiryPriceRenewLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @return LoadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @param _loadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取续费周期
                     * @return LoadBalancerChargePrepaid 续费周期
                     * 
                     */
                    LBChargePrepaid GetLoadBalancerChargePrepaid() const;

                    /**
                     * 设置续费周期
                     * @param _loadBalancerChargePrepaid 续费周期
                     * 
                     */
                    void SetLoadBalancerChargePrepaid(const LBChargePrepaid& _loadBalancerChargePrepaid);

                    /**
                     * 判断参数 LoadBalancerChargePrepaid 是否已赋值
                     * @return LoadBalancerChargePrepaid 是否已赋值
                     * 
                     */
                    bool LoadBalancerChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 续费周期
                     */
                    LBChargePrepaid m_loadBalancerChargePrepaid;
                    bool m_loadBalancerChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICERENEWLOADBALANCERREQUEST_H_
