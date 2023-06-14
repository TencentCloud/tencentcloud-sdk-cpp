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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnWafConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnDdosConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnBotConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnConfig返回参数结构体
                */
                class DescribeScdnConfigResponse : public AbstractModel
                {
                public:
                    DescribeScdnConfigResponse();
                    ~DescribeScdnConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义防护策略配置
                     * @return Acl 自定义防护策略配置
                     * 
                     */
                    ScdnAclConfig GetAcl() const;

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取Web 攻击防护（WAF）配置
                     * @return Waf Web 攻击防护（WAF）配置
                     * 
                     */
                    ScdnWafConfig GetWaf() const;

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取CC 防护配置
                     * @return CC CC 防护配置
                     * 
                     */
                    ScdnConfig GetCC() const;

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDOS 防护配置
                     * @return Ddos DDOS 防护配置
                     * 
                     */
                    ScdnDdosConfig GetDdos() const;

                    /**
                     * 判断参数 Ddos 是否已赋值
                     * @return Ddos 是否已赋值
                     * 
                     */
                    bool DdosHasBeenSet() const;

                    /**
                     * 获取BOT 防护配置
                     * @return Bot BOT 防护配置
                     * 
                     */
                    ScdnBotConfig GetBot() const;

                    /**
                     * 判断参数 Bot 是否已赋值
                     * @return Bot 是否已赋值
                     * 
                     */
                    bool BotHasBeenSet() const;

                    /**
                     * 获取当前状态，取值online | offline
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前状态，取值online | offline
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 自定义防护策略配置
                     */
                    ScdnAclConfig m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * Web 攻击防护（WAF）配置
                     */
                    ScdnWafConfig m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * CC 防护配置
                     */
                    ScdnConfig m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDOS 防护配置
                     */
                    ScdnDdosConfig m_ddos;
                    bool m_ddosHasBeenSet;

                    /**
                     * BOT 防护配置
                     */
                    ScdnBotConfig m_bot;
                    bool m_botHasBeenSet;

                    /**
                     * 当前状态，取值online | offline
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNCONFIGRESPONSE_H_
