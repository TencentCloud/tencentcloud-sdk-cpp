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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS高级策略的报文过滤项
                */
                class DDoSPolicyPacketFilter : public AbstractModel
                {
                public:
                    DDoSPolicyPacketFilter();
                    ~DDoSPolicyPacketFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，取值范围[tcp,udp,icmp,all]
                     * @return Protocol 协议，取值范围[tcp,udp,icmp,all]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值范围[tcp,udp,icmp,all]
                     * @param _protocol 协议，取值范围[tcp,udp,icmp,all]
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
                     * 获取开始源端口，取值范围[0,65535]
                     * @return SportStart 开始源端口，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetSportStart() const;

                    /**
                     * 设置开始源端口，取值范围[0,65535]
                     * @param _sportStart 开始源端口，取值范围[0,65535]
                     * 
                     */
                    void SetSportStart(const uint64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     * 
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取结束源端口，取值范围[0,65535]
                     * @return SportEnd 结束源端口，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetSportEnd() const;

                    /**
                     * 设置结束源端口，取值范围[0,65535]
                     * @param _sportEnd 结束源端口，取值范围[0,65535]
                     * 
                     */
                    void SetSportEnd(const uint64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     * 
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取开始目的端口，取值范围[0,65535]
                     * @return DportStart 开始目的端口，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetDportStart() const;

                    /**
                     * 设置开始目的端口，取值范围[0,65535]
                     * @param _dportStart 开始目的端口，取值范围[0,65535]
                     * 
                     */
                    void SetDportStart(const uint64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     * 
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取结束目的端口，取值范围[0,65535]
                     * @return DportEnd 结束目的端口，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetDportEnd() const;

                    /**
                     * 设置结束目的端口，取值范围[0,65535]
                     * @param _dportEnd 结束目的端口，取值范围[0,65535]
                     * 
                     */
                    void SetDportEnd(const uint64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     * 
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取最小包长，取值范围[0,1500]
                     * @return PktlenMin 最小包长，取值范围[0,1500]
                     * 
                     */
                    uint64_t GetPktlenMin() const;

                    /**
                     * 设置最小包长，取值范围[0,1500]
                     * @param _pktlenMin 最小包长，取值范围[0,1500]
                     * 
                     */
                    void SetPktlenMin(const uint64_t& _pktlenMin);

                    /**
                     * 判断参数 PktlenMin 是否已赋值
                     * @return PktlenMin 是否已赋值
                     * 
                     */
                    bool PktlenMinHasBeenSet() const;

                    /**
                     * 获取最大包长，取值范围[0,1500]
                     * @return PktlenMax 最大包长，取值范围[0,1500]
                     * 
                     */
                    uint64_t GetPktlenMax() const;

                    /**
                     * 设置最大包长，取值范围[0,1500]
                     * @param _pktlenMax 最大包长，取值范围[0,1500]
                     * 
                     */
                    void SetPktlenMax(const uint64_t& _pktlenMax);

                    /**
                     * 判断参数 PktlenMax 是否已赋值
                     * @return PktlenMax 是否已赋值
                     * 
                     */
                    bool PktlenMaxHasBeenSet() const;

                    /**
                     * 获取是否检测载荷，取值范围[
begin_l3(IP头)
begin_l4(TCP头)
begin_l5(载荷)
no_match(不检测)
]
                     * @return MatchBegin 是否检测载荷，取值范围[
begin_l3(IP头)
begin_l4(TCP头)
begin_l5(载荷)
no_match(不检测)
]
                     * 
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置是否检测载荷，取值范围[
begin_l3(IP头)
begin_l4(TCP头)
begin_l5(载荷)
no_match(不检测)
]
                     * @param _matchBegin 是否检测载荷，取值范围[
begin_l3(IP头)
begin_l4(TCP头)
begin_l5(载荷)
no_match(不检测)
]
                     * 
                     */
                    void SetMatchBegin(const std::string& _matchBegin);

                    /**
                     * 判断参数 MatchBegin 是否已赋值
                     * @return MatchBegin 是否已赋值
                     * 
                     */
                    bool MatchBeginHasBeenSet() const;

                    /**
                     * 获取是否是正则表达式，取值范围[sunday(表示关键字),pcre(表示正则表达式)]
                     * @return MatchType 是否是正则表达式，取值范围[sunday(表示关键字),pcre(表示正则表达式)]
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置是否是正则表达式，取值范围[sunday(表示关键字),pcre(表示正则表达式)]
                     * @param _matchType 是否是正则表达式，取值范围[sunday(表示关键字),pcre(表示正则表达式)]
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取关键字或正则表达式
                     * @return Str 关键字或正则表达式
                     * 
                     */
                    std::string GetStr() const;

                    /**
                     * 设置关键字或正则表达式
                     * @param _str 关键字或正则表达式
                     * 
                     */
                    void SetStr(const std::string& _str);

                    /**
                     * 判断参数 Str 是否已赋值
                     * @return Str 是否已赋值
                     * 
                     */
                    bool StrHasBeenSet() const;

                    /**
                     * 获取检测深度，取值范围[0,1500]
                     * @return Depth 检测深度，取值范围[0,1500]
                     * 
                     */
                    uint64_t GetDepth() const;

                    /**
                     * 设置检测深度，取值范围[0,1500]
                     * @param _depth 检测深度，取值范围[0,1500]
                     * 
                     */
                    void SetDepth(const uint64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     * 
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取检测偏移量，取值范围[0,1500]
                     * @return Offset 检测偏移量，取值范围[0,1500]
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置检测偏移量，取值范围[0,1500]
                     * @param _offset 检测偏移量，取值范围[0,1500]
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否包括，取值范围[0(表示不包含),1(表示包含)]
                     * @return IsNot 是否包括，取值范围[0(表示不包含),1(表示包含)]
                     * 
                     */
                    uint64_t GetIsNot() const;

                    /**
                     * 设置是否包括，取值范围[0(表示不包含),1(表示包含)]
                     * @param _isNot 是否包括，取值范围[0(表示不包含),1(表示包含)]
                     * 
                     */
                    void SetIsNot(const uint64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     * 
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取策略动作，取值范围[drop，drop_black，drop_rst，drop_black_rst，transmit]
                     * @return Action 策略动作，取值范围[drop，drop_black，drop_rst，drop_black_rst，transmit]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略动作，取值范围[drop，drop_black，drop_rst，drop_black_rst，transmit]
                     * @param _action 策略动作，取值范围[drop，drop_black，drop_rst，drop_black_rst，transmit]
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
                     * 协议，取值范围[tcp,udp,icmp,all]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 开始源端口，取值范围[0,65535]
                     */
                    uint64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * 结束源端口，取值范围[0,65535]
                     */
                    uint64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * 开始目的端口，取值范围[0,65535]
                     */
                    uint64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * 结束目的端口，取值范围[0,65535]
                     */
                    uint64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * 最小包长，取值范围[0,1500]
                     */
                    uint64_t m_pktlenMin;
                    bool m_pktlenMinHasBeenSet;

                    /**
                     * 最大包长，取值范围[0,1500]
                     */
                    uint64_t m_pktlenMax;
                    bool m_pktlenMaxHasBeenSet;

                    /**
                     * 是否检测载荷，取值范围[
begin_l3(IP头)
begin_l4(TCP头)
begin_l5(载荷)
no_match(不检测)
]
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * 是否是正则表达式，取值范围[sunday(表示关键字),pcre(表示正则表达式)]
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 关键字或正则表达式
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * 检测深度，取值范围[0,1500]
                     */
                    uint64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * 检测偏移量，取值范围[0,1500]
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否包括，取值范围[0(表示不包含),1(表示包含)]
                     */
                    uint64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * 策略动作，取值范围[drop，drop_black，drop_rst，drop_black_rst，transmit]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPACKETFILTER_H_
