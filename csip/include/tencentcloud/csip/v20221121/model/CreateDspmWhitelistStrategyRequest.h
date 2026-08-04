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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmWhitelistStrategy请求参数结构体
                */
                class CreateDspmWhitelistStrategyRequest : public AbstractModel
                {
                public:
                    CreateDspmWhitelistStrategyRequest();
                    ~CreateDspmWhitelistStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略类型</p>
                     * @return StrategyType <p>策略类型</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _strategyType <p>策略类型</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>白名单</p>
                     * @return Name <p>白名单</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>白名单</p>
                     * @param _name <p>白名单</p>
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
                     * 获取<p>规则</p>
                     * @return Rule <p>规则</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>规则</p>
                     * @param _rule <p>规则</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>资产id</p>
                     * @return AssetId <p>资产id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产id</p>
                     * @param _assetId <p>资产id</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return Account <p>账号</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _account <p>账号</p>
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>主机</p>
                     * @return Host <p>主机</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机</p>
                     * @param _host <p>主机</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>风险id</p>
                     * @return RiskId <p>风险id</p>
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置<p>风险id</p>
                     * @param _riskId <p>风险id</p>
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>白名单的类型</p><p>枚举值：</p><ul><li>static_risk： 静态配置扫描的白名单规则</li><li>audit： 审计白名单规则</li><li>ueba： ueba相关的白名单规则</li></ul>
                     * @return WhitelistType <p>白名单的类型</p><p>枚举值：</p><ul><li>static_risk： 静态配置扫描的白名单规则</li><li>audit： 审计白名单规则</li><li>ueba： ueba相关的白名单规则</li></ul>
                     * 
                     */
                    std::string GetWhitelistType() const;

                    /**
                     * 设置<p>白名单的类型</p><p>枚举值：</p><ul><li>static_risk： 静态配置扫描的白名单规则</li><li>audit： 审计白名单规则</li><li>ueba： ueba相关的白名单规则</li></ul>
                     * @param _whitelistType <p>白名单的类型</p><p>枚举值：</p><ul><li>static_risk： 静态配置扫描的白名单规则</li><li>audit： 审计白名单规则</li><li>ueba： ueba相关的白名单规则</li></ul>
                     * 
                     */
                    void SetWhitelistType(const std::string& _whitelistType);

                    /**
                     * 判断参数 WhitelistType 是否已赋值
                     * @return WhitelistType 是否已赋值
                     * 
                     */
                    bool WhitelistTypeHasBeenSet() const;

                private:

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>白名单</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规则</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>主机</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>风险id</p>
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>白名单的类型</p><p>枚举值：</p><ul><li>static_risk： 静态配置扫描的白名单规则</li><li>audit： 审计白名单规则</li><li>ueba： ueba相关的白名单规则</li></ul>
                     */
                    std::string m_whitelistType;
                    bool m_whitelistTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_
