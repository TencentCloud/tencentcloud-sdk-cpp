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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_

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
                * 消耗按资源汇总详情
                */
                class ConsumptionResourceSummaryDataItem : public AbstractModel
                {
                public:
                    ConsumptionResourceSummaryDataItem();
                    ~ConsumptionResourceSummaryDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

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
                     * 获取现金花费
                     * @return CashPayAmount 现金花费
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金花费
                     * @param _cashPayAmount 现金花费
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
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
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
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
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取付费模式名称
                     * @return PayModeName 付费模式名称
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置付费模式名称
                     * @param _payModeName 付费模式名称
                     * 
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     * 
                     */
                    bool PayModeNameHasBeenSet() const;

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
                     * 获取消耗类型
                     * @return ConsumptionTypeName 消耗类型
                     * 
                     */
                    std::string GetConsumptionTypeName() const;

                    /**
                     * 设置消耗类型
                     * @param _consumptionTypeName 消耗类型
                     * 
                     */
                    void SetConsumptionTypeName(const std::string& _consumptionTypeName);

                    /**
                     * 判断参数 ConsumptionTypeName 是否已赋值
                     * @return ConsumptionTypeName 是否已赋值
                     * 
                     */
                    bool ConsumptionTypeNameHasBeenSet() const;

                    /**
                     * 获取折前价
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealCost 折前价
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置折前价
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realCost 折前价
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取费用起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeBeginTime 费用起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置费用起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeBeginTime 费用起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeeBeginTime(const std::string& _feeBeginTime);

                    /**
                     * 判断参数 FeeBeginTime 是否已赋值
                     * @return FeeBeginTime 是否已赋值
                     * 
                     */
                    bool FeeBeginTimeHasBeenSet() const;

                    /**
                     * 获取费用结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeEndTime 费用结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置费用结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeEndTime 费用结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeeEndTime(const std::string& _feeEndTime);

                    /**
                     * 判断参数 FeeEndTime 是否已赋值
                     * @return FeeEndTime 是否已赋值
                     * 
                     */
                    bool FeeEndTimeHasBeenSet() const;

                    /**
                     * 获取天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayDiff 天数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDayDiff() const;

                    /**
                     * 设置天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayDiff 天数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayDiff(const std::string& _dayDiff);

                    /**
                     * 判断参数 DayDiff 是否已赋值
                     * @return DayDiff 是否已赋值
                     * 
                     */
                    bool DayDiffHasBeenSet() const;

                    /**
                     * 获取每日消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DailyTotalCost 每日消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDailyTotalCost() const;

                    /**
                     * 设置每日消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dailyTotalCost 每日消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDailyTotalCost(const std::string& _dailyTotalCost);

                    /**
                     * 判断参数 DailyTotalCost 是否已赋值
                     * @return DailyTotalCost 是否已赋值
                     * 
                     */
                    bool DailyTotalCostHasBeenSet() const;

                    /**
                     * 获取订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取代金券
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoucherPayAmount 代金券
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voucherPayAmount 代金券
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取赠送金
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncentivePayAmount 赠送金
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _incentivePayAmount 赠送金
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分成金
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferPayAmount 分成金
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transferPayAmount 分成金
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 折后总价
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 现金花费
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 地域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 付费模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 付费模式名称
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

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
                     * 消耗类型
                     */
                    std::string m_consumptionTypeName;
                    bool m_consumptionTypeNameHasBeenSet;

                    /**
                     * 折前价
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 费用起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * 费用结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * 天数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dayDiff;
                    bool m_dayDiffHasBeenSet;

                    /**
                     * 每日消耗
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dailyTotalCost;
                    bool m_dailyTotalCostHasBeenSet;

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 代金券
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 赠送金
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 分成金
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
