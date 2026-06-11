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
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>资源名称</p>
                     * @return ResourceName <p>资源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源名称</p>
                     * @param _resourceName <p>资源名称</p>
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
                     * 获取<p>现金花费</p>
                     * @return CashPayAmount <p>现金花费</p>
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置<p>现金花费</p>
                     * @param _cashPayAmount <p>现金花费</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>项目名称</p>
                     * @return ProjectName <p>项目名称</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _projectName <p>项目名称</p>
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
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
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
                     * 获取<p>付费模式名称</p>
                     * @return PayModeName <p>付费模式名称</p>
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置<p>付费模式名称</p>
                     * @param _payModeName <p>付费模式名称</p>
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
                     * 获取<p>产品名称代码</p>
                     * @return BusinessCode <p>产品名称代码</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品名称代码</p>
                     * @param _businessCode <p>产品名称代码</p>
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
                     * 获取<p>产品名称</p>
                     * @return BusinessCodeName <p>产品名称</p>
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _businessCodeName <p>产品名称</p>
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
                     * 获取<p>消耗类型</p>
                     * @return ConsumptionTypeName <p>消耗类型</p>
                     * 
                     */
                    std::string GetConsumptionTypeName() const;

                    /**
                     * 设置<p>消耗类型</p>
                     * @param _consumptionTypeName <p>消耗类型</p>
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
                     * 获取<p>折前价</p>
                     * @return RealCost <p>折前价</p>
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置<p>折前价</p>
                     * @param _realCost <p>折前价</p>
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
                     * 获取<p>费用起始时间</p>
                     * @return FeeBeginTime <p>费用起始时间</p>
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置<p>费用起始时间</p>
                     * @param _feeBeginTime <p>费用起始时间</p>
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
                     * 获取<p>费用结束时间</p>
                     * @return FeeEndTime <p>费用结束时间</p>
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置<p>费用结束时间</p>
                     * @param _feeEndTime <p>费用结束时间</p>
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
                     * 获取<p>天数</p>
                     * @return DayDiff <p>天数</p>
                     * 
                     */
                    std::string GetDayDiff() const;

                    /**
                     * 设置<p>天数</p>
                     * @param _dayDiff <p>天数</p>
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
                     * 获取<p>每日消耗</p>
                     * @return DailyTotalCost <p>每日消耗</p>
                     * 
                     */
                    std::string GetDailyTotalCost() const;

                    /**
                     * 设置<p>每日消耗</p>
                     * @param _dailyTotalCost <p>每日消耗</p>
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
                     * 获取<p>订单号</p>
                     * @return OrderId <p>订单号</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单号</p>
                     * @param _orderId <p>订单号</p>
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
                     * 获取<p>地域类型</p>
                     * @return RegionType <p>地域类型</p>
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置<p>地域类型</p>
                     * @param _regionType <p>地域类型</p>
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
                     * 获取<p>地域类型名称</p>
                     * @return RegionTypeName <p>地域类型名称</p>
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置<p>地域类型名称</p>
                     * @param _regionTypeName <p>地域类型名称</p>
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
                     * 获取<p>扩展字段1</p>
                     * @return Extend1 <p>扩展字段1</p>
                     * 
                     */
                    std::string GetExtend1() const;

                    /**
                     * 设置<p>扩展字段1</p>
                     * @param _extend1 <p>扩展字段1</p>
                     * 
                     */
                    void SetExtend1(const std::string& _extend1);

                    /**
                     * 判断参数 Extend1 是否已赋值
                     * @return Extend1 是否已赋值
                     * 
                     */
                    bool Extend1HasBeenSet() const;

                    /**
                     * 获取<p>扩展字段2</p>
                     * @return Extend2 <p>扩展字段2</p>
                     * 
                     */
                    std::string GetExtend2() const;

                    /**
                     * 设置<p>扩展字段2</p>
                     * @param _extend2 <p>扩展字段2</p>
                     * 
                     */
                    void SetExtend2(const std::string& _extend2);

                    /**
                     * 判断参数 Extend2 是否已赋值
                     * @return Extend2 是否已赋值
                     * 
                     */
                    bool Extend2HasBeenSet() const;

                    /**
                     * 获取<p>扩展字段3</p>
                     * @return Extend3 <p>扩展字段3</p>
                     * 
                     */
                    std::string GetExtend3() const;

                    /**
                     * 设置<p>扩展字段3</p>
                     * @param _extend3 <p>扩展字段3</p>
                     * 
                     */
                    void SetExtend3(const std::string& _extend3);

                    /**
                     * 判断参数 Extend3 是否已赋值
                     * @return Extend3 是否已赋值
                     * 
                     */
                    bool Extend3HasBeenSet() const;

                    /**
                     * 获取<p>扩展字段4</p>
                     * @return Extend4 <p>扩展字段4</p>
                     * 
                     */
                    std::string GetExtend4() const;

                    /**
                     * 设置<p>扩展字段4</p>
                     * @param _extend4 <p>扩展字段4</p>
                     * 
                     */
                    void SetExtend4(const std::string& _extend4);

                    /**
                     * 判断参数 Extend4 是否已赋值
                     * @return Extend4 是否已赋值
                     * 
                     */
                    bool Extend4HasBeenSet() const;

                    /**
                     * 获取<p>扩展字段5</p>
                     * @return Extend5 <p>扩展字段5</p>
                     * 
                     */
                    std::string GetExtend5() const;

                    /**
                     * 设置<p>扩展字段5</p>
                     * @param _extend5 <p>扩展字段5</p>
                     * 
                     */
                    void SetExtend5(const std::string& _extend5);

                    /**
                     * 判断参数 Extend5 是否已赋值
                     * @return Extend5 是否已赋值
                     * 
                     */
                    bool Extend5HasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
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
                     * 获取<p>实例类型名称</p>
                     * @return InstanceTypeName <p>实例类型名称</p>
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置<p>实例类型名称</p>
                     * @param _instanceTypeName <p>实例类型名称</p>
                     * 
                     */
                    void SetInstanceTypeName(const std::string& _instanceTypeName);

                    /**
                     * 判断参数 InstanceTypeName 是否已赋值
                     * @return InstanceTypeName 是否已赋值
                     * 
                     */
                    bool InstanceTypeNameHasBeenSet() const;

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
                     * 获取<p>配置描述</p>
                     * @return ComponentConfig <p>配置描述</p>
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置<p>配置描述</p>
                     * @param _componentConfig <p>配置描述</p>
                     * 
                     */
                    void SetComponentConfig(const std::string& _componentConfig);

                    /**
                     * 判断参数 ComponentConfig 是否已赋值
                     * @return ComponentConfig 是否已赋值
                     * 
                     */
                    bool ComponentConfigHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>折后总价</p>
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * <p>现金花费</p>
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

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
                     * <p>付费模式</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>付费模式名称</p>
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * <p>产品名称代码</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * <p>消耗类型</p>
                     */
                    std::string m_consumptionTypeName;
                    bool m_consumptionTypeNameHasBeenSet;

                    /**
                     * <p>折前价</p>
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * <p>费用起始时间</p>
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * <p>费用结束时间</p>
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * <p>天数</p>
                     */
                    std::string m_dayDiff;
                    bool m_dayDiffHasBeenSet;

                    /**
                     * <p>每日消耗</p>
                     */
                    std::string m_dailyTotalCost;
                    bool m_dailyTotalCostHasBeenSet;

                    /**
                     * <p>订单号</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

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
                     * <p>子产品编码</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1</p>
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * <p>地域类型</p>
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * <p>地域类型名称</p>
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * <p>扩展字段1</p>
                     */
                    std::string m_extend1;
                    bool m_extend1HasBeenSet;

                    /**
                     * <p>扩展字段2</p>
                     */
                    std::string m_extend2;
                    bool m_extend2HasBeenSet;

                    /**
                     * <p>扩展字段3</p>
                     */
                    std::string m_extend3;
                    bool m_extend3HasBeenSet;

                    /**
                     * <p>扩展字段4</p>
                     */
                    std::string m_extend4;
                    bool m_extend4HasBeenSet;

                    /**
                     * <p>扩展字段5</p>
                     */
                    std::string m_extend5;
                    bool m_extend5HasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例类型名称</p>
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * <p>扣费时间：结算扣费时间</p>
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * <p>可用区：资源所属可用区，如广州三区</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>配置描述</p>
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
