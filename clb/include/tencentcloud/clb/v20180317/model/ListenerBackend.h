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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERBACKEND_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RuleTargets.h>
#include <tencentcloud/clb/v20180317/model/Backend.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 监听器上绑定的后端服务的信息
                */
                class ListenerBackend : public AbstractModel
                {
                public:
                    ListenerBackend();
                    ~ListenerBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器 ID
                     * @return ListenerId 监听器 ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID
                     * @param _listenerId 监听器 ID
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
                     * 获取监听器的协议
                     * @return Protocol 监听器的协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器的协议
                     * @param _protocol 监听器的协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取监听器的端口
                     * @return Port 监听器的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置监听器的端口
                     * @param _port 监听器的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器下的规则信息（仅适用于HTTP/HTTPS监听器）
                     * @return Rules 监听器下的规则信息（仅适用于HTTP/HTTPS监听器）
                     * 
                     */
                    std::vector<RuleTargets> GetRules() const;

                    /**
                     * 设置监听器下的规则信息（仅适用于HTTP/HTTPS监听器）
                     * @param _rules 监听器下的规则信息（仅适用于HTTP/HTTPS监听器）
                     * 
                     */
                    void SetRules(const std::vector<RuleTargets>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取监听器上绑定的后端服务列表（仅适用于TCP/UDP/TCP_SSL监听器）
                     * @return Targets 监听器上绑定的后端服务列表（仅适用于TCP/UDP/TCP_SSL监听器）
                     * 
                     */
                    std::vector<Backend> GetTargets() const;

                    /**
                     * 设置监听器上绑定的后端服务列表（仅适用于TCP/UDP/TCP_SSL监听器）
                     * @param _targets 监听器上绑定的后端服务列表（仅适用于TCP/UDP/TCP_SSL监听器）
                     * 
                     */
                    void SetTargets(const std::vector<Backend>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取若支持端口段，则为端口段结束端口；若不支持端口段，则为0
                     * @return EndPort 若支持端口段，则为端口段结束端口；若不支持端口段，则为0
                     * 
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置若支持端口段，则为端口段结束端口；若不支持端口段，则为0
                     * @param _endPort 若支持端口段，则为端口段结束端口；若不支持端口段，则为0
                     * 
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                private:

                    /**
                     * 监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器的协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 监听器下的规则信息（仅适用于HTTP/HTTPS监听器）
                     */
                    std::vector<RuleTargets> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 监听器上绑定的后端服务列表（仅适用于TCP/UDP/TCP_SSL监听器）
                     */
                    std::vector<Backend> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 若支持端口段，则为端口段结束端口；若不支持端口段，则为0
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERBACKEND_H_
