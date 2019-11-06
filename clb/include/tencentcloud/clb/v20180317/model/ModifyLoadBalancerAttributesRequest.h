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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡的唯一ID
                     * @param LoadBalancerId 负载均衡的唯一ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例名称
                     * @return LoadBalancerName 负载均衡实例名称
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例名称
                     * @param LoadBalancerName 负载均衡实例名称
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的后端服务的地域信息
                     * @return TargetRegionInfo 负载均衡绑定的后端服务的地域信息
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置负载均衡绑定的后端服务的地域信息
                     * @param TargetRegionInfo 负载均衡绑定的后端服务的地域信息
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取网络计费相关参数，注意，目前只支持修改最大出带宽，不支持修改网络计费方式。
                     * @return InternetChargeInfo 网络计费相关参数，注意，目前只支持修改最大出带宽，不支持修改网络计费方式。
                     */
                    InternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置网络计费相关参数，注意，目前只支持修改最大出带宽，不支持修改网络计费方式。
                     * @param InternetChargeInfo 网络计费相关参数，注意，目前只支持修改最大出带宽，不支持修改网络计费方式。
                     */
                    void SetInternetChargeInfo(const InternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     */
                    bool InternetChargeInfoHasBeenSet() const;

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
                     * 负载均衡绑定的后端服务的地域信息
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * 网络计费相关参数，注意，目前只支持修改最大出带宽，不支持修改网络计费方式。
                     */
                    InternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
