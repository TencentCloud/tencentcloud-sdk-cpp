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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PORTACLRULE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PORTACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/PortRange.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 端口过滤规则。
                */
                class PortACLRule : public AbstractModel
                {
                public:
                    PortACLRule();
                    ~PortACLRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>协议类型。</p><p>枚举值：</p><ul><li>all ： 所有协议。</li><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li></ul>
                     * @return Protocol <p>协议类型。</p><p>枚举值：</p><ul><li>all ： 所有协议。</li><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议类型。</p><p>枚举值：</p><ul><li>all ： 所有协议。</li><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li></ul>
                     * @param _protocol <p>协议类型。</p><p>枚举值：</p><ul><li>all ： 所有协议。</li><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li></ul>
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
                     * 获取<p>处置动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>forward： 继续防护，即继续执行下一个防护子策略模块，而非端口过滤内的其他规则。</li></ul>
                     * @return Action <p>处置动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>forward： 继续防护，即继续执行下一个防护子策略模块，而非端口过滤内的其他规则。</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>处置动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>forward： 继续防护，即继续执行下一个防护子策略模块，而非端口过滤内的其他规则。</li></ul>
                     * @param _action <p>处置动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>forward： 继续防护，即继续执行下一个防护子策略模块，而非端口过滤内的其他规则。</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

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
                     * <p>协议类型。</p><p>枚举值：</p><ul><li>all ： 所有协议。</li><li>tcp： TCP 协议。</li><li>udp： UDP 协议。</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>处置动作。</p><p>枚举值：</p><ul><li>drop： 丢弃。</li><li>allow： 放行。</li><li>forward： 继续防护，即继续执行下一个防护子策略模块，而非端口过滤内的其他规则。</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PORTACLRULE_H_
