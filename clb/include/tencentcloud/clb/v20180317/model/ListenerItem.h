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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RulesItems.h>
#include <tencentcloud/clb/v20180317/model/LbRsTargets.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 反查监听器类型
                */
                class ListenerItem : public AbstractModel
                {
                public:
                    ListenerItem();
                    ~ListenerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取监听器协议
                     * @return Protocol 监听器协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议
                     * @param _protocol 监听器协议
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
                     * 获取监听器端口
                     * @return Port 监听器端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置监听器端口
                     * @param _port 监听器端口
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
                     * 获取绑定规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 绑定规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RulesItems> GetRules() const;

                    /**
                     * 设置绑定规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules 绑定规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<RulesItems>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取四层绑定对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Targets 四层绑定对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LbRsTargets> GetTargets() const;

                    /**
                     * 设置四层绑定对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targets 四层绑定对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargets(const std::vector<LbRsTargets>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取端口段监听器的结束端口
                     * @return EndPort 端口段监听器的结束端口
                     * 
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置端口段监听器的结束端口
                     * @param _endPort 端口段监听器的结束端口
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
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 绑定规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RulesItems> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 四层绑定对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LbRsTargets> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 端口段监听器的结束端口
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENERITEM_H_
