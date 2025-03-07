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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillDetailComponent.h>
#include <tencentcloud/billing/v20180709/model/BillTagInfo.h>
#include <tencentcloud/billing/v20180709/model/BillDetailAssociatedOrder.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 经销账单明细数据对象
                */
                class DistributionBillDetail : public AbstractModel
                {
                public:
                    DistributionBillDetail();
                    ~DistributionBillDetail() = default;
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
                     * 获取交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型
                     * @return ActionTypeName 交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型
                     * @param _actionTypeName 交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型
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
                     * 获取交易ID：结算扣费单号
                     * @return BillId 交易ID：结算扣费单号
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置交易ID：结算扣费单号
                     * @param _billId 交易ID：结算扣费单号
                     * 
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

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
                     * 获取组件列表
                     * @return ComponentSet 组件列表
                     * 
                     */
                    std::vector<BillDetailComponent> GetComponentSet() const;

                    /**
                     * 设置组件列表
                     * @param _componentSet 组件列表
                     * 
                     */
                    void SetComponentSet(const std::vector<BillDetailComponent>& _componentSet);

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

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
                     * 获取交易类型编码
                     * @return ActionType 交易类型编码
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置交易类型编码
                     * @param _actionType 交易类型编码
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     * @return PriceInfo 价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     * 
                     */
                    std::vector<std::string> GetPriceInfo() const;

                    /**
                     * 设置价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     * @param _priceInfo 价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     * 
                     */
                    void SetPriceInfo(const std::vector<std::string>& _priceInfo);

                    /**
                     * 判断参数 PriceInfo 是否已赋值
                     * @return PriceInfo 是否已赋值
                     * 
                     */
                    bool PriceInfoHasBeenSet() const;

                    /**
                     * 获取关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号
                     * @return AssociatedOrder 关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号
                     * 
                     */
                    BillDetailAssociatedOrder GetAssociatedOrder() const;

                    /**
                     * 设置关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号
                     * @param _associatedOrder 关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号
                     * 
                     */
                    void SetAssociatedOrder(const BillDetailAssociatedOrder& _associatedOrder);

                    /**
                     * 判断参数 AssociatedOrder 是否已赋值
                     * @return AssociatedOrder 是否已赋值
                     * 
                     */
                    bool AssociatedOrderHasBeenSet() const;

                    /**
                     * 获取计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * @return Formula 计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * @param _formula 计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * 
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取计费规则：各产品详细的计费规则官网说明链接
                     * @return FormulaUrl 计费规则：各产品详细的计费规则官网说明链接
                     * 
                     */
                    std::string GetFormulaUrl() const;

                    /**
                     * 设置计费规则：各产品详细的计费规则官网说明链接
                     * @param _formulaUrl 计费规则：各产品详细的计费规则官网说明链接
                     * 
                     */
                    void SetFormulaUrl(const std::string& _formulaUrl);

                    /**
                     * 判断参数 FormulaUrl 是否已赋值
                     * @return FormulaUrl 是否已赋值
                     * 
                     */
                    bool FormulaUrlHasBeenSet() const;

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

                    /**
                     * 获取账单归属日
                     * @return BillDay 账单归属日
                     * 
                     */
                    std::string GetBillDay() const;

                    /**
                     * 设置账单归属日
                     * @param _billDay 账单归属日
                     * 
                     */
                    void SetBillDay(const std::string& _billDay);

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

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
                     * 交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * 订单ID：包年包月计费模式下订购的订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 交易ID：结算扣费单号
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

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
                     * 组件列表
                     */
                    std::vector<BillDetailComponent> m_componentSet;
                    bool m_componentSetHasBeenSet;

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
                     * 标签信息
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

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
                     * 交易类型编码
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 地域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * 关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号
                     */
                    BillDetailAssociatedOrder m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * 计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * 计费规则：各产品详细的计费规则官网说明链接
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                    /**
                     * 账单归属月
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * 账单归属日
                     */
                    std::string m_billDay;
                    bool m_billDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_
