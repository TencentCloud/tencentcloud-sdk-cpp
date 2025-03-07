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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTrend.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 消耗按产品汇总详情
                */
                class ConsumptionBusinessSummaryDataItem : public AbstractModel
                {
                public:
                    ConsumptionBusinessSummaryDataItem();
                    ~ConsumptionBusinessSummaryDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称代码
                     * @return BusinessCode 产品名称代码
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置产品名称代码
                     * @param _businessCode 产品名称代码
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return BusinessCodeName 产品名称
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称
                     * @param _businessCodeName 产品名称
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取折后总价
                     * @return RealTotalCost 折后总价
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置折后总价
                     * @param _realTotalCost 折后总价
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取费用趋势
                     * @return Trend 费用趋势
                     * 
                     */
                    ConsumptionSummaryTrend GetTrend() const;

                    /**
                     * 设置费用趋势
                     * @param _trend 费用趋势
                     * 
                     */
                    void SetTrend(const ConsumptionSummaryTrend& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取现金
                     * @return CashPayAmount 现金
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金
                     * @param _cashPayAmount 现金
                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送金
                     * @return IncentivePayAmount 赠送金
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金
                     * @param _incentivePayAmount 赠送金
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取代金券
                     * @return VoucherPayAmount 代金券
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券
                     * @param _voucherPayAmount 代金券
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取分成金
                     * @return TransferPayAmount 分成金
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金
                     * @param _transferPayAmount 分成金
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取地域名称（仅在地域汇总总展示）
                     * @return RegionName 地域名称（仅在地域汇总总展示）
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称（仅在地域汇总总展示）
                     * @param _regionName 地域名称（仅在地域汇总总展示）
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * 产品名称代码
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 折后总价
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 费用趋势
                     */
                    ConsumptionSummaryTrend m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * 现金
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送金
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 代金券
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 分成金
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * 地域名称（仅在地域汇总总展示）
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_
