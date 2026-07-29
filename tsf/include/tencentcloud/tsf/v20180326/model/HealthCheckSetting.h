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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTING_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
                */
                class HealthCheckSetting : public AbstractModel
                {
                public:
                    HealthCheckSetting();
                    ~HealthCheckSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>健康检查方法。HTTP：通过 HTTP 接口检查；CMD：通过执行命令检查；TCP：通过建立 TCP 连接检查。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionType <p>健康检查方法。HTTP：通过 HTTP 接口检查；CMD：通过执行命令检查；TCP：通过建立 TCP 连接检查。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>健康检查方法。HTTP：通过 HTTP 接口检查；CMD：通过执行命令检查；TCP：通过建立 TCP 连接检查。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionType <p>健康检查方法。HTTP：通过 HTTP 接口检查；CMD：通过执行命令检查；TCP：通过建立 TCP 连接检查。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>容器延时启动健康检查的时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitialDelaySeconds <p>容器延时启动健康检查的时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置<p>容器延时启动健康检查的时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initialDelaySeconds <p>容器延时启动健康检查的时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInitialDelaySeconds(const uint64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取<p>每次健康检查响应的最大超时时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutSeconds <p>每次健康检查响应的最大超时时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeoutSeconds() const;

                    /**
                     * 设置<p>每次健康检查响应的最大超时时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutSeconds <p>每次健康检查响应的最大超时时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutSeconds(const uint64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取<p>进行健康检查的时间间隔，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodSeconds <p>进行健康检查的时间间隔，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPeriodSeconds() const;

                    /**
                     * 设置<p>进行健康检查的时间间隔，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodSeconds <p>进行健康检查的时间间隔，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodSeconds(const uint64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                    /**
                     * 获取<p>表示后端容器从失败到成功的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessThreshold <p>表示后端容器从失败到成功的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessThreshold() const;

                    /**
                     * 设置<p>表示后端容器从失败到成功的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successThreshold <p>表示后端容器从失败到成功的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessThreshold(const uint64_t& _successThreshold);

                    /**
                     * 判断参数 SuccessThreshold 是否已赋值
                     * @return SuccessThreshold 是否已赋值
                     * 
                     */
                    bool SuccessThresholdHasBeenSet() const;

                    /**
                     * 获取<p>表示后端容器从成功到失败的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureThreshold <p>表示后端容器从成功到失败的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailureThreshold() const;

                    /**
                     * 设置<p>表示后端容器从成功到失败的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureThreshold <p>表示后端容器从成功到失败的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailureThreshold(const uint64_t& _failureThreshold);

                    /**
                     * 判断参数 FailureThreshold 是否已赋值
                     * @return FailureThreshold 是否已赋值
                     * 
                     */
                    bool FailureThresholdHasBeenSet() const;

                    /**
                     * 获取<p>HTTP 健康检查方法使用的检查协议。支持HTTP、HTTPS。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheme <p>HTTP 健康检查方法使用的检查协议。支持HTTP、HTTPS。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置<p>HTTP 健康检查方法使用的检查协议。支持HTTP、HTTPS。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheme <p>HTTP 健康检查方法使用的检查协议。支持HTTP、HTTPS。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取<p>健康检查端口，范围 1~65535 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port <p>健康检查端口，范围 1~65535 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>健康检查端口，范围 1~65535 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port <p>健康检查端口，范围 1~65535 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>HTTP 健康检查接口的请求路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>HTTP 健康检查接口的请求路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>HTTP 健康检查接口的请求路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>HTTP 健康检查接口的请求路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>执行命令检查方式，执行的命令。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command <p>执行命令检查方式，执行的命令。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCommand() const;

                    /**
                     * 设置<p>执行命令检查方式，执行的命令。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _command <p>执行命令检查方式，执行的命令。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommand(const std::vector<std::string>& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取<p>TSF_DEFAULT：tsf 默认就绪探针。K8S_NATIVE：k8s 原生探针。不填默认为 k8s 原生探针。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>TSF_DEFAULT：tsf 默认就绪探针。K8S_NATIVE：k8s 原生探针。不填默认为 k8s 原生探针。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>TSF_DEFAULT：tsf 默认就绪探针。K8S_NATIVE：k8s 原生探针。不填默认为 k8s 原生探针。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>TSF_DEFAULT：tsf 默认就绪探针。K8S_NATIVE：k8s 原生探针。不填默认为 k8s 原生探针。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>健康检查方法。HTTP：通过 HTTP 接口检查；CMD：通过执行命令检查；TCP：通过建立 TCP 连接检查。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>容器延时启动健康检查的时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * <p>每次健康检查响应的最大超时时间，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * <p>进行健康检查的时间间隔，单位秒。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * <p>表示后端容器从失败到成功的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                    /**
                     * <p>表示后端容器从成功到失败的连续健康检查成功次数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                    /**
                     * <p>HTTP 健康检查方法使用的检查协议。支持HTTP、HTTPS。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * <p>健康检查端口，范围 1~65535 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>HTTP 健康检查接口的请求路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>执行命令检查方式，执行的命令。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>TSF_DEFAULT：tsf 默认就绪探针。K8S_NATIVE：k8s 原生探针。不填默认为 k8s 原生探针。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTING_H_
