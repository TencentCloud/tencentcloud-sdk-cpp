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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackOverview返回参数结构体
                */
                class DescribeAttackOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAttackOverviewResponse();
                    ~DescribeAttackOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问请求总数
                     * @return AccessCount 访问请求总数
                     * 
                     */
                    uint64_t GetAccessCount() const;

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

                    /**
                     * 获取Web攻击总数
                     * @return AttackCount Web攻击总数
                     * 
                     */
                    uint64_t GetAttackCount() const;

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取访问控制总数
                     * @return ACLCount 访问控制总数
                     * 
                     */
                    uint64_t GetACLCount() const;

                    /**
                     * 判断参数 ACLCount 是否已赋值
                     * @return ACLCount 是否已赋值
                     * 
                     */
                    bool ACLCountHasBeenSet() const;

                    /**
                     * 获取CC攻击总数
                     * @return CCCount CC攻击总数
                     * 
                     */
                    uint64_t GetCCCount() const;

                    /**
                     * 判断参数 CCCount 是否已赋值
                     * @return CCCount 是否已赋值
                     * 
                     */
                    bool CCCountHasBeenSet() const;

                    /**
                     * 获取Bot攻击总数
                     * @return BotCount Bot攻击总数
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     * 
                     */
                    bool BotCountHasBeenSet() const;

                    /**
                     * 获取api资产总数
                     * @return ApiAssetsCount api资产总数
                     * 
                     */
                    uint64_t GetApiAssetsCount() const;

                    /**
                     * 判断参数 ApiAssetsCount 是否已赋值
                     * @return ApiAssetsCount 是否已赋值
                     * 
                     */
                    bool ApiAssetsCountHasBeenSet() const;

                    /**
                     * 获取api风险事件数量
                     * @return ApiRiskEventCount api风险事件数量
                     * 
                     */
                    uint64_t GetApiRiskEventCount() const;

                    /**
                     * 判断参数 ApiRiskEventCount 是否已赋值
                     * @return ApiRiskEventCount 是否已赋值
                     * 
                     */
                    bool ApiRiskEventCountHasBeenSet() const;

                    /**
                     * 获取黑名单总数
                     * @return IPBlackCount 黑名单总数
                     * 
                     */
                    uint64_t GetIPBlackCount() const;

                    /**
                     * 判断参数 IPBlackCount 是否已赋值
                     * @return IPBlackCount 是否已赋值
                     * 
                     */
                    bool IPBlackCountHasBeenSet() const;

                    /**
                     * 获取防篡改总数
                     * @return TamperCount 防篡改总数
                     * 
                     */
                    uint64_t GetTamperCount() const;

                    /**
                     * 判断参数 TamperCount 是否已赋值
                     * @return TamperCount 是否已赋值
                     * 
                     */
                    bool TamperCountHasBeenSet() const;

                    /**
                     * 获取信息泄露总数
                     * @return LeakCount 信息泄露总数
                     * 
                     */
                    uint64_t GetLeakCount() const;

                    /**
                     * 判断参数 LeakCount 是否已赋值
                     * @return LeakCount 是否已赋值
                     * 
                     */
                    bool LeakCountHasBeenSet() const;

                    /**
                     * 获取API风险事件周环比
                     * @return ApiRiskEventCircleCount API风险事件周环比
                     * 
                     */
                    int64_t GetApiRiskEventCircleCount() const;

                    /**
                     * 判断参数 ApiRiskEventCircleCount 是否已赋值
                     * @return ApiRiskEventCircleCount 是否已赋值
                     * 
                     */
                    bool ApiRiskEventCircleCountHasBeenSet() const;

                private:

                    /**
                     * 访问请求总数
                     */
                    uint64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * Web攻击总数
                     */
                    uint64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * 访问控制总数
                     */
                    uint64_t m_aCLCount;
                    bool m_aCLCountHasBeenSet;

                    /**
                     * CC攻击总数
                     */
                    uint64_t m_cCCount;
                    bool m_cCCountHasBeenSet;

                    /**
                     * Bot攻击总数
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * api资产总数
                     */
                    uint64_t m_apiAssetsCount;
                    bool m_apiAssetsCountHasBeenSet;

                    /**
                     * api风险事件数量
                     */
                    uint64_t m_apiRiskEventCount;
                    bool m_apiRiskEventCountHasBeenSet;

                    /**
                     * 黑名单总数
                     */
                    uint64_t m_iPBlackCount;
                    bool m_iPBlackCountHasBeenSet;

                    /**
                     * 防篡改总数
                     */
                    uint64_t m_tamperCount;
                    bool m_tamperCountHasBeenSet;

                    /**
                     * 信息泄露总数
                     */
                    uint64_t m_leakCount;
                    bool m_leakCountHasBeenSet;

                    /**
                     * API风险事件周环比
                     */
                    int64_t m_apiRiskEventCircleCount;
                    bool m_apiRiskEventCircleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
