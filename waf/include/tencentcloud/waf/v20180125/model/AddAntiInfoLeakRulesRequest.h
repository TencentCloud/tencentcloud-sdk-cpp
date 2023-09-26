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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/StrategyForAntiInfoLeak.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddAntiInfoLeakRules请求参数结构体
                */
                class AddAntiInfoLeakRulesRequest : public AbstractModel
                {
                public:
                    AddAntiInfoLeakRulesRequest();
                    ~AddAntiInfoLeakRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取动作，0（告警）、1（替换）、2（仅显示前四位）、3（仅显示后四位）、4（阻断）
                     * @return ActionType 动作，0（告警）、1（替换）、2（仅显示前四位）、3（仅显示后四位）、4（阻断）
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置动作，0（告警）、1（替换）、2（仅显示前四位）、3（仅显示后四位）、4（阻断）
                     * @param _actionType 动作，0（告警）、1（替换）、2（仅显示前四位）、3（仅显示后四位）、4（阻断）
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取策略详情
                     * @return Strategies 策略详情
                     * 
                     */
                    std::vector<StrategyForAntiInfoLeak> GetStrategies() const;

                    /**
                     * 设置策略详情
                     * @param _strategies 策略详情
                     * 
                     */
                    void SetStrategies(const std::vector<StrategyForAntiInfoLeak>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取网址
                     * @return Uri 网址
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置网址
                     * @param _uri 网址
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 动作，0（告警）、1（替换）、2（仅显示前四位）、3（仅显示后四位）、4（阻断）
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 策略详情
                     */
                    std::vector<StrategyForAntiInfoLeak> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * 网址
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_
