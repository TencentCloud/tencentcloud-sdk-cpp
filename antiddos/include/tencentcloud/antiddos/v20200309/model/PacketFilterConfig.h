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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_

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
                * 特征过滤配置
                */
                class PacketFilterConfig : public AbstractModel
                {
                public:
                    PacketFilterConfig();
                    ~PacketFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，取值[tcp udp icmp all]
                     * @return Protocol 协议，取值[tcp udp icmp all]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值[tcp udp icmp all]
                     * @param _protocol 协议，取值[tcp udp icmp all]
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
                     * 获取起始源端口，取值0~65535
                     * @return SportStart 起始源端口，取值0~65535
                     * 
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置起始源端口，取值0~65535
                     * @param _sportStart 起始源端口，取值0~65535
                     * 
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     * 
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取结束源端口，取值1~65535，必须大于等于起始源端口
                     * @return SportEnd 结束源端口，取值1~65535，必须大于等于起始源端口
                     * 
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置结束源端口，取值1~65535，必须大于等于起始源端口
                     * @param _sportEnd 结束源端口，取值1~65535，必须大于等于起始源端口
                     * 
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     * 
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取起始目的端口，取值0~65535
                     * @return DportStart 起始目的端口，取值0~65535
                     * 
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置起始目的端口，取值0~65535
                     * @param _dportStart 起始目的端口，取值0~65535
                     * 
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     * 
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取结束目的端口，取值1~65535，必须大于等于起始目的端口
                     * @return DportEnd 结束目的端口，取值1~65535，必须大于等于起始目的端口
                     * 
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置结束目的端口，取值1~65535，必须大于等于起始目的端口
                     * @param _dportEnd 结束目的端口，取值1~65535，必须大于等于起始目的端口
                     * 
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     * 
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取最小报文长度，取值1-1500
                     * @return PktlenMin 最小报文长度，取值1-1500
                     * 
                     */
                    int64_t GetPktlenMin() const;

                    /**
                     * 设置最小报文长度，取值1-1500
                     * @param _pktlenMin 最小报文长度，取值1-1500
                     * 
                     */
                    void SetPktlenMin(const int64_t& _pktlenMin);

                    /**
                     * 判断参数 PktlenMin 是否已赋值
                     * @return PktlenMin 是否已赋值
                     * 
                     */
                    bool PktlenMinHasBeenSet() const;

                    /**
                     * 获取最大报文长度，取值1-1500，必须大于等于最小报文长度
                     * @return PktlenMax 最大报文长度，取值1-1500，必须大于等于最小报文长度
                     * 
                     */
                    int64_t GetPktlenMax() const;

                    /**
                     * 设置最大报文长度，取值1-1500，必须大于等于最小报文长度
                     * @param _pktlenMax 最大报文长度，取值1-1500，必须大于等于最小报文长度
                     * 
                     */
                    void SetPktlenMax(const int64_t& _pktlenMax);

                    /**
                     * 判断参数 PktlenMax 是否已赋值
                     * @return PktlenMax 是否已赋值
                     * 
                     */
                    bool PktlenMaxHasBeenSet() const;

                    /**
                     * 获取动作，取值[
drop(丢弃)
transmit(放行)
drop_black(丢弃并拉黑)
drop_rst(拦截)（已废弃，不支持drop_rst）
drop_black_rst(拦截并拉黑)（已废弃，不支持drop_black_rst）
forward(继续防护)
]
                     * @return Action 动作，取值[
drop(丢弃)
transmit(放行)
drop_black(丢弃并拉黑)
drop_rst(拦截)（已废弃，不支持drop_rst）
drop_black_rst(拦截并拉黑)（已废弃，不支持drop_black_rst）
forward(继续防护)
]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作，取值[
drop(丢弃)
transmit(放行)
drop_black(丢弃并拉黑)
drop_rst(拦截)（已废弃，不支持drop_rst）
drop_black_rst(拦截并拉黑)（已废弃，不支持drop_black_rst）
forward(继续防护)
]
                     * @param _action 动作，取值[
drop(丢弃)
transmit(放行)
drop_black(丢弃并拉黑)
drop_rst(拦截)（已废弃，不支持drop_rst）
drop_black_rst(拦截并拉黑)（已废弃，不支持drop_black_rst）
forward(继续防护)
]
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
                     * 获取检测位置，取值[
begin_l3(IP头)
begin_l4(TCP/UDP头)
begin_l5(T载荷)
no_match(不匹配)
]
                     * @return MatchBegin 检测位置，取值[
begin_l3(IP头)
begin_l4(TCP/UDP头)
begin_l5(T载荷)
no_match(不匹配)
]
                     * 
                     */
                    std::string GetMatchBegin() const;

                    /**
                     * 设置检测位置，取值[
begin_l3(IP头)
begin_l4(TCP/UDP头)
begin_l5(T载荷)
no_match(不匹配)
]
                     * @param _matchBegin 检测位置，取值[
begin_l3(IP头)
begin_l4(TCP/UDP头)
begin_l5(T载荷)
no_match(不匹配)
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
                     * 获取检测类型，取值[
sunday(关键字)
pcre(正则表达式) （已废弃，仅支持sunday）
]
                     * @return MatchType 检测类型，取值[
sunday(关键字)
pcre(正则表达式) （已废弃，仅支持sunday）
]
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置检测类型，取值[
sunday(关键字)
pcre(正则表达式) （已废弃，仅支持sunday）
]
                     * @param _matchType 检测类型，取值[
sunday(关键字)
pcre(正则表达式) （已废弃，仅支持sunday）
]
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
                     * 获取检测值，关键字符串或正则表达式,取值[ 当检测类型为sunday时，请填写字符串或者16进制字节码，例如\x313233对应的是字符串"123"的16进制字节码; 最多支持63位; ]
                     * @return Str 检测值，关键字符串或正则表达式,取值[ 当检测类型为sunday时，请填写字符串或者16进制字节码，例如\x313233对应的是字符串"123"的16进制字节码; 最多支持63位; ]
                     * 
                     */
                    std::string GetStr() const;

                    /**
                     * 设置检测值，关键字符串或正则表达式,取值[ 当检测类型为sunday时，请填写字符串或者16进制字节码，例如\x313233对应的是字符串"123"的16进制字节码; 最多支持63位; ]
                     * @param _str 检测值，关键字符串或正则表达式,取值[ 当检测类型为sunday时，请填写字符串或者16进制字节码，例如\x313233对应的是字符串"123"的16进制字节码; 最多支持63位; ]
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
                     * 获取从检测位置开始的检测深度，取值[0,1500]
                     * @return Depth 从检测位置开始的检测深度，取值[0,1500]
                     * 
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置从检测位置开始的检测深度，取值[0,1500]
                     * @param _depth 从检测位置开始的检测深度，取值[0,1500]
                     * 
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     * 
                     */
                    bool DepthHasBeenSet() const;

                    /**
                     * 获取从检测位置开始的偏移量，取值范围[0,Depth]
                     * @return Offset 从检测位置开始的偏移量，取值范围[0,Depth]
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置从检测位置开始的偏移量，取值范围[0,Depth]
                     * @param _offset 从检测位置开始的偏移量，取值范围[0,Depth]
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否包含检测值，取值[
0(包含)
1(不包含) （已废弃，仅支持0）
]
                     * @return IsNot 是否包含检测值，取值[
0(包含)
1(不包含) （已废弃，仅支持0）
]
                     * 
                     */
                    int64_t GetIsNot() const;

                    /**
                     * 设置是否包含检测值，取值[
0(包含)
1(不包含) （已废弃，仅支持0）
]
                     * @param _isNot 是否包含检测值，取值[
0(包含)
1(不包含) （已废弃，仅支持0）
]
                     * 
                     */
                    void SetIsNot(const int64_t& _isNot);

                    /**
                     * 判断参数 IsNot 是否已赋值
                     * @return IsNot 是否已赋值
                     * 
                     */
                    bool IsNotHasBeenSet() const;

                    /**
                     * 获取
当有第二个检测条件时，与第一检测条件的且或关系，取值[
and(且的关系) （已废弃，仅支持none）
none(当没有第二个检测条件时填写此值)
]
                     * @return MatchLogic 
当有第二个检测条件时，与第一检测条件的且或关系，取值[
and(且的关系) （已废弃，仅支持none）
none(当没有第二个检测条件时填写此值)
]
                     * 
                     */
                    std::string GetMatchLogic() const;

                    /**
                     * 设置
当有第二个检测条件时，与第一检测条件的且或关系，取值[
and(且的关系) （已废弃，仅支持none）
none(当没有第二个检测条件时填写此值)
]
                     * @param _matchLogic 
当有第二个检测条件时，与第一检测条件的且或关系，取值[
and(且的关系) （已废弃，仅支持none）
none(当没有第二个检测条件时填写此值)
]
                     * 
                     */
                    void SetMatchLogic(const std::string& _matchLogic);

                    /**
                     * 判断参数 MatchLogic 是否已赋值
                     * @return MatchLogic 是否已赋值
                     * 
                     */
                    bool MatchLogicHasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return MatchBegin2 （已废弃）
                     * 
                     */
                    std::string GetMatchBegin2() const;

                    /**
                     * 设置（已废弃）
                     * @param _matchBegin2 （已废弃）
                     * 
                     */
                    void SetMatchBegin2(const std::string& _matchBegin2);

                    /**
                     * 判断参数 MatchBegin2 是否已赋值
                     * @return MatchBegin2 是否已赋值
                     * 
                     */
                    bool MatchBegin2HasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return MatchType2 （已废弃）
                     * 
                     */
                    std::string GetMatchType2() const;

                    /**
                     * 设置（已废弃）
                     * @param _matchType2 （已废弃）
                     * 
                     */
                    void SetMatchType2(const std::string& _matchType2);

                    /**
                     * 判断参数 MatchType2 是否已赋值
                     * @return MatchType2 是否已赋值
                     * 
                     */
                    bool MatchType2HasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return Str2 （已废弃）
                     * 
                     */
                    std::string GetStr2() const;

                    /**
                     * 设置（已废弃）
                     * @param _str2 （已废弃）
                     * 
                     */
                    void SetStr2(const std::string& _str2);

                    /**
                     * 判断参数 Str2 是否已赋值
                     * @return Str2 是否已赋值
                     * 
                     */
                    bool Str2HasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return Depth2 （已废弃）
                     * 
                     */
                    int64_t GetDepth2() const;

                    /**
                     * 设置（已废弃）
                     * @param _depth2 （已废弃）
                     * 
                     */
                    void SetDepth2(const int64_t& _depth2);

                    /**
                     * 判断参数 Depth2 是否已赋值
                     * @return Depth2 是否已赋值
                     * 
                     */
                    bool Depth2HasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return Offset2 （已废弃）
                     * 
                     */
                    int64_t GetOffset2() const;

                    /**
                     * 设置（已废弃）
                     * @param _offset2 （已废弃）
                     * 
                     */
                    void SetOffset2(const int64_t& _offset2);

                    /**
                     * 判断参数 Offset2 是否已赋值
                     * @return Offset2 是否已赋值
                     * 
                     */
                    bool Offset2HasBeenSet() const;

                    /**
                     * 获取（已废弃）
                     * @return IsNot2 （已废弃）
                     * 
                     */
                    int64_t GetIsNot2() const;

                    /**
                     * 设置（已废弃）
                     * @param _isNot2 （已废弃）
                     * 
                     */
                    void SetIsNot2(const int64_t& _isNot2);

                    /**
                     * 判断参数 IsNot2 是否已赋值
                     * @return IsNot2 是否已赋值
                     * 
                     */
                    bool IsNot2HasBeenSet() const;

                    /**
                     * 获取特征过滤配置添加成功后自动生成的规则ID，当添加新特征过滤配置时，此字段不用填写；当修改/删除新特征过滤配置时，此字段必填；
                     * @return Id 特征过滤配置添加成功后自动生成的规则ID，当添加新特征过滤配置时，此字段不用填写；当修改/删除新特征过滤配置时，此字段必填；
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置特征过滤配置添加成功后自动生成的规则ID，当添加新特征过滤配置时，此字段不用填写；当修改/删除新特征过滤配置时，此字段必填；
                     * @param _id 特征过滤配置添加成功后自动生成的规则ID，当添加新特征过滤配置时，此字段不用填写；当修改/删除新特征过滤配置时，此字段必填；
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取大于报文长度，取值1+
                     * @return PktLenGT 大于报文长度，取值1+
                     * 
                     */
                    int64_t GetPktLenGT() const;

                    /**
                     * 设置大于报文长度，取值1+
                     * @param _pktLenGT 大于报文长度，取值1+
                     * 
                     */
                    void SetPktLenGT(const int64_t& _pktLenGT);

                    /**
                     * 判断参数 PktLenGT 是否已赋值
                     * @return PktLenGT 是否已赋值
                     * 
                     */
                    bool PktLenGTHasBeenSet() const;

                private:

                    /**
                     * 协议，取值[tcp udp icmp all]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 起始源端口，取值0~65535
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * 结束源端口，取值1~65535，必须大于等于起始源端口
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * 起始目的端口，取值0~65535
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * 结束目的端口，取值1~65535，必须大于等于起始目的端口
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * 最小报文长度，取值1-1500
                     */
                    int64_t m_pktlenMin;
                    bool m_pktlenMinHasBeenSet;

                    /**
                     * 最大报文长度，取值1-1500，必须大于等于最小报文长度
                     */
                    int64_t m_pktlenMax;
                    bool m_pktlenMaxHasBeenSet;

                    /**
                     * 动作，取值[
drop(丢弃)
transmit(放行)
drop_black(丢弃并拉黑)
drop_rst(拦截)（已废弃，不支持drop_rst）
drop_black_rst(拦截并拉黑)（已废弃，不支持drop_black_rst）
forward(继续防护)
]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 检测位置，取值[
begin_l3(IP头)
begin_l4(TCP/UDP头)
begin_l5(T载荷)
no_match(不匹配)
]
                     */
                    std::string m_matchBegin;
                    bool m_matchBeginHasBeenSet;

                    /**
                     * 检测类型，取值[
sunday(关键字)
pcre(正则表达式) （已废弃，仅支持sunday）
]
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 检测值，关键字符串或正则表达式,取值[ 当检测类型为sunday时，请填写字符串或者16进制字节码，例如\x313233对应的是字符串"123"的16进制字节码; 最多支持63位; ]
                     */
                    std::string m_str;
                    bool m_strHasBeenSet;

                    /**
                     * 从检测位置开始的检测深度，取值[0,1500]
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                    /**
                     * 从检测位置开始的偏移量，取值范围[0,Depth]
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否包含检测值，取值[
0(包含)
1(不包含) （已废弃，仅支持0）
]
                     */
                    int64_t m_isNot;
                    bool m_isNotHasBeenSet;

                    /**
                     * 
当有第二个检测条件时，与第一检测条件的且或关系，取值[
and(且的关系) （已废弃，仅支持none）
none(当没有第二个检测条件时填写此值)
]
                     */
                    std::string m_matchLogic;
                    bool m_matchLogicHasBeenSet;

                    /**
                     * （已废弃）
                     */
                    std::string m_matchBegin2;
                    bool m_matchBegin2HasBeenSet;

                    /**
                     * （已废弃）
                     */
                    std::string m_matchType2;
                    bool m_matchType2HasBeenSet;

                    /**
                     * （已废弃）
                     */
                    std::string m_str2;
                    bool m_str2HasBeenSet;

                    /**
                     * （已废弃）
                     */
                    int64_t m_depth2;
                    bool m_depth2HasBeenSet;

                    /**
                     * （已废弃）
                     */
                    int64_t m_offset2;
                    bool m_offset2HasBeenSet;

                    /**
                     * （已废弃）
                     */
                    int64_t m_isNot2;
                    bool m_isNot2HasBeenSet;

                    /**
                     * 特征过滤配置添加成功后自动生成的规则ID，当添加新特征过滤配置时，此字段不用填写；当修改/删除新特征过滤配置时，此字段必填；
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 大于报文长度，取值1+
                     */
                    int64_t m_pktLenGT;
                    bool m_pktLenGTHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKETFILTERCONFIG_H_
