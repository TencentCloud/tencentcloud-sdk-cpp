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
#include <tencentcloud/clb/v20180317/model/OAuth.h>


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
                     * 获取负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @return LoadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @param _loadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
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
                     * 获取负载均衡监听器 ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * @return ListenerId 负载均衡监听器 ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * @param _listenerId 负载均衡监听器 ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
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
                     * 获取要修改的转发规则的 ID， 可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * @return LocationId 要修改的转发规则的 ID， 可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置要修改的转发规则的 ID， 可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     * @param _locationId 要修改的转发规则的 ID， 可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
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
                     * 获取转发规则的新的转发路径，如不需修改Url，则不需提供此参数。
                     * @return Url 转发规则的新的转发路径，如不需修改Url，则不需提供此参数。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的新的转发路径，如不需修改Url，则不需提供此参数。
                     * @param _url 转发规则的新的转发路径，如不需修改Url，则不需提供此参数。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取健康检查信息。
                     * @return HealthCheck 健康检查信息。
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息。
                     * @param _healthCheck 健康检查信息。
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @return Scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @param _scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取会话保持时间。取值范围0或30-86400（单位：秒）。
默认为0。
                     * @return SessionExpireTime 会话保持时间。取值范围0或30-86400（单位：秒）。
默认为0。
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间。取值范围0或30-86400（单位：秒）。
默认为0。
                     * @param _sessionExpireTime 会话保持时间。取值范围0或30-86400（单位：秒）。
默认为0。
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例与后端服务之间的转发协议，默认HTTP，可取值：HTTP、HTTPS、GRPC。仅HTTPS监听器该参数有效。
                     * @return ForwardType 负载均衡实例与后端服务之间的转发协议，默认HTTP，可取值：HTTP、HTTPS、GRPC。仅HTTPS监听器该参数有效。
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置负载均衡实例与后端服务之间的转发协议，默认HTTP，可取值：HTTP、HTTPS、GRPC。仅HTTPS监听器该参数有效。
                     * @param _forwardType 负载均衡实例与后端服务之间的转发协议，默认HTTP，可取值：HTTP、HTTPS、GRPC。仅HTTPS监听器该参数有效。
                     * 
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     * 
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @return TrpcCallee TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @param _trpcCallee TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * 
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     * 
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @return TrpcFunc TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放。
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @param _trpcFunc TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放。
                     * 
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     * 
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取OAuth配置信息。
                     * @return OAuth OAuth配置信息。
                     * 
                     */
                    OAuth GetOAuth() const;

                    /**
                     * 设置OAuth配置信息。
                     * @param _oAuth OAuth配置信息。
                     * 
                     */
                    void SetOAuth(const OAuth& _oAuth);

                    /**
                     * 判断参数 OAuth 是否已赋值
                     * @return OAuth 是否已赋值
                     * 
                     */
                    bool OAuthHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器 ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要修改的转发规则的 ID， 可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口获取。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 转发规则的新的转发路径，如不需修改Url，则不需提供此参数。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 健康检查信息。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 会话保持时间。取值范围0或30-86400（单位：秒）。
默认为0。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 负载均衡实例与后端服务之间的转发协议，默认HTTP，可取值：HTTP、HTTPS、GRPC。仅HTTPS监听器该参数有效。
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放。
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * OAuth配置信息。
                     */
                    OAuth m_oAuth;
                    bool m_oAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYRULEREQUEST_H_
