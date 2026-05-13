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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskStrategy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm 风险分组策略
                */
                class DspmRiskStrategyGroup : public AbstractModel
                {
                public:
                    DspmRiskStrategyGroup();
                    ~DspmRiskStrategyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略类型
                     * @return StrategyType 策略类型
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型
                     * @param _strategyType 策略类型
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
                     * 获取策略名
                     * @return Name 策略名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名
                     * @param _name 策略名
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
                     * 获取策略类型
                     * @return StrategyCategory 策略类型
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置策略类型
                     * @param _strategyCategory 策略类型
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取是否启用。0-禁用 1-启用
                     * @return IsEnabled 是否启用。0-禁用 1-启用
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置是否启用。0-禁用 1-启用
                     * @param _isEnabled 是否启用。0-禁用 1-启用
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取命中次数
                     * @return HitCount 命中次数
                     * 
                     */
                    int64_t GetHitCount() const;

                    /**
                     * 设置命中次数
                     * @param _hitCount 命中次数
                     * 
                     */
                    void SetHitCount(const int64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取风险类型。risk-风险；alarm-告警。
                     * @return RiskType 风险类型。risk-风险；alarm-告警。
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型。risk-风险；alarm-告警。
                     * @param _riskType 风险类型。risk-风险；alarm-告警。
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取策略列表
                     * @return StrategyList 策略列表
                     * 
                     */
                    std::vector<DspmRiskStrategy> GetStrategyList() const;

                    /**
                     * 设置策略列表
                     * @param _strategyList 策略列表
                     * 
                     */
                    void SetStrategyList(const std::vector<DspmRiskStrategy>& _strategyList);

                    /**
                     * 判断参数 StrategyList 是否已赋值
                     * @return StrategyList 是否已赋值
                     * 
                     */
                    bool StrategyListHasBeenSet() const;

                private:

                    /**
                     * 策略类型
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * 是否启用。0-禁用 1-启用
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 命中次数
                     */
                    int64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * 风险类型。risk-风险；alarm-告警。
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 策略列表
                     */
                    std::vector<DspmRiskStrategy> m_strategyList;
                    bool m_strategyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
