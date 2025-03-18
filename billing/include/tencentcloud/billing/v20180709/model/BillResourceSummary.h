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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTagInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 账单资源汇总数据对象
                */
                class BillResourceSummary : public AbstractModel
                {
                public:
                    BillResourceSummary();
                    ~BillResourceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称：用户所采购的各类云产品，例如：云服务器 CVM
                     * @return BusinessCodeName 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称：用户所采购的各类云产品，例如：云服务器 CVM
                     * @param _businessCodeName 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
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
                     * 获取子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     * @return ProductCodeName 子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     * @param _productCodeName 子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取计费模式：资源的计费模式，区分为包年包月和按量计费
                     * @return PayModeName 计费模式：资源的计费模式，区分为包年包月和按量计费
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置计费模式：资源的计费模式，区分为包年包月和按量计费
                     * @param _payModeName 计费模式：资源的计费模式，区分为包年包月和按量计费
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
                     * 获取项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
                     * @return ProjectName 项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
                     * @param _projectName 项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
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
                     * 获取地域：资源所属地域，如华南地区（广州）
                     * @return RegionName 地域：资源所属地域，如华南地区（广州）
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域：资源所属地域，如华南地区（广州）
                     * @param _regionName 地域：资源所属地域，如华南地区（广州）
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
                     * 获取可用区：资源所属可用区，如广州三区
                     * @return ZoneName 可用区：资源所属可用区，如广州三区
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区：资源所属可用区，如广州三区
                     * @param _zoneName 可用区：资源所属可用区，如广州三区
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID	
                     * @return ResourceId 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID	
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID	
                     * @param _resourceId 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID	
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
                     * 获取资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空
                     * @return ResourceName 资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空
                     * @param _resourceName 资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空
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
                     * 获取交易类型：如包年包月新购、包年包月续费、按量计费扣费等类型
                     * @return ActionTypeName 交易类型：如包年包月新购、包年包月续费、按量计费扣费等类型
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置交易类型：如包年包月新购、包年包月续费、按量计费扣费等类型
                     * @param _actionTypeName 交易类型：如包年包月新购、包年包月续费、按量计费扣费等类型
                     * 
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

                    /**
                     * 获取订单ID：包年包月计费模式下订购的订单号
                     * @return OrderId 订单ID：包年包月计费模式下订购的订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID：包年包月计费模式下订购的订单号
                     * @param _orderId 订单ID：包年包月计费模式下订购的订单号
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
                     * 获取扣费时间：结算扣费时间
                     * @return PayTime 扣费时间：结算扣费时间
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置扣费时间：结算扣费时间
                     * @param _payTime 扣费时间：结算扣费时间
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取开始使用时间：产品服务开始使用时间
                     * @return FeeBeginTime 开始使用时间：产品服务开始使用时间
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置开始使用时间：产品服务开始使用时间
                     * @param _feeBeginTime 开始使用时间：产品服务开始使用时间
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
                     * 获取结束使用时间：产品服务结束使用时间
                     * @return FeeEndTime 结束使用时间：产品服务结束使用时间
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置结束使用时间：产品服务结束使用时间
                     * @param _feeEndTime 结束使用时间：产品服务结束使用时间
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
                     * 获取配置描述：该资源下的计费项名称和用量合并展示，仅在资源账单体现
                     * @return ConfigDesc 配置描述：该资源下的计费项名称和用量合并展示，仅在资源账单体现
                     * 
                     */
                    std::string GetConfigDesc() const;

                    /**
                     * 设置配置描述：该资源下的计费项名称和用量合并展示，仅在资源账单体现
                     * @param _configDesc 配置描述：该资源下的计费项名称和用量合并展示，仅在资源账单体现
                     * 
                     */
                    void SetConfigDesc(const std::string& _configDesc);

                    /**
                     * 判断参数 ConfigDesc 是否已赋值
                     * @return ConfigDesc 是否已赋值
                     * 
                     */
                    bool ConfigDescHasBeenSet() const;

                    /**
                     * 获取扩展字段1：产品对应的扩展属性信息，仅在资源账单体现
                     * @return ExtendField1 扩展字段1：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    std::string GetExtendField1() const;

                    /**
                     * 设置扩展字段1：产品对应的扩展属性信息，仅在资源账单体现
                     * @param _extendField1 扩展字段1：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    void SetExtendField1(const std::string& _extendField1);

                    /**
                     * 判断参数 ExtendField1 是否已赋值
                     * @return ExtendField1 是否已赋值
                     * 
                     */
                    bool ExtendField1HasBeenSet() const;

                    /**
                     * 获取扩展字段2：产品对应的扩展属性信息，仅在资源账单体现
                     * @return ExtendField2 扩展字段2：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    std::string GetExtendField2() const;

                    /**
                     * 设置扩展字段2：产品对应的扩展属性信息，仅在资源账单体现
                     * @param _extendField2 扩展字段2：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    void SetExtendField2(const std::string& _extendField2);

                    /**
                     * 判断参数 ExtendField2 是否已赋值
                     * @return ExtendField2 是否已赋值
                     * 
                     */
                    bool ExtendField2HasBeenSet() const;

                    /**
                     * 获取原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * @return TotalCost 原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * @param _totalCost 原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
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
                     * 获取折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @return Discount 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @param _discount 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * 
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取优惠类型
                     * @return ReduceType 优惠类型
                     * 
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置优惠类型
                     * @param _reduceType 优惠类型
                     * 
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     * 
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取优惠后总价
                     * @return RealTotalCost 优惠后总价
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置优惠后总价
                     * @param _realTotalCost 优惠后总价
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
                     * 获取优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @return VoucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @param _voucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
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
                     * 获取现金账户支出：通过现金账户支付的金额
                     * @return CashPayAmount 现金账户支出：通过现金账户支付的金额
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金账户支出：通过现金账户支付的金额
                     * @param _cashPayAmount 现金账户支出：通过现金账户支付的金额
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
                     * 获取赠送账户支出：使用赠送金支付的金额
                     * @return IncentivePayAmount 赠送账户支出：使用赠送金支付的金额
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支出：使用赠送金支付的金额
                     * @param _incentivePayAmount 赠送账户支出：使用赠送金支付的金额
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
                     * 获取分成金账户支出：通过分成金账户支付的金额
                     * @return TransferPayAmount 分成金账户支出：通过分成金账户支付的金额
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金账户支出：通过分成金账户支付的金额
                     * @param _transferPayAmount 分成金账户支出：通过分成金账户支付的金额
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
                     * 获取扩展字段3：产品对应的扩展属性信息，仅在资源账单体现
                     * @return ExtendField3 扩展字段3：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    std::string GetExtendField3() const;

                    /**
                     * 设置扩展字段3：产品对应的扩展属性信息，仅在资源账单体现
                     * @param _extendField3 扩展字段3：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    void SetExtendField3(const std::string& _extendField3);

                    /**
                     * 判断参数 ExtendField3 是否已赋值
                     * @return ExtendField3 是否已赋值
                     * 
                     */
                    bool ExtendField3HasBeenSet() const;

                    /**
                     * 获取扩展字段4：产品对应的扩展属性信息，仅在资源账单体现
                     * @return ExtendField4 扩展字段4：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    std::string GetExtendField4() const;

                    /**
                     * 设置扩展字段4：产品对应的扩展属性信息，仅在资源账单体现
                     * @param _extendField4 扩展字段4：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    void SetExtendField4(const std::string& _extendField4);

                    /**
                     * 判断参数 ExtendField4 是否已赋值
                     * @return ExtendField4 是否已赋值
                     * 
                     */
                    bool ExtendField4HasBeenSet() const;

                    /**
                     * 获取扩展字段5：产品对应的扩展属性信息，仅在资源账单体现
                     * @return ExtendField5 扩展字段5：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    std::string GetExtendField5() const;

                    /**
                     * 设置扩展字段5：产品对应的扩展属性信息，仅在资源账单体现
                     * @param _extendField5 扩展字段5：产品对应的扩展属性信息，仅在资源账单体现
                     * 
                     */
                    void SetExtendField5(const std::string& _extendField5);

                    /**
                     * 判断参数 ExtendField5 是否已赋值
                     * @return ExtendField5 是否已赋值
                     * 
                     */
                    bool ExtendField5HasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::vector<BillTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @return PayerUin 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @param _payerUin 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取使用者UIN：实际使用资源的账号 ID
                     * @return OwnerUin 使用者UIN：实际使用资源的账号 ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置使用者UIN：实际使用资源的账号 ID
                     * @param _ownerUin 使用者UIN：实际使用资源的账号 ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）
                     * @return OperateUin 操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）
                     * @param _operateUin 操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

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
                     * 获取子产品编码
                     * @return ProductCode 子产品编码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置子产品编码
                     * @param _productCode 子产品编码
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * @return InstanceType 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * @param _instanceType 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额	
                     * @return OriginalCostWithRI 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额	
                     * 
                     */
                    std::string GetOriginalCostWithRI() const;

                    /**
                     * 设置预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额	
                     * @param _originalCostWithRI 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额	
                     * 
                     */
                    void SetOriginalCostWithRI(const std::string& _originalCostWithRI);

                    /**
                     * 判断参数 OriginalCostWithRI 是否已赋值
                     * @return OriginalCostWithRI 是否已赋值
                     * 
                     */
                    bool OriginalCostWithRIHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣金额（已废弃）
                     * @return SPDeduction 节省计划抵扣金额（已废弃）
                     * @deprecated
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置节省计划抵扣金额（已废弃）
                     * @param _sPDeduction 节省计划抵扣金额（已废弃）
                     * @deprecated
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * @deprecated
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率	
                     * @return OriginalCostWithSP 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率	
                     * 
                     */
                    std::string GetOriginalCostWithSP() const;

                    /**
                     * 设置节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率	
                     * @param _originalCostWithSP 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率	
                     * 
                     */
                    void SetOriginalCostWithSP(const std::string& _originalCostWithSP);

                    /**
                     * 判断参数 OriginalCostWithSP 是否已赋值
                     * @return OriginalCostWithSP 是否已赋值
                     * 
                     */
                    bool OriginalCostWithSPHasBeenSet() const;

                    /**
                     * 获取账单归属月
                     * @return BillMonth 账单归属月
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置账单归属月
                     * @param _billMonth 账单归属月
                     * 
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     * 
                     */
                    bool BillMonthHasBeenSet() const;

                private:

                    /**
                     * 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 计费模式：资源的计费模式，区分为包年包月和按量计费
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * 项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 地域：资源所属地域，如华南地区（广州）
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 可用区：资源所属可用区，如广州三区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID	
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 交易类型：如包年包月新购、包年包月续费、按量计费扣费等类型
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * 订单ID：包年包月计费模式下订购的订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 扣费时间：结算扣费时间
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 开始使用时间：产品服务开始使用时间
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * 结束使用时间：产品服务结束使用时间
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * 配置描述：该资源下的计费项名称和用量合并展示，仅在资源账单体现
                     */
                    std::string m_configDesc;
                    bool m_configDescHasBeenSet;

                    /**
                     * 扩展字段1：产品对应的扩展属性信息，仅在资源账单体现
                     */
                    std::string m_extendField1;
                    bool m_extendField1HasBeenSet;

                    /**
                     * 扩展字段2：产品对应的扩展属性信息，仅在资源账单体现
                     */
                    std::string m_extendField2;
                    bool m_extendField2HasBeenSet;

                    /**
                     * 原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 优惠类型
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * 优惠后总价
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 现金账户支出：通过现金账户支付的金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送账户支出：使用赠送金支付的金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 分成金账户支出：通过分成金账户支付的金额
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * 扩展字段3：产品对应的扩展属性信息，仅在资源账单体现
                     */
                    std::string m_extendField3;
                    bool m_extendField3HasBeenSet;

                    /**
                     * 扩展字段4：产品对应的扩展属性信息，仅在资源账单体现
                     */
                    std::string m_extendField4;
                    bool m_extendField4HasBeenSet;

                    /**
                     * 扩展字段5：产品对应的扩展属性信息，仅在资源账单体现
                     */
                    std::string m_extendField5;
                    bool m_extendField5HasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 使用者UIN：实际使用资源的账号 ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 产品编码
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 子产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额	
                     */
                    std::string m_originalCostWithRI;
                    bool m_originalCostWithRIHasBeenSet;

                    /**
                     * 节省计划抵扣金额（已废弃）
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率	
                     */
                    std::string m_originalCostWithSP;
                    bool m_originalCostWithSPHasBeenSet;

                    /**
                     * 账单归属月
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
