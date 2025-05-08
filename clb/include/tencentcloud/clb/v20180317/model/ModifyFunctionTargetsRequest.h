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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYFUNCTIONTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYFUNCTIONTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/FunctionTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyFunctionTargets请求参数结构体
                */
                class ModifyFunctionTargetsRequest : public AbstractModel
                {
                public:
                    ModifyFunctionTargetsRequest();
                    ~ModifyFunctionTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param _loadBalancerId 负载均衡实例ID。
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
                     * 获取负载均衡监听器ID。
                     * @return ListenerId 负载均衡监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID。
                     * @param _listenerId 负载均衡监听器ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取要修改的后端云函数服务列表，仅支持 Event 函数类型。
                     * @return FunctionTargets 要修改的后端云函数服务列表，仅支持 Event 函数类型。
                     * 
                     */
                    std::vector<FunctionTarget> GetFunctionTargets() const;

                    /**
                     * 设置要修改的后端云函数服务列表，仅支持 Event 函数类型。
                     * @param _functionTargets 要修改的后端云函数服务列表，仅支持 Event 函数类型。
                     * 
                     */
                    void SetFunctionTargets(const std::vector<FunctionTarget>& _functionTargets);

                    /**
                     * 判断参数 FunctionTargets 是否已赋值
                     * @return FunctionTargets 是否已赋值
                     * 
                     */
                    bool FunctionTargetsHasBeenSet() const;

                    /**
                     * 获取转发规则的ID，当绑定机器到七层转发规则时，必须提供此参数或Domain+Url两者之一。
                     * @return LocationId 转发规则的ID，当绑定机器到七层转发规则时，必须提供此参数或Domain+Url两者之一。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的ID，当绑定机器到七层转发规则时，必须提供此参数或Domain+Url两者之一。
                     * @param _locationId 转发规则的ID，当绑定机器到七层转发规则时，必须提供此参数或Domain+Url两者之一。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取目标规则的域名，提供LocationId参数时本参数不生效。
                     * @return Domain 目标规则的域名，提供LocationId参数时本参数不生效。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置目标规则的域名，提供LocationId参数时本参数不生效。
                     * @param _domain 目标规则的域名，提供LocationId参数时本参数不生效。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取目标规则的URL，提供LocationId参数时本参数不生效。
                     * @return Url 目标规则的URL，提供LocationId参数时本参数不生效。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置目标规则的URL，提供LocationId参数时本参数不生效。
                     * @param _url 目标规则的URL，提供LocationId参数时本参数不生效。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要修改的后端云函数服务列表，仅支持 Event 函数类型。
                     */
                    std::vector<FunctionTarget> m_functionTargets;
                    bool m_functionTargetsHasBeenSet;

                    /**
                     * 转发规则的ID，当绑定机器到七层转发规则时，必须提供此参数或Domain+Url两者之一。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 目标规则的域名，提供LocationId参数时本参数不生效。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 目标规则的URL，提供LocationId参数时本参数不生效。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYFUNCTIONTARGETSREQUEST_H_
