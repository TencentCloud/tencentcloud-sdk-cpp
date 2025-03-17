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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYRESOURCE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账账单按资源汇总明细
                */
                class AllocationSummaryByResource : public AbstractModel
                {
                public:
                    AllocationSummaryByResource();
                    ~AllocationSummaryByResource() = default;
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
                     * 获取支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @return PayerUin 支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     * @param _payerUin 支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
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
                     * 获取使用者 UIN：实际使用资源的账号 ID
                     * @return OwnerUin 使用者 UIN：实际使用资源的账号 ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置使用者 UIN：实际使用资源的账号 ID
                     * @param _ownerUin 使用者 UIN：实际使用资源的账号 ID
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
                     * 获取操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）
                     * @return OperateUin 操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）
                     * @param _operateUin 操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）
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
                     * 获取计费模式编码
                     * @return PayMode 计费模式编码
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费模式编码
                     * @param _payMode 计费模式编码
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
                     * 获取交易类型：明细交易类型
                     * @return ActionTypeName 交易类型：明细交易类型
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置交易类型：明细交易类型
                     * @param _actionTypeName 交易类型：明细交易类型
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
                     * 获取子产品名称：用户采购的具体产品细分类型
                     * @return ProductCodeName 子产品名称：用户采购的具体产品细分类型
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置子产品名称：用户采购的具体产品细分类型
                     * @param _productCodeName 子产品名称：用户采购的具体产品细分类型
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
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称：资源所属地域
                     * @return RegionName 地域名称：资源所属地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称：资源所属地域
                     * @param _regionName 地域名称：资源所属地域
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
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区：资源所属可用区
                     * @return ZoneName 可用区：资源所属可用区
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区：资源所属可用区
                     * @param _zoneName 可用区：资源所属可用区
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
                     * 获取实例类型编码
                     * @return InstanceType 实例类型编码
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型编码
                     * @param _instanceType 实例类型编码
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
                     * 获取实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”
                     * @return InstanceTypeName 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”
                     * @param _instanceTypeName 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”
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
                     * 获取资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
                     * @return ResourceId 资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
                     * @param _resourceId 资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
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
                     * 获取实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名
                     * @return ResourceName 实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名
                     * @param _resourceName 实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名
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
                     * 获取分账标签：资源绑定的标签
                     * @return Tag 分账标签：资源绑定的标签
                     * 
                     */
                    std::vector<BillTag> GetTag() const;

                    /**
                     * 设置分账标签：资源绑定的标签
                     * @param _tag 分账标签：资源绑定的标签
                     * 
                     */
                    void SetTag(const std::vector<BillTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊 
1 - 归集 
-1 -  未分配
                     * @return AllocationType 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊 
1 - 归集 
-1 -  未分配
                     * 
                     */
                    int64_t GetAllocationType() const;

                    /**
                     * 设置费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊 
1 - 归集 
-1 -  未分配
                     * @param _allocationType 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊 
1 - 归集 
-1 -  未分配
                     * 
                     */
                    void SetAllocationType(const int64_t& _allocationType);

                    /**
                     * 判断参数 AllocationType 是否已赋值
                     * @return AllocationType 是否已赋值
                     * 
                     */
                    bool AllocationTypeHasBeenSet() const;

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
                     * 获取预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * @return RiTimeSpan 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    std::string GetRiTimeSpan() const;

                    /**
                     * 设置预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * @param _riTimeSpan 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    void SetRiTimeSpan(const std::string& _riTimeSpan);

                    /**
                     * 判断参数 RiTimeSpan 是否已赋值
                     * @return RiTimeSpan 是否已赋值
                     * 
                     */
                    bool RiTimeSpanHasBeenSet() const;

                    /**
                     * 获取预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @return RiCost 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    std::string GetRiCost() const;

                    /**
                     * 设置预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @param _riCost 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    void SetRiCost(const std::string& _riCost);

                    /**
                     * 判断参数 RiCost 是否已赋值
                     * @return RiCost 是否已赋值
                     * 
                     */
                    bool RiCostHasBeenSet() const;

                    /**
                     * 获取优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @return RealTotalCost 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @param _realTotalCost 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
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
                     * 获取分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitItemId 分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSplitItemId() const;

                    /**
                     * 设置分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitItemId 分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSplitItemId(const std::string& _splitItemId);

                    /**
                     * 判断参数 SplitItemId 是否已赋值
                     * @return SplitItemId 是否已赋值
                     * @deprecated
                     */
                    bool SplitItemIdHasBeenSet() const;

                    /**
                     * 获取分拆项名称：涉及分拆产品的分拆后的分拆项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitItemName 分拆项名称：涉及分拆产品的分拆后的分拆项
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSplitItemName() const;

                    /**
                     * 设置分拆项名称：涉及分拆产品的分拆后的分拆项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitItemName 分拆项名称：涉及分拆产品的分拆后的分拆项
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSplitItemName(const std::string& _splitItemName);

                    /**
                     * 判断参数 SplitItemName 是否已赋值
                     * @return SplitItemName 是否已赋值
                     * @deprecated
                     */
                    bool SplitItemNameHasBeenSet() const;

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
                     * 获取国内国际编码
                     * @return RegionType 国内国际编码
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置国内国际编码
                     * @param _regionType 国内国际编码
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
                     * 获取国内国际：资源所属区域类型（国内、国际）
                     * @return RegionTypeName 国内国际：资源所属区域类型（国内、国际）
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置国内国际：资源所属区域类型（国内、国际）
                     * @param _regionTypeName 国内国际：资源所属区域类型（国内、国际）
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
                     * 获取配置描述：对应资源下各组件名称及用量（如组件为用量累加型计费则为合计用量）
                     * @return ComponentConfig 配置描述：对应资源下各组件名称及用量（如组件为用量累加型计费则为合计用量）
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置配置描述：对应资源下各组件名称及用量（如组件为用量累加型计费则为合计用量）
                     * @param _componentConfig 配置描述：对应资源下各组件名称及用量（如组件为用量累加型计费则为合计用量）
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
                     * 获取SPDeduction
                     * @return SPDeduction SPDeduction
                     * 
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置SPDeduction
                     * @param _sPDeduction SPDeduction
                     * 
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * 
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取账单月
                     * @return BillMonth 账单月
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置账单月
                     * @param _billMonth 账单月
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
                     * 支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 使用者 UIN：实际使用资源的账号 ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 计费模式编码
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 计费模式：资源的计费模式，区分为包年包月和按量计费
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * 交易类型编码
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 交易类型：明细交易类型
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

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
                     * 子产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品名称：用户采购的具体产品细分类型
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 地域ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称：资源所属地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区：资源所属可用区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例类型编码
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * 资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 分账标签：资源绑定的标签
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊 
1 - 归集 
-1 -  未分配
                     */
                    int64_t m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                    /**
                     * 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     */
                    std::string m_riTimeSpan;
                    bool m_riTimeSpanHasBeenSet;

                    /**
                     * 预留实例抵扣原价：本产品或服务使用预留实例抵扣的组件原价金额
                     */
                    std::string m_riCost;
                    bool m_riCostHasBeenSet;

                    /**
                     * 优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

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
                     * 分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_splitItemId;
                    bool m_splitItemIdHasBeenSet;

                    /**
                     * 分拆项名称：涉及分拆产品的分拆后的分拆项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_splitItemName;
                    bool m_splitItemNameHasBeenSet;

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
                     * 节省计划抵扣原价：节省计划抵扣原价 = 节省计划包抵扣面值 / 节省计划抵扣率
                     */
                    std::string m_sPCost;
                    bool m_sPCostHasBeenSet;

                    /**
                     * 国内国际编码
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 国内国际：资源所属区域类型（国内、国际）
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * 配置描述：对应资源下各组件名称及用量（如组件为用量累加型计费则为合计用量）
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * SPDeduction
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * 账单月
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYRESOURCE_H_
