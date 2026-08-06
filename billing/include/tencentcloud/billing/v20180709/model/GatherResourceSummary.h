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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>
#include <tencentcloud/billing/v20180709/model/AllocationTreeNode.h>
#include <tencentcloud/billing/v20180709/model/AllocationRule.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 资源归集汇总
                */
                class GatherResourceSummary : public AbstractModel
                {
                public:
                    GatherResourceSummary();
                    ~GatherResourceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * @return PayerUin <p>支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     * @param _payerUin <p>支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
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
                     * 获取<p>使用者 UIN：实际使用资源的账号 ID</p>
                     * @return OwnerUin <p>使用者 UIN：实际使用资源的账号 ID</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>使用者 UIN：实际使用资源的账号 ID</p>
                     * @param _ownerUin <p>使用者 UIN：实际使用资源的账号 ID</p>
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
                     * 获取<p>操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）</p>
                     * @return OperateUin <p>操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）</p>
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）</p>
                     * @param _operateUin <p>操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）</p>
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
                     * 获取<p>实例类型编码</p>
                     * @return InstanceType <p>实例类型编码</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型编码</p>
                     * @param _instanceType <p>实例类型编码</p>
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
                     * 获取<p>实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”</p>
                     * @return InstanceTypeName <p>实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”</p>
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置<p>实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”</p>
                     * @param _instanceTypeName <p>实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”</p>
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
                     * 获取<p>资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
                     * @return ResourceId <p>资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
                     * @param _resourceId <p>资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
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
                     * 获取<p>实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名</p>
                     * @return ResourceName <p>实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名</p>
                     * @param _resourceName <p>实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名</p>
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
                     * 获取<p>分账单元唯一标识</p>
                     * @return TreeNodeUniqKey <p>分账单元唯一标识</p>
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置<p>分账单元唯一标识</p>
                     * @param _treeNodeUniqKey <p>分账单元唯一标识</p>
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
                     * 获取<p>分账单元名称</p>
                     * @return TreeNodeUniqKeyName <p>分账单元名称</p>
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置<p>分账单元名称</p>
                     * @param _treeNodeUniqKeyName <p>分账单元名称</p>
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
                     * 获取<p>资源命中公摊规则ID</p>
                     * @return RuleId <p>资源命中公摊规则ID</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>资源命中公摊规则ID</p>
                     * @param _ruleId <p>资源命中公摊规则ID</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>资源命中公摊规则名称</p>
                     * @return RuleName <p>资源命中公摊规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>资源命中公摊规则名称</p>
                     * @param _ruleName <p>资源命中公摊规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

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
                     * 获取<p>产品名称：用户所采购的各类云产品</p>
                     * @return BusinessCodeName <p>产品名称：用户所采购的各类云产品</p>
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置<p>产品名称：用户所采购的各类云产品</p>
                     * @param _businessCodeName <p>产品名称：用户所采购的各类云产品</p>
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
                     * 获取<p>组件名称编码</p>
                     * @return ItemCode <p>组件名称编码</p>
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置<p>组件名称编码</p>
                     * @param _itemCode <p>组件名称编码</p>
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
                     * 获取<p>组件名称：用户购买的产品或服务，所包含的具体组件</p>
                     * @return ItemCodeName <p>组件名称：用户购买的产品或服务，所包含的具体组件</p>
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置<p>组件名称：用户购买的产品或服务，所包含的具体组件</p>
                     * @param _itemCodeName <p>组件名称：用户购买的产品或服务，所包含的具体组件</p>
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
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
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
                     * 获取<p>地域名称：资源所属地域</p>
                     * @return RegionName <p>地域名称：资源所属地域</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称：资源所属地域</p>
                     * @param _regionName <p>地域名称：资源所属地域</p>
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
                     * 获取<p>分账标签：资源绑定的标签</p>
                     * @return Tag <p>分账标签：资源绑定的标签</p>
                     * 
                     */
                    std::vector<BillTag> GetTag() const;

                    /**
                     * 设置<p>分账标签：资源绑定的标签</p>
                     * @param _tag <p>分账标签：资源绑定的标签</p>
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
                     * 获取<p>优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率</p>
                     * @return RealTotalCost <p>优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率</p>
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置<p>优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率</p>
                     * @param _realTotalCost <p>优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率</p>
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
                     * 获取<p>现金账户支出(元)：通过现金账户支付的金额</p>
                     * @return CashPayAmount <p>现金账户支出(元)：通过现金账户支付的金额</p>
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置<p>现金账户支出(元)：通过现金账户支付的金额</p>
                     * @param _cashPayAmount <p>现金账户支出(元)：通过现金账户支付的金额</p>
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
                     * 获取<p>代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额</p>
                     * @return VoucherPayAmount <p>代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额</p>
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置<p>代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额</p>
                     * @param _voucherPayAmount <p>代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额</p>
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
                     * 获取<p>赠送账户支出(元)：使用赠送金支付的金额</p>
                     * @return IncentivePayAmount <p>赠送账户支出(元)：使用赠送金支付的金额</p>
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置<p>赠送账户支出(元)：使用赠送金支付的金额</p>
                     * @param _incentivePayAmount <p>赠送账户支出(元)：使用赠送金支付的金额</p>
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
                     * 获取<p>分成账户支出(元)：通过分成金账户支付的金额</p>
                     * @return TransferPayAmount <p>分成账户支出(元)：通过分成金账户支付的金额</p>
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置<p>分成账户支出(元)：通过分成金账户支付的金额</p>
                     * @param _transferPayAmount <p>分成账户支出(元)：通过分成金账户支付的金额</p>
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
                     * 获取<p>费用归集类型：费用来源类型，分摊、归集、未分配<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * @return AllocationType <p>费用归集类型：费用来源类型，分摊、归集、未分配<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * 
                     */
                    int64_t GetAllocationType() const;

                    /**
                     * 设置<p>费用归集类型：费用来源类型，分摊、归集、未分配<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * @param _allocationType <p>费用归集类型：费用来源类型，分摊、归集、未分配<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
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
                     * 获取<p>当前归属单元信息</p>
                     * @return BelongTreeNodeUniqKey <p>当前归属单元信息</p>
                     * 
                     */
                    AllocationTreeNode GetBelongTreeNodeUniqKey() const;

                    /**
                     * 设置<p>当前归属单元信息</p>
                     * @param _belongTreeNodeUniqKey <p>当前归属单元信息</p>
                     * 
                     */
                    void SetBelongTreeNodeUniqKey(const AllocationTreeNode& _belongTreeNodeUniqKey);

                    /**
                     * 判断参数 BelongTreeNodeUniqKey 是否已赋值
                     * @return BelongTreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool BelongTreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取<p>当前资源命中公摊规则信息</p>
                     * @return BelongRule <p>当前资源命中公摊规则信息</p>
                     * 
                     */
                    AllocationRule GetBelongRule() const;

                    /**
                     * 设置<p>当前资源命中公摊规则信息</p>
                     * @param _belongRule <p>当前资源命中公摊规则信息</p>
                     * 
                     */
                    void SetBelongRule(const AllocationRule& _belongRule);

                    /**
                     * 判断参数 BelongRule 是否已赋值
                     * @return BelongRule 是否已赋值
                     * 
                     */
                    bool BelongRuleHasBeenSet() const;

                    /**
                     * 获取<p>其它归属单元信息</p>
                     * @return OtherTreeNodeUniqKeys <p>其它归属单元信息</p>
                     * 
                     */
                    std::vector<AllocationTreeNode> GetOtherTreeNodeUniqKeys() const;

                    /**
                     * 设置<p>其它归属单元信息</p>
                     * @param _otherTreeNodeUniqKeys <p>其它归属单元信息</p>
                     * 
                     */
                    void SetOtherTreeNodeUniqKeys(const std::vector<AllocationTreeNode>& _otherTreeNodeUniqKeys);

                    /**
                     * 判断参数 OtherTreeNodeUniqKeys 是否已赋值
                     * @return OtherTreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool OtherTreeNodeUniqKeysHasBeenSet() const;

                    /**
                     * 获取<p>其他命中规则信息</p>
                     * @return OtherRules <p>其他命中规则信息</p>
                     * 
                     */
                    std::vector<AllocationRule> GetOtherRules() const;

                    /**
                     * 设置<p>其他命中规则信息</p>
                     * @param _otherRules <p>其他命中规则信息</p>
                     * 
                     */
                    void SetOtherRules(const std::vector<AllocationRule>& _otherRules);

                    /**
                     * 判断参数 OtherRules 是否已赋值
                     * @return OtherRules 是否已赋值
                     * 
                     */
                    bool OtherRulesHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>子产品名称：用户采购的具体产品细分类型</p>
                     * @return ProductCodeName <p>子产品名称：用户采购的具体产品细分类型</p>
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置<p>子产品名称：用户采购的具体产品细分类型</p>
                     * @param _productCodeName <p>子产品名称：用户采购的具体产品细分类型</p>
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
                     * 获取<p>计费模式编码</p>
                     * @return PayMode <p>计费模式编码</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>计费模式编码</p>
                     * @param _payMode <p>计费模式编码</p>
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
                     * 获取<p>交易类型：明细交易类型</p>
                     * @return ActionTypeName <p>交易类型：明细交易类型</p>
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置<p>交易类型：明细交易类型</p>
                     * @param _actionTypeName <p>交易类型：明细交易类型</p>
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
                     * 获取<p>分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitItemId <p>分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSplitItemId() const;

                    /**
                     * 设置<p>分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitItemId <p>分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
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
                     * 获取<p>分拆项名称：涉及分拆产品的分拆后的分拆项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitItemName <p>分拆项名称：涉及分拆产品的分拆后的分拆项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSplitItemName() const;

                    /**
                     * 设置<p>分拆项名称：涉及分拆产品的分拆后的分拆项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitItemName <p>分拆项名称：涉及分拆产品的分拆后的分拆项</p>
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
                     * 获取<p>归集方式</p><p>枚举值：</p><ul><li>0： 未归集</li><li>1： 自动命中</li><li>2： 手动分配待生效</li><li>3： 手动分配已生效</li></ul>
                     * @return EffectiveMode <p>归集方式</p><p>枚举值：</p><ul><li>0： 未归集</li><li>1： 自动命中</li><li>2： 手动分配待生效</li><li>3： 手动分配已生效</li></ul>
                     * 
                     */
                    std::string GetEffectiveMode() const;

                    /**
                     * 设置<p>归集方式</p><p>枚举值：</p><ul><li>0： 未归集</li><li>1： 自动命中</li><li>2： 手动分配待生效</li><li>3： 手动分配已生效</li></ul>
                     * @param _effectiveMode <p>归集方式</p><p>枚举值：</p><ul><li>0： 未归集</li><li>1： 自动命中</li><li>2： 手动分配待生效</li><li>3： 手动分配已生效</li></ul>
                     * 
                     */
                    void SetEffectiveMode(const std::string& _effectiveMode);

                    /**
                     * 判断参数 EffectiveMode 是否已赋值
                     * @return EffectiveMode 是否已赋值
                     * 
                     */
                    bool EffectiveModeHasBeenSet() const;

                private:

                    /**
                     * <p>支付者 UIN：支付者的账号 ID，账号 ID 是用户在腾讯云的唯一账号标识</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>使用者 UIN：实际使用资源的账号 ID</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>操作者 UIN：操作者账号 ID（预付费资源下单或后付费操作开通资源账号的ID或者角色 ID）</p>
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>实例类型编码</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。常规实例默认展示“-”</p>
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * <p>资源ID：不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID； 若该产品被分拆，则展示产品分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>实例名称：用户在控制台为资源设置的名称，如未设置默认为空；若该产品被分拆，则展示分拆产品分拆后的分拆项资源别名</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>分账单元唯一标识</p>
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * <p>分账单元名称</p>
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                    /**
                     * <p>资源命中公摊规则ID</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>资源命中公摊规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>产品编码</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>产品名称：用户所采购的各类云产品</p>
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * <p>组件名称编码</p>
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * <p>组件名称：用户购买的产品或服务，所包含的具体组件</p>
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>地域名称：资源所属地域</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>分账标签：资源绑定的标签</p>
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>优惠后总价：优惠后总价 =（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率</p>
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * <p>现金账户支出(元)：通过现金账户支付的金额</p>
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * <p>代金券支出(元)：使用各类优惠券（如代金券、现金券等）支付的金额</p>
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * <p>赠送账户支出(元)：使用赠送金支付的金额</p>
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * <p>分成账户支出(元)：通过分成金账户支付的金额</p>
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * <p>费用归集类型：费用来源类型，分摊、归集、未分配<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     */
                    int64_t m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                    /**
                     * <p>当前归属单元信息</p>
                     */
                    AllocationTreeNode m_belongTreeNodeUniqKey;
                    bool m_belongTreeNodeUniqKeyHasBeenSet;

                    /**
                     * <p>当前资源命中公摊规则信息</p>
                     */
                    AllocationRule m_belongRule;
                    bool m_belongRuleHasBeenSet;

                    /**
                     * <p>其它归属单元信息</p>
                     */
                    std::vector<AllocationTreeNode> m_otherTreeNodeUniqKeys;
                    bool m_otherTreeNodeUniqKeysHasBeenSet;

                    /**
                     * <p>其他命中规则信息</p>
                     */
                    std::vector<AllocationRule> m_otherRules;
                    bool m_otherRulesHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称：资源归属的项目，用户在控制台给资源自主分配项目，未分配则是默认项目</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>子产品编码</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>子产品名称：用户采购的具体产品细分类型</p>
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * <p>计费模式编码</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>计费模式：资源的计费模式，区分为包年包月和按量计费</p>
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * <p>交易类型编码</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>交易类型：明细交易类型</p>
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * <p>分拆项 ID：涉及分拆产品的分拆后的分拆项 ID，如 COS 桶 ID，CDN 域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_splitItemId;
                    bool m_splitItemIdHasBeenSet;

                    /**
                     * <p>分拆项名称：涉及分拆产品的分拆后的分拆项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_splitItemName;
                    bool m_splitItemNameHasBeenSet;

                    /**
                     * <p>归集方式</p><p>枚举值：</p><ul><li>0： 未归集</li><li>1： 自动命中</li><li>2： 手动分配待生效</li><li>3： 手动分配已生效</li></ul>
                     */
                    std::string m_effectiveMode;
                    bool m_effectiveModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_
