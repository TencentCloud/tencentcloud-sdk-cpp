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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PACKETFILTERRULE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PACKETFILTERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/SizeRange.h>
#include <tencentcloud/antiddos/v20250903/model/PortRange.h>
#include <tencentcloud/antiddos/v20250903/model/PacketFilterCondition.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 特征过滤规则。
                */
                class PacketFilterRule : public AbstractModel
                {
                public:
                    PacketFilterRule();
                    ~PacketFilterRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配后执行的动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>drop_and_block： 丢弃并拉黑。</li><li>forward： 继续防护，即继续执行下一个防护子策略，而非特征过滤内的其他规则。</li></ul>
                     * @return Action <p>匹配后执行的动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>drop_and_block： 丢弃并拉黑。</li><li>forward： 继续防护，即继续执行下一个防护子策略，而非特征过滤内的其他规则。</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>匹配后执行的动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>drop_and_block： 丢弃并拉黑。</li><li>forward： 继续防护，即继续执行下一个防护子策略，而非特征过滤内的其他规则。</li></ul>
                     * @param _action <p>匹配后执行的动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>drop_and_block： 丢弃并拉黑。</li><li>forward： 继续防护，即继续执行下一个防护子策略，而非特征过滤内的其他规则。</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>协议类型。</p><p>枚举值：</p><ul><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li><li>all： 所有协议。</li></ul>
                     * @return Protocol <p>协议类型。</p><p>枚举值：</p><ul><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li><li>all： 所有协议。</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议类型。</p><p>枚举值：</p><ul><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li><li>all： 所有协议。</li></ul>
                     * @param _protocol <p>协议类型。</p><p>枚举值：</p><ul><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li><li>all： 所有协议。</li></ul>
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
                     * 获取<p>报文长度范围。</p>
                     * @return PacketSizeRange <p>报文长度范围。</p>
                     * 
                     */
                    SizeRange GetPacketSizeRange() const;

                    /**
                     * 设置<p>报文长度范围。</p>
                     * @param _packetSizeRange <p>报文长度范围。</p>
                     * 
                     */
                    void SetPacketSizeRange(const SizeRange& _packetSizeRange);

                    /**
                     * 判断参数 PacketSizeRange 是否已赋值
                     * @return PacketSizeRange 是否已赋值
                     * 
                     */
                    bool PacketSizeRangeHasBeenSet() const;

                    /**
                     * 获取<p>源端口范围。</p>
                     * @return SourcePortRange <p>源端口范围。</p>
                     * 
                     */
                    PortRange GetSourcePortRange() const;

                    /**
                     * 设置<p>源端口范围。</p>
                     * @param _sourcePortRange <p>源端口范围。</p>
                     * 
                     */
                    void SetSourcePortRange(const PortRange& _sourcePortRange);

                    /**
                     * 判断参数 SourcePortRange 是否已赋值
                     * @return SourcePortRange 是否已赋值
                     * 
                     */
                    bool SourcePortRangeHasBeenSet() const;

                    /**
                     * 获取<p>目的端口范围。</p>
                     * @return DestinationPortRange <p>目的端口范围。</p>
                     * 
                     */
                    PortRange GetDestinationPortRange() const;

                    /**
                     * 设置<p>目的端口范围。</p>
                     * @param _destinationPortRange <p>目的端口范围。</p>
                     * 
                     */
                    void SetDestinationPortRange(const PortRange& _destinationPortRange);

                    /**
                     * 判断参数 DestinationPortRange 是否已赋值
                     * @return DestinationPortRange 是否已赋值
                     * 
                     */
                    bool DestinationPortRangeHasBeenSet() const;

                    /**
                     * 获取<p>报文匹配条件列表。</p>
                     * @return PacketFilterConditions <p>报文匹配条件列表。</p>
                     * 
                     */
                    std::vector<PacketFilterCondition> GetPacketFilterConditions() const;

                    /**
                     * 设置<p>报文匹配条件列表。</p>
                     * @param _packetFilterConditions <p>报文匹配条件列表。</p>
                     * 
                     */
                    void SetPacketFilterConditions(const std::vector<PacketFilterCondition>& _packetFilterConditions);

                    /**
                     * 判断参数 PacketFilterConditions 是否已赋值
                     * @return PacketFilterConditions 是否已赋值
                     * 
                     */
                    bool PacketFilterConditionsHasBeenSet() const;

                private:

                    /**
                     * <p>匹配后执行的动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>drop_and_block： 丢弃并拉黑。</li><li>forward： 继续防护，即继续执行下一个防护子策略，而非特征过滤内的其他规则。</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>协议类型。</p><p>枚举值：</p><ul><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li><li>all： 所有协议。</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>报文长度范围。</p>
                     */
                    SizeRange m_packetSizeRange;
                    bool m_packetSizeRangeHasBeenSet;

                    /**
                     * <p>源端口范围。</p>
                     */
                    PortRange m_sourcePortRange;
                    bool m_sourcePortRangeHasBeenSet;

                    /**
                     * <p>目的端口范围。</p>
                     */
                    PortRange m_destinationPortRange;
                    bool m_destinationPortRangeHasBeenSet;

                    /**
                     * <p>报文匹配条件列表。</p>
                     */
                    std::vector<PacketFilterCondition> m_packetFilterConditions;
                    bool m_packetFilterConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PACKETFILTERRULE_H_
