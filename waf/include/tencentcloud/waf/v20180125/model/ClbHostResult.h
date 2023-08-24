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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBHOSTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBHOSTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CLB查询对应绑定的WAF状态的结果参数
                */
                class ClbHostResult : public AbstractModel
                {
                public:
                    ClbHostResult();
                    ~ClbHostResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WAF绑定的监听器实例
                     * @return LoadBalancer WAF绑定的监听器实例
                     * 
                     */
                    LoadBalancer GetLoadBalancer() const;

                    /**
                     * 设置WAF绑定的监听器实例
                     * @param _loadBalancer WAF绑定的监听器实例
                     * 
                     */
                    void SetLoadBalancer(const LoadBalancer& _loadBalancer);

                    /**
                     * 判断参数 LoadBalancer 是否已赋值
                     * @return LoadBalancer 是否已赋值
                     * 
                     */
                    bool LoadBalancerHasBeenSet() const;

                    /**
                     * 获取WAF绑定的域名
                     * @return Domain WAF绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置WAF绑定的域名
                     * @param _domain WAF绑定的域名
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
                     * 获取WAF绑定的实例ID
                     * @return DomainId WAF绑定的实例ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置WAF绑定的实例ID
                     * @param _domainId WAF绑定的实例ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取是否有绑定WAF，1：绑定了WAF，0：没有绑定WAF
                     * @return Status 是否有绑定WAF，1：绑定了WAF，0：没有绑定WAF
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否有绑定WAF，1：绑定了WAF，0：没有绑定WAF
                     * @param _status 是否有绑定WAF，1：绑定了WAF，0：没有绑定WAF
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取绑定了WAF的情况下，WAF流量模式，1：清洗模式，0：镜像模式（默认）
                     * @return FlowMode 绑定了WAF的情况下，WAF流量模式，1：清洗模式，0：镜像模式（默认）
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置绑定了WAF的情况下，WAF流量模式，1：清洗模式，0：镜像模式（默认）
                     * @param _flowMode 绑定了WAF的情况下，WAF流量模式，1：清洗模式，0：镜像模式（默认）
                     * 
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                private:

                    /**
                     * WAF绑定的监听器实例
                     */
                    LoadBalancer m_loadBalancer;
                    bool m_loadBalancerHasBeenSet;

                    /**
                     * WAF绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * WAF绑定的实例ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 是否有绑定WAF，1：绑定了WAF，0：没有绑定WAF
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 绑定了WAF的情况下，WAF流量模式，1：清洗模式，0：镜像模式（默认）
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBHOSTRESULT_H_
