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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSStatusInfo.h>
#include <tencentcloud/teo/v20220901/model/DDoSGeoIp.h>
#include <tencentcloud/teo/v20220901/model/DDoSAllowBlock.h>
#include <tencentcloud/teo/v20220901/model/DDoSAntiPly.h>
#include <tencentcloud/teo/v20220901/model/DDoSPacketFilter.h>
#include <tencentcloud/teo/v20220901/model/DDoSAcl.h>
#include <tencentcloud/teo/v20220901/model/DDoSSpeedLimit.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS防护配置
                */
                class DDoSRule : public AbstractModel
                {
                public:
                    DDoSRule();
                    ~DDoSRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS防护等级。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSStatusInfo DDoS防护等级。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSStatusInfo GetDDoSStatusInfo() const;

                    /**
                     * 设置DDoS防护等级。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSStatusInfo DDoS防护等级。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSStatusInfo(const DDoSStatusInfo& _dDoSStatusInfo);

                    /**
                     * 判断参数 DDoSStatusInfo 是否已赋值
                     * @return DDoSStatusInfo 是否已赋值
                     */
                    bool DDoSStatusInfoHasBeenSet() const;

                    /**
                     * 获取DDoS地域封禁。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSGeoIp DDoS地域封禁。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSGeoIp GetDDoSGeoIp() const;

                    /**
                     * 设置DDoS地域封禁。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSGeoIp DDoS地域封禁。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSGeoIp(const DDoSGeoIp& _dDoSGeoIp);

                    /**
                     * 判断参数 DDoSGeoIp 是否已赋值
                     * @return DDoSGeoIp 是否已赋值
                     */
                    bool DDoSGeoIpHasBeenSet() const;

                    /**
                     * 获取DDoS黑白名单。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSAllowBlock DDoS黑白名单。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAllowBlock GetDDoSAllowBlock() const;

                    /**
                     * 设置DDoS黑白名单。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSAllowBlock DDoS黑白名单。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSAllowBlock(const DDoSAllowBlock& _dDoSAllowBlock);

                    /**
                     * 判断参数 DDoSAllowBlock 是否已赋值
                     * @return DDoSAllowBlock 是否已赋值
                     */
                    bool DDoSAllowBlockHasBeenSet() const;

                    /**
                     * 获取DDoS 协议封禁+连接防护。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSAntiPly DDoS 协议封禁+连接防护。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAntiPly GetDDoSAntiPly() const;

                    /**
                     * 设置DDoS 协议封禁+连接防护。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSAntiPly DDoS 协议封禁+连接防护。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSAntiPly(const DDoSAntiPly& _dDoSAntiPly);

                    /**
                     * 判断参数 DDoSAntiPly 是否已赋值
                     * @return DDoSAntiPly 是否已赋值
                     */
                    bool DDoSAntiPlyHasBeenSet() const;

                    /**
                     * 获取DDoS特征过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSPacketFilter DDoS特征过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSPacketFilter GetDDoSPacketFilter() const;

                    /**
                     * 设置DDoS特征过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSPacketFilter DDoS特征过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSPacketFilter(const DDoSPacketFilter& _dDoSPacketFilter);

                    /**
                     * 判断参数 DDoSPacketFilter 是否已赋值
                     * @return DDoSPacketFilter 是否已赋值
                     */
                    bool DDoSPacketFilterHasBeenSet() const;

                    /**
                     * 获取DDoS端口过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSAcl DDoS端口过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAcl GetDDoSAcl() const;

                    /**
                     * 设置DDoS端口过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSAcl DDoS端口过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSAcl(const DDoSAcl& _dDoSAcl);

                    /**
                     * 判断参数 DDoSAcl 是否已赋值
                     * @return DDoSAcl 是否已赋值
                     */
                    bool DDoSAclHasBeenSet() const;

                    /**
                     * 获取DDoS开关，取值有:
<li>on ：开启 ；</li>
<li>off ：关闭 。</li>如果为null，默认使用历史配置。
                     * @return Switch DDoS开关，取值有:
<li>on ：开启 ；</li>
<li>off ：关闭 。</li>如果为null，默认使用历史配置。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置DDoS开关，取值有:
<li>on ：开启 ；</li>
<li>off ：关闭 。</li>如果为null，默认使用历史配置。
                     * @param Switch DDoS开关，取值有:
<li>on ：开启 ；</li>
<li>off ：关闭 。</li>如果为null，默认使用历史配置。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取UDP分片功能是否支持，取值有:
<li>on ：支持 ；</li>
<li>off ：不支持 。</li>仅出参字段，入参无需填写。
                     * @return UdpShardOpen UDP分片功能是否支持，取值有:
<li>on ：支持 ；</li>
<li>off ：不支持 。</li>仅出参字段，入参无需填写。
                     */
                    std::string GetUdpShardOpen() const;

                    /**
                     * 设置UDP分片功能是否支持，取值有:
<li>on ：支持 ；</li>
<li>off ：不支持 。</li>仅出参字段，入参无需填写。
                     * @param UdpShardOpen UDP分片功能是否支持，取值有:
<li>on ：支持 ；</li>
<li>off ：不支持 。</li>仅出参字段，入参无需填写。
                     */
                    void SetUdpShardOpen(const std::string& _udpShardOpen);

                    /**
                     * 判断参数 UdpShardOpen 是否已赋值
                     * @return UdpShardOpen 是否已赋值
                     */
                    bool UdpShardOpenHasBeenSet() const;

                    /**
                     * 获取DDoS源站访问速率限制。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSSpeedLimit DDoS源站访问速率限制。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSSpeedLimit GetDDoSSpeedLimit() const;

                    /**
                     * 设置DDoS源站访问速率限制。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DDoSSpeedLimit DDoS源站访问速率限制。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDDoSSpeedLimit(const DDoSSpeedLimit& _dDoSSpeedLimit);

                    /**
                     * 判断参数 DDoSSpeedLimit 是否已赋值
                     * @return DDoSSpeedLimit 是否已赋值
                     */
                    bool DDoSSpeedLimitHasBeenSet() const;

                private:

                    /**
                     * DDoS防护等级。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSStatusInfo m_dDoSStatusInfo;
                    bool m_dDoSStatusInfoHasBeenSet;

                    /**
                     * DDoS地域封禁。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSGeoIp m_dDoSGeoIp;
                    bool m_dDoSGeoIpHasBeenSet;

                    /**
                     * DDoS黑白名单。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAllowBlock m_dDoSAllowBlock;
                    bool m_dDoSAllowBlockHasBeenSet;

                    /**
                     * DDoS 协议封禁+连接防护。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAntiPly m_dDoSAntiPly;
                    bool m_dDoSAntiPlyHasBeenSet;

                    /**
                     * DDoS特征过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSPacketFilter m_dDoSPacketFilter;
                    bool m_dDoSPacketFilterHasBeenSet;

                    /**
                     * DDoS端口过滤。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAcl m_dDoSAcl;
                    bool m_dDoSAclHasBeenSet;

                    /**
                     * DDoS开关，取值有:
<li>on ：开启 ；</li>
<li>off ：关闭 。</li>如果为null，默认使用历史配置。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * UDP分片功能是否支持，取值有:
<li>on ：支持 ；</li>
<li>off ：不支持 。</li>仅出参字段，入参无需填写。
                     */
                    std::string m_udpShardOpen;
                    bool m_udpShardOpenHasBeenSet;

                    /**
                     * DDoS源站访问速率限制。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSSpeedLimit m_dDoSSpeedLimit;
                    bool m_dDoSSpeedLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSRULE_H_
