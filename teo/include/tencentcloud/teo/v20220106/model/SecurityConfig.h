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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/WafConfig.h>
#include <tencentcloud/teo/v20220106/model/RateLimitConfig.h>
#include <tencentcloud/teo/v20220106/model/DDoSConfig.h>
#include <tencentcloud/teo/v20220106/model/AclConfig.h>
#include <tencentcloud/teo/v20220106/model/BotConfig.h>
#include <tencentcloud/teo/v20220106/model/SwitchConfig.h>
#include <tencentcloud/teo/v20220106/model/IpTableConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 安全配置
                */
                class SecurityConfig : public AbstractModel
                {
                public:
                    SecurityConfig();
                    ~SecurityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取门神配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafConfig 门神配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置门神配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WafConfig 门神配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWafConfig(const WafConfig& _wafConfig);

                    /**
                     * 判断参数 WafConfig 是否已赋值
                     * @return WafConfig 是否已赋值
                     */
                    bool WafConfigHasBeenSet() const;

                    /**
                     * 获取RateLimit配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RateLimitConfig RateLimit配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置RateLimit配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RateLimitConfig RateLimit配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRateLimitConfig(const RateLimitConfig& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取DDoS配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosConfig DDoS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSConfig GetDdosConfig() const;

                    /**
                     * 设置DDoS配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosConfig DDoS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosConfig(const DDoSConfig& _ddosConfig);

                    /**
                     * 判断参数 DdosConfig 是否已赋值
                     * @return DdosConfig 是否已赋值
                     */
                    bool DdosConfigHasBeenSet() const;

                    /**
                     * 获取ACL配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclConfig ACL配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置ACL配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AclConfig ACL配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAclConfig(const AclConfig& _aclConfig);

                    /**
                     * 判断参数 AclConfig 是否已赋值
                     * @return AclConfig 是否已赋值
                     */
                    bool AclConfigHasBeenSet() const;

                    /**
                     * 获取Bot配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotConfig Bot配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置Bot配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BotConfig Bot配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBotConfig(const BotConfig& _botConfig);

                    /**
                     * 判断参数 BotConfig 是否已赋值
                     * @return BotConfig 是否已赋值
                     */
                    bool BotConfigHasBeenSet() const;

                    /**
                     * 获取总开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchConfig 总开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置总开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SwitchConfig 总开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitchConfig(const SwitchConfig& _switchConfig);

                    /**
                     * 判断参数 SwitchConfig 是否已赋值
                     * @return SwitchConfig 是否已赋值
                     */
                    bool SwitchConfigHasBeenSet() const;

                    /**
                     * 获取IP黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpTableConfig IP黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置IP黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpTableConfig IP黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpTableConfig(const IpTableConfig& _ipTableConfig);

                    /**
                     * 判断参数 IpTableConfig 是否已赋值
                     * @return IpTableConfig 是否已赋值
                     */
                    bool IpTableConfigHasBeenSet() const;

                private:

                    /**
                     * 门神配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * RateLimit配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * DDoS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSConfig m_ddosConfig;
                    bool m_ddosConfigHasBeenSet;

                    /**
                     * ACL配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * Bot配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * 总开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * IP黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_
