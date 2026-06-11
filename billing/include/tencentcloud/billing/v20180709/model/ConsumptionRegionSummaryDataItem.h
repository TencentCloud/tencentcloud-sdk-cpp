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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONREGIONSUMMARYDATAITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONREGIONSUMMARYDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTrend.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionBusinessSummaryDataItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 消耗按地域汇总详情
                */
                class ConsumptionRegionSummaryDataItem : public AbstractModel
                {
                public:
                    ConsumptionRegionSummaryDataItem();
                    ~ConsumptionRegionSummaryDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>地域名称</p>
                     * @return RegionName <p>地域名称</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称</p>
                     * @param _regionName <p>地域名称</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>折后总价</p>
                     * @return RealTotalCost <p>折后总价</p>
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置<p>折后总价</p>
                     * @param _realTotalCost <p>折后总价</p>
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
                     * 获取<p>趋势</p>
                     * @return Trend <p>趋势</p>
                     * 
                     */
                    ConsumptionSummaryTrend GetTrend() const;

                    /**
                     * 设置<p>趋势</p>
                     * @param _trend <p>趋势</p>
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
                     * 获取<p>产品消费详情</p>
                     * @return Business <p>产品消费详情</p>
                     * 
                     */
                    std::vector<ConsumptionBusinessSummaryDataItem> GetBusiness() const;

                    /**
                     * 设置<p>产品消费详情</p>
                     * @param _business <p>产品消费详情</p>
                     * 
                     */
                    void SetBusiness(const std::vector<ConsumptionBusinessSummaryDataItem>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>现金</p>
                     * @return CashPayAmount <p>现金</p>
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置<p>现金</p>
                     * @param _cashPayAmount <p>现金</p>
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
                     * 获取<p>代金券</p>
                     * @return VoucherPayAmount <p>代金券</p>
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置<p>代金券</p>
                     * @param _voucherPayAmount <p>代金券</p>
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
                     * 获取<p>赠送金</p>
                     * @return IncentivePayAmount <p>赠送金</p>
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置<p>赠送金</p>
                     * @param _incentivePayAmount <p>赠送金</p>
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
                     * 获取<p>分成金</p>
                     * @return TransferPayAmount <p>分成金</p>
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置<p>分成金</p>
                     * @param _transferPayAmount <p>分成金</p>
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
                     * 获取<p>待分摊金额</p><p>剩余待分摊的折后总金额</p>
                     * @return LeftRealTotalCost <p>待分摊金额</p><p>剩余待分摊的折后总金额</p>
                     * 
                     */
                    std::string GetLeftRealTotalCost() const;

                    /**
                     * 设置<p>待分摊金额</p><p>剩余待分摊的折后总金额</p>
                     * @param _leftRealTotalCost <p>待分摊金额</p><p>剩余待分摊的折后总金额</p>
                     * 
                     */
                    void SetLeftRealTotalCost(const std::string& _leftRealTotalCost);

                    /**
                     * 判断参数 LeftRealTotalCost 是否已赋值
                     * @return LeftRealTotalCost 是否已赋值
                     * 
                     */
                    bool LeftRealTotalCostHasBeenSet() const;

                private:

                    /**
                     * <p>地域ID</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>地域名称</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>折后总价</p>
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * <p>趋势</p>
                     */
                    ConsumptionSummaryTrend m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * <p>产品消费详情</p>
                     */
                    std::vector<ConsumptionBusinessSummaryDataItem> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>现金</p>
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * <p>代金券</p>
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * <p>赠送金</p>
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * <p>分成金</p>
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * <p>待分摊金额</p><p>剩余待分摊的折后总金额</p>
                     */
                    std::string m_leftRealTotalCost;
                    bool m_leftRealTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONREGIONSUMMARYDATAITEM_H_
