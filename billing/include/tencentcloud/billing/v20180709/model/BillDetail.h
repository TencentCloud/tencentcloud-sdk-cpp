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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_

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
                * 账单明细数据对象
                */
                class BillDetail : public AbstractModel
                {
                public:
                    BillDetail();
                    ~BillDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品名称：用户所采购的各类云产品，例如：云服务器 CVM</p>
                     * @return BusinessCodeName <p>产品名称：用户所采购的各类云产品，例如：云服务器 CVM</p>
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置<p>产品名称：用户所采购的各类云产品，例如：云服务器 CVM</p>
                     * @param _businessCodeName <p>产品名称：用户所采购的各类云产品，例如：云服务器 CVM</p>
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
                     * 获取<p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
                     * @return ProductCodeName <p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置<p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
                     * @param _productCodeName <p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
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
                     * 获取<p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
                     * @return PayModeName <p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置<p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
                     * @param _payModeName <p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
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
                     * 获取<p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
                     * @return ProjectName <p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
                     * @param _projectName <p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
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
                     * 获取<p>地域：资源所属地域，如华南地区（广州）</p>
                     * @return RegionName <p>地域：资源所属地域，如华南地区（广州）</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域：资源所属地域，如华南地区（广州）</p>
                     * @param _regionName <p>地域：资源所属地域，如华南地区（广州）</p>
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
                     * 获取<p>可用区：资源所属可用区，如广州三区</p>
                     * @return ZoneName <p>可用区：资源所属可用区，如广州三区</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>可用区：资源所属可用区，如广州三区</p>
                     * @param _zoneName <p>可用区：资源所属可用区，如广州三区</p>
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
                     * 获取<p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * @return ResourceId <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * @param _resourceId <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
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
                     * 获取<p>资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空</p>
                     * @return ResourceName <p>资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空</p>
                     * @param _resourceName <p>资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空</p>
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
                     * 获取<p>交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型</p>
                     * @return ActionTypeName <p>交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型</p>
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置<p>交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型</p>
                     * @param _actionTypeName <p>交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型</p>
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
                     * 获取<p>订单ID：包年包月计费模式下对应子订单号。后付费计费模式下账单费用不存在订单概念，可忽略此参数。</p>
                     * @return OrderId <p>订单ID：包年包月计费模式下对应子订单号。后付费计费模式下账单费用不存在订单概念，可忽略此参数。</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单ID：包年包月计费模式下对应子订单号。后付费计费模式下账单费用不存在订单概念，可忽略此参数。</p>
                     * @param _orderId <p>订单ID：包年包月计费模式下对应子订单号。后付费计费模式下账单费用不存在订单概念，可忽略此参数。</p>
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
                     * 获取<p>交易ID：结算扣费单号</p>
                     * @return BillId <p>交易ID：结算扣费单号</p>
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置<p>交易ID：结算扣费单号</p>
                     * @param _billId <p>交易ID：结算扣费单号</p>
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
                     * 获取<p>扣费时间：结算扣费时间</p>
                     * @return PayTime <p>扣费时间：结算扣费时间</p>
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置<p>扣费时间：结算扣费时间</p>
                     * @param _payTime <p>扣费时间：结算扣费时间</p>
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
                     * 获取<p>开始使用时间：产品服务开始使用时间</p>
                     * @return FeeBeginTime <p>开始使用时间：产品服务开始使用时间</p>
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置<p>开始使用时间：产品服务开始使用时间</p>
                     * @param _feeBeginTime <p>开始使用时间：产品服务开始使用时间</p>
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
                     * 获取<p>结束使用时间：产品服务结束使用时间</p>
                     * @return FeeEndTime <p>结束使用时间：产品服务结束使用时间</p>
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置<p>结束使用时间：产品服务结束使用时间</p>
                     * @param _feeEndTime <p>结束使用时间：产品服务结束使用时间</p>
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
                     * 获取<p>组件列表</p>
                     * @return ComponentSet <p>组件列表</p>
                     * 
                     */
                    std::vector<BillDetailComponent> GetComponentSet() const;

                    /**
                     * 设置<p>组件列表</p>
                     * @param _componentSet <p>组件列表</p>
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
                     * 获取<p>支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * @return PayerUin <p>支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * @param _payerUin <p>支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
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
                     * 获取<p>使用者UIN：实际使用资源的账号 ID</p>
                     * @return OwnerUin <p>使用者UIN：实际使用资源的账号 ID</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>使用者UIN：实际使用资源的账号 ID</p>
                     * @param _ownerUin <p>使用者UIN：实际使用资源的账号 ID</p>
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
                     * 获取<p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * @return OperateUin <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     * @param _operateUin <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
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
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
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
                     * 获取<p>产品编码</p>
                     * @return BusinessCode <p>产品编码</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品编码</p>
                     * @param _businessCode <p>产品编码</p>
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
                     * 获取<p>子产品编码</p>
                     * @return ProductCode <p>子产品编码</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>子产品编码</p>
                     * @param _productCode <p>子产品编码</p>
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
                     * 获取<p>交易类型编码</p>
                     * @return ActionType <p>交易类型编码</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>交易类型编码</p>
                     * @param _actionType <p>交易类型编码</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息</p>
                     * @return PriceInfo <p>价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息</p>
                     * 
                     */
                    std::vector<std::string> GetPriceInfo() const;

                    /**
                     * 设置<p>价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息</p>
                     * @param _priceInfo <p>价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息</p>
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
                     * 获取<p>关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号</p>
                     * @return AssociatedOrder <p>关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号</p>
                     * 
                     */
                    BillDetailAssociatedOrder GetAssociatedOrder() const;

                    /**
                     * 设置<p>关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号</p>
                     * @param _associatedOrder <p>关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号</p>
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
                     * 获取<p>计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配</p>
                     * @return Formula <p>计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配</p>
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置<p>计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配</p>
                     * @param _formula <p>计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配</p>
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
                     * 获取<p>计费规则：各产品详细的计费规则官网说明链接</p>
                     * @return FormulaUrl <p>计费规则：各产品详细的计费规则官网说明链接</p>
                     * 
                     */
                    std::string GetFormulaUrl() const;

                    /**
                     * 设置<p>计费规则：各产品详细的计费规则官网说明链接</p>
                     * @param _formulaUrl <p>计费规则：各产品详细的计费规则官网说明链接</p>
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
                     * 获取<p>账单归属日</p>
                     * @return BillDay <p>账单归属日</p>
                     * 
                     */
                    std::string GetBillDay() const;

                    /**
                     * 设置<p>账单归属日</p>
                     * @param _billDay <p>账单归属日</p>
                     * 
                     */
                    void SetBillDay(const std::string& _billDay);

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

                    /**
                     * 获取<p>账单归属月</p>
                     * @return BillMonth <p>账单归属月</p>
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置<p>账单归属月</p>
                     * @param _billMonth <p>账单归属月</p>
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
                     * 获取<p>账单记录ID</p>
                     * @return Id <p>账单记录ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>账单记录ID</p>
                     * @param _id <p>账单记录ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>国内国际编码</p>
                     * @return RegionType <p>国内国际编码</p>
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置<p>国内国际编码</p>
                     * @param _regionType <p>国内国际编码</p>
                     * 
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取<p>国内国际：资源所属区域类型（国内、国际）</p>
                     * @return RegionTypeName <p>国内国际：资源所属区域类型（国内、国际）</p>
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置<p>国内国际：资源所属区域类型（国内、国际）</p>
                     * @param _regionTypeName <p>国内国际：资源所属区域类型（国内、国际）</p>
                     * 
                     */
                    void SetRegionTypeName(const std::string& _regionTypeName);

                    /**
                     * 判断参数 RegionTypeName 是否已赋值
                     * @return RegionTypeName 是否已赋值
                     * 
                     */
                    bool RegionTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息</p>
                     * @return ReserveDetail <p>备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息</p>
                     * 
                     */
                    std::string GetReserveDetail() const;

                    /**
                     * 设置<p>备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息</p>
                     * @param _reserveDetail <p>备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息</p>
                     * 
                     */
                    void SetReserveDetail(const std::string& _reserveDetail);

                    /**
                     * 判断参数 ReserveDetail 是否已赋值
                     * @return ReserveDetail 是否已赋值
                     * 
                     */
                    bool ReserveDetailHasBeenSet() const;

                    /**
                     * 获取<p>优惠对象</p>
                     * @return DiscountObject <p>优惠对象</p>
                     * 
                     */
                    std::string GetDiscountObject() const;

                    /**
                     * 设置<p>优惠对象</p>
                     * @param _discountObject <p>优惠对象</p>
                     * 
                     */
                    void SetDiscountObject(const std::string& _discountObject);

                    /**
                     * 判断参数 DiscountObject 是否已赋值
                     * @return DiscountObject 是否已赋值
                     * 
                     */
                    bool DiscountObjectHasBeenSet() const;

                    /**
                     * 获取<p>优惠类型</p>
                     * @return DiscountType <p>优惠类型</p>
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置<p>优惠类型</p>
                     * @param _discountType <p>优惠类型</p>
                     * 
                     */
                    void SetDiscountType(const std::string& _discountType);

                    /**
                     * 判断参数 DiscountType 是否已赋值
                     * @return DiscountType 是否已赋值
                     * 
                     */
                    bool DiscountTypeHasBeenSet() const;

                    /**
                     * 获取<p>优惠内容</p>
                     * @return DiscountContent <p>优惠内容</p>
                     * 
                     */
                    std::string GetDiscountContent() const;

                    /**
                     * 设置<p>优惠内容</p>
                     * @param _discountContent <p>优惠内容</p>
                     * 
                     */
                    void SetDiscountContent(const std::string& _discountContent);

                    /**
                     * 判断参数 DiscountContent 是否已赋值
                     * @return DiscountContent 是否已赋值
                     * 
                     */
                    bool DiscountContentHasBeenSet() const;

                    /**
                     * 获取<p>资源扩展信息：体现资源维度的扩展信息，与L2账单的扩展字段信息保持一致。</p>
                     * @return ExtendField <p>资源扩展信息：体现资源维度的扩展信息，与L2账单的扩展字段信息保持一致。</p>
                     * 
                     */
                    std::string GetExtendField() const;

                    /**
                     * 设置<p>资源扩展信息：体现资源维度的扩展信息，与L2账单的扩展字段信息保持一致。</p>
                     * @param _extendField <p>资源扩展信息：体现资源维度的扩展信息，与L2账单的扩展字段信息保持一致。</p>
                     * 
                     */
                    void SetExtendField(const std::string& _extendField);

                    /**
                     * 判断参数 ExtendField 是否已赋值
                     * @return ExtendField 是否已赋值
                     * 
                     */
                    bool ExtendFieldHasBeenSet() const;

                private:

                    /**
                     * <p>产品名称：用户所采购的各类云产品，例如：云服务器 CVM</p>
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * <p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * <p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * <p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>地域：资源所属地域，如华南地区（广州）</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>可用区：资源所属可用区，如广州三区</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源别名：用户在控制台为资源设置的名称，如果未设置，则默认为空</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>交易类型，如包年包月新购、包年包月续费、按量计费扣费等类型</p>
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * <p>订单ID：包年包月计费模式下对应子订单号。后付费计费模式下账单费用不存在订单概念，可忽略此参数。</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>交易ID：结算扣费单号</p>
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * <p>扣费时间：结算扣费时间</p>
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * <p>开始使用时间：产品服务开始使用时间</p>
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * <p>结束使用时间：产品服务结束使用时间</p>
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * <p>组件列表</p>
                     */
                    std::vector<BillDetailComponent> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * <p>支付者UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>使用者UIN：实际使用资源的账号 ID</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>操作者UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的 ID 或者角色 ID ）</p>
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>产品编码</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>子产品编码</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>交易类型编码</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息</p>
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * <p>关联交易单据ID：和本笔交易关联单据 ID，如，冲销订单，记录原订单、重结订单，退费单记录对应的原购买订单号</p>
                     */
                    BillDetailAssociatedOrder m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * <p>计算说明：特殊交易类型计费结算的详细计算说明，如退费及变配</p>
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * <p>计费规则：各产品详细的计费规则官网说明链接</p>
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                    /**
                     * <p>账单归属日</p>
                     */
                    std::string m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * <p>账单归属月</p>
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * <p>账单记录ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>国内国际编码</p>
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * <p>国内国际：资源所属区域类型（国内、国际）</p>
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * <p>备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息</p>
                     */
                    std::string m_reserveDetail;
                    bool m_reserveDetailHasBeenSet;

                    /**
                     * <p>优惠对象</p>
                     */
                    std::string m_discountObject;
                    bool m_discountObjectHasBeenSet;

                    /**
                     * <p>优惠类型</p>
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                    /**
                     * <p>优惠内容</p>
                     */
                    std::string m_discountContent;
                    bool m_discountContentHasBeenSet;

                    /**
                     * <p>资源扩展信息：体现资源维度的扩展信息，与L2账单的扩展字段信息保持一致。</p>
                     */
                    std::string m_extendField;
                    bool m_extendFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_
