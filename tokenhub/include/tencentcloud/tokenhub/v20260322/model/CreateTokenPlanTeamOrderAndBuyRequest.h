/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanTeamOrderAndBuy请求参数结构体
                */
                class CreateTokenPlanTeamOrderAndBuyRequest : public AbstractModel
                {
                public:
                    CreateTokenPlanTeamOrderAndBuyRequest();
                    ~CreateTokenPlanTeamOrderAndBuyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * @return ProductType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * @param _productType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>套餐名称。只能包含中文、字母、数字、下划线、连字符，以中文或者字母开头，以中文或字母或数字结尾，2~50个字符</p>
                     * @return TeamName <p>套餐名称。只能包含中文、字母、数字、下划线、连字符，以中文或者字母开头，以中文或字母或数字结尾，2~50个字符</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>套餐名称。只能包含中文、字母、数字、下划线、连字符，以中文或者字母开头，以中文或字母或数字结尾，2~50个字符</p>
                     * @param _teamName <p>套餐名称。只能包含中文、字母、数字、下划线、连字符，以中文或者字母开头，以中文或字母或数字结尾，2~50个字符</p>
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取<p>购买时长。单位：月。必须大于 0，支持1个月～12个月。</p>
                     * @return TimeSpan <p>购买时长。单位：月。必须大于 0，支持1个月～12个月。</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买时长。单位：月。必须大于 0，支持1个月～12个月。</p>
                     * @param _timeSpan <p>购买时长。单位：月。必须大于 0，支持1个月～12个月。</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>购买的套餐规格。套餐类型为专业套餐（enterprise），单位取值为积分；轻享套餐（enterprise-auto），单位取值为 tokens。</p>
                     * @return CreditOrToken <p>购买的套餐规格。套餐类型为专业套餐（enterprise），单位取值为积分；轻享套餐（enterprise-auto），单位取值为 tokens。</p>
                     * 
                     */
                    int64_t GetCreditOrToken() const;

                    /**
                     * 设置<p>购买的套餐规格。套餐类型为专业套餐（enterprise），单位取值为积分；轻享套餐（enterprise-auto），单位取值为 tokens。</p>
                     * @param _creditOrToken <p>购买的套餐规格。套餐类型为专业套餐（enterprise），单位取值为积分；轻享套餐（enterprise-auto），单位取值为 tokens。</p>
                     * 
                     */
                    void SetCreditOrToken(const int64_t& _creditOrToken);

                    /**
                     * 判断参数 CreditOrToken 是否已赋值
                     * @return CreditOrToken 是否已赋值
                     * 
                     */
                    bool CreditOrTokenHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动续费。默认不开启。</p>
                     * @return EnableAutoRenew <p>是否开启自动续费。默认不开启。</p>
                     * 
                     */
                    bool GetEnableAutoRenew() const;

                    /**
                     * 设置<p>是否开启自动续费。默认不开启。</p>
                     * @param _enableAutoRenew <p>是否开启自动续费。默认不开启。</p>
                     * 
                     */
                    void SetEnableAutoRenew(const bool& _enableAutoRenew);

                    /**
                     * 判断参数 EnableAutoRenew 是否已赋值
                     * @return EnableAutoRenew 是否已赋值
                     * 
                     */
                    bool EnableAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>已有套餐 ID（非空时走过期续费，空时走新购）</p>
                     * @return TeamId <p>已有套餐 ID（非空时走过期续费，空时走新购）</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>已有套餐 ID（非空时走过期续费，空时走新购）</p>
                     * @param _teamId <p>已有套餐 ID（非空时走过期续费，空时走新购）</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                private:

                    /**
                     * <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>套餐名称。只能包含中文、字母、数字、下划线、连字符，以中文或者字母开头，以中文或字母或数字结尾，2~50个字符</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>购买时长。单位：月。必须大于 0，支持1个月～12个月。</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>购买的套餐规格。套餐类型为专业套餐（enterprise），单位取值为积分；轻享套餐（enterprise-auto），单位取值为 tokens。</p>
                     */
                    int64_t m_creditOrToken;
                    bool m_creditOrTokenHasBeenSet;

                    /**
                     * <p>是否开启自动续费。默认不开启。</p>
                     */
                    bool m_enableAutoRenew;
                    bool m_enableAutoRenewHasBeenSet;

                    /**
                     * <p>已有套餐 ID（非空时走过期续费，空时走新购）</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_
