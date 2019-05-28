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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyRule请求参数结构体
                */
                class ModifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyRuleRequest();
                    ~ModifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param LoadBalancerId 负载均衡实例 ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡监听器 ID
                     * @return ListenerId 应用型负载均衡监听器 ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置应用型负载均衡监听器 ID
                     * @param ListenerId 应用型负载均衡监听器 ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取要修改的转发规则的 ID。
                     * @return LocationId 要修改的转发规则的 ID。
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置要修改的转发规则的 ID。
                     * @param LocationId 要修改的转发规则的 ID。
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取转发规则的新的转发路径，如不需修改Url，则不需提供此参数
                     * @return Url 转发规则的新的转发路径，如不需修改Url，则不需提供此参数
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的新的转发路径，如不需修改Url，则不需提供此参数
                     * @param Url 转发规则的新的转发路径，如不需修改Url，则不需提供此参数
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取健康检查信息
                     * @return HealthCheck 健康检查信息
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息
                     * @param HealthCheck 健康检查信息
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取规则的请求转发方式
                     * @return Scheduler 规则的请求转发方式
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式
                     * @param Scheduler 规则的请求转发方式
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取会话保持时间
                     * @return SessionExpireTime 会话保持时间
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间
                     * @param SessionExpireTime 会话保持时间
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 应用型负载均衡监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要修改的转发规则的 ID。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 转发规则的新的转发路径，如不需修改Url，则不需提供此参数
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 健康检查信息
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 规则的请求转发方式
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 会话保持时间
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
