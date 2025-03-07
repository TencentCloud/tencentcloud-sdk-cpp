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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_

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
                * 分账账单按产品汇总明细
                */
                class AllocationSummaryByBusiness : public AbstractModel
                {
                public:
                    AllocationSummaryByBusiness();
                    ~AllocationSummaryByBusiness() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账单元唯一标识
                     * @return TreeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置分账单元唯一标识
                     * @param _treeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取分账单元名称
                     * @return TreeNodeUniqKeyName 分账单元名称
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置分账单元名称
                     * @param _treeNodeUniqKeyName 分账单元名称
                     * 
                     */
                    void SetTreeNodeUniqKeyName(const std::string& _treeNodeUniqKeyName);

                    /**
                     * 判断参数 TreeNodeUniqKeyName 是否已赋值
                     * @return TreeNodeUniqKeyName 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyNameHasBeenSet() const;

                    /**
                     * 获取日期：结算日期
                     * @return BillDate 日期：结算日期
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置日期：结算日期
                     * @param _billDate 日期：结算日期
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取归集费用(现金)：基于归集规则直接归集到分账单元的现金
                     * @return GatherCashPayAmount 归集费用(现金)：基于归集规则直接归集到分账单元的现金
                     * 
                     */
                    std::string GetGatherCashPayAmount() const;

                    /**
                     * 设置归集费用(现金)：基于归集规则直接归集到分账单元的现金
                     * @param _gatherCashPayAmount 归集费用(现金)：基于归集规则直接归集到分账单元的现金
                     * 
                     */
                    void SetGatherCashPayAmount(const std::string& _gatherCashPayAmount);

                    /**
                     * 判断参数 GatherCashPayAmount 是否已赋值
                     * @return GatherCashPayAmount 是否已赋值
                     * 
                     */
                    bool GatherCashPayAmountHasBeenSet() const;

                    /**
                     * 获取归集费用(优惠券)：基于归集规则直接归集到分账单元的资源优惠券
                     * @return GatherVoucherPayAmount 归集费用(优惠券)：基于归集规则直接归集到分账单元的资源优惠券
                     * 
                     */
                    std::string GetGatherVoucherPayAmount() const;

                    /**
                     * 设置归集费用(优惠券)：基于归集规则直接归集到分账单元的资源优惠券
                     * @param _gatherVoucherPayAmount 归集费用(优惠券)：基于归集规则直接归集到分账单元的资源优惠券
                     * 
                     */
                    void SetGatherVoucherPayAmount(const std::string& _gatherVoucherPayAmount);

                    /**
                     * 判断参数 GatherVoucherPayAmount 是否已赋值
                     * @return GatherVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool GatherVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取归集费用(赠送金)：基于归集规则直接归集到分账单元的资源赠送金
                     * @return GatherIncentivePayAmount 归集费用(赠送金)：基于归集规则直接归集到分账单元的资源赠送金
                     * 
                     */
                    std::string GetGatherIncentivePayAmount() const;

                    /**
                     * 设置归集费用(赠送金)：基于归集规则直接归集到分账单元的资源赠送金
                     * @param _gatherIncentivePayAmount 归集费用(赠送金)：基于归集规则直接归集到分账单元的资源赠送金
                     * 
                     */
                    void SetGatherIncentivePayAmount(const std::string& _gatherIncentivePayAmount);

                    /**
                     * 判断参数 GatherIncentivePayAmount 是否已赋值
                     * @return GatherIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool GatherIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取归集费用(分成金)：基于归集规则直接归集到分账单元的资源分成金
                     * @return GatherTransferPayAmount 归集费用(分成金)：基于归集规则直接归集到分账单元的资源分成金
                     * 
                     */
                    std::string GetGatherTransferPayAmount() const;

                    /**
                     * 设置归集费用(分成金)：基于归集规则直接归集到分账单元的资源分成金
                     * @param _gatherTransferPayAmount 归集费用(分成金)：基于归集规则直接归集到分账单元的资源分成金
                     * 
                     */
                    void SetGatherTransferPayAmount(const std::string& _gatherTransferPayAmount);

                    /**
                     * 判断参数 GatherTransferPayAmount 是否已赋值
                     * @return GatherTransferPayAmount 是否已赋值
                     * 
                     */
                    bool GatherTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取分摊费用(现金)：基于分摊规则分摊到分账单元的资源现金
                     * @return AllocateCashPayAmount 分摊费用(现金)：基于分摊规则分摊到分账单元的资源现金
                     * 
                     */
                    std::string GetAllocateCashPayAmount() const;

                    /**
                     * 设置分摊费用(现金)：基于分摊规则分摊到分账单元的资源现金
                     * @param _allocateCashPayAmount 分摊费用(现金)：基于分摊规则分摊到分账单元的资源现金
                     * 
                     */
                    void SetAllocateCashPayAmount(const std::string& _allocateCashPayAmount);

                    /**
                     * 判断参数 AllocateCashPayAmount 是否已赋值
                     * @return AllocateCashPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateCashPayAmountHasBeenSet() const;

                    /**
                     * 获取分摊费用(优惠券)：基于分摊规则分摊到分账单元的资源优惠券
                     * @return AllocateVoucherPayAmount 分摊费用(优惠券)：基于分摊规则分摊到分账单元的资源优惠券
                     * 
                     */
                    std::string GetAllocateVoucherPayAmount() const;

                    /**
                     * 设置分摊费用(优惠券)：基于分摊规则分摊到分账单元的资源优惠券
                     * @param _allocateVoucherPayAmount 分摊费用(优惠券)：基于分摊规则分摊到分账单元的资源优惠券
                     * 
                     */
                    void SetAllocateVoucherPayAmount(const std::string& _allocateVoucherPayAmount);

                    /**
                     * 判断参数 AllocateVoucherPayAmount 是否已赋值
                     * @return AllocateVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取分摊费用(赠送金)：基于分摊规则分摊到分账单元的资源赠送金
                     * @return AllocateIncentivePayAmount 分摊费用(赠送金)：基于分摊规则分摊到分账单元的资源赠送金
                     * 
                     */
                    std::string GetAllocateIncentivePayAmount() const;

                    /**
                     * 设置分摊费用(赠送金)：基于分摊规则分摊到分账单元的资源赠送金
                     * @param _allocateIncentivePayAmount 分摊费用(赠送金)：基于分摊规则分摊到分账单元的资源赠送金
                     * 
                     */
                    void SetAllocateIncentivePayAmount(const std::string& _allocateIncentivePayAmount);

                    /**
                     * 判断参数 AllocateIncentivePayAmount 是否已赋值
                     * @return AllocateIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool AllocateIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取分摊费用(分成金)：基于分摊规则分摊到分账单元的资源分成金
                     * @return AllocateTransferPayAmount 分摊费用(分成金)：基于分摊规则分摊到分账单元的资源分成金
                     * 
                     */
                    std::string GetAllocateTransferPayAmount() const;

                    /**
                     * 设置分摊费用(分成金)：基于分摊规则分摊到分账单元的资源分成金
                     * @param _allocateTransferPayAmount 分摊费用(分成金)：基于分摊规则分摊到分账单元的资源分成金
                     * 
                     */
                    void SetAllocateTransferPayAmount(const std::string& _allocateTransferPayAmount);

                    /**
                     * 判断参数 AllocateTransferPayAmount 是否已赋值
                     * @return AllocateTransferPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取合计费用(现金)：分账单元总费用，归集费用(现金) + 分摊费用(现金)
                     * @return TotalCashPayAmount 合计费用(现金)：分账单元总费用，归集费用(现金) + 分摊费用(现金)
                     * 
                     */
                    std::string GetTotalCashPayAmount() const;

                    /**
                     * 设置合计费用(现金)：分账单元总费用，归集费用(现金) + 分摊费用(现金)
                     * @param _totalCashPayAmount 合计费用(现金)：分账单元总费用，归集费用(现金) + 分摊费用(现金)
                     * 
                     */
                    void SetTotalCashPayAmount(const std::string& _totalCashPayAmount);

                    /**
                     * 判断参数 TotalCashPayAmount 是否已赋值
                     * @return TotalCashPayAmount 是否已赋值
                     * 
                     */
                    bool TotalCashPayAmountHasBeenSet() const;

                    /**
                     * 获取合计费用(优惠券)：分账单元总费用，归集费用(优惠券) + 分摊费用(优惠券)
                     * @return TotalVoucherPayAmount 合计费用(优惠券)：分账单元总费用，归集费用(优惠券) + 分摊费用(优惠券)
                     * 
                     */
                    std::string GetTotalVoucherPayAmount() const;

                    /**
                     * 设置合计费用(优惠券)：分账单元总费用，归集费用(优惠券) + 分摊费用(优惠券)
                     * @param _totalVoucherPayAmount 合计费用(优惠券)：分账单元总费用，归集费用(优惠券) + 分摊费用(优惠券)
                     * 
                     */
                    void SetTotalVoucherPayAmount(const std::string& _totalVoucherPayAmount);

                    /**
                     * 判断参数 TotalVoucherPayAmount 是否已赋值
                     * @return TotalVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool TotalVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取合计费用(赠送金)：分账单元总费用，归集费用(赠送金) + 分摊费用(赠送金)
                     * @return TotalIncentivePayAmount 合计费用(赠送金)：分账单元总费用，归集费用(赠送金) + 分摊费用(赠送金)
                     * 
                     */
                    std::string GetTotalIncentivePayAmount() const;

                    /**
                     * 设置合计费用(赠送金)：分账单元总费用，归集费用(赠送金) + 分摊费用(赠送金)
                     * @param _totalIncentivePayAmount 合计费用(赠送金)：分账单元总费用，归集费用(赠送金) + 分摊费用(赠送金)
                     * 
                     */
                    void SetTotalIncentivePayAmount(const std::string& _totalIncentivePayAmount);

                    /**
                     * 判断参数 TotalIncentivePayAmount 是否已赋值
                     * @return TotalIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool TotalIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取合计费用(分成金)：分账单元总费用，归集费用(分成金)+分摊费用(分成金)
                     * @return TotalTransferPayAmount 合计费用(分成金)：分账单元总费用，归集费用(分成金)+分摊费用(分成金)
                     * 
                     */
                    std::string GetTotalTransferPayAmount() const;

                    /**
                     * 设置合计费用(分成金)：分账单元总费用，归集费用(分成金)+分摊费用(分成金)
                     * @param _totalTransferPayAmount 合计费用(分成金)：分账单元总费用，归集费用(分成金)+分摊费用(分成金)
                     * 
                     */
                    void SetTotalTransferPayAmount(const std::string& _totalTransferPayAmount);

                    /**
                     * 判断参数 TotalTransferPayAmount 是否已赋值
                     * @return TotalTransferPayAmount 是否已赋值
                     * 
                     */
                    bool TotalTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取归集费用(折后总额)：基于归集规则直接归集到分账单元的资源优惠后总价
                     * @return GatherRealCost 归集费用(折后总额)：基于归集规则直接归集到分账单元的资源优惠后总价
                     * 
                     */
                    std::string GetGatherRealCost() const;

                    /**
                     * 设置归集费用(折后总额)：基于归集规则直接归集到分账单元的资源优惠后总价
                     * @param _gatherRealCost 归集费用(折后总额)：基于归集规则直接归集到分账单元的资源优惠后总价
                     * 
                     */
                    void SetGatherRealCost(const std::string& _gatherRealCost);

                    /**
                     * 判断参数 GatherRealCost 是否已赋值
                     * @return GatherRealCost 是否已赋值
                     * 
                     */
                    bool GatherRealCostHasBeenSet() const;

                    /**
                     * 获取分摊费用(折后总额)：基于分摊规则分摊到分账单元的资源优惠后总价
                     * @return AllocateRealCost 分摊费用(折后总额)：基于分摊规则分摊到分账单元的资源优惠后总价
                     * 
                     */
                    std::string GetAllocateRealCost() const;

                    /**
                     * 设置分摊费用(折后总额)：基于分摊规则分摊到分账单元的资源优惠后总价
                     * @param _allocateRealCost 分摊费用(折后总额)：基于分摊规则分摊到分账单元的资源优惠后总价
                     * 
                     */
                    void SetAllocateRealCost(const std::string& _allocateRealCost);

                    /**
                     * 判断参数 AllocateRealCost 是否已赋值
                     * @return AllocateRealCost 是否已赋值
                     * 
                     */
                    bool AllocateRealCostHasBeenSet() const;

                    /**
                     * 获取合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * @return RealTotalCost 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * @param _realTotalCost 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
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
                     * 获取占比(折后总额)：本分账单元合计费用(折后总额)/合计费用(折后总额)*100%
                     * @return Ratio 占比(折后总额)：本分账单元合计费用(折后总额)/合计费用(折后总额)*100%
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置占比(折后总额)：本分账单元合计费用(折后总额)/合计费用(折后总额)*100%
                     * @param _ratio 占比(折后总额)：本分账单元合计费用(折后总额)/合计费用(折后总额)*100%
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取环比(折后总额)：[本月分账单元合计费用(折后总额) - 上月分账单元合计费用(折后总额)] / 上月分账单元合计费用(折后总额) * 100%
                     * @return Trend 环比(折后总额)：[本月分账单元合计费用(折后总额) - 上月分账单元合计费用(折后总额)] / 上月分账单元合计费用(折后总额) * 100%
                     * 
                     */
                    std::string GetTrend() const;

                    /**
                     * 设置环比(折后总额)：[本月分账单元合计费用(折后总额) - 上月分账单元合计费用(折后总额)] / 上月分账单元合计费用(折后总额) * 100%
                     * @param _trend 环比(折后总额)：[本月分账单元合计费用(折后总额) - 上月分账单元合计费用(折后总额)] / 上月分账单元合计费用(折后总额) * 100%
                     * 
                     */
                    void SetTrend(const std::string& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取环比箭头
upward -上升
downward - 下降
none - 平稳
                     * @return TrendType 环比箭头
upward -上升
downward - 下降
none - 平稳
                     * 
                     */
                    std::string GetTrendType() const;

                    /**
                     * 设置环比箭头
upward -上升
downward - 下降
none - 平稳
                     * @param _trendType 环比箭头
upward -上升
downward - 下降
none - 平稳
                     * 
                     */
                    void SetTrendType(const std::string& _trendType);

                    /**
                     * 判断参数 TrendType 是否已赋值
                     * @return TrendType 是否已赋值
                     * 
                     */
                    bool TrendTypeHasBeenSet() const;

                    /**
                     * 获取产品编码
                     * @return BusinessCode 产品编码
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置产品编码
                     * @param _businessCode 产品编码
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
                     * 获取产品名称：用户所采购的各类云产品
                     * @return BusinessCodeName 产品名称：用户所采购的各类云产品
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称：用户所采购的各类云产品
                     * @param _businessCodeName 产品名称：用户所采购的各类云产品
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
                     * 获取组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     * @return TotalCost 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     * @param _totalCost 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @return RICost 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    std::string GetRICost() const;

                    /**
                     * 设置预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @param _rICost 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    void SetRICost(const std::string& _rICost);

                    /**
                     * 判断参数 RICost 是否已赋值
                     * @return RICost 是否已赋值
                     * 
                     */
                    bool RICostHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     * @return SPCost 节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     * 
                     */
                    std::string GetSPCost() const;

                    /**
                     * 设置节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     * @param _sPCost 节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     * 
                     */
                    void SetSPCost(const std::string& _sPCost);

                    /**
                     * 判断参数 SPCost 是否已赋值
                     * @return SPCost 是否已赋值
                     * 
                     */
                    bool SPCostHasBeenSet() const;

                    /**
                     * 获取现金账户支出(元)：通过现金账户支付的金额
                     * @return CashPayAmount 现金账户支出(元)：通过现金账户支付的金额
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金账户支出(元)：通过现金账户支付的金额
                     * @param _cashPayAmount 现金账户支出(元)：通过现金账户支付的金额
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
                     * 获取代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额

                     * @return VoucherPayAmount 代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额

                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额

                     * @param _voucherPayAmount 代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额

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
                     * 获取赠送账户支出(元)：使用赠送金支付的金额
                     * @return IncentivePayAmount 赠送账户支出(元)：使用赠送金支付的金额
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支出(元)：使用赠送金支付的金额
                     * @param _incentivePayAmount 赠送账户支出(元)：使用赠送金支付的金额
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
                     * 获取分成账户支出(元)：通过分成金账户支付的金额
                     * @return TransferPayAmount 分成账户支出(元)：通过分成金账户支付的金额
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成账户支出(元)：通过分成金账户支付的金额
                     * @param _transferPayAmount 分成账户支出(元)：通过分成金账户支付的金额
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
                     * 获取优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @return AllocationRealTotalCost 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * 
                     */
                    std::string GetAllocationRealTotalCost() const;

                    /**
                     * 设置优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @param _allocationRealTotalCost 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * 
                     */
                    void SetAllocationRealTotalCost(const std::string& _allocationRealTotalCost);

                    /**
                     * 判断参数 AllocationRealTotalCost 是否已赋值
                     * @return AllocationRealTotalCost 是否已赋值
                     * 
                     */
                    bool AllocationRealTotalCostHasBeenSet() const;

                private:

                    /**
                     * 分账单元唯一标识
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * 分账单元名称
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                    /**
                     * 日期：结算日期
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 归集费用(现金)：基于归集规则直接归集到分账单元的现金
                     */
                    std::string m_gatherCashPayAmount;
                    bool m_gatherCashPayAmountHasBeenSet;

                    /**
                     * 归集费用(优惠券)：基于归集规则直接归集到分账单元的资源优惠券
                     */
                    std::string m_gatherVoucherPayAmount;
                    bool m_gatherVoucherPayAmountHasBeenSet;

                    /**
                     * 归集费用(赠送金)：基于归集规则直接归集到分账单元的资源赠送金
                     */
                    std::string m_gatherIncentivePayAmount;
                    bool m_gatherIncentivePayAmountHasBeenSet;

                    /**
                     * 归集费用(分成金)：基于归集规则直接归集到分账单元的资源分成金
                     */
                    std::string m_gatherTransferPayAmount;
                    bool m_gatherTransferPayAmountHasBeenSet;

                    /**
                     * 分摊费用(现金)：基于分摊规则分摊到分账单元的资源现金
                     */
                    std::string m_allocateCashPayAmount;
                    bool m_allocateCashPayAmountHasBeenSet;

                    /**
                     * 分摊费用(优惠券)：基于分摊规则分摊到分账单元的资源优惠券
                     */
                    std::string m_allocateVoucherPayAmount;
                    bool m_allocateVoucherPayAmountHasBeenSet;

                    /**
                     * 分摊费用(赠送金)：基于分摊规则分摊到分账单元的资源赠送金
                     */
                    std::string m_allocateIncentivePayAmount;
                    bool m_allocateIncentivePayAmountHasBeenSet;

                    /**
                     * 分摊费用(分成金)：基于分摊规则分摊到分账单元的资源分成金
                     */
                    std::string m_allocateTransferPayAmount;
                    bool m_allocateTransferPayAmountHasBeenSet;

                    /**
                     * 合计费用(现金)：分账单元总费用，归集费用(现金) + 分摊费用(现金)
                     */
                    std::string m_totalCashPayAmount;
                    bool m_totalCashPayAmountHasBeenSet;

                    /**
                     * 合计费用(优惠券)：分账单元总费用，归集费用(优惠券) + 分摊费用(优惠券)
                     */
                    std::string m_totalVoucherPayAmount;
                    bool m_totalVoucherPayAmountHasBeenSet;

                    /**
                     * 合计费用(赠送金)：分账单元总费用，归集费用(赠送金) + 分摊费用(赠送金)
                     */
                    std::string m_totalIncentivePayAmount;
                    bool m_totalIncentivePayAmountHasBeenSet;

                    /**
                     * 合计费用(分成金)：分账单元总费用，归集费用(分成金)+分摊费用(分成金)
                     */
                    std::string m_totalTransferPayAmount;
                    bool m_totalTransferPayAmountHasBeenSet;

                    /**
                     * 归集费用(折后总额)：基于归集规则直接归集到分账单元的资源优惠后总价
                     */
                    std::string m_gatherRealCost;
                    bool m_gatherRealCostHasBeenSet;

                    /**
                     * 分摊费用(折后总额)：基于分摊规则分摊到分账单元的资源优惠后总价
                     */
                    std::string m_allocateRealCost;
                    bool m_allocateRealCostHasBeenSet;

                    /**
                     * 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 占比(折后总额)：本分账单元合计费用(折后总额)/合计费用(折后总额)*100%
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * 环比(折后总额)：[本月分账单元合计费用(折后总额) - 上月分账单元合计费用(折后总额)] / 上月分账单元合计费用(折后总额) * 100%
                     */
                    std::string m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * 环比箭头
upward -上升
downward - 下降
none - 平稳
                     */
                    std::string m_trendType;
                    bool m_trendTypeHasBeenSet;

                    /**
                     * 产品编码
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 产品名称：用户所采购的各类云产品
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     */
                    std::string m_rICost;
                    bool m_rICostHasBeenSet;

                    /**
                     * 节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     */
                    std::string m_sPCost;
                    bool m_sPCostHasBeenSet;

                    /**
                     * 现金账户支出(元)：通过现金账户支付的金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额

                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 赠送账户支出(元)：使用赠送金支付的金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 分成账户支出(元)：通过分成金账户支付的金额
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     */
                    std::string m_allocationRealTotalCost;
                    bool m_allocationRealTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_
