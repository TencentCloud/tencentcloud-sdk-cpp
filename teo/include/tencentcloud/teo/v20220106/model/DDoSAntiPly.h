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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSANTIPLY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSANTIPLY_H_

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
                * DDoS协议防护+连接防护
                */
                class DDoSAntiPly : public AbstractModel
                {
                public:
                    DDoSAntiPly();
                    ~DDoSAntiPly() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tcp协议封禁 on-开；off-关
                     * @return DropTcp tcp协议封禁 on-开；off-关
                     */
                    std::string GetDropTcp() const;

                    /**
                     * 设置tcp协议封禁 on-开；off-关
                     * @param DropTcp tcp协议封禁 on-开；off-关
                     */
                    void SetDropTcp(const std::string& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取udp协议封禁 on-开；off-关
                     * @return DropUdp udp协议封禁 on-开；off-关
                     */
                    std::string GetDropUdp() const;

                    /**
                     * 设置udp协议封禁 on-开；off-关
                     * @param DropUdp udp协议封禁 on-开；off-关
                     */
                    void SetDropUdp(const std::string& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取icmp协议封禁 on-开；off-关
                     * @return DropIcmp icmp协议封禁 on-开；off-关
                     */
                    std::string GetDropIcmp() const;

                    /**
                     * 设置icmp协议封禁 on-开；off-关
                     * @param DropIcmp icmp协议封禁 on-开；off-关
                     */
                    void SetDropIcmp(const std::string& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取其他协议封禁 on-开；off-关
                     * @return DropOther 其他协议封禁 on-开；off-关
                     */
                    std::string GetDropOther() const;

                    /**
                     * 设置其他协议封禁 on-开；off-关
                     * @param DropOther 其他协议封禁 on-开；off-关
                     */
                    void SetDropOther(const std::string& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取源每秒新建数限制  0-4294967295
                     * @return SourceCreateLimit 源每秒新建数限制  0-4294967295
                     */
                    int64_t GetSourceCreateLimit() const;

                    /**
                     * 设置源每秒新建数限制  0-4294967295
                     * @param SourceCreateLimit 源每秒新建数限制  0-4294967295
                     */
                    void SetSourceCreateLimit(const int64_t& _sourceCreateLimit);

                    /**
                     * 判断参数 SourceCreateLimit 是否已赋值
                     * @return SourceCreateLimit 是否已赋值
                     */
                    bool SourceCreateLimitHasBeenSet() const;

                    /**
                     * 获取源并发连接控制 0-4294967295
                     * @return SourceConnectLimit 源并发连接控制 0-4294967295
                     */
                    int64_t GetSourceConnectLimit() const;

                    /**
                     * 设置源并发连接控制 0-4294967295
                     * @param SourceConnectLimit 源并发连接控制 0-4294967295
                     */
                    void SetSourceConnectLimit(const int64_t& _sourceConnectLimit);

                    /**
                     * 判断参数 SourceConnectLimit 是否已赋值
                     * @return SourceConnectLimit 是否已赋值
                     */
                    bool SourceConnectLimitHasBeenSet() const;

                    /**
                     * 获取目的每秒新建数限制 0-4294967295
                     * @return DestinationCreateLimit 目的每秒新建数限制 0-4294967295
                     */
                    int64_t GetDestinationCreateLimit() const;

                    /**
                     * 设置目的每秒新建数限制 0-4294967295
                     * @param DestinationCreateLimit 目的每秒新建数限制 0-4294967295
                     */
                    void SetDestinationCreateLimit(const int64_t& _destinationCreateLimit);

                    /**
                     * 判断参数 DestinationCreateLimit 是否已赋值
                     * @return DestinationCreateLimit 是否已赋值
                     */
                    bool DestinationCreateLimitHasBeenSet() const;

                    /**
                     * 获取目的端口的并发连接控制 0-4294967295
                     * @return DestinationConnectLimit 目的端口的并发连接控制 0-4294967295
                     */
                    int64_t GetDestinationConnectLimit() const;

                    /**
                     * 设置目的端口的并发连接控制 0-4294967295
                     * @param DestinationConnectLimit 目的端口的并发连接控制 0-4294967295
                     */
                    void SetDestinationConnectLimit(const int64_t& _destinationConnectLimit);

                    /**
                     * 判断参数 DestinationConnectLimit 是否已赋值
                     * @return DestinationConnectLimit 是否已赋值
                     */
                    bool DestinationConnectLimitHasBeenSet() const;

                    /**
                     * 获取异常连接数阈值  0-4294967295
                     * @return AbnormalConnectNum 异常连接数阈值  0-4294967295
                     */
                    int64_t GetAbnormalConnectNum() const;

                    /**
                     * 设置异常连接数阈值  0-4294967295
                     * @param AbnormalConnectNum 异常连接数阈值  0-4294967295
                     */
                    void SetAbnormalConnectNum(const int64_t& _abnormalConnectNum);

                    /**
                     * 判断参数 AbnormalConnectNum 是否已赋值
                     * @return AbnormalConnectNum 是否已赋值
                     */
                    bool AbnormalConnectNumHasBeenSet() const;

                    /**
                     * 获取syn占比异常阈值 0-100
                     * @return AbnormalSynRatio syn占比异常阈值 0-100
                     */
                    int64_t GetAbnormalSynRatio() const;

                    /**
                     * 设置syn占比异常阈值 0-100
                     * @param AbnormalSynRatio syn占比异常阈值 0-100
                     */
                    void SetAbnormalSynRatio(const int64_t& _abnormalSynRatio);

                    /**
                     * 判断参数 AbnormalSynRatio 是否已赋值
                     * @return AbnormalSynRatio 是否已赋值
                     */
                    bool AbnormalSynRatioHasBeenSet() const;

                    /**
                     * 获取syn个数异常阈值 0-65535
                     * @return AbnormalSynNum syn个数异常阈值 0-65535
                     */
                    int64_t GetAbnormalSynNum() const;

                    /**
                     * 设置syn个数异常阈值 0-65535
                     * @param AbnormalSynNum syn个数异常阈值 0-65535
                     */
                    void SetAbnormalSynNum(const int64_t& _abnormalSynNum);

                    /**
                     * 判断参数 AbnormalSynNum 是否已赋值
                     * @return AbnormalSynNum 是否已赋值
                     */
                    bool AbnormalSynNumHasBeenSet() const;

                    /**
                     * 获取连接超时检测 0-65535
                     * @return ConnectTimeout 连接超时检测 0-65535
                     */
                    int64_t GetConnectTimeout() const;

                    /**
                     * 设置连接超时检测 0-65535
                     * @param ConnectTimeout 连接超时检测 0-65535
                     */
                    void SetConnectTimeout(const int64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取空连接防护开启 0-1
                     * @return EmptyConnectProtect 空连接防护开启 0-1
                     */
                    std::string GetEmptyConnectProtect() const;

                    /**
                     * 设置空连接防护开启 0-1
                     * @param EmptyConnectProtect 空连接防护开启 0-1
                     */
                    void SetEmptyConnectProtect(const std::string& _emptyConnectProtect);

                    /**
                     * 判断参数 EmptyConnectProtect 是否已赋值
                     * @return EmptyConnectProtect 是否已赋值
                     */
                    bool EmptyConnectProtectHasBeenSet() const;

                    /**
                     * 获取UDP分片开关；off-关闭，on-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UdpShard UDP分片开关；off-关闭，on-开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUdpShard() const;

                    /**
                     * 设置UDP分片开关；off-关闭，on-开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UdpShard UDP分片开关；off-关闭，on-开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUdpShard(const std::string& _udpShard);

                    /**
                     * 判断参数 UdpShard 是否已赋值
                     * @return UdpShard 是否已赋值
                     */
                    bool UdpShardHasBeenSet() const;

                private:

                    /**
                     * tcp协议封禁 on-开；off-关
                     */
                    std::string m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * udp协议封禁 on-开；off-关
                     */
                    std::string m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * icmp协议封禁 on-开；off-关
                     */
                    std::string m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * 其他协议封禁 on-开；off-关
                     */
                    std::string m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * 源每秒新建数限制  0-4294967295
                     */
                    int64_t m_sourceCreateLimit;
                    bool m_sourceCreateLimitHasBeenSet;

                    /**
                     * 源并发连接控制 0-4294967295
                     */
                    int64_t m_sourceConnectLimit;
                    bool m_sourceConnectLimitHasBeenSet;

                    /**
                     * 目的每秒新建数限制 0-4294967295
                     */
                    int64_t m_destinationCreateLimit;
                    bool m_destinationCreateLimitHasBeenSet;

                    /**
                     * 目的端口的并发连接控制 0-4294967295
                     */
                    int64_t m_destinationConnectLimit;
                    bool m_destinationConnectLimitHasBeenSet;

                    /**
                     * 异常连接数阈值  0-4294967295
                     */
                    int64_t m_abnormalConnectNum;
                    bool m_abnormalConnectNumHasBeenSet;

                    /**
                     * syn占比异常阈值 0-100
                     */
                    int64_t m_abnormalSynRatio;
                    bool m_abnormalSynRatioHasBeenSet;

                    /**
                     * syn个数异常阈值 0-65535
                     */
                    int64_t m_abnormalSynNum;
                    bool m_abnormalSynNumHasBeenSet;

                    /**
                     * 连接超时检测 0-65535
                     */
                    int64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 空连接防护开启 0-1
                     */
                    std::string m_emptyConnectProtect;
                    bool m_emptyConnectProtectHasBeenSet;

                    /**
                     * UDP分片开关；off-关闭，on-开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_udpShard;
                    bool m_udpShardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSANTIPLY_H_
