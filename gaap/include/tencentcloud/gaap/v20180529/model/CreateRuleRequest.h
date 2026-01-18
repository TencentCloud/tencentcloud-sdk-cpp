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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleCheckParams.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateRule请求参数结构体
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>7层监听器ID</p>
                     * @return ListenerId <p>7层监听器ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>7层监听器ID</p>
                     * @param _listenerId <p>7层监听器ID</p>
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
                     * 获取<p>转发规则的域名</p>
                     * @return Domain <p>转发规则的域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>转发规则的域名</p>
                     * @param _domain <p>转发规则的域名</p>
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
                     * 获取<p>转发规则的路径</p>
                     * @return Path <p>转发规则的路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>转发规则的路径</p>
                     * @param _path <p>转发规则的路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>转发规则对应源站的类型，支持IP和DOMAIN类型。</p>
                     * @return RealServerType <p>转发规则对应源站的类型，支持IP和DOMAIN类型。</p>
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置<p>转发规则对应源站的类型，支持IP和DOMAIN类型。</p>
                     * @param _realServerType <p>转发规则对应源站的类型，支持IP和DOMAIN类型。</p>
                     * 
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     * 
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取<p>监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数。</p>
                     * @return Scheduler <p>监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数。</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数。</p>
                     * @param _scheduler <p>监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数。</p>
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
                     * 获取<p>规则是否开启健康检查，1开启，0关闭。</p>
                     * @return HealthCheck <p>规则是否开启健康检查，1开启，0关闭。</p>
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置<p>规则是否开启健康检查，1开启，0关闭。</p>
                     * @param _healthCheck <p>规则是否开启健康检查，1开启，0关闭。</p>
                     * 
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>源站健康检查相关参数</p>
                     * @return CheckParams <p>源站健康检查相关参数</p>
                     * 
                     */
                    RuleCheckParams GetCheckParams() const;

                    /**
                     * 设置<p>源站健康检查相关参数</p>
                     * @param _checkParams <p>源站健康检查相关参数</p>
                     * 
                     */
                    void SetCheckParams(const RuleCheckParams& _checkParams);

                    /**
                     * 判断参数 CheckParams 是否已赋值
                     * @return CheckParams 是否已赋值
                     * 
                     */
                    bool CheckParamsHasBeenSet() const;

                    /**
                     * 获取<p>加速通道转发到源站的协议类型：支持HTTP或HTTPS。不传递该字段时表示使用对应监听器的ForwardProtocol。</p>
                     * @return ForwardProtocol <p>加速通道转发到源站的协议类型：支持HTTP或HTTPS。不传递该字段时表示使用对应监听器的ForwardProtocol。</p>
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置<p>加速通道转发到源站的协议类型：支持HTTP或HTTPS。不传递该字段时表示使用对应监听器的ForwardProtocol。</p>
                     * @param _forwardProtocol <p>加速通道转发到源站的协议类型：支持HTTP或HTTPS。不传递该字段时表示使用对应监听器的ForwardProtocol。</p>
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取<p>回源Host。加速通道转发到源站的host，不设置该参数时，使用默认的host设置，即客户端发起的http请求的host。</p>
                     * @return ForwardHost <p>回源Host。加速通道转发到源站的host，不设置该参数时，使用默认的host设置，即客户端发起的http请求的host。</p>
                     * 
                     */
                    std::string GetForwardHost() const;

                    /**
                     * 设置<p>回源Host。加速通道转发到源站的host，不设置该参数时，使用默认的host设置，即客户端发起的http请求的host。</p>
                     * @param _forwardHost <p>回源Host。加速通道转发到源站的host，不设置该参数时，使用默认的host设置，即客户端发起的http请求的host。</p>
                     * 
                     */
                    void SetForwardHost(const std::string& _forwardHost);

                    /**
                     * 判断参数 ForwardHost 是否已赋值
                     * @return ForwardHost 是否已赋值
                     * 
                     */
                    bool ForwardHostHasBeenSet() const;

                    /**
                     * 获取<p>服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。创建HTTP监听器转发规则时，SNI功能默认关闭。</p>
                     * @return ServerNameIndicationSwitch <p>服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。创建HTTP监听器转发规则时，SNI功能默认关闭。</p>
                     * 
                     */
                    std::string GetServerNameIndicationSwitch() const;

                    /**
                     * 设置<p>服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。创建HTTP监听器转发规则时，SNI功能默认关闭。</p>
                     * @param _serverNameIndicationSwitch <p>服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。创建HTTP监听器转发规则时，SNI功能默认关闭。</p>
                     * 
                     */
                    void SetServerNameIndicationSwitch(const std::string& _serverNameIndicationSwitch);

                    /**
                     * 判断参数 ServerNameIndicationSwitch 是否已赋值
                     * @return ServerNameIndicationSwitch 是否已赋值
                     * 
                     */
                    bool ServerNameIndicationSwitchHasBeenSet() const;

                    /**
                     * 获取<p>服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。</p>
                     * @return ServerNameIndication <p>服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。</p>
                     * 
                     */
                    std::string GetServerNameIndication() const;

                    /**
                     * 设置<p>服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。</p>
                     * @param _serverNameIndication <p>服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。</p>
                     * 
                     */
                    void SetServerNameIndication(const std::string& _serverNameIndication);

                    /**
                     * 判断参数 ServerNameIndication 是否已赋值
                     * @return ServerNameIndication 是否已赋值
                     * 
                     */
                    bool ServerNameIndicationHasBeenSet() const;

                    /**
                     * 获取<p>HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。</p>
                     * @return ForcedRedirect <p>HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。</p>
                     * 
                     */
                    std::string GetForcedRedirect() const;

                    /**
                     * 设置<p>HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。</p>
                     * @param _forcedRedirect <p>HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。</p>
                     * 
                     */
                    void SetForcedRedirect(const std::string& _forcedRedirect);

                    /**
                     * 判断参数 ForcedRedirect 是否已赋值
                     * @return ForcedRedirect 是否已赋值
                     * 
                     */
                    bool ForcedRedirectHasBeenSet() const;

                private:

                    /**
                     * <p>7层监听器ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>转发规则的域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>转发规则的路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>转发规则对应源站的类型，支持IP和DOMAIN类型。</p>
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * <p>监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数。</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>规则是否开启健康检查，1开启，0关闭。</p>
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>源站健康检查相关参数</p>
                     */
                    RuleCheckParams m_checkParams;
                    bool m_checkParamsHasBeenSet;

                    /**
                     * <p>加速通道转发到源站的协议类型：支持HTTP或HTTPS。不传递该字段时表示使用对应监听器的ForwardProtocol。</p>
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * <p>回源Host。加速通道转发到源站的host，不设置该参数时，使用默认的host设置，即客户端发起的http请求的host。</p>
                     */
                    std::string m_forwardHost;
                    bool m_forwardHostHasBeenSet;

                    /**
                     * <p>服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。创建HTTP监听器转发规则时，SNI功能默认关闭。</p>
                     */
                    std::string m_serverNameIndicationSwitch;
                    bool m_serverNameIndicationSwitchHasBeenSet;

                    /**
                     * <p>服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。</p>
                     */
                    std::string m_serverNameIndication;
                    bool m_serverNameIndicationHasBeenSet;

                    /**
                     * <p>HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。</p>
                     */
                    std::string m_forcedRedirect;
                    bool m_forcedRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATERULEREQUEST_H_
