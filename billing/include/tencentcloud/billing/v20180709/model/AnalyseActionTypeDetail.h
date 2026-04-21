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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析交易类型复杂类型
                */
                class AnalyseActionTypeDetail : public AbstractModel
                {
                public:
                    AnalyseActionTypeDetail();
                    ~AnalyseActionTypeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>交易类型code</p><p>枚举值：</p><ul><li>prepay_purchase： 包年包月新购</li><li>prepay_renew： 包年包月续费</li><li>prepay_modify： 包年包月配置变更</li><li>prepay_return： 包年包月退款</li><li>postpay_deduct_h： 按量计费小时结</li><li>postpay_deduct_d： 按量计费日结</li><li>postpay_deduct_m： 按量计费月结</li><li>offline_deduct： 线下项目扣费</li><li>online_deduct： 线下产品扣费</li><li>recon_deduct： 调账扣费</li><li>recon_increase： 调账补偿</li><li>postpay_deduct_s： 竞价实例小时结</li><li>recon_increase_f： 线下项目调账补偿</li><li>pre_to_post： 包年包月转按量</li><li>svp_hour_pay： 节省计划小时费用</li><li>recon_guarantee： 保底扣款</li><li>billVirtualId： 月度计费精度差异</li></ul>
                     * @return ActionType <p>交易类型code</p><p>枚举值：</p><ul><li>prepay_purchase： 包年包月新购</li><li>prepay_renew： 包年包月续费</li><li>prepay_modify： 包年包月配置变更</li><li>prepay_return： 包年包月退款</li><li>postpay_deduct_h： 按量计费小时结</li><li>postpay_deduct_d： 按量计费日结</li><li>postpay_deduct_m： 按量计费月结</li><li>offline_deduct： 线下项目扣费</li><li>online_deduct： 线下产品扣费</li><li>recon_deduct： 调账扣费</li><li>recon_increase： 调账补偿</li><li>postpay_deduct_s： 竞价实例小时结</li><li>recon_increase_f： 线下项目调账补偿</li><li>pre_to_post： 包年包月转按量</li><li>svp_hour_pay： 节省计划小时费用</li><li>recon_guarantee： 保底扣款</li><li>billVirtualId： 月度计费精度差异</li></ul>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>交易类型code</p><p>枚举值：</p><ul><li>prepay_purchase： 包年包月新购</li><li>prepay_renew： 包年包月续费</li><li>prepay_modify： 包年包月配置变更</li><li>prepay_return： 包年包月退款</li><li>postpay_deduct_h： 按量计费小时结</li><li>postpay_deduct_d： 按量计费日结</li><li>postpay_deduct_m： 按量计费月结</li><li>offline_deduct： 线下项目扣费</li><li>online_deduct： 线下产品扣费</li><li>recon_deduct： 调账扣费</li><li>recon_increase： 调账补偿</li><li>postpay_deduct_s： 竞价实例小时结</li><li>recon_increase_f： 线下项目调账补偿</li><li>pre_to_post： 包年包月转按量</li><li>svp_hour_pay： 节省计划小时费用</li><li>recon_guarantee： 保底扣款</li><li>billVirtualId： 月度计费精度差异</li></ul>
                     * @param _actionType <p>交易类型code</p><p>枚举值：</p><ul><li>prepay_purchase： 包年包月新购</li><li>prepay_renew： 包年包月续费</li><li>prepay_modify： 包年包月配置变更</li><li>prepay_return： 包年包月退款</li><li>postpay_deduct_h： 按量计费小时结</li><li>postpay_deduct_d： 按量计费日结</li><li>postpay_deduct_m： 按量计费月结</li><li>offline_deduct： 线下项目扣费</li><li>online_deduct： 线下产品扣费</li><li>recon_deduct： 调账扣费</li><li>recon_increase： 调账补偿</li><li>postpay_deduct_s： 竞价实例小时结</li><li>recon_increase_f： 线下项目调账补偿</li><li>pre_to_post： 包年包月转按量</li><li>svp_hour_pay： 节省计划小时费用</li><li>recon_guarantee： 保底扣款</li><li>billVirtualId： 月度计费精度差异</li></ul>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>交易类型Name</p>
                     * @return ActionTypeName <p>交易类型Name</p>
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置<p>交易类型Name</p>
                     * @param _actionTypeName <p>交易类型Name</p>
                     * 
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

                private:

                    /**
                     * <p>交易类型code</p><p>枚举值：</p><ul><li>prepay_purchase： 包年包月新购</li><li>prepay_renew： 包年包月续费</li><li>prepay_modify： 包年包月配置变更</li><li>prepay_return： 包年包月退款</li><li>postpay_deduct_h： 按量计费小时结</li><li>postpay_deduct_d： 按量计费日结</li><li>postpay_deduct_m： 按量计费月结</li><li>offline_deduct： 线下项目扣费</li><li>online_deduct： 线下产品扣费</li><li>recon_deduct： 调账扣费</li><li>recon_increase： 调账补偿</li><li>postpay_deduct_s： 竞价实例小时结</li><li>recon_increase_f： 线下项目调账补偿</li><li>pre_to_post： 包年包月转按量</li><li>svp_hour_pay： 节省计划小时费用</li><li>recon_guarantee： 保底扣款</li><li>billVirtualId： 月度计费精度差异</li></ul>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>交易类型Name</p>
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_
