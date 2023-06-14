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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYRULEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYRULEATTRIBUTEREQUEST_H_

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
                * ModifyRuleAttribute请求参数结构体
                */
                class ModifyRuleAttributeRequest : public AbstractModel
                {
                public:
                    ModifyRuleAttributeRequest();
                    ~ModifyRuleAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取转发规则ID
                     * @return RuleId 转发规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则ID
                     * @param _ruleId 转发规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * @return Scheduler 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * @param _scheduler 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
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
                     * 获取源站健康检查开关，其中：
1，开启；
0，关闭。
                     * @return HealthCheck 源站健康检查开关，其中：
1，开启；
0，关闭。
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置源站健康检查开关，其中：
1，开启；
0，关闭。
                     * @param _healthCheck 源站健康检查开关，其中：
1，开启；
0，关闭。
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
                     * 获取健康检查配置参数
                     * @return CheckParams 健康检查配置参数
                     * 
                     */
                    RuleCheckParams GetCheckParams() const;

                    /**
                     * 设置健康检查配置参数
                     * @param _checkParams 健康检查配置参数
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
                     * 获取转发规则路径
                     * @return Path 转发规则路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置转发规则路径
                     * @param _path 转发规则路径
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
                     * 获取加速通道转发到源站的协议类型，支持：default, HTTP和HTTPS。
当ForwardProtocol=default时，表示使用对应监听器的ForwardProtocol。
                     * @return ForwardProtocol 加速通道转发到源站的协议类型，支持：default, HTTP和HTTPS。
当ForwardProtocol=default时，表示使用对应监听器的ForwardProtocol。
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置加速通道转发到源站的协议类型，支持：default, HTTP和HTTPS。
当ForwardProtocol=default时，表示使用对应监听器的ForwardProtocol。
                     * @param _forwardProtocol 加速通道转发到源站的协议类型，支持：default, HTTP和HTTPS。
当ForwardProtocol=default时，表示使用对应监听器的ForwardProtocol。
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
                     * 获取回源Host。加速通道转发到源站的请求中携带的host。
当ForwardHost=default时，使用规则的域名，其他情况为该字段所设置的值。
                     * @return ForwardHost 回源Host。加速通道转发到源站的请求中携带的host。
当ForwardHost=default时，使用规则的域名，其他情况为该字段所设置的值。
                     * 
                     */
                    std::string GetForwardHost() const;

                    /**
                     * 设置回源Host。加速通道转发到源站的请求中携带的host。
当ForwardHost=default时，使用规则的域名，其他情况为该字段所设置的值。
                     * @param _forwardHost 回源Host。加速通道转发到源站的请求中携带的host。
当ForwardHost=default时，使用规则的域名，其他情况为该字段所设置的值。
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
                     * 获取服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
                     * @return ServerNameIndicationSwitch 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
                     * 
                     */
                    std::string GetServerNameIndicationSwitch() const;

                    /**
                     * 设置服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
                     * @param _serverNameIndicationSwitch 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
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
                     * 获取服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
                     * @return ServerNameIndication 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
                     * 
                     */
                    std::string GetServerNameIndication() const;

                    /**
                     * 设置服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
                     * @param _serverNameIndication 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
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
                     * 获取HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。
                     * @return ForcedRedirect HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。
                     * 
                     */
                    std::string GetForcedRedirect() const;

                    /**
                     * 设置HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。
                     * @param _forcedRedirect HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。
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
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 源站健康检查开关，其中：
1，开启；
0，关闭。
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 健康检查配置参数
                     */
                    RuleCheckParams m_checkParams;
                    bool m_checkParamsHasBeenSet;

                    /**
                     * 转发规则路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 加速通道转发到源站的协议类型，支持：default, HTTP和HTTPS。
当ForwardProtocol=default时，表示使用对应监听器的ForwardProtocol。
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * 回源Host。加速通道转发到源站的请求中携带的host。
当ForwardHost=default时，使用规则的域名，其他情况为该字段所设置的值。
                     */
                    std::string m_forwardHost;
                    bool m_forwardHostHasBeenSet;

                    /**
                     * 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
                     */
                    std::string m_serverNameIndicationSwitch;
                    bool m_serverNameIndicationSwitchHasBeenSet;

                    /**
                     * 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
                     */
                    std::string m_serverNameIndication;
                    bool m_serverNameIndicationHasBeenSet;

                    /**
                     * HTTP强制跳转HTTPS。输入当前规则对应的域名与地址。
                     */
                    std::string m_forcedRedirect;
                    bool m_forcedRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYRULEATTRIBUTEREQUEST_H_
