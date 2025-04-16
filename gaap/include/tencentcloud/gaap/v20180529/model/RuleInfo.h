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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleCheckParams.h>
#include <tencentcloud/gaap/v20180529/model/BindRealServer.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 7层监听器转发规则信息
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则信息
                     * @return RuleId 规则信息
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则信息
                     * @param _ruleId 规则信息
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
                     * 获取监听器信息
                     * @return ListenerId 监听器信息
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器信息
                     * @param _listenerId 监听器信息
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
                     * 获取规则域名
                     * @return Domain 规则域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置规则域名
                     * @param _domain 规则域名
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
                     * 获取规则路径
                     * @return Path 规则路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置规则路径
                     * @param _path 规则路径
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
                     * 获取源站类型
                     * @return RealServerType 源站类型
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置源站类型
                     * @param _realServerType 源站类型
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
                     * 获取是否开启健康检查标志，1表示开启，0表示关闭
                     * @return HealthCheck 是否开启健康检查标志，1表示开启，0表示关闭
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置是否开启健康检查标志，1表示开启，0表示关闭
                     * @param _healthCheck 是否开启健康检查标志，1表示开启，0表示关闭
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
                     * 获取规则状态，0表示运行中，1表示创建中，2表示销毁中，3表示绑定解绑源站中，4表示配置更新中
                     * @return RuleStatus 规则状态，0表示运行中，1表示创建中，2表示销毁中，3表示绑定解绑源站中，4表示配置更新中
                     * 
                     */
                    uint64_t GetRuleStatus() const;

                    /**
                     * 设置规则状态，0表示运行中，1表示创建中，2表示销毁中，3表示绑定解绑源站中，4表示配置更新中
                     * @param _ruleStatus 规则状态，0表示运行中，1表示创建中，2表示销毁中，3表示绑定解绑源站中，4表示配置更新中
                     * 
                     */
                    void SetRuleStatus(const uint64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取健康检查相关参数
                     * @return CheckParams 健康检查相关参数
                     * 
                     */
                    RuleCheckParams GetCheckParams() const;

                    /**
                     * 设置健康检查相关参数
                     * @param _checkParams 健康检查相关参数
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
                     * 获取已绑定的源站相关信息
                     * @return RealServerSet 已绑定的源站相关信息
                     * 
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置已绑定的源站相关信息
                     * @param _realServerSet 已绑定的源站相关信息
                     * 
                     */
                    void SetRealServerSet(const std::vector<BindRealServer>& _realServerSet);

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     * 
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取源站的服务状态，0表示异常，1表示正常。
未开启健康检查时，该状态始终未正常。
只要有一个源站健康状态为异常时，该状态为异常，具体源站的状态请查看RealServerSet。
                     * @return BindStatus 源站的服务状态，0表示异常，1表示正常。
未开启健康检查时，该状态始终未正常。
只要有一个源站健康状态为异常时，该状态为异常，具体源站的状态请查看RealServerSet。
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置源站的服务状态，0表示异常，1表示正常。
未开启健康检查时，该状态始终未正常。
只要有一个源站健康状态为异常时，该状态为异常，具体源站的状态请查看RealServerSet。
                     * @param _bindStatus 源站的服务状态，0表示异常，1表示正常。
未开启健康检查时，该状态始终未正常。
只要有一个源站健康状态为异常时，该状态为异常，具体源站的状态请查看RealServerSet。
                     * 
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取通道转发到源站的请求所携带的host，其中default表示直接转发接收到的host。
                     * @return ForwardHost 通道转发到源站的请求所携带的host，其中default表示直接转发接收到的host。
                     * 
                     */
                    std::string GetForwardHost() const;

                    /**
                     * 设置通道转发到源站的请求所携带的host，其中default表示直接转发接收到的host。
                     * @param _forwardHost 通道转发到源站的请求所携带的host，其中default表示直接转发接收到的host。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerNameIndicationSwitch 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerNameIndicationSwitch() const;

                    /**
                     * 设置服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverNameIndicationSwitch 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerNameIndication 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerNameIndication() const;

                    /**
                     * 设置服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverNameIndication 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取强转HTTPS指示，当传递值为https:时表示强转为https
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForcedRedirect 强转HTTPS指示，当传递值为https:时表示强转为https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForcedRedirect() const;

                    /**
                     * 设置强转HTTPS指示，当传递值为https:时表示强转为https
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forcedRedirect 强转HTTPS指示，当传递值为https:时表示强转为https
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 规则信息
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 监听器信息
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 规则域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 源站类型
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 是否开启健康检查标志，1表示开启，0表示关闭
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 规则状态，0表示运行中，1表示创建中，2表示销毁中，3表示绑定解绑源站中，4表示配置更新中
                     */
                    uint64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 健康检查相关参数
                     */
                    RuleCheckParams m_checkParams;
                    bool m_checkParamsHasBeenSet;

                    /**
                     * 已绑定的源站相关信息
                     */
                    std::vector<BindRealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * 源站的服务状态，0表示异常，1表示正常。
未开启健康检查时，该状态始终未正常。
只要有一个源站健康状态为异常时，该状态为异常，具体源站的状态请查看RealServerSet。
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 通道转发到源站的请求所携带的host，其中default表示直接转发接收到的host。
                     */
                    std::string m_forwardHost;
                    bool m_forwardHostHasBeenSet;

                    /**
                     * 服务器名称指示（ServerNameIndication，简称SNI）开关。ON表示开启，OFF表示关闭。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverNameIndicationSwitch;
                    bool m_serverNameIndicationSwitchHasBeenSet;

                    /**
                     * 服务器名称指示（ServerNameIndication，简称SNI），当SNI开关打开时，该字段必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverNameIndication;
                    bool m_serverNameIndicationHasBeenSet;

                    /**
                     * 强转HTTPS指示，当传递值为https:时表示强转为https
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forcedRedirect;
                    bool m_forcedRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_RULEINFO_H_
