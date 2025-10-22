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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetWarn.h>
#include <tencentcloud/billing/v20180709/model/WaveThresholdForm.h>
#include <tencentcloud/billing/v20180709/model/BudgetSendInfoDto.h>
#include <tencentcloud/billing/v20180709/model/BudgetConditionsForm.h>
#include <tencentcloud/billing/v20180709/model/BudgetPlan.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 查询返回预算完整信息
                */
                class BudgetExtend : public AbstractModel
                {
                public:
                    BudgetExtend();
                    ~BudgetExtend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取预算额度
                     * @return BudgetQuota 预算额度
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置预算额度
                     * @param _budgetQuota 预算额度
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
                     * 获取有效期起始时间 2025-01-01
                     * @return PeriodBegin 有效期起始时间 2025-01-01
                     * 
                     */
                    std::string GetPeriodBegin() const;

                    /**
                     * 设置有效期起始时间 2025-01-01
                     * @param _periodBegin 有效期起始时间 2025-01-01
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
                     * 获取有效期结束时间  2025-12-01
                     * @return PeriodEnd 有效期结束时间  2025-12-01
                     * 
                     */
                    std::string GetPeriodEnd() const;

                    /**
                     * 设置有效期结束时间  2025-12-01
                     * @param _periodEnd 有效期结束时间  2025-12-01
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
                     * 获取COST，USAGE，RI，SP
                     * @return Dimensions COST，USAGE，RI，SP
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置COST，USAGE，RI，SP
                     * @param _dimensions COST，USAGE，RI，SP
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取FIX 固定值，CYCLE 不同值
                     * @return PlanType FIX 固定值，CYCLE 不同值
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置FIX 固定值，CYCLE 不同值
                     * @param _planType FIX 固定值，CYCLE 不同值
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
                     * 获取用户Uin
                     * @return PayerUin 用户Uin
                     * 
                     */
                    uint64_t GetPayerUin() const;

                    /**
                     * 设置用户Uin
                     * @param _payerUin 用户Uin
                     * 
                     */
                    void SetPayerUin(const uint64_t& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

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
                     * 获取自定义发送对象信息
                     * @return SendDetail 自定义发送对象信息
                     * 
                     */
                    std::string GetSendDetail() const;

                    /**
                     * 设置自定义发送对象信息
                     * @param _sendDetail 自定义发送对象信息
                     * 
                     */
                    void SetSendDetail(const std::string& _sendDetail);

                    /**
                     * 判断参数 SendDetail 是否已赋值
                     * @return SendDetail 是否已赋值
                     * 
                     */
                    bool SendDetailHasBeenSet() const;

                    /**
                     * 获取0:默认uin发送
                     * @return DefaultMode 0:默认uin发送
                     * 
                     */
                    int64_t GetDefaultMode() const;

                    /**
                     * 设置0:默认uin发送
                     * @param _defaultMode 0:默认uin发送
                     * 
                     */
                    void SetDefaultMode(const int64_t& _defaultMode);

                    /**
                     * 判断参数 DefaultMode 是否已赋值
                     * @return DefaultMode 是否已赋值
                     * 
                     */
                    bool DefaultModeHasBeenSet() const;

                    /**
                     * 获取CUS 自定义预算，ZERO_COST 零支出预算模板，BY_MONTH 按月费用预算模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateType CUS 自定义预算，ZERO_COST 零支出预算模板，BY_MONTH 按月费用预算模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置CUS 自定义预算，ZERO_COST 零支出预算模板，BY_MONTH 按月费用预算模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateType CUS 自定义预算，ZERO_COST 零支出预算模板，BY_MONTH 按月费用预算模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取(1, "未超支"),
(2, "超支")
                     * @return MoneyStatus (1, "未超支"),
(2, "超支")
                     * 
                     */
                    int64_t GetMoneyStatus() const;

                    /**
                     * 设置(1, "未超支"),
(2, "超支")
                     * @param _moneyStatus (1, "未超支"),
(2, "超支")
                     * 
                     */
                    void SetMoneyStatus(const int64_t& _moneyStatus);

                    /**
                     * 判断参数 MoneyStatus 是否已赋值
                     * @return MoneyStatus 是否已赋值
                     * 
                     */
                    bool MoneyStatusHasBeenSet() const;

                    /**
                     * 获取提醒次数
                     * @return RemindTimes 提醒次数
                     * 
                     */
                    int64_t GetRemindTimes() const;

                    /**
                     * 设置提醒次数
                     * @param _remindTimes 提醒次数
                     * 
                     */
                    void SetRemindTimes(const int64_t& _remindTimes);

                    /**
                     * 判断参数 RemindTimes 是否已赋值
                     * @return RemindTimes 是否已赋值
                     * 
                     */
                    bool RemindTimesHasBeenSet() const;

                    /**
                     * 获取创建预算时间
                     * @return CreateTime 创建预算时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建预算时间
                     * @param _createTime 创建预算时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新预算时间
                     * @return UpdateTime 更新预算时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新预算时间
                     * @param _updateTime 更新预算时间
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
                     * 获取预算关联Id
                     * @return BudgetId 预算关联Id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置预算关联Id
                     * @param _budgetId 预算关联Id
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取NO_FORECAST(没有设置预测),
 FORECAST_NO_DATA(设置了预测,但是没有数据),
FORECAST_HAS_DATA(设置了预测,且有预测数据)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasForecast NO_FORECAST(没有设置预测),
 FORECAST_NO_DATA(设置了预测,但是没有数据),
FORECAST_HAS_DATA(设置了预测,且有预测数据)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHasForecast() const;

                    /**
                     * 设置NO_FORECAST(没有设置预测),
 FORECAST_NO_DATA(设置了预测,但是没有数据),
FORECAST_HAS_DATA(设置了预测,且有预测数据)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasForecast NO_FORECAST(没有设置预测),
 FORECAST_NO_DATA(设置了预测,但是没有数据),
FORECAST_HAS_DATA(设置了预测,且有预测数据)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasForecast(const std::string& _hasForecast);

                    /**
                     * 判断参数 HasForecast 是否已赋值
                     * @return HasForecast 是否已赋值
                     * 
                     */
                    bool HasForecastHasBeenSet() const;

                    /**
                     * 获取预测费用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForecastCost 预测费用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForecastCost() const;

                    /**
                     * 设置预测费用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forecastCost 预测费用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForecastCost(const std::string& _forecastCost);

                    /**
                     * 判断参数 ForecastCost 是否已赋值
                     * @return ForecastCost 是否已赋值
                     * 
                     */
                    bool ForecastCostHasBeenSet() const;

                    /**
                     * 获取预测进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForecastProgress 预测进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForecastProgress() const;

                    /**
                     * 设置预测进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forecastProgress 预测进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForecastProgress(const std::string& _forecastProgress);

                    /**
                     * 判断参数 ForecastProgress 是否已赋值
                     * @return ForecastProgress 是否已赋值
                     * 
                     */
                    bool ForecastProgressHasBeenSet() const;

                    /**
                     * 获取实际费用
                     * @return RealCost 实际费用
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置实际费用
                     * @param _realCost 实际费用
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取自定义发送
                     * @return BudgetSendInfoForm 自定义发送
                     * 
                     */
                    std::vector<BudgetSendInfoDto> GetBudgetSendInfoForm() const;

                    /**
                     * 设置自定义发送
                     * @param _budgetSendInfoForm 自定义发送
                     * 
                     */
                    void SetBudgetSendInfoForm(const std::vector<BudgetSendInfoDto>& _budgetSendInfoForm);

                    /**
                     * 判断参数 BudgetSendInfoForm 是否已赋值
                     * @return BudgetSendInfoForm 是否已赋值
                     * 
                     */
                    bool BudgetSendInfoFormHasBeenSet() const;

                    /**
                     * 获取当前周期
                     * @return CurDateDesc 当前周期
                     * 
                     */
                    std::string GetCurDateDesc() const;

                    /**
                     * 设置当前周期
                     * @param _curDateDesc 当前周期
                     * 
                     */
                    void SetCurDateDesc(const std::string& _curDateDesc);

                    /**
                     * 判断参数 CurDateDesc 是否已赋值
                     * @return CurDateDesc 是否已赋值
                     * 
                     */
                    bool CurDateDescHasBeenSet() const;

                    /**
                     * 获取 EXPIRED  已过期
ACTIVE 生效中
UNACTIVATED 已失效
ACTIVATED 待生效
                     * @return BudgetStatus  EXPIRED  已过期
ACTIVE 生效中
UNACTIVATED 已失效
ACTIVATED 待生效
                     * 
                     */
                    std::string GetBudgetStatus() const;

                    /**
                     * 设置 EXPIRED  已过期
ACTIVE 生效中
UNACTIVATED 已失效
ACTIVATED 待生效
                     * @param _budgetStatus  EXPIRED  已过期
ACTIVE 生效中
UNACTIVATED 已失效
ACTIVATED 待生效
                     * 
                     */
                    void SetBudgetStatus(const std::string& _budgetStatus);

                    /**
                     * 判断参数 BudgetStatus 是否已赋值
                     * @return BudgetStatus 是否已赋值
                     * 
                     */
                    bool BudgetStatusHasBeenSet() const;

                    /**
                     * 获取预算维度范围条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimensionsRange 预算维度范围条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BudgetConditionsForm GetDimensionsRange() const;

                    /**
                     * 设置预算维度范围条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensionsRange 预算维度范围条件
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取预算进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetProgress 预算进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetProgress() const;

                    /**
                     * 设置预算进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetProgress 预算进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetProgress(const std::string& _budgetProgress);

                    /**
                     * 判断参数 BudgetProgress 是否已赋值
                     * @return BudgetProgress 是否已赋值
                     * 
                     */
                    bool BudgetProgressHasBeenSet() const;

                    /**
                     * 获取预算类型设置为计划预算时返回预算额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetQuotaJson 预算类型设置为计划预算时返回预算额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BudgetPlan> GetBudgetQuotaJson() const;

                    /**
                     * 设置预算类型设置为计划预算时返回预算额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetQuotaJson 预算类型设置为计划预算时返回预算额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetQuotaJson(const std::vector<BudgetPlan>& _budgetQuotaJson);

                    /**
                     * 判断参数 BudgetQuotaJson 是否已赋值
                     * @return BudgetQuotaJson 是否已赋值
                     * 
                     */
                    bool BudgetQuotaJsonHasBeenSet() const;

                private:

                    /**
                     * 预算名称
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * 预算额度
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * DAY 天，MONTH 月度，QUARTER 季度 ，YEAR 年度
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

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
                     * 有效期起始时间 2025-01-01
                     */
                    std::string m_periodBegin;
                    bool m_periodBeginHasBeenSet;

                    /**
                     * 有效期结束时间  2025-12-01
                     */
                    std::string m_periodEnd;
                    bool m_periodEndHasBeenSet;

                    /**
                     * COST，USAGE，RI，SP
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * FIX 固定值，CYCLE 不同值
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 阈值提醒
                     */
                    std::vector<BudgetWarn> m_warnJson;
                    bool m_warnJsonHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    uint64_t m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 波动提醒
                     */
                    std::vector<WaveThresholdForm> m_waveThresholdJson;
                    bool m_waveThresholdJsonHasBeenSet;

                    /**
                     * 预算备注
                     */
                    std::string m_budgetNote;
                    bool m_budgetNoteHasBeenSet;

                    /**
                     * 自定义发送对象信息
                     */
                    std::string m_sendDetail;
                    bool m_sendDetailHasBeenSet;

                    /**
                     * 0:默认uin发送
                     */
                    int64_t m_defaultMode;
                    bool m_defaultModeHasBeenSet;

                    /**
                     * CUS 自定义预算，ZERO_COST 零支出预算模板，BY_MONTH 按月费用预算模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * (1, "未超支"),
(2, "超支")
                     */
                    int64_t m_moneyStatus;
                    bool m_moneyStatusHasBeenSet;

                    /**
                     * 提醒次数
                     */
                    int64_t m_remindTimes;
                    bool m_remindTimesHasBeenSet;

                    /**
                     * 创建预算时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新预算时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 预算关联Id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * NO_FORECAST(没有设置预测),
 FORECAST_NO_DATA(设置了预测,但是没有数据),
FORECAST_HAS_DATA(设置了预测,且有预测数据)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hasForecast;
                    bool m_hasForecastHasBeenSet;

                    /**
                     * 预测费用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forecastCost;
                    bool m_forecastCostHasBeenSet;

                    /**
                     * 预测进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forecastProgress;
                    bool m_forecastProgressHasBeenSet;

                    /**
                     * 实际费用
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 自定义发送
                     */
                    std::vector<BudgetSendInfoDto> m_budgetSendInfoForm;
                    bool m_budgetSendInfoFormHasBeenSet;

                    /**
                     * 当前周期
                     */
                    std::string m_curDateDesc;
                    bool m_curDateDescHasBeenSet;

                    /**
                     *  EXPIRED  已过期
ACTIVE 生效中
UNACTIVATED 已失效
ACTIVATED 待生效
                     */
                    std::string m_budgetStatus;
                    bool m_budgetStatusHasBeenSet;

                    /**
                     * 预算维度范围条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BudgetConditionsForm m_dimensionsRange;
                    bool m_dimensionsRangeHasBeenSet;

                    /**
                     * 预算进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetProgress;
                    bool m_budgetProgressHasBeenSet;

                    /**
                     * 预算类型设置为计划预算时返回预算额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BudgetPlan> m_budgetQuotaJson;
                    bool m_budgetQuotaJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_
