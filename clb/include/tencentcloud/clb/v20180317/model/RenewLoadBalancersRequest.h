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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RENEWLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RENEWLOADBALANCERSREQUEST_H_

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
                * RenewLoadBalancers请求参数结构体
                */
                class RenewLoadBalancersRequest : public AbstractModel
                {
                public:
                    RenewLoadBalancersRequest();
                    ~RenewLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例唯一ID数组，最多支持20个。
                     * @return LoadBalancerIds 负载均衡实例唯一ID数组，最多支持20个。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例唯一ID数组，最多支持20个。
                     * @param _loadBalancerIds 负载均衡实例唯一ID数组，最多支持20个。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的预付费相关属性。
                     * @return LBChargePrepaid 负载均衡实例的预付费相关属性。
                     * 
                     */
                    LBChargePrepaid GetLBChargePrepaid() const;

                    /**
                     * 设置负载均衡实例的预付费相关属性。
                     * @param _lBChargePrepaid 负载均衡实例的预付费相关属性。
                     * 
                     */
                    void SetLBChargePrepaid(const LBChargePrepaid& _lBChargePrepaid);

                    /**
                     * 判断参数 LBChargePrepaid 是否已赋值
                     * @return LBChargePrepaid 是否已赋值
                     * 
                     */
                    bool LBChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例唯一ID数组，最多支持20个。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 负载均衡实例的预付费相关属性。
                     */
                    LBChargePrepaid m_lBChargePrepaid;
                    bool m_lBChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RENEWLOADBALANCERSREQUEST_H_
