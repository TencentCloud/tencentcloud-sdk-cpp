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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ACLCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ACLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 基于端口的acl策略
                */
                class AclConfig : public AbstractModel
                {
                public:
                    AclConfig();
                    ~AclConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议类型, 可取值tcp, udp, all
                     * @return ForwardProtocol 协议类型, 可取值tcp, udp, all
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置协议类型, 可取值tcp, udp, all
                     * @param _forwardProtocol 协议类型, 可取值tcp, udp, all
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
                     * 获取目的端口起始，可取值范围0~65535
                     * @return DPortStart 目的端口起始，可取值范围0~65535
                     * 
                     */
                    uint64_t GetDPortStart() const;

                    /**
                     * 设置目的端口起始，可取值范围0~65535
                     * @param _dPortStart 目的端口起始，可取值范围0~65535
                     * 
                     */
                    void SetDPortStart(const uint64_t& _dPortStart);

                    /**
                     * 判断参数 DPortStart 是否已赋值
                     * @return DPortStart 是否已赋值
                     * 
                     */
                    bool DPortStartHasBeenSet() const;

                    /**
                     * 获取目的端口结束，可取值范围0~65535
                     * @return DPortEnd 目的端口结束，可取值范围0~65535
                     * 
                     */
                    uint64_t GetDPortEnd() const;

                    /**
                     * 设置目的端口结束，可取值范围0~65535
                     * @param _dPortEnd 目的端口结束，可取值范围0~65535
                     * 
                     */
                    void SetDPortEnd(const uint64_t& _dPortEnd);

                    /**
                     * 判断参数 DPortEnd 是否已赋值
                     * @return DPortEnd 是否已赋值
                     * 
                     */
                    bool DPortEndHasBeenSet() const;

                    /**
                     * 获取来源端口起始，可取值范围0~65535
                     * @return SPortStart 来源端口起始，可取值范围0~65535
                     * 
                     */
                    uint64_t GetSPortStart() const;

                    /**
                     * 设置来源端口起始，可取值范围0~65535
                     * @param _sPortStart 来源端口起始，可取值范围0~65535
                     * 
                     */
                    void SetSPortStart(const uint64_t& _sPortStart);

                    /**
                     * 判断参数 SPortStart 是否已赋值
                     * @return SPortStart 是否已赋值
                     * 
                     */
                    bool SPortStartHasBeenSet() const;

                    /**
                     * 获取来源端口结束，可取值范围0~65535
                     * @return SPortEnd 来源端口结束，可取值范围0~65535
                     * 
                     */
                    uint64_t GetSPortEnd() const;

                    /**
                     * 设置来源端口结束，可取值范围0~65535
                     * @param _sPortEnd 来源端口结束，可取值范围0~65535
                     * 
                     */
                    void SetSPortEnd(const uint64_t& _sPortEnd);

                    /**
                     * 判断参数 SPortEnd 是否已赋值
                     * @return SPortEnd 是否已赋值
                     * 
                     */
                    bool SPortEndHasBeenSet() const;

                    /**
                     * 获取动作，可取值：drop， transmit， forward
                     * @return Action 动作，可取值：drop， transmit， forward
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作，可取值：drop， transmit， forward
                     * @param _action 动作，可取值：drop， transmit， forward
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
                     * 获取策略优先级，数字越小，级别越高，该规则越靠前匹配，取值1-1000
                     * @return Priority 策略优先级，数字越小，级别越高，该规则越靠前匹配，取值1-1000
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置策略优先级，数字越小，级别越高，该规则越靠前匹配，取值1-1000
                     * @param _priority 策略优先级，数字越小，级别越高，该规则越靠前匹配，取值1-1000
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 协议类型, 可取值tcp, udp, all
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * 目的端口起始，可取值范围0~65535
                     */
                    uint64_t m_dPortStart;
                    bool m_dPortStartHasBeenSet;

                    /**
                     * 目的端口结束，可取值范围0~65535
                     */
                    uint64_t m_dPortEnd;
                    bool m_dPortEndHasBeenSet;

                    /**
                     * 来源端口起始，可取值范围0~65535
                     */
                    uint64_t m_sPortStart;
                    bool m_sPortStartHasBeenSet;

                    /**
                     * 来源端口结束，可取值范围0~65535
                     */
                    uint64_t m_sPortEnd;
                    bool m_sPortEndHasBeenSet;

                    /**
                     * 动作，可取值：drop， transmit， forward
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 策略优先级，数字越小，级别越高，该规则越靠前匹配，取值1-1000
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ACLCONFIG_H_
