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
                     * 获取负载均衡的唯一ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @return LoadBalancerId 负载均衡的唯一ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡的唯一ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @param _loadBalancerId 负载均衡的唯一ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
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
                     * 获取负载均衡实例名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
                     * @return LoadBalancerName 负载均衡实例名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
                     * @param _loadBalancerName 负载均衡实例名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
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
                     * 获取设置负载均衡跨地域绑定1.0的后端服务信息
                     * @return TargetRegionInfo 设置负载均衡跨地域绑定1.0的后端服务信息
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置设置负载均衡跨地域绑定1.0的后端服务信息
                     * @param _targetRegionInfo 设置负载均衡跨地域绑定1.0的后端服务信息
                     * 
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     * 
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取网络计费相关参数
                     * @return InternetChargeInfo 网络计费相关参数
                     * 
                     */
                    InternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置网络计费相关参数
                     * @param _internetChargeInfo 网络计费相关参数
                     * 
                     */
                    void SetInternetChargeInfo(const InternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     * 
                     */
                    bool InternetChargeInfoHasBeenSet() const;

                    /**
                     * 获取Target是否放通来自CLB的流量。
开启放通（true）：只验证CLB上的安全组；
不开启放通（false）：需同时验证CLB和后端实例上的安全组。
不填则不修改。
                     * @return LoadBalancerPassToTarget Target是否放通来自CLB的流量。
开启放通（true）：只验证CLB上的安全组；
不开启放通（false）：需同时验证CLB和后端实例上的安全组。
不填则不修改。
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Target是否放通来自CLB的流量。
开启放通（true）：只验证CLB上的安全组；
不开启放通（false）：需同时验证CLB和后端实例上的安全组。
不填则不修改。
                     * @param _loadBalancerPassToTarget Target是否放通来自CLB的流量。
开启放通（true）：只验证CLB上的安全组；
不开启放通（false）：需同时验证CLB和后端实例上的安全组。
不填则不修改。
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取是否开启跨地域绑定2.0功能。不填则不修改。
                     * @return SnatPro 是否开启跨地域绑定2.0功能。不填则不修改。
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置是否开启跨地域绑定2.0功能。不填则不修改。
                     * @param _snatPro 是否开启跨地域绑定2.0功能。不填则不修改。
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护，不填则不修改。
                     * @return DeleteProtect 是否开启删除保护，不填则不修改。
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置是否开启删除保护，不填则不修改。
                     * @param _deleteProtect 是否开启删除保护，不填则不修改。
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。
                     * @return ModifyClassicDomain 将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。
                     * 
                     */
                    bool GetModifyClassicDomain() const;

                    /**
                     * 设置将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。
                     * @param _modifyClassicDomain 将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。
                     * 
                     */
                    void SetModifyClassicDomain(const bool& _modifyClassicDomain);

                    /**
                     * 判断参数 ModifyClassicDomain 是否已赋值
                     * @return ModifyClassicDomain 是否已赋值
                     * 
                     */
                    bool ModifyClassicDomainHasBeenSet() const;

                private:

                    /**
                     * 负载均衡的唯一ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 设置负载均衡跨地域绑定1.0的后端服务信息
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * 网络计费相关参数
                     */
                    InternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * Target是否放通来自CLB的流量。
开启放通（true）：只验证CLB上的安全组；
不开启放通（false）：需同时验证CLB和后端实例上的安全组。
不填则不修改。
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * 是否开启跨地域绑定2.0功能。不填则不修改。
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * 是否开启删除保护，不填则不修改。
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * 将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。
                     */
                    bool m_modifyClassicDomain;
                    bool m_modifyClassicDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
