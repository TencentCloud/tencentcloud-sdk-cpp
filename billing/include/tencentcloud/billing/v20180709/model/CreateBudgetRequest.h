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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEBUDGETREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEBUDGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetWarn.h>
#include <tencentcloud/billing/v20180709/model/BudgetConditionsForm.h>
#include <tencentcloud/billing/v20180709/model/WaveThresholdForm.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateBudget请求参数结构体
                */
                class CreateBudgetRequest : public AbstractModel
                {
                public:
                    CreateBudgetRequest();
                    ~CreateBudgetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预算名称
                     * @return BudgetName 预算名称
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置预算名称
                     * @param _budgetName 预算名称
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     * @return CycleType DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     * @param _cycleType DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取有效期起始时间 2025-01-01(周期: 天) / 2025-01（周期: 月）
                     * @return PeriodBegin 有效期起始时间 2025-01-01(周期: 天) / 2025-01（周期: 月）
                     * 
                     */
                    std::string GetPeriodBegin() const;

                    /**
                     * 设置有效期起始时间 2025-01-01(周期: 天) / 2025-01（周期: 月）
                     * @param _periodBegin 有效期起始时间 2025-01-01(周期: 天) / 2025-01（周期: 月）
                     * 
                     */
                    void SetPeriodBegin(const std::string& _periodBegin);

                    /**
                     * 判断参数 PeriodBegin 是否已赋值
                     * @return PeriodBegin 是否已赋值
                     * 
                     */
                    bool PeriodBeginHasBeenSet() const;

                    /**
                     * 获取有效期结束时间  2025-12-01(周期：天)  / 2025-12（周期：月）
                     * @return PeriodEnd 有效期结束时间  2025-12-01(周期：天)  / 2025-12（周期：月）
                     * 
                     */
                    std::string GetPeriodEnd() const;

                    /**
                     * 设置有效期结束时间  2025-12-01(周期：天)  / 2025-12（周期：月）
                     * @param _periodEnd 有效期结束时间  2025-12-01(周期：天)  / 2025-12（周期：月）
                     * 
                     */
                    void SetPeriodEnd(const std::string& _periodEnd);

                    /**
                     * 判断参数 PeriodEnd 是否已赋值
                     * @return PeriodEnd 是否已赋值
                     * 
                     */
                    bool PeriodEndHasBeenSet() const;

                    /**
                     * 获取FIX 固定预算，CYCLE 计划预算
                     * @return PlanType FIX 固定预算，CYCLE 计划预算
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置FIX 固定预算，CYCLE 计划预算
                     * @param _planType FIX 固定预算，CYCLE 计划预算
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取预算值额度
预算计划类型为FIX(固定预算)时传定值；
预算计划类型为CYCLE(计划预算)时传[{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}]；
                     * @return BudgetQuota 预算值额度
预算计划类型为FIX(固定预算)时传定值；
预算计划类型为CYCLE(计划预算)时传[{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}]；
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置预算值额度
预算计划类型为FIX(固定预算)时传定值；
预算计划类型为CYCLE(计划预算)时传[{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}]；
                     * @param _budgetQuota 预算值额度
预算计划类型为FIX(固定预算)时传定值；
预算计划类型为CYCLE(计划预算)时传[{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}]；
                     * 
                     */
                    void SetBudgetQuota(const std::string& _budgetQuota);

                    /**
                     * 判断参数 BudgetQuota 是否已赋值
                     * @return BudgetQuota 是否已赋值
                     * 
                     */
                    bool BudgetQuotaHasBeenSet() const;

                    /**
                     * 获取BILL  系统账单，CONSUMPTION  消耗账单
                     * @return BillType BILL  系统账单，CONSUMPTION  消耗账单
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置BILL  系统账单，CONSUMPTION  消耗账单
                     * @param _billType BILL  系统账单，CONSUMPTION  消耗账单
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取COST 原价，REAL_COST 实际费用，CASH 现金，INCENTIVE 赠送金，VOUCHER 代金券，TRANSFER 分成金，TAX 税，AMOUNT_BEFORE_TAX 现金支付(税前)
                     * @return FeeType COST 原价，REAL_COST 实际费用，CASH 现金，INCENTIVE 赠送金，VOUCHER 代金券，TRANSFER 分成金，TAX 税，AMOUNT_BEFORE_TAX 现金支付(税前)
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置COST 原价，REAL_COST 实际费用，CASH 现金，INCENTIVE 赠送金，VOUCHER 代金券，TRANSFER 分成金，TAX 税，AMOUNT_BEFORE_TAX 现金支付(税前)
                     * @param _feeType COST 原价，REAL_COST 实际费用，CASH 现金，INCENTIVE 赠送金，VOUCHER 代金券，TRANSFER 分成金，TAX 税，AMOUNT_BEFORE_TAX 现金支付(税前)
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取阈值提醒
                     * @return WarnJson 阈值提醒
                     * 
                     */
                    std::vector<BudgetWarn> GetWarnJson() const;

                    /**
                     * 设置阈值提醒
                     * @param _warnJson 阈值提醒
                     * 
                     */
                    void SetWarnJson(const std::vector<BudgetWarn>& _warnJson);

                    /**
                     * 判断参数 WarnJson 是否已赋值
                     * @return WarnJson 是否已赋值
                     * 
                     */
                    bool WarnJsonHasBeenSet() const;

                    /**
                     * 获取预算备注
                     * @return BudgetNote 预算备注
                     * 
                     */
                    std::string GetBudgetNote() const;

                    /**
                     * 设置预算备注
                     * @param _budgetNote 预算备注
                     * 
                     */
                    void SetBudgetNote(const std::string& _budgetNote);

                    /**
                     * 判断参数 BudgetNote 是否已赋值
                     * @return BudgetNote 是否已赋值
                     * 
                     */
                    bool BudgetNoteHasBeenSet() const;

                    /**
                     * 获取预算维度范围条件
                     * @return DimensionsRange 预算维度范围条件
                     * 
                     */
                    BudgetConditionsForm GetDimensionsRange() const;

                    /**
                     * 设置预算维度范围条件
                     * @param _dimensionsRange 预算维度范围条件
                     * 
                     */
                    void SetDimensionsRange(const BudgetConditionsForm& _dimensionsRange);

                    /**
                     * 判断参数 DimensionsRange 是否已赋值
                     * @return DimensionsRange 是否已赋值
                     * 
                     */
                    bool DimensionsRangeHasBeenSet() const;

                    /**
                     * 获取波动提醒
                     * @return WaveThresholdJson 波动提醒
                     * 
                     */
                    std::vector<WaveThresholdForm> GetWaveThresholdJson() const;

                    /**
                     * 设置波动提醒
                     * @param _waveThresholdJson 波动提醒
                     * 
                     */
                    void SetWaveThresholdJson(const std::vector<WaveThresholdForm>& _waveThresholdJson);

                    /**
                     * 判断参数 WaveThresholdJson 是否已赋值
                     * @return WaveThresholdJson 是否已赋值
                     * 
                     */
                    bool WaveThresholdJsonHasBeenSet() const;

                private:

                    /**
                     * 预算名称
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 有效期起始时间 2025-01-01(周期: 天) / 2025-01（周期: 月）
                     */
                    std::string m_periodBegin;
                    bool m_periodBeginHasBeenSet;

                    /**
                     * 有效期结束时间  2025-12-01(周期：天)  / 2025-12（周期：月）
                     */
                    std::string m_periodEnd;
                    bool m_periodEndHasBeenSet;

                    /**
                     * FIX 固定预算，CYCLE 计划预算
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 预算值额度
预算计划类型为FIX(固定预算)时传定值；
预算计划类型为CYCLE(计划预算)时传[{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}]；
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * BILL  系统账单，CONSUMPTION  消耗账单
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * COST 原价，REAL_COST 实际费用，CASH 现金，INCENTIVE 赠送金，VOUCHER 代金券，TRANSFER 分成金，TAX 税，AMOUNT_BEFORE_TAX 现金支付(税前)
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * 阈值提醒
                     */
                    std::vector<BudgetWarn> m_warnJson;
                    bool m_warnJsonHasBeenSet;

                    /**
                     * 预算备注
                     */
                    std::string m_budgetNote;
                    bool m_budgetNoteHasBeenSet;

                    /**
                     * 预算维度范围条件
                     */
                    BudgetConditionsForm m_dimensionsRange;
                    bool m_dimensionsRangeHasBeenSet;

                    /**
                     * 波动提醒
                     */
                    std::vector<WaveThresholdForm> m_waveThresholdJson;
                    bool m_waveThresholdJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEBUDGETREQUEST_H_
