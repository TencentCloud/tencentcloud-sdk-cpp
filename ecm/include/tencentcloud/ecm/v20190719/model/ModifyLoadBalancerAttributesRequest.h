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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAttributes请求参数结构体
                */
                class ModifyLoadBalancerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAttributesRequest();
                    ~ModifyLoadBalancerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡的唯一ID
                     * @return LoadBalancerId 负载均衡的唯一ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡的唯一ID
                     * @param _loadBalancerId 负载均衡的唯一ID
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
                     * 获取负载均衡实例名称
                     * @return LoadBalancerName 负载均衡实例名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例名称
                     * @param _loadBalancerName 负载均衡实例名称
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取网络计费及带宽相关参数
                     * @return InternetChargeInfo 网络计费及带宽相关参数
                     * 
                     */
                    LoadBalancerInternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置网络计费及带宽相关参数
                     * @param _internetChargeInfo 网络计费及带宽相关参数
                     * 
                     */
                    void SetInternetChargeInfo(const LoadBalancerInternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     * 
                     */
                    bool InternetChargeInfoHasBeenSet() const;

                    /**
                     * 获取Target是否放通来自ELB的流量。开启放通（true）：只验证ELB上的安全组；不开启放通（false）：需同时验证ELB和后端实例上的安全组。
                     * @return LoadBalancerPassToTarget Target是否放通来自ELB的流量。开启放通（true）：只验证ELB上的安全组；不开启放通（false）：需同时验证ELB和后端实例上的安全组。
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Target是否放通来自ELB的流量。开启放通（true）：只验证ELB上的安全组；不开启放通（false）：需同时验证ELB和后端实例上的安全组。
                     * @param _loadBalancerPassToTarget Target是否放通来自ELB的流量。开启放通（true）：只验证ELB上的安全组；不开启放通（false）：需同时验证ELB和后端实例上的安全组。
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡的唯一ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 网络计费及带宽相关参数
                     */
                    LoadBalancerInternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * Target是否放通来自ELB的流量。开启放通（true）：只验证ELB上的安全组；不开启放通（false）：需同时验证ELB和后端实例上的安全组。
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
