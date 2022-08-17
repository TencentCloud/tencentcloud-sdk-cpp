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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS特征过滤
                */
                class DDoSFeaturesFilter : public AbstractModel
                {
                public:
                    DDoSFeaturesFilter();
                    ~DDoSFeaturesFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行动作，取值有：
<li>drop ：丢弃 ；</li>
<li>transmit ：放行 ；</li>
<li>drop_block ：丢弃并拉黑 ；</li>
<li>forward ：继续防护 。</li>
                     * @return Action 执行动作，取值有：
<li>drop ：丢弃 ；</li>
<li>transmit ：放行 ；</li>
<li>drop_block ：丢弃并拉黑 ；</li>
<li>forward ：继续防护 。</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，取值有：
<li>drop ：丢弃 ；</li>
<li>transmit ：放行 ；</li>
<li>drop_block ：丢弃并拉黑 ；</li>
<li>forward ：继续防护 。</li>
                     * @param Action 执行动作，取值有：
<li>drop ：丢弃 ；</li>
<li>transmit ：放行 ；</li>
<li>drop_block ：丢弃并拉黑 ；</li>
<li>forward ：继续防护 。</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取协议，取值有：
<li>tcp ：tcp协议 ；</li>
<li>udp ：udp协议 ；</li>
<li>icmp ：icmp协议 ；</li>
<li>all ：全部协议 。</li>
                     * @return Protocol 协议，取值有：
<li>tcp ：tcp协议 ；</li>
<li>udp ：udp协议 ；</li>
<li>icmp ：icmp协议 ；</li>
<li>all ：全部协议 。</li>
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值有：
<li>tcp ：tcp协议 ；</li>
<li>udp ：udp协议 ；</li>
<li>icmp ：icmp协议 ；</li>
<li>all ：全部协议 。</li>
                     * @param Protocol 协议，取值有：
<li>tcp ：tcp协议 ；</li>
<li>udp ：udp协议 ；</li>
<li>icmp ：icmp协议 ；</li>
<li>all ：全部协议 。</li>
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取目标端口开始，取值范围0-65535。
                     * @return DportStart 目标端口开始，取值范围0-65535。
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置目标端口开始，取值范围0-65535。
                     * @param DportStart 目标端口开始，取值范围0-65535。
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取目标端口结束，取值范围0-65535。
                     * @return DportEnd 目标端口结束，取值范围0-65535。
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置目标端口结束，取值范围0-65535。
                     * @param DportEnd 目标端口结束，取值范围0-65535。
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取最小包长，取值范围0-1500。
                     * @return PacketMin 最小包长，取值范围0-1500。
                     */
                    int64_t GetPacketMin() const;

                    /**
                     * 设置最小包长，取值范围0-1500。
                     * @param PacketMin 最小包长，取值范围0-1500。
                     */
                    void SetPacketMin(const int64_t& _packetMin);

                    /**
                     * 判断参数 PacketMin 是否已赋值
                     * @return PacketMin 是否已赋值
                     */
                    bool PacketMinHasBeenSet() const;

                    /**
                     * 获取最大包长，取值范围0-1500。
                     * @return PacketMax 最大包长，取值范围0-1500。
                     */
                    int64_t GetPacketMax() const;

                    /**
                     * 设置最大包长，取值范围0-1500。
                     * @param PacketMax 最大包长，取值范围0-1500。
                     */
                    void SetPacketMax(const int64_t& _packetMax);

                    /**
                     * 判断参数 PacketMax 是否已赋值
                     * @return PacketMax 是否已赋值
                     */
                    bool PacketMaxHasBeenSet() const;

                    /**
                     * 获取源端口开始，取值范围0-65535。
                     * @return SportStart 源端口开始，取值范围0-65535。
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置源端口开始，取值范围0-65535。
                     * @param SportStart 源端口开始，取值范围0-65535。
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取源端口结束，取值范围0-65535。
                     * @return SportEnd 源端口结束，取值范围0-65535。
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置源端口结束，取值范围0-65535。
                     * @param SportEnd 源端口结束，取值范围0-65535。
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取匹配方式1，【特征1】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     * @return MatchType 匹配方式1，【特征1】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置匹配方式1，【特征1】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     * @param MatchType 匹配方式1，【特征1】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取取非判断，该参数对MatchType配合使用，【特征1】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     * @return IsNot 取非判断，该参数对MatchType配合使用，【特征1】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    int64_t GetIsNot() const;

                    /**
                     * 设置取非判断，该参数对MatchType配合使用，【特征1】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     * @param IsNot 取非判断，该参数对MatchType配合使用，【特征1】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    void SetIsNot(const int64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取偏移量1，【特征1】，取值范围0-1500。
                     * @return Offset 偏移量1，【特征1】，取值范围0-1500。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量1，【特征1】，取值范围0-1500。
                     * @param Offset 偏移量1，【特征1】，取值范围0-1500。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取检测包字符深度，【特征1】，取值范围1-1500。
                     * @return Depth 检测包字符深度，【特征1】，取值范围1-1500。
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置检测包字符深度，【特征1】，取值范围1-1500。
                     * @param Depth 检测包字符深度，【特征1】，取值范围1-1500。
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测 ；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     * @return MatchBegin 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测 ；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测 ；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     * @param MatchBegin 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测 ；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    void SetMatchBegin(const std::string& _matchBegin);

                    /**
                     * 判断参数 MatchBegin 是否已赋值
                     * @return MatchBegin 是否已赋值
                     */
                    bool MatchBeginHasBeenSet() const;

                    /**
                     * 获取正则或字符串匹配的内容，【特征1】。
                     * @return Str 正则或字符串匹配的内容，【特征1】。
                     */
                    std::string GetStr() const;

                    /**
                     * 设置正则或字符串匹配的内容，【特征1】。
                     * @param Str 正则或字符串匹配的内容，【特征1】。
                     */
                    void SetStr(const std::string& _str);

                    /**
                     * 判断参数 Str 是否已赋值
                     * @return Str 是否已赋值
                     */
                    bool StrHasBeenSet() const;

                    /**
                     * 获取匹配方式2，【特征2】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     * @return MatchType2 匹配方式2，【特征2】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    std::string GetMatchType2() const;

                    /**
                     * 设置匹配方式2，【特征2】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     * @param MatchType2 匹配方式2，【特征2】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    void SetMatchType2(const std::string& _matchType2);

                    /**
                     * 判断参数 MatchType2 是否已赋值
                     * @return MatchType2 是否已赋值
                     */
                    bool MatchType2HasBeenSet() const;

                    /**
                     * 获取取非判断2，该参数对MatchType2配合使用，【特征2】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     * @return IsNot2 取非判断2，该参数对MatchType2配合使用，【特征2】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    int64_t GetIsNot2() const;

                    /**
                     * 设置取非判断2，该参数对MatchType2配合使用，【特征2】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     * @param IsNot2 取非判断2，该参数对MatchType2配合使用，【特征2】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    void SetIsNot2(const int64_t& _isNot2);

                    /**
                     * 判断参数 IsNot2 是否已赋值
                     * @return IsNot2 是否已赋值
                     */
                    bool IsNot2HasBeenSet() const;

                    /**
                     * 获取偏移量2，【特征2】，取值范围0-1500。
                     * @return Offset2 偏移量2，【特征2】，取值范围0-1500。
                     */
                    int64_t GetOffset2() const;

                    /**
                     * 设置偏移量2，【特征2】，取值范围0-1500。
                     * @param Offset2 偏移量2，【特征2】，取值范围0-1500。
                     */
                    void SetOffset2(const int64_t& _offset2);

                    /**
                     * 判断参数 Offset2 是否已赋值
                     * @return Offset2 是否已赋值
                     */
                    bool Offset2HasBeenSet() const;

                    /**
                     * 获取检测包字符深度，【特征2】，取值范围1-1500。
                     * @return Depth2 检测包字符深度，【特征2】，取值范围1-1500。
                     */
                    int64_t GetDepth2() const;

                    /**
                     * 设置检测包字符深度，【特征2】，取值范围1-1500。
                     * @param Depth2 检测包字符深度，【特征2】，取值范围1-1500。
                     */
                    void SetDepth2(const int64_t& _depth2);

                    /**
                     * 判断参数 Depth2 是否已赋值
                     * @return Depth2 是否已赋值
                     */
                    bool Depth2HasBeenSet() const;

                    /**
                     * 获取匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     * @return MatchBegin2 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    std::string GetMatchBegin2() const;

                    /**
                     * 设置匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     * @param MatchBegin2 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    void SetMatchBegin2(const std::string& _matchBegin2);

                    /**
                     * 判断参数 MatchBegin2 是否已赋值
                     * @return MatchBegin2 是否已赋值
                     */
                    bool MatchBegin2HasBeenSet() const;

                    /**
                     * 获取正则或字符串匹配的内容，【特征2】。
                     * @return Str2 正则或字符串匹配的内容，【特征2】。
                     */
                    std::string GetStr2() const;

                    /**
                     * 设置正则或字符串匹配的内容，【特征2】。
                     * @param Str2 正则或字符串匹配的内容，【特征2】。
                     */
                    void SetStr2(const std::string& _str2);

                    /**
                     * 判断参数 Str2 是否已赋值
                     * @return Str2 是否已赋值
                     */
                    bool Str2HasBeenSet() const;

                    /**
                     * 获取多特征关系，仅配置【特征1】时填 none，存在【特征2】配置可不填。
                     * @return MatchLogic 多特征关系，仅配置【特征1】时填 none，存在【特征2】配置可不填。
                     */
                    std::string GetMatchLogic() const;

                    /**
                     * 设置多特征关系，仅配置【特征1】时填 none，存在【特征2】配置可不填。
                     * @param MatchLogic 多特征关系，仅配置【特征1】时填 none，存在【特征2】配置可不填。
                     */
                    void SetMatchLogic(const std::string& _matchLogic);

                    /**
                     * 判断参数 MatchLogic 是否已赋值
                     * @return MatchLogic 是否已赋值
                     */
                    bool MatchLogicHasBeenSet() const;

                private:

                    /**
                     * 执行动作，取值有：
<li>drop ：丢弃 ；</li>
<li>transmit ：放行 ；</li>
<li>drop_block ：丢弃并拉黑 ；</li>
<li>forward ：继续防护 。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 协议，取值有：
<li>tcp ：tcp协议 ；</li>
<li>udp ：udp协议 ；</li>
<li>icmp ：icmp协议 ；</li>
<li>all ：全部协议 。</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 目标端口开始，取值范围0-65535。
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * 目标端口结束，取值范围0-65535。
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * 最小包长，取值范围0-1500。
                     */
                    int64_t m_packetMin;
                    bool m_packetMinHasBeenSet;

                    /**
                     * 最大包长，取值范围0-1500。
                     */
                    int64_t m_packetMax;
                    bool m_packetMaxHasBeenSet;

                    /**
                     * 源端口开始，取值范围0-65535。
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * 源端口结束，取值范围0-65535。
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * 匹配方式1，【特征1】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 取非判断，该参数对MatchType配合使用，【特征1】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    int64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * 偏移量1，【特征1】，取值范围0-1500。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 检测包字符深度，【特征1】，取值范围1-1500。
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测 ；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * 正则或字符串匹配的内容，【特征1】。
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * 匹配方式2，【特征2】，取值有：
<li>pcre ：正则匹配 ；</li>
<li>sunday ：字符串匹配 。</li>默认为空字符串。
                     */
                    std::string m_matchType2;
                    bool m_matchType2HasBeenSet;

                    /**
                     * 取非判断2，该参数对MatchType2配合使用，【特征2】，取值有：
<li>0 ：匹配 ；</li>
<li>1 ：不匹配 。</li>
                     */
                    int64_t m_isNot2;
                    bool m_isNot2HasBeenSet;

                    /**
                     * 偏移量2，【特征2】，取值范围0-1500。
                     */
                    int64_t m_offset2;
                    bool m_offset2HasBeenSet;

                    /**
                     * 检测包字符深度，【特征2】，取值范围1-1500。
                     */
                    int64_t m_depth2;
                    bool m_depth2HasBeenSet;

                    /**
                     * 匹配开始层级，层级参考计算机网络结构，取值有：
<li>begin_l5 ：载荷开始检测 ；</li>
<li>begin_l4 ：tcp/udp首部开始检测；</li>
<li>begin_l3 ：ip首部开始检测 。</li>
                     */
                    std::string m_matchBegin2;
                    bool m_matchBegin2HasBeenSet;

                    /**
                     * 正则或字符串匹配的内容，【特征2】。
                     */
                    std::string m_str2;
                    bool m_str2HasBeenSet;

                    /**
                     * 多特征关系，仅配置【特征1】时填 none，存在【特征2】配置可不填。
                     */
                    std::string m_matchLogic;
                    bool m_matchLogicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSFEATURESFILTER_H_
