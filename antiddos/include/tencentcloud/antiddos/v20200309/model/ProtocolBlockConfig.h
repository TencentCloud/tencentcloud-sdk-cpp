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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_

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
                * 协议封禁配置
                */
                class ProtocolBlockConfig : public AbstractModel
                {
                public:
                    ProtocolBlockConfig();
                    ~ProtocolBlockConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCP封禁，取值[0(封禁关)，1(封禁开)]
                     * @return DropTcp TCP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    int64_t GetDropTcp() const;

                    /**
                     * 设置TCP封禁，取值[0(封禁关)，1(封禁开)]
                     * @param _dropTcp TCP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    void SetDropTcp(const int64_t& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     * 
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取UDP封禁，取值[0(封禁关)，1(封禁开)]
                     * @return DropUdp UDP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    int64_t GetDropUdp() const;

                    /**
                     * 设置UDP封禁，取值[0(封禁关)，1(封禁开)]
                     * @param _dropUdp UDP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    void SetDropUdp(const int64_t& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     * 
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取ICMP封禁，取值[0(封禁关)，1(封禁开)]
                     * @return DropIcmp ICMP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    int64_t GetDropIcmp() const;

                    /**
                     * 设置ICMP封禁，取值[0(封禁关)，1(封禁开)]
                     * @param _dropIcmp ICMP封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    void SetDropIcmp(const int64_t& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     * 
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取其他协议封禁，取值[0(封禁关)，1(封禁开)]
                     * @return DropOther 其他协议封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    int64_t GetDropOther() const;

                    /**
                     * 设置其他协议封禁，取值[0(封禁关)，1(封禁开)]
                     * @param _dropOther 其他协议封禁，取值[0(封禁关)，1(封禁开)]
                     * 
                     */
                    void SetDropOther(const int64_t& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     * 
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取异常空连接防护，取值[0(防护关)，1(防护开)]
                     * @return CheckExceptNullConnect 异常空连接防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    int64_t GetCheckExceptNullConnect() const;

                    /**
                     * 设置异常空连接防护，取值[0(防护关)，1(防护开)]
                     * @param _checkExceptNullConnect 异常空连接防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    void SetCheckExceptNullConnect(const int64_t& _checkExceptNullConnect);

                    /**
                     * 判断参数 CheckExceptNullConnect 是否已赋值
                     * @return CheckExceptNullConnect 是否已赋值
                     * 
                     */
                    bool CheckExceptNullConnectHasBeenSet() const;

                    /**
                     * 获取ping of death防护，取值[0(防护关)，1(防护开)]
                     * @return PingOfDeath ping of death防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    int64_t GetPingOfDeath() const;

                    /**
                     * 设置ping of death防护，取值[0(防护关)，1(防护开)]
                     * @param _pingOfDeath ping of death防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    void SetPingOfDeath(const int64_t& _pingOfDeath);

                    /**
                     * 判断参数 PingOfDeath 是否已赋值
                     * @return PingOfDeath 是否已赋值
                     * 
                     */
                    bool PingOfDeathHasBeenSet() const;

                    /**
                     * 获取tear drop防护，取值[0(防护关)，1(防护开)]
                     * @return TearDrop tear drop防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    int64_t GetTearDrop() const;

                    /**
                     * 设置tear drop防护，取值[0(防护关)，1(防护开)]
                     * @param _tearDrop tear drop防护，取值[0(防护关)，1(防护开)]
                     * 
                     */
                    void SetTearDrop(const int64_t& _tearDrop);

                    /**
                     * 判断参数 TearDrop 是否已赋值
                     * @return TearDrop 是否已赋值
                     * 
                     */
                    bool TearDropHasBeenSet() const;

                private:

                    /**
                     * TCP封禁，取值[0(封禁关)，1(封禁开)]
                     */
                    int64_t m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * UDP封禁，取值[0(封禁关)，1(封禁开)]
                     */
                    int64_t m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * ICMP封禁，取值[0(封禁关)，1(封禁开)]
                     */
                    int64_t m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * 其他协议封禁，取值[0(封禁关)，1(封禁开)]
                     */
                    int64_t m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * 异常空连接防护，取值[0(防护关)，1(防护开)]
                     */
                    int64_t m_checkExceptNullConnect;
                    bool m_checkExceptNullConnectHasBeenSet;

                    /**
                     * ping of death防护，取值[0(防护关)，1(防护开)]
                     */
                    int64_t m_pingOfDeath;
                    bool m_pingOfDeathHasBeenSet;

                    /**
                     * tear drop防护，取值[0(防护关)，1(防护开)]
                     */
                    int64_t m_tearDrop;
                    bool m_tearDropHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_
