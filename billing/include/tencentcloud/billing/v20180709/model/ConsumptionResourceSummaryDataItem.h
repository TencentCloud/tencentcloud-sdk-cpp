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
                     * @return RealCost 折前价
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置折前价
                     * @param _realCost 折前价
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
                     * @return FeeBeginTime 费用起始时间
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置费用起始时间
                     * @param _feeBeginTime 费用起始时间
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
                     * @return FeeEndTime 费用结束时间
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置费用结束时间
                     * @param _feeEndTime 费用结束时间
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
                     * @return DayDiff 天数
                     * 
                     */
                    std::string GetDayDiff() const;

                    /**
                     * 设置天数
                     * @param _dayDiff 天数
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
                     * @return DailyTotalCost 每日消耗
                     * 
                     */
                    std::string GetDailyTotalCost() const;

                    /**
                     * 设置每日消耗
                     * @param _dailyTotalCost 每日消耗
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
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
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
                     * 获取地域类型
                     * @return RegionType 地域类型
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置地域类型
                     * @param _regionType 地域类型
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
                     * 获取地域类型名称
                     * @return RegionTypeName 地域类型名称
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置地域类型名称
                     * @param _regionTypeName 地域类型名称
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
                     * 获取扩展字段1
                     * @return Extend1 扩展字段1
                     * 
                     */
                    std::string GetExtend1() const;

                    /**
                     * 设置扩展字段1
                     * @param _extend1 扩展字段1
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
                     * 获取扩展字段2
                     * @return Extend2 扩展字段2
                     * 
                     */
                    std::string GetExtend2() const;

                    /**
                     * 设置扩展字段2
                     * @param _extend2 扩展字段2
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
                     * 获取扩展字段3
                     * @return Extend3 扩展字段3
                     * 
                     */
                    std::string GetExtend3() const;

                    /**
                     * 设置扩展字段3
                     * @param _extend3 扩展字段3
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
                     * 获取扩展字段4
                     * @return Extend4 扩展字段4
                     * 
                     */
                    std::string GetExtend4() const;

                    /**
                     * 设置扩展字段4
                     * @param _extend4 扩展字段4
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
                     * 获取扩展字段5
                     * @return Extend5 扩展字段5
                     * 
                     */
                    std::string GetExtend5() const;

                    /**
                     * 设置扩展字段5
                     * @param _extend5 扩展字段5
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取实例类型名称
                     * @return InstanceTypeName 实例类型名称
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置实例类型名称
                     * @param _instanceTypeName 实例类型名称
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
                     * 获取配置描述
                     * @return ComponentConfig 配置描述
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置配置描述
                     * @param _componentConfig 配置描述
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
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 费用起始时间
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * 费用结束时间
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * 天数
                     */
                    std::string m_dayDiff;
                    bool m_dayDiffHasBeenSet;

                    /**
                     * 每日消耗
                     */
                    std::string m_dailyTotalCost;
                    bool m_dailyTotalCostHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 代金券
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 赠送金
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 分成金
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

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
                     * 子产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品名称：用户采购的具体产品细分类型，例如：云服务器 CVM-标准型 S1
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 地域类型
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 地域类型名称
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * 扩展字段1
                     */
                    std::string m_extend1;
                    bool m_extend1HasBeenSet;

                    /**
                     * 扩展字段2
                     */
                    std::string m_extend2;
                    bool m_extend2HasBeenSet;

                    /**
                     * 扩展字段3
                     */
                    std::string m_extend3;
                    bool m_extend3HasBeenSet;

                    /**
                     * 扩展字段4
                     */
                    std::string m_extend4;
                    bool m_extend4HasBeenSet;

                    /**
                     * 扩展字段5
                     */
                    std::string m_extend5;
                    bool m_extend5HasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例类型名称
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * 扣费时间：结算扣费时间
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 可用区：资源所属可用区，如广州三区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 配置描述
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
