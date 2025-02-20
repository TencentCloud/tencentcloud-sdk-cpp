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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANUSAGEDETAIL_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * 节省计划使用率数据
                */
                class SavingPlanUsageDetail : public AbstractModel
                {
                public:
                    SavingPlanUsageDetail();
                    ~SavingPlanUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节省计划类型
                     * @return SpType 节省计划类型
                     * 
                     */
                    std::string GetSpType() const;

                    /**
                     * 设置节省计划类型
                     * @param _spType 节省计划类型
                     * 
                     */
                    void SetSpType(const std::string& _spType);

                    /**
                     * 判断参数 SpType 是否已赋值
                     * @return SpType 是否已赋值
                     * 
                     */
                    bool SpTypeHasBeenSet() const;

                    /**
                     * 获取节省计划状态
                     * @return Status 节省计划状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置节省计划状态
                     * @param _status 节省计划状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取累计抵扣的金额（单位：元）
                     * @return DeductAmount 累计抵扣的金额（单位：元）
                     * 
                     */
                    std::string GetDeductAmount() const;

                    /**
                     * 设置累计抵扣的金额（单位：元）
                     * @param _deductAmount 累计抵扣的金额（单位：元）
                     * 
                     */
                    void SetDeductAmount(const std::string& _deductAmount);

                    /**
                     * 判断参数 DeductAmount 是否已赋值
                     * @return DeductAmount 是否已赋值
                     * 
                     */
                    bool DeductAmountHasBeenSet() const;

                    /**
                     * 获取累计承诺消费金额（单位：元）
                     * @return PromiseAmount 累计承诺消费金额（单位：元）
                     * 
                     */
                    std::string GetPromiseAmount() const;

                    /**
                     * 设置累计承诺消费金额（单位：元）
                     * @param _promiseAmount 累计承诺消费金额（单位：元）
                     * 
                     */
                    void SetPromiseAmount(const std::string& _promiseAmount);

                    /**
                     * 判断参数 PromiseAmount 是否已赋值
                     * @return PromiseAmount 是否已赋值
                     * 
                     */
                    bool PromiseAmountHasBeenSet() const;

                    /**
                     * 获取累计净节省金额（单位：元）
                     * @return NetSavings 累计净节省金额（单位：元）
                     * 
                     */
                    std::string GetNetSavings() const;

                    /**
                     * 设置累计净节省金额（单位：元）
                     * @param _netSavings 累计净节省金额（单位：元）
                     * 
                     */
                    void SetNetSavings(const std::string& _netSavings);

                    /**
                     * 判断参数 NetSavings 是否已赋值
                     * @return NetSavings 是否已赋值
                     * 
                     */
                    bool NetSavingsHasBeenSet() const;

                    /**
                     * 获取使用率
                     * @return UtilizationRate 使用率
                     * 
                     */
                    double GetUtilizationRate() const;

                    /**
                     * 设置使用率
                     * @param _utilizationRate 使用率
                     * 
                     */
                    void SetUtilizationRate(const double& _utilizationRate);

                    /**
                     * 判断参数 UtilizationRate 是否已赋值
                     * @return UtilizationRate 是否已赋值
                     * 
                     */
                    bool UtilizationRateHasBeenSet() const;

                    /**
                     * 获取累计流失金额（单位：元）
                     * @return LossAmount 累计流失金额（单位：元）
                     * 
                     */
                    std::string GetLossAmount() const;

                    /**
                     * 设置累计流失金额（单位：元）
                     * @param _lossAmount 累计流失金额（单位：元）
                     * 
                     */
                    void SetLossAmount(const std::string& _lossAmount);

                    /**
                     * 判断参数 LossAmount 是否已赋值
                     * @return LossAmount 是否已赋值
                     * 
                     */
                    bool LossAmountHasBeenSet() const;

                    /**
                     * 获取累计按量计费预期金额（单位：元）
                     * @return DosageAmount 累计按量计费预期金额（单位：元）
                     * 
                     */
                    std::string GetDosageAmount() const;

                    /**
                     * 设置累计按量计费预期金额（单位：元）
                     * @param _dosageAmount 累计按量计费预期金额（单位：元）
                     * 
                     */
                    void SetDosageAmount(const std::string& _dosageAmount);

                    /**
                     * 判断参数 DosageAmount 是否已赋值
                     * @return DosageAmount 是否已赋值
                     * 
                     */
                    bool DosageAmountHasBeenSet() const;

                    /**
                     * 获取累计成本金额（单位：元）
                     * @return CostAmount 累计成本金额（单位：元）
                     * 
                     */
                    std::string GetCostAmount() const;

                    /**
                     * 设置累计成本金额（单位：元）
                     * @param _costAmount 累计成本金额（单位：元）
                     * 
                     */
                    void SetCostAmount(const std::string& _costAmount);

                    /**
                     * 判断参数 CostAmount 是否已赋值
                     * @return CostAmount 是否已赋值
                     * 
                     */
                    bool CostAmountHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 节省计划类型
                     */
                    std::string m_spType;
                    bool m_spTypeHasBeenSet;

                    /**
                     * 节省计划状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 累计抵扣的金额（单位：元）
                     */
                    std::string m_deductAmount;
                    bool m_deductAmountHasBeenSet;

                    /**
                     * 累计承诺消费金额（单位：元）
                     */
                    std::string m_promiseAmount;
                    bool m_promiseAmountHasBeenSet;

                    /**
                     * 累计净节省金额（单位：元）
                     */
                    std::string m_netSavings;
                    bool m_netSavingsHasBeenSet;

                    /**
                     * 使用率
                     */
                    double m_utilizationRate;
                    bool m_utilizationRateHasBeenSet;

                    /**
                     * 累计流失金额（单位：元）
                     */
                    std::string m_lossAmount;
                    bool m_lossAmountHasBeenSet;

                    /**
                     * 累计按量计费预期金额（单位：元）
                     */
                    std::string m_dosageAmount;
                    bool m_dosageAmountHasBeenSet;

                    /**
                     * 累计成本金额（单位：元）
                     */
                    std::string m_costAmount;
                    bool m_costAmountHasBeenSet;

                    /**
                     * 地域
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANUSAGEDETAIL_H_
