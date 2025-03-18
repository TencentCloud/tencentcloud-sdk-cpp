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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONDETAIL_H_

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
                * 分账账单明细
                */
                class AllocationDetail : public AbstractModel
                {
                public:
                    AllocationDetail();
                    ~AllocationDetail() = default;
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
                     * 获取订单 ID：包年包月计费模式下订购的订单号

                     * @return OrderId 订单 ID：包年包月计费模式下订购的订单号

                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单 ID：包年包月计费模式下订购的订单号

                     * @param _orderId 订单 ID：包年包月计费模式下订购的订单号

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
                     * 获取交易 ID：结算扣费单号
                     * @return BillId 交易 ID：结算扣费单号
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置交易 ID：结算扣费单号
                     * @param _billId 交易 ID：结算扣费单号
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
                     * 获取组件类型编码
                     * @return ComponentCode 组件类型编码
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置组件类型编码
                     * @param _componentCode 组件类型编码
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取组件类型：用户购买的产品或服务对应的组件大类
                     * @return ComponentCodeName 组件类型：用户购买的产品或服务对应的组件大类
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置组件类型：用户购买的产品或服务对应的组件大类
                     * @param _componentCodeName 组件类型：用户购买的产品或服务对应的组件大类
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取组件刊例价：组件的官网原始单价（如客户享受一口价/合同价则默认不展示）
                     * @return SinglePrice 组件刊例价：组件的官网原始单价（如客户享受一口价/合同价则默认不展示）
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置组件刊例价：组件的官网原始单价（如客户享受一口价/合同价则默认不展示）
                     * @param _singlePrice 组件刊例价：组件的官网原始单价（如客户享受一口价/合同价则默认不展示）
                     * 
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     * 
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * @return ContractPrice 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * 
                     */
                    std::string GetContractPrice() const;

                    /**
                     * 设置组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * @param _contractPrice 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * 
                     */
                    void SetContractPrice(const std::string& _contractPrice);

                    /**
                     * 判断参数 ContractPrice 是否已赋值
                     * @return ContractPrice 是否已赋值
                     * 
                     */
                    bool ContractPriceHasBeenSet() const;

                    /**
                     * 获取组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * @return SinglePriceUnit 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * 
                     */
                    std::string GetSinglePriceUnit() const;

                    /**
                     * 设置组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * @param _singlePriceUnit 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * 
                     */
                    void SetSinglePriceUnit(const std::string& _singlePriceUnit);

                    /**
                     * 判断参数 SinglePriceUnit 是否已赋值
                     * @return SinglePriceUnit 是否已赋值
                     * 
                     */
                    bool SinglePriceUnitHasBeenSet() const;

                    /**
                     * 获取组件用量：该组件实际结算用量，组件用量=组件原始用量-抵扣用量（含资源包）
                     * @return UsedAmount 组件用量：该组件实际结算用量，组件用量=组件原始用量-抵扣用量（含资源包）
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置组件用量：该组件实际结算用量，组件用量=组件原始用量-抵扣用量（含资源包）
                     * @param _usedAmount 组件用量：该组件实际结算用量，组件用量=组件原始用量-抵扣用量（含资源包）
                     * 
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取组件用量单位：组件用量对应的单位
                     * @return UsedAmountUnit 组件用量单位：组件用量对应的单位
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置组件用量单位：组件用量对应的单位
                     * @param _usedAmountUnit 组件用量单位：组件用量对应的单位
                     * 
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     * 
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取使用时长：资源使用的时长，组件用量=组件原始使用时长-抵扣时长（含资源包）
                     * @return TimeSpan 使用时长：资源使用的时长，组件用量=组件原始使用时长-抵扣时长（含资源包）
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置使用时长：资源使用的时长，组件用量=组件原始使用时长-抵扣时长（含资源包）
                     * @param _timeSpan 使用时长：资源使用的时长，组件用量=组件原始使用时长-抵扣时长（含资源包）
                     * 
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时长单位：资源使用时长的单位
                     * @return TimeUnit 时长单位：资源使用时长的单位
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时长单位：资源使用时长的单位
                     * @param _timeUnit 时长单位：资源使用时长的单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息
                     * @return ReserveDetail 备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息
                     * 
                     */
                    std::string GetReserveDetail() const;

                    /**
                     * 设置备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息
                     * @param _reserveDetail 备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息
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
                     * 获取分拆项用量/时长占比：分拆项用量（时长）占比，分拆项用量（时长）/ 拆分前合计用量（时长）
                     * @return SplitRatio 分拆项用量/时长占比：分拆项用量（时长）占比，分拆项用量（时长）/ 拆分前合计用量（时长）
                     * 
                     */
                    std::string GetSplitRatio() const;

                    /**
                     * 设置分拆项用量/时长占比：分拆项用量（时长）占比，分拆项用量（时长）/ 拆分前合计用量（时长）
                     * @param _splitRatio 分拆项用量/时长占比：分拆项用量（时长）占比，分拆项用量（时长）/ 拆分前合计用量（时长）
                     * 
                     */
                    void SetSplitRatio(const std::string& _splitRatio);

                    /**
                     * 判断参数 SplitRatio 是否已赋值
                     * @return SplitRatio 是否已赋值
                     * 
                     */
                    bool SplitRatioHasBeenSet() const;

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
                     * @return RITimeSpan 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    std::string GetRITimeSpan() const;

                    /**
                     * 设置预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * @param _rITimeSpan 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    void SetRITimeSpan(const std::string& _rITimeSpan);

                    /**
                     * 判断参数 RITimeSpan 是否已赋值
                     * @return RITimeSpan 是否已赋值
                     * 
                     */
                    bool RITimeSpanHasBeenSet() const;

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
                     * 获取折扣率：本资源享受的折扣率（如客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @return Discount 折扣率：本资源享受的折扣率（如客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣率：本资源享受的折扣率（如客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @param _discount 折扣率：本资源享受的折扣率（如客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
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
                     * 获取混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率=优惠后总价/原价
                     * @return BlendedDiscount 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率=优惠后总价/原价
                     * 
                     */
                    std::string GetBlendedDiscount() const;

                    /**
                     * 设置混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率=优惠后总价/原价
                     * @param _blendedDiscount 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率=优惠后总价/原价
                     * 
                     */
                    void SetBlendedDiscount(const std::string& _blendedDiscount);

                    /**
                     * 判断参数 BlendedDiscount 是否已赋值
                     * @return BlendedDiscount 是否已赋值
                     * 
                     */
                    bool BlendedDiscountHasBeenSet() const;

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
                     * 获取组件名称编码
                     * @return ItemCode 组件名称编码
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置组件名称编码
                     * @param _itemCode 组件名称编码
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取组件名称：用户购买的产品或服务，所包含的具体组件
                     * @return ItemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置组件名称：用户购买的产品或服务，所包含的具体组件
                     * @param _itemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
                     * 
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     * 
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取关联单据ID：和本笔交易关联单据ID，如退费订单对应的原新购订单等
                     * @return AssociatedOrder 关联单据ID：和本笔交易关联单据ID，如退费订单对应的原新购订单等
                     * 
                     */
                    std::string GetAssociatedOrder() const;

                    /**
                     * 设置关联单据ID：和本笔交易关联单据ID，如退费订单对应的原新购订单等
                     * @param _associatedOrder 关联单据ID：和本笔交易关联单据ID，如退费订单对应的原新购订单等
                     * 
                     */
                    void SetAssociatedOrder(const std::string& _associatedOrder);

                    /**
                     * 判断参数 AssociatedOrder 是否已赋值
                     * @return AssociatedOrder 是否已赋值
                     * 
                     */
                    bool AssociatedOrderHasBeenSet() const;

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
                     * 获取计算规则说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * @return Formula 计算规则说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置计算规则说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     * @param _formula 计算规则说明：特殊交易类型计费结算的详细计算说明，如退费及变配
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
                     * 获取原始用量/时长：组件被资源包抵扣前的原始用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * @return RealTotalMeasure 原始用量/时长：组件被资源包抵扣前的原始用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * 
                     */
                    std::string GetRealTotalMeasure() const;

                    /**
                     * 设置原始用量/时长：组件被资源包抵扣前的原始用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * @param _realTotalMeasure 原始用量/时长：组件被资源包抵扣前的原始用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * 
                     */
                    void SetRealTotalMeasure(const std::string& _realTotalMeasure);

                    /**
                     * 判断参数 RealTotalMeasure 是否已赋值
                     * @return RealTotalMeasure 是否已赋值
                     * 
                     */
                    bool RealTotalMeasureHasBeenSet() const;

                    /**
                     * 获取抵扣用量/时长（含资源包）：组件被资源包抵扣的用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * @return DeductedMeasure 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * 
                     */
                    std::string GetDeductedMeasure() const;

                    /**
                     * 设置抵扣用量/时长（含资源包）：组件被资源包抵扣的用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * @param _deductedMeasure 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     * 
                     */
                    void SetDeductedMeasure(const std::string& _deductedMeasure);

                    /**
                     * 判断参数 DeductedMeasure 是否已赋值
                     * @return DeductedMeasure 是否已赋值
                     * 
                     */
                    bool DeductedMeasureHasBeenSet() const;

                    /**
                     * 获取配置描述：资源配置规格信息
                     * @return ComponentConfig 配置描述：资源配置规格信息
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置配置描述：资源配置规格信息
                     * @param _componentConfig 配置描述：资源配置规格信息
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
                     * 获取费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊
1 - 归集
2 - 未分配
                     * @return AllocationType 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊
1 - 归集
2 - 未分配
                     * 
                     */
                    uint64_t GetAllocationType() const;

                    /**
                     * 设置费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊
1 - 归集
2 - 未分配
                     * @param _allocationType 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊
1 - 归集
2 - 未分配
                     * 
                     */
                    void SetAllocationType(const uint64_t& _allocationType);

                    /**
                     * 判断参数 AllocationType 是否已赋值
                     * @return AllocationType 是否已赋值
                     * 
                     */
                    bool AllocationTypeHasBeenSet() const;

                    /**
                     * 获取当前消费项的优惠对象，例如：官网折扣、用户折扣、活动折扣。
                     * @return DiscountObject 当前消费项的优惠对象，例如：官网折扣、用户折扣、活动折扣。
                     * 
                     */
                    std::string GetDiscountObject() const;

                    /**
                     * 设置当前消费项的优惠对象，例如：官网折扣、用户折扣、活动折扣。
                     * @param _discountObject 当前消费项的优惠对象，例如：官网折扣、用户折扣、活动折扣。
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
                     * 获取当前消费项的优惠类型，例如：折扣、合同价。
                     * @return DiscountType 当前消费项的优惠类型，例如：折扣、合同价。
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置当前消费项的优惠类型，例如：折扣、合同价。
                     * @param _discountType 当前消费项的优惠类型，例如：折扣、合同价。
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
                     * 获取对优惠类型的补充描述，例如：商务折扣8折，则优惠类型为“折扣”，优惠内容为“0.8”。
                     * @return DiscountContent 对优惠类型的补充描述，例如：商务折扣8折，则优惠类型为“折扣”，优惠内容为“0.8”。
                     * 
                     */
                    std::string GetDiscountContent() const;

                    /**
                     * 设置对优惠类型的补充描述，例如：商务折扣8折，则优惠类型为“折扣”，优惠内容为“0.8”。
                     * @param _discountContent 对优惠类型的补充描述，例如：商务折扣8折，则优惠类型为“折扣”，优惠内容为“0.8”。
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
                     * 获取SPDeduction
                     * @return SPDeductionRate SPDeduction
                     * 
                     */
                    std::string GetSPDeductionRate() const;

                    /**
                     * 设置SPDeduction
                     * @param _sPDeductionRate SPDeduction
                     * 
                     */
                    void SetSPDeductionRate(const std::string& _sPDeductionRate);

                    /**
                     * 判断参数 SPDeductionRate 是否已赋值
                     * @return SPDeductionRate 是否已赋值
                     * 
                     */
                    bool SPDeductionRateHasBeenSet() const;

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
                     * 订单 ID：包年包月计费模式下订购的订单号

                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 交易 ID：结算扣费单号
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
                     * 组件类型编码
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * 组件类型：用户购买的产品或服务对应的组件大类
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * 组件刊例价：组件的官网原始单价（如客户享受一口价/合同价则默认不展示）
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     */
                    std::string m_contractPrice;
                    bool m_contractPriceHasBeenSet;

                    /**
                     * 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     */
                    std::string m_singlePriceUnit;
                    bool m_singlePriceUnitHasBeenSet;

                    /**
                     * 组件用量：该组件实际结算用量，组件用量=组件原始用量-抵扣用量（含资源包）
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 组件用量单位：组件用量对应的单位
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * 使用时长：资源使用的时长，组件用量=组件原始使用时长-抵扣时长（含资源包）
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位：资源使用时长的单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 备注属性（实例配置）：其他备注信息，如预留实例的预留实例类型和交易类型、CCN 产品的两端地域信息
                     */
                    std::string m_reserveDetail;
                    bool m_reserveDetailHasBeenSet;

                    /**
                     * 分拆项用量/时长占比：分拆项用量（时长）占比，分拆项用量（时长）/ 拆分前合计用量（时长）
                     */
                    std::string m_splitRatio;
                    bool m_splitRatioHasBeenSet;

                    /**
                     * 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如客户享受一口价/合同价则默认不展示，退费类场景也默认不展示），指定价模式
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 预留实例抵扣时长：本产品或服务使用预留实例抵扣的使用时长
                     */
                    std::string m_rITimeSpan;
                    bool m_rITimeSpanHasBeenSet;

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
                     * 折扣率：本资源享受的折扣率（如客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率=优惠后总价/原价
                     */
                    std::string m_blendedDiscount;
                    bool m_blendedDiscountHasBeenSet;

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
                     * 分账标签：资源绑定的标签
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

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
                     * 组件名称编码
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * 组件名称：用户购买的产品或服务，所包含的具体组件
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * 关联单据ID：和本笔交易关联单据ID，如退费订单对应的原新购订单等
                     */
                    std::string m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * 价格属性：该组件除单价、时长外的其他影响折扣定价的属性信息
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * 计算规则说明：特殊交易类型计费结算的详细计算说明，如退费及变配
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * 计费规则：各产品详细的计费规则官网说明链接
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                    /**
                     * 原始用量/时长：组件被资源包抵扣前的原始用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     */
                    std::string m_realTotalMeasure;
                    bool m_realTotalMeasureHasBeenSet;

                    /**
                     * 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量
（目前仅实时音视频、弹性微服务、云呼叫中心及专属可用区产品支持该信息外显，其他产品尚在接入中）
                     */
                    std::string m_deductedMeasure;
                    bool m_deductedMeasureHasBeenSet;

                    /**
                     * 配置描述：资源配置规格信息
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * 费用归集类型：费用来源类型，分摊、归集、未分配
0 - 分摊
1 - 归集
2 - 未分配
                     */
                    uint64_t m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                    /**
                     * 当前消费项的优惠对象，例如：官网折扣、用户折扣、活动折扣。
                     */
                    std::string m_discountObject;
                    bool m_discountObjectHasBeenSet;

                    /**
                     * 当前消费项的优惠类型，例如：折扣、合同价。
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                    /**
                     * 对优惠类型的补充描述，例如：商务折扣8折，则优惠类型为“折扣”，优惠内容为“0.8”。
                     */
                    std::string m_discountContent;
                    bool m_discountContentHasBeenSet;

                    /**
                     * SPDeduction
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * SPDeduction
                     */
                    std::string m_sPDeductionRate;
                    bool m_sPDeductionRateHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONDETAIL_H_
