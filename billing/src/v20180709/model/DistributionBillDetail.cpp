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

#include <tencentcloud/billing/v20180709/model/DistributionBillDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DistributionBillDetail::DistributionBillDetail() :
    m_businessCodeNameHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_componentSetHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_priceInfoHasBeenSet(false),
    m_associatedOrderHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_formulaUrlHasBeenSet(false),
    m_billMonthHasBeenSet(false),
    m_billDayHasBeenSet(false)
{
}

CoreInternalOutcome DistributionBillDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentSet") && !value["ComponentSet"].IsNull())
    {
        if (!value["ComponentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ComponentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillDetailComponent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentSet.push_back(item);
        }
        m_componentSetHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PriceInfo") && !value["PriceInfo"].IsNull())
    {
        if (!value["PriceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.PriceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["PriceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_priceInfo.push_back((*itr).GetString());
        }
        m_priceInfoHasBeenSet = true;
    }

    if (value.HasMember("AssociatedOrder") && !value["AssociatedOrder"].IsNull())
    {
        if (!value["AssociatedOrder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.AssociatedOrder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_associatedOrder.Deserialize(value["AssociatedOrder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_associatedOrderHasBeenSet = true;
    }

    if (value.HasMember("Formula") && !value["Formula"].IsNull())
    {
        if (!value["Formula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("FormulaUrl") && !value["FormulaUrl"].IsNull())
    {
        if (!value["FormulaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.FormulaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formulaUrl = string(value["FormulaUrl"].GetString());
        m_formulaUrlHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }

    if (value.HasMember("BillDay") && !value["BillDay"].IsNull())
    {
        if (!value["BillDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributionBillDetail.BillDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDay = string(value["BillDay"].GetString());
        m_billDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributionBillDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
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

    if (m_actionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_componentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentSet.begin(); itr != m_componentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_priceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_priceInfo.begin(); itr != m_priceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_associatedOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_associatedOrder.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
    }

    if (m_formulaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormulaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formulaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_billDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDay.c_str(), allocator).Move(), allocator);
    }

}


string DistributionBillDetail::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void DistributionBillDetail::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool DistributionBillDetail::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string DistributionBillDetail::GetProductCodeName() const
{
    return m_productCodeName;
}

void DistributionBillDetail::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool DistributionBillDetail::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string DistributionBillDetail::GetPayModeName() const
{
    return m_payModeName;
}

void DistributionBillDetail::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool DistributionBillDetail::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string DistributionBillDetail::GetProjectName() const
{
    return m_projectName;
}

void DistributionBillDetail::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DistributionBillDetail::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DistributionBillDetail::GetRegionName() const
{
    return m_regionName;
}

void DistributionBillDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool DistributionBillDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string DistributionBillDetail::GetZoneName() const
{
    return m_zoneName;
}

void DistributionBillDetail::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool DistributionBillDetail::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string DistributionBillDetail::GetResourceId() const
{
    return m_resourceId;
}

void DistributionBillDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DistributionBillDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DistributionBillDetail::GetResourceName() const
{
    return m_resourceName;
}

void DistributionBillDetail::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DistributionBillDetail::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DistributionBillDetail::GetActionTypeName() const
{
    return m_actionTypeName;
}

void DistributionBillDetail::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool DistributionBillDetail::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string DistributionBillDetail::GetOrderId() const
{
    return m_orderId;
}

void DistributionBillDetail::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DistributionBillDetail::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DistributionBillDetail::GetBillId() const
{
    return m_billId;
}

void DistributionBillDetail::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool DistributionBillDetail::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string DistributionBillDetail::GetPayTime() const
{
    return m_payTime;
}

void DistributionBillDetail::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool DistributionBillDetail::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string DistributionBillDetail::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void DistributionBillDetail::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool DistributionBillDetail::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string DistributionBillDetail::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void DistributionBillDetail::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool DistributionBillDetail::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

vector<BillDetailComponent> DistributionBillDetail::GetComponentSet() const
{
    return m_componentSet;
}

void DistributionBillDetail::SetComponentSet(const vector<BillDetailComponent>& _componentSet)
{
    m_componentSet = _componentSet;
    m_componentSetHasBeenSet = true;
}

bool DistributionBillDetail::ComponentSetHasBeenSet() const
{
    return m_componentSetHasBeenSet;
}

string DistributionBillDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void DistributionBillDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DistributionBillDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string DistributionBillDetail::GetOperateUin() const
{
    return m_operateUin;
}

void DistributionBillDetail::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool DistributionBillDetail::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

vector<BillTagInfo> DistributionBillDetail::GetTags() const
{
    return m_tags;
}

void DistributionBillDetail::SetTags(const vector<BillTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DistributionBillDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DistributionBillDetail::GetBusinessCode() const
{
    return m_businessCode;
}

void DistributionBillDetail::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool DistributionBillDetail::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string DistributionBillDetail::GetProductCode() const
{
    return m_productCode;
}

void DistributionBillDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool DistributionBillDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string DistributionBillDetail::GetActionType() const
{
    return m_actionType;
}

void DistributionBillDetail::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DistributionBillDetail::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DistributionBillDetail::GetRegionId() const
{
    return m_regionId;
}

void DistributionBillDetail::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DistributionBillDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DistributionBillDetail::GetProjectId() const
{
    return m_projectId;
}

void DistributionBillDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DistributionBillDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> DistributionBillDetail::GetPriceInfo() const
{
    return m_priceInfo;
}

void DistributionBillDetail::SetPriceInfo(const vector<string>& _priceInfo)
{
    m_priceInfo = _priceInfo;
    m_priceInfoHasBeenSet = true;
}

bool DistributionBillDetail::PriceInfoHasBeenSet() const
{
    return m_priceInfoHasBeenSet;
}

BillDetailAssociatedOrder DistributionBillDetail::GetAssociatedOrder() const
{
    return m_associatedOrder;
}

void DistributionBillDetail::SetAssociatedOrder(const BillDetailAssociatedOrder& _associatedOrder)
{
    m_associatedOrder = _associatedOrder;
    m_associatedOrderHasBeenSet = true;
}

bool DistributionBillDetail::AssociatedOrderHasBeenSet() const
{
    return m_associatedOrderHasBeenSet;
}

string DistributionBillDetail::GetFormula() const
{
    return m_formula;
}

void DistributionBillDetail::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool DistributionBillDetail::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

string DistributionBillDetail::GetFormulaUrl() const
{
    return m_formulaUrl;
}

void DistributionBillDetail::SetFormulaUrl(const string& _formulaUrl)
{
    m_formulaUrl = _formulaUrl;
    m_formulaUrlHasBeenSet = true;
}

bool DistributionBillDetail::FormulaUrlHasBeenSet() const
{
    return m_formulaUrlHasBeenSet;
}

string DistributionBillDetail::GetBillMonth() const
{
    return m_billMonth;
}

void DistributionBillDetail::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool DistributionBillDetail::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

string DistributionBillDetail::GetBillDay() const
{
    return m_billDay;
}

void DistributionBillDetail::SetBillDay(const string& _billDay)
{
    m_billDay = _billDay;
    m_billDayHasBeenSet = true;
}

bool DistributionBillDetail::BillDayHasBeenSet() const
{
    return m_billDayHasBeenSet;
}

