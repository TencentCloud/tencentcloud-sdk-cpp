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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNIPSTRATEGY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNIPSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * scdn的IP白名单策略
                */
                class ScdnIpStrategy : public AbstractModel
                {
                public:
                    ScdnIpStrategy();
                    ~ScdnIpStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名|global表示全部域名
                     * @return Domain 域名|global表示全部域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名|global表示全部域名
                     * @param _domain 域名|global表示全部域名
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
                     * 获取策略ID
                     * @return StrategyId 策略ID
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略ID
                     * @param _strategyId 策略ID
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取IP白名单列表
                     * @return IpList IP白名单列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP白名单列表
                     * @param _ipList IP白名单列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleValue 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleValue 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                private:

                    /**
                     * 域名|global表示全部域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * IP白名单列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNIPSTRATEGY_H_
