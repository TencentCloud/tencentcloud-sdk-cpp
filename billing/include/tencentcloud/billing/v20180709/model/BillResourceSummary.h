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
                     * 获取产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     * @return BusinessCodeName 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     * @param BusinessCodeName 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取子产品：云产品子类，如云服务器CVM-标准型S1， 当没有获取到子产品名称时，返回"-"
                     * @return ProductCodeName 子产品：云产品子类，如云服务器CVM-标准型S1， 当没有获取到子产品名称时，返回"-"
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置子产品：云产品子类，如云服务器CVM-标准型S1， 当没有获取到子产品名称时，返回"-"
                     * @param ProductCodeName 子产品：云产品子类，如云服务器CVM-标准型S1， 当没有获取到子产品名称时，返回"-"
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取计费模式：包年包月和按量计费
                     * @return PayModeName 计费模式：包年包月和按量计费
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置计费模式：包年包月和按量计费
                     * @param PayModeName 计费模式：包年包月和按量计费
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     */
                    bool PayModeNameHasBeenSet() const;

                    /**
                     * 获取项目
                     * @return ProjectName 项目
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目
                     * @param ProjectName 项目
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return RegionName 地域
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域
                     * @param RegionName 地域
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return ZoneName 可用区
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区
                     * @param ZoneName 可用区
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取资源实例ID
                     * @return ResourceId 资源实例ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源实例ID
                     * @param ResourceId 资源实例ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源实例名称
                     * @return ResourceName 资源实例名称
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源实例名称
                     * @param ResourceName 资源实例名称
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型
                     * @return ActionTypeName 交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型
                     * @param ActionTypeName 交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     */
                    bool ActionTypeNameHasBeenSet() const;

                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param OrderId 订单ID
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取扣费时间
                     * @return PayTime 扣费时间
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置扣费时间
                     * @param PayTime 扣费时间
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取开始使用时间
                     * @return FeeBeginTime 开始使用时间
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置开始使用时间
                     * @param FeeBeginTime 开始使用时间
                     */
                    void SetFeeBeginTime(const std::string& _feeBeginTime);

                    /**
                     * 判断参数 FeeBeginTime 是否已赋值
                     * @return FeeBeginTime 是否已赋值
                     */
                    bool FeeBeginTimeHasBeenSet() const;

                    /**
                     * 获取结束使用时间
                     * @return FeeEndTime 结束使用时间
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置结束使用时间
                     * @param FeeEndTime 结束使用时间
                     */
                    void SetFeeEndTime(const std::string& _feeEndTime);

                    /**
                     * 判断参数 FeeEndTime 是否已赋值
                     * @return FeeEndTime 是否已赋值
                     */
                    bool FeeEndTimeHasBeenSet() const;

                    /**
                     * 获取配置描述
                     * @return ConfigDesc 配置描述
                     */
                    std::string GetConfigDesc() const;

                    /**
                     * 设置配置描述
                     * @param ConfigDesc 配置描述
                     */
                    void SetConfigDesc(const std::string& _configDesc);

                    /**
                     * 判断参数 ConfigDesc 是否已赋值
                     * @return ConfigDesc 是否已赋值
                     */
                    bool ConfigDescHasBeenSet() const;

                    /**
                     * 获取扩展字段1
                     * @return ExtendField1 扩展字段1
                     */
                    std::string GetExtendField1() const;

                    /**
                     * 设置扩展字段1
                     * @param ExtendField1 扩展字段1
                     */
                    void SetExtendField1(const std::string& _extendField1);

                    /**
                     * 判断参数 ExtendField1 是否已赋值
                     * @return ExtendField1 是否已赋值
                     */
                    bool ExtendField1HasBeenSet() const;

                    /**
                     * 获取扩展字段2
                     * @return ExtendField2 扩展字段2
                     */
                    std::string GetExtendField2() const;

                    /**
                     * 设置扩展字段2
                     * @param ExtendField2 扩展字段2
                     */
                    void SetExtendField2(const std::string& _extendField2);

                    /**
                     * 判断参数 ExtendField2 是否已赋值
                     * @return ExtendField2 是否已赋值
                     */
                    bool ExtendField2HasBeenSet() const;

                    /**
                     * 获取原价，单位为元
                     * @return TotalCost 原价，单位为元
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置原价，单位为元
                     * @param TotalCost 原价，单位为元
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取折扣率
当聚合之后折扣不唯一或者合同价的情况下，返回“-”
                     * @return Discount 折扣率
当聚合之后折扣不唯一或者合同价的情况下，返回“-”
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣率
当聚合之后折扣不唯一或者合同价的情况下，返回“-”
                     * @param Discount 折扣率
当聚合之后折扣不唯一或者合同价的情况下，返回“-”
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取优惠类型
                     * @return ReduceType 优惠类型
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置优惠类型
                     * @param ReduceType 优惠类型
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取优惠后总价，单位为元
                     * @return RealTotalCost 优惠后总价，单位为元
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置优惠后总价，单位为元
                     * @param RealTotalCost 优惠后总价，单位为元
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取代金券支付金额，单位为元
                     * @return VoucherPayAmount 代金券支付金额，单位为元
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券支付金额，单位为元
                     * @param VoucherPayAmount 代金券支付金额，单位为元
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取现金账户支付金额，单位为元
                     * @return CashPayAmount 现金账户支付金额，单位为元
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金账户支付金额，单位为元
                     * @param CashPayAmount 现金账户支付金额，单位为元
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送账户支付金额，单位为元
                     * @return IncentivePayAmount 赠送账户支付金额，单位为元
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支付金额，单位为元
                     * @param IncentivePayAmount 赠送账户支付金额，单位为元
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取扩展字段3
                     * @return ExtendField3 扩展字段3
                     */
                    std::string GetExtendField3() const;

                    /**
                     * 设置扩展字段3
                     * @param ExtendField3 扩展字段3
                     */
                    void SetExtendField3(const std::string& _extendField3);

                    /**
                     * 判断参数 ExtendField3 是否已赋值
                     * @return ExtendField3 是否已赋值
                     */
                    bool ExtendField3HasBeenSet() const;

                    /**
                     * 获取扩展字段4
                     * @return ExtendField4 扩展字段4
                     */
                    std::string GetExtendField4() const;

                    /**
                     * 设置扩展字段4
                     * @param ExtendField4 扩展字段4
                     */
                    void SetExtendField4(const std::string& _extendField4);

                    /**
                     * 判断参数 ExtendField4 是否已赋值
                     * @return ExtendField4 是否已赋值
                     */
                    bool ExtendField4HasBeenSet() const;

                    /**
                     * 获取扩展字段5
                     * @return ExtendField5 扩展字段5
                     */
                    std::string GetExtendField5() const;

                    /**
                     * 设置扩展字段5
                     * @param ExtendField5 扩展字段5
                     */
                    void SetExtendField5(const std::string& _extendField5);

                    /**
                     * 判断参数 ExtendField5 是否已赋值
                     * @return ExtendField5 是否已赋值
                     */
                    bool ExtendField5HasBeenSet() const;

                    /**
                     * 获取Tag 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags Tag 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置Tag 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags Tag 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<BillTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取付款方uin
                     * @return PayerUin 付款方uin
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置付款方uin
                     * @param PayerUin 付款方uin
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取资源所有者uin,无值则返回"-"
                     * @return OwnerUin 资源所有者uin,无值则返回"-"
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置资源所有者uin,无值则返回"-"
                     * @param OwnerUin 资源所有者uin,无值则返回"-"
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取操作者uin,无值则返回"-"
                     * @return OperateUin 操作者uin,无值则返回"-"
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置操作者uin,无值则返回"-"
                     * @param OperateUin 操作者uin,无值则返回"-"
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取商品名称代码
                     * @return BusinessCode 商品名称代码
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置商品名称代码
                     * @param BusinessCode 商品名称代码
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取子商品名称代码
                     * @return ProductCode 子商品名称代码
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置子商品名称代码
                     * @param ProductCode 子商品名称代码
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取区域ID
                     * @return RegionId 区域ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置区域ID
                     * @param RegionId 区域ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 子产品：云产品子类，如云服务器CVM-标准型S1， 当没有获取到子产品名称时，返回"-"
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 计费模式：包年包月和按量计费
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * 项目
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源实例名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 交易类型：包年包月新购/续费/升降配/退款、按量计费扣费、调账补偿/扣费等类型
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 扣费时间
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 开始使用时间
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * 结束使用时间
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * 配置描述
                     */
                    std::string m_configDesc;
                    bool m_configDescHasBeenSet;

                    /**
                     * 扩展字段1
                     */
                    std::string m_extendField1;
                    bool m_extendField1HasBeenSet;

                    /**
                     * 扩展字段2
                     */
                    std::string m_extendField2;
                    bool m_extendField2HasBeenSet;

                    /**
                     * 原价，单位为元
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 折扣率
当聚合之后折扣不唯一或者合同价的情况下，返回“-”
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 优惠类型
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * 优惠后总价，单位为元
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 代金券支付金额，单位为元
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 现金账户支付金额，单位为元
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送账户支付金额，单位为元
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 扩展字段3
                     */
                    std::string m_extendField3;
                    bool m_extendField3HasBeenSet;

                    /**
                     * 扩展字段4
                     */
                    std::string m_extendField4;
                    bool m_extendField4HasBeenSet;

                    /**
                     * 扩展字段5
                     */
                    std::string m_extendField5;
                    bool m_extendField5HasBeenSet;

                    /**
                     * Tag 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 付款方uin
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 资源所有者uin,无值则返回"-"
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 操作者uin,无值则返回"-"
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 商品名称代码
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 子商品名称代码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 区域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
