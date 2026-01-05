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
                     * 获取<p>节省计划资源id</p>
                     * @return SpId <p>节省计划资源id</p>
                     * 
                     */
                    std::string GetSpId() const;

                    /**
                     * 设置<p>节省计划资源id</p>
                     * @param _spId <p>节省计划资源id</p>
                     * 
                     */
                    void SetSpId(const std::string& _spId);

                    /**
                     * 判断参数 SpId 是否已赋值
                     * @return SpId 是否已赋值
                     * 
                     */
                    bool SpIdHasBeenSet() const;

                    /**
                     * 获取<p>节省计划类型</p>
                     * @return SpType <p>节省计划类型</p>
                     * 
                     */
                    std::string GetSpType() const;

                    /**
                     * 设置<p>节省计划类型</p>
                     * @param _spType <p>节省计划类型</p>
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
                     * 获取<p>节省计划状态</p>枚举值：<ul><li> 1：  生效</li><li> 2： 失效 </li><li> 3： 作废</li></ul>
                     * @return Status <p>节省计划状态</p>枚举值：<ul><li> 1：  生效</li><li> 2： 失效 </li><li> 3： 作废</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>节省计划状态</p>枚举值：<ul><li> 1：  生效</li><li> 2： 失效 </li><li> 3： 作废</li></ul>
                     * @param _status <p>节省计划状态</p>枚举值：<ul><li> 1：  生效</li><li> 2： 失效 </li><li> 3： 作废</li></ul>
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
                     * 获取<p>累计抵扣的金额（单位：元）</p>
                     * @return DeductAmount <p>累计抵扣的金额（单位：元）</p>
                     * 
                     */
                    std::string GetDeductAmount() const;

                    /**
                     * 设置<p>累计抵扣的金额（单位：元）</p>
                     * @param _deductAmount <p>累计抵扣的金额（单位：元）</p>
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
                     * 获取<p>累计承诺消费金额（单位：元）</p>
                     * @return PromiseAmount <p>累计承诺消费金额（单位：元）</p>
                     * 
                     */
                    std::string GetPromiseAmount() const;

                    /**
                     * 设置<p>累计承诺消费金额（单位：元）</p>
                     * @param _promiseAmount <p>累计承诺消费金额（单位：元）</p>
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
                     * 获取<p>累计净节省金额（单位：元）</p>
                     * @return NetSavings <p>累计净节省金额（单位：元）</p>
                     * 
                     */
                    std::string GetNetSavings() const;

                    /**
                     * 设置<p>累计净节省金额（单位：元）</p>
                     * @param _netSavings <p>累计净节省金额（单位：元）</p>
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
                     * 获取<p>使用率</p>
                     * @return UtilizationRate <p>使用率</p>
                     * 
                     */
                    double GetUtilizationRate() const;

                    /**
                     * 设置<p>使用率</p>
                     * @param _utilizationRate <p>使用率</p>
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
                     * 获取<p>累计流失金额（单位：元）</p>
                     * @return LossAmount <p>累计流失金额（单位：元）</p>
                     * 
                     */
                    std::string GetLossAmount() const;

                    /**
                     * 设置<p>累计流失金额（单位：元）</p>
                     * @param _lossAmount <p>累计流失金额（单位：元）</p>
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
                     * 获取<p>累计按量计费预期金额（单位：元）</p>
                     * @return DosageAmount <p>累计按量计费预期金额（单位：元）</p>
                     * 
                     */
                    std::string GetDosageAmount() const;

                    /**
                     * 设置<p>累计按量计费预期金额（单位：元）</p>
                     * @param _dosageAmount <p>累计按量计费预期金额（单位：元）</p>
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
                     * 获取<p>累计成本金额（单位：元）</p>
                     * @return CostAmount <p>累计成本金额（单位：元）</p>
                     * 
                     */
                    std::string GetCostAmount() const;

                    /**
                     * 设置<p>累计成本金额（单位：元）</p>
                     * @param _costAmount <p>累计成本金额（单位：元）</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * <p>节省计划资源id</p>
                     */
                    std::string m_spId;
                    bool m_spIdHasBeenSet;

                    /**
                     * <p>节省计划类型</p>
                     */
                    std::string m_spType;
                    bool m_spTypeHasBeenSet;

                    /**
                     * <p>节省计划状态</p>枚举值：<ul><li> 1：  生效</li><li> 2： 失效 </li><li> 3： 作废</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>累计抵扣的金额（单位：元）</p>
                     */
                    std::string m_deductAmount;
                    bool m_deductAmountHasBeenSet;

                    /**
                     * <p>累计承诺消费金额（单位：元）</p>
                     */
                    std::string m_promiseAmount;
                    bool m_promiseAmountHasBeenSet;

                    /**
                     * <p>累计净节省金额（单位：元）</p>
                     */
                    std::string m_netSavings;
                    bool m_netSavingsHasBeenSet;

                    /**
                     * <p>使用率</p>
                     */
                    double m_utilizationRate;
                    bool m_utilizationRateHasBeenSet;

                    /**
                     * <p>累计流失金额（单位：元）</p>
                     */
                    std::string m_lossAmount;
                    bool m_lossAmountHasBeenSet;

                    /**
                     * <p>累计按量计费预期金额（单位：元）</p>
                     */
                    std::string m_dosageAmount;
                    bool m_dosageAmountHasBeenSet;

                    /**
                     * <p>累计成本金额（单位：元）</p>
                     */
                    std::string m_costAmount;
                    bool m_costAmountHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANUSAGEDETAIL_H_
