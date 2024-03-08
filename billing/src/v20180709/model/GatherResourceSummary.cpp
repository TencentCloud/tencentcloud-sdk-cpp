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

#include <tencentcloud/billing/v20180709/model/GatherResourceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

GatherResourceSummary::GatherResourceSummary() :
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceTypeNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_treeNodeUniqKeyHasBeenSet(false),
    m_treeNodeUniqKeyNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_allocationTypeHasBeenSet(false),
    m_belongTreeNodeUniqKeyHasBeenSet(false),
    m_belongRuleHasBeenSet(false),
    m_otherTreeNodeUniqKeysHasBeenSet(false),
    m_otherRulesHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_splitItemIdHasBeenSet(false),
    m_splitItemNameHasBeenSet(false)
{
}

CoreInternalOutcome GatherResourceSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeName") && !value["InstanceTypeName"].IsNull())
    {
        if (!value["InstanceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.InstanceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeName = string(value["InstanceTypeName"].GetString());
        m_instanceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeyName") && !value["TreeNodeUniqKeyName"].IsNull())
    {
        if (!value["TreeNodeUniqKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.TreeNodeUniqKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKeyName = string(value["TreeNodeUniqKeyName"].GetString());
        m_treeNodeUniqKeyNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocationType") && !value["AllocationType"].IsNull())
    {
        if (!value["AllocationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.AllocationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocationType = value["AllocationType"].GetInt64();
        m_allocationTypeHasBeenSet = true;
    }

    if (value.HasMember("BelongTreeNodeUniqKey") && !value["BelongTreeNodeUniqKey"].IsNull())
    {
        if (!value["BelongTreeNodeUniqKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.BelongTreeNodeUniqKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongTreeNodeUniqKey.Deserialize(value["BelongTreeNodeUniqKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongTreeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("BelongRule") && !value["BelongRule"].IsNull())
    {
        if (!value["BelongRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.BelongRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongRule.Deserialize(value["BelongRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongRuleHasBeenSet = true;
    }

    if (value.HasMember("OtherTreeNodeUniqKeys") && !value["OtherTreeNodeUniqKeys"].IsNull())
    {
        if (!value["OtherTreeNodeUniqKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.OtherTreeNodeUniqKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherTreeNodeUniqKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationTreeNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherTreeNodeUniqKeys.push_back(item);
        }
        m_otherTreeNodeUniqKeysHasBeenSet = true;
    }

    if (value.HasMember("OtherRules") && !value["OtherRules"].IsNull())
    {
        if (!value["OtherRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.OtherRules` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherRules.push_back(item);
        }
        m_otherRulesHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SplitItemId") && !value["SplitItemId"].IsNull())
    {
        if (!value["SplitItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.SplitItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemId = string(value["SplitItemId"].GetString());
        m_splitItemIdHasBeenSet = true;
    }

    if (value.HasMember("SplitItemName") && !value["SplitItemName"].IsNull())
    {
        if (!value["SplitItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatherResourceSummary.SplitItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitItemName = string(value["SplitItemName"].GetString());
        m_splitItemNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatherResourceSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocationType, allocator);
    }

    if (m_belongTreeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongTreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_belongTreeNodeUniqKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_belongRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_belongRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherTreeNodeUniqKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherTreeNodeUniqKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherTreeNodeUniqKeys.begin(); itr != m_otherTreeNodeUniqKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_otherRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherRules.begin(); itr != m_otherRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_splitItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_splitItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitItemName.c_str(), allocator).Move(), allocator);
    }

}


string GatherResourceSummary::GetPayerUin() const
{
    return m_payerUin;
}

void GatherResourceSummary::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool GatherResourceSummary::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string GatherResourceSummary::GetOwnerUin() const
{
    return m_ownerUin;
}

void GatherResourceSummary::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool GatherResourceSummary::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string GatherResourceSummary::GetOperateUin() const
{
    return m_operateUin;
}

void GatherResourceSummary::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool GatherResourceSummary::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string GatherResourceSummary::GetInstanceType() const
{
    return m_instanceType;
}

void GatherResourceSummary::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool GatherResourceSummary::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string GatherResourceSummary::GetInstanceTypeName() const
{
    return m_instanceTypeName;
}

void GatherResourceSummary::SetInstanceTypeName(const string& _instanceTypeName)
{
    m_instanceTypeName = _instanceTypeName;
    m_instanceTypeNameHasBeenSet = true;
}

bool GatherResourceSummary::InstanceTypeNameHasBeenSet() const
{
    return m_instanceTypeNameHasBeenSet;
}

string GatherResourceSummary::GetResourceId() const
{
    return m_resourceId;
}

void GatherResourceSummary::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GatherResourceSummary::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string GatherResourceSummary::GetResourceName() const
{
    return m_resourceName;
}

void GatherResourceSummary::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool GatherResourceSummary::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string GatherResourceSummary::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void GatherResourceSummary::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool GatherResourceSummary::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string GatherResourceSummary::GetTreeNodeUniqKeyName() const
{
    return m_treeNodeUniqKeyName;
}

void GatherResourceSummary::SetTreeNodeUniqKeyName(const string& _treeNodeUniqKeyName)
{
    m_treeNodeUniqKeyName = _treeNodeUniqKeyName;
    m_treeNodeUniqKeyNameHasBeenSet = true;
}

bool GatherResourceSummary::TreeNodeUniqKeyNameHasBeenSet() const
{
    return m_treeNodeUniqKeyNameHasBeenSet;
}

uint64_t GatherResourceSummary::GetRuleId() const
{
    return m_ruleId;
}

void GatherResourceSummary::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GatherResourceSummary::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string GatherResourceSummary::GetRuleName() const
{
    return m_ruleName;
}

void GatherResourceSummary::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool GatherResourceSummary::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string GatherResourceSummary::GetBusinessCode() const
{
    return m_businessCode;
}

void GatherResourceSummary::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool GatherResourceSummary::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string GatherResourceSummary::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void GatherResourceSummary::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool GatherResourceSummary::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string GatherResourceSummary::GetItemCode() const
{
    return m_itemCode;
}

void GatherResourceSummary::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool GatherResourceSummary::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string GatherResourceSummary::GetItemCodeName() const
{
    return m_itemCodeName;
}

void GatherResourceSummary::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool GatherResourceSummary::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

uint64_t GatherResourceSummary::GetRegionId() const
{
    return m_regionId;
}

void GatherResourceSummary::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool GatherResourceSummary::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string GatherResourceSummary::GetRegionName() const
{
    return m_regionName;
}

void GatherResourceSummary::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool GatherResourceSummary::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<BillTag> GatherResourceSummary::GetTag() const
{
    return m_tag;
}

void GatherResourceSummary::SetTag(const vector<BillTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool GatherResourceSummary::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string GatherResourceSummary::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void GatherResourceSummary::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool GatherResourceSummary::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string GatherResourceSummary::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void GatherResourceSummary::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool GatherResourceSummary::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string GatherResourceSummary::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void GatherResourceSummary::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool GatherResourceSummary::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string GatherResourceSummary::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void GatherResourceSummary::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool GatherResourceSummary::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string GatherResourceSummary::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void GatherResourceSummary::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool GatherResourceSummary::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

int64_t GatherResourceSummary::GetAllocationType() const
{
    return m_allocationType;
}

void GatherResourceSummary::SetAllocationType(const int64_t& _allocationType)
{
    m_allocationType = _allocationType;
    m_allocationTypeHasBeenSet = true;
}

bool GatherResourceSummary::AllocationTypeHasBeenSet() const
{
    return m_allocationTypeHasBeenSet;
}

AllocationTreeNode GatherResourceSummary::GetBelongTreeNodeUniqKey() const
{
    return m_belongTreeNodeUniqKey;
}

void GatherResourceSummary::SetBelongTreeNodeUniqKey(const AllocationTreeNode& _belongTreeNodeUniqKey)
{
    m_belongTreeNodeUniqKey = _belongTreeNodeUniqKey;
    m_belongTreeNodeUniqKeyHasBeenSet = true;
}

bool GatherResourceSummary::BelongTreeNodeUniqKeyHasBeenSet() const
{
    return m_belongTreeNodeUniqKeyHasBeenSet;
}

AllocationRule GatherResourceSummary::GetBelongRule() const
{
    return m_belongRule;
}

void GatherResourceSummary::SetBelongRule(const AllocationRule& _belongRule)
{
    m_belongRule = _belongRule;
    m_belongRuleHasBeenSet = true;
}

bool GatherResourceSummary::BelongRuleHasBeenSet() const
{
    return m_belongRuleHasBeenSet;
}

vector<AllocationTreeNode> GatherResourceSummary::GetOtherTreeNodeUniqKeys() const
{
    return m_otherTreeNodeUniqKeys;
}

void GatherResourceSummary::SetOtherTreeNodeUniqKeys(const vector<AllocationTreeNode>& _otherTreeNodeUniqKeys)
{
    m_otherTreeNodeUniqKeys = _otherTreeNodeUniqKeys;
    m_otherTreeNodeUniqKeysHasBeenSet = true;
}

bool GatherResourceSummary::OtherTreeNodeUniqKeysHasBeenSet() const
{
    return m_otherTreeNodeUniqKeysHasBeenSet;
}

vector<AllocationRule> GatherResourceSummary::GetOtherRules() const
{
    return m_otherRules;
}

void GatherResourceSummary::SetOtherRules(const vector<AllocationRule>& _otherRules)
{
    m_otherRules = _otherRules;
    m_otherRulesHasBeenSet = true;
}

bool GatherResourceSummary::OtherRulesHasBeenSet() const
{
    return m_otherRulesHasBeenSet;
}

uint64_t GatherResourceSummary::GetProjectId() const
{
    return m_projectId;
}

void GatherResourceSummary::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GatherResourceSummary::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GatherResourceSummary::GetProjectName() const
{
    return m_projectName;
}

void GatherResourceSummary::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool GatherResourceSummary::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string GatherResourceSummary::GetProductCode() const
{
    return m_productCode;
}

void GatherResourceSummary::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool GatherResourceSummary::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string GatherResourceSummary::GetProductCodeName() const
{
    return m_productCodeName;
}

void GatherResourceSummary::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool GatherResourceSummary::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string GatherResourceSummary::GetPayMode() const
{
    return m_payMode;
}

void GatherResourceSummary::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool GatherResourceSummary::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string GatherResourceSummary::GetPayModeName() const
{
    return m_payModeName;
}

void GatherResourceSummary::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool GatherResourceSummary::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string GatherResourceSummary::GetActionType() const
{
    return m_actionType;
}

void GatherResourceSummary::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool GatherResourceSummary::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string GatherResourceSummary::GetActionTypeName() const
{
    return m_actionTypeName;
}

void GatherResourceSummary::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool GatherResourceSummary::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string GatherResourceSummary::GetSplitItemId() const
{
    return m_splitItemId;
}

void GatherResourceSummary::SetSplitItemId(const string& _splitItemId)
{
    m_splitItemId = _splitItemId;
    m_splitItemIdHasBeenSet = true;
}

bool GatherResourceSummary::SplitItemIdHasBeenSet() const
{
    return m_splitItemIdHasBeenSet;
}

string GatherResourceSummary::GetSplitItemName() const
{
    return m_splitItemName;
}

void GatherResourceSummary::SetSplitItemName(const string& _splitItemName)
{
    m_splitItemName = _splitItemName;
    m_splitItemNameHasBeenSet = true;
}

bool GatherResourceSummary::SplitItemNameHasBeenSet() const
{
    return m_splitItemNameHasBeenSet;
}

