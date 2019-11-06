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

#include <tencentcloud/billing/v20180709/model/BillResourceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

BillResourceSummary::BillResourceSummary() :
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
    m_payTimeHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_configDescHasBeenSet(false),
    m_extendField1HasBeenSet(false),
    m_extendField2HasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_reduceTypeHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_extendField3HasBeenSet(false),
    m_extendField4HasBeenSet(false),
    m_extendField5HasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false)
{
}

CoreInternalOutcome BillResourceSummary::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigDesc") && !value["ConfigDesc"].IsNull())
    {
        if (!value["ConfigDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ConfigDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDesc = string(value["ConfigDesc"].GetString());
        m_configDescHasBeenSet = true;
    }

    if (value.HasMember("ExtendField1") && !value["ExtendField1"].IsNull())
    {
        if (!value["ExtendField1"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ExtendField1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField1 = string(value["ExtendField1"].GetString());
        m_extendField1HasBeenSet = true;
    }

    if (value.HasMember("ExtendField2") && !value["ExtendField2"].IsNull())
    {
        if (!value["ExtendField2"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ExtendField2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField2 = string(value["ExtendField2"].GetString());
        m_extendField2HasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ReduceType") && !value["ReduceType"].IsNull())
    {
        if (!value["ReduceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ReduceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reduceType = string(value["ReduceType"].GetString());
        m_reduceTypeHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("ExtendField3") && !value["ExtendField3"].IsNull())
    {
        if (!value["ExtendField3"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ExtendField3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField3 = string(value["ExtendField3"].GetString());
        m_extendField3HasBeenSet = true;
    }

    if (value.HasMember("ExtendField4") && !value["ExtendField4"].IsNull())
    {
        if (!value["ExtendField4"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ExtendField4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField4 = string(value["ExtendField4"].GetString());
        m_extendField4HasBeenSet = true;
    }

    if (value.HasMember("ExtendField5") && !value["ExtendField5"].IsNull())
    {
        if (!value["ExtendField5"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.ExtendField5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendField5 = string(value["ExtendField5"].GetString());
        m_extendField5HasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `BillResourceSummary.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillResourceSummary.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillResourceSummary::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_businessCodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeBeginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FeeBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_feeBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FeeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_feeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConfigDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_configDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField1HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendField1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extendField1.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField2HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendField2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extendField2.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_discount.c_str(), allocator).Move(), allocator);
    }

    if (m_reduceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReduceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reduceType.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField3HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendField3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extendField3.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField4HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendField4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extendField4.c_str(), allocator).Move(), allocator);
    }

    if (m_extendField5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtendField5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extendField5.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

}


string BillResourceSummary::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void BillResourceSummary::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool BillResourceSummary::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string BillResourceSummary::GetProductCodeName() const
{
    return m_productCodeName;
}

void BillResourceSummary::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool BillResourceSummary::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string BillResourceSummary::GetPayModeName() const
{
    return m_payModeName;
}

void BillResourceSummary::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool BillResourceSummary::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string BillResourceSummary::GetProjectName() const
{
    return m_projectName;
}

void BillResourceSummary::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool BillResourceSummary::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string BillResourceSummary::GetRegionName() const
{
    return m_regionName;
}

void BillResourceSummary::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool BillResourceSummary::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string BillResourceSummary::GetZoneName() const
{
    return m_zoneName;
}

void BillResourceSummary::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool BillResourceSummary::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string BillResourceSummary::GetResourceId() const
{
    return m_resourceId;
}

void BillResourceSummary::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BillResourceSummary::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BillResourceSummary::GetResourceName() const
{
    return m_resourceName;
}

void BillResourceSummary::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool BillResourceSummary::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string BillResourceSummary::GetActionTypeName() const
{
    return m_actionTypeName;
}

void BillResourceSummary::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool BillResourceSummary::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string BillResourceSummary::GetOrderId() const
{
    return m_orderId;
}

void BillResourceSummary::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BillResourceSummary::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BillResourceSummary::GetPayTime() const
{
    return m_payTime;
}

void BillResourceSummary::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool BillResourceSummary::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string BillResourceSummary::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void BillResourceSummary::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool BillResourceSummary::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string BillResourceSummary::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void BillResourceSummary::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool BillResourceSummary::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

string BillResourceSummary::GetConfigDesc() const
{
    return m_configDesc;
}

void BillResourceSummary::SetConfigDesc(const string& _configDesc)
{
    m_configDesc = _configDesc;
    m_configDescHasBeenSet = true;
}

bool BillResourceSummary::ConfigDescHasBeenSet() const
{
    return m_configDescHasBeenSet;
}

string BillResourceSummary::GetExtendField1() const
{
    return m_extendField1;
}

void BillResourceSummary::SetExtendField1(const string& _extendField1)
{
    m_extendField1 = _extendField1;
    m_extendField1HasBeenSet = true;
}

bool BillResourceSummary::ExtendField1HasBeenSet() const
{
    return m_extendField1HasBeenSet;
}

string BillResourceSummary::GetExtendField2() const
{
    return m_extendField2;
}

void BillResourceSummary::SetExtendField2(const string& _extendField2)
{
    m_extendField2 = _extendField2;
    m_extendField2HasBeenSet = true;
}

bool BillResourceSummary::ExtendField2HasBeenSet() const
{
    return m_extendField2HasBeenSet;
}

string BillResourceSummary::GetTotalCost() const
{
    return m_totalCost;
}

void BillResourceSummary::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool BillResourceSummary::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string BillResourceSummary::GetDiscount() const
{
    return m_discount;
}

void BillResourceSummary::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool BillResourceSummary::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string BillResourceSummary::GetReduceType() const
{
    return m_reduceType;
}

void BillResourceSummary::SetReduceType(const string& _reduceType)
{
    m_reduceType = _reduceType;
    m_reduceTypeHasBeenSet = true;
}

bool BillResourceSummary::ReduceTypeHasBeenSet() const
{
    return m_reduceTypeHasBeenSet;
}

string BillResourceSummary::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void BillResourceSummary::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool BillResourceSummary::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string BillResourceSummary::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void BillResourceSummary::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool BillResourceSummary::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string BillResourceSummary::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void BillResourceSummary::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool BillResourceSummary::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string BillResourceSummary::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void BillResourceSummary::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool BillResourceSummary::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string BillResourceSummary::GetExtendField3() const
{
    return m_extendField3;
}

void BillResourceSummary::SetExtendField3(const string& _extendField3)
{
    m_extendField3 = _extendField3;
    m_extendField3HasBeenSet = true;
}

bool BillResourceSummary::ExtendField3HasBeenSet() const
{
    return m_extendField3HasBeenSet;
}

string BillResourceSummary::GetExtendField4() const
{
    return m_extendField4;
}

void BillResourceSummary::SetExtendField4(const string& _extendField4)
{
    m_extendField4 = _extendField4;
    m_extendField4HasBeenSet = true;
}

bool BillResourceSummary::ExtendField4HasBeenSet() const
{
    return m_extendField4HasBeenSet;
}

string BillResourceSummary::GetExtendField5() const
{
    return m_extendField5;
}

void BillResourceSummary::SetExtendField5(const string& _extendField5)
{
    m_extendField5 = _extendField5;
    m_extendField5HasBeenSet = true;
}

bool BillResourceSummary::ExtendField5HasBeenSet() const
{
    return m_extendField5HasBeenSet;
}

vector<BillTagInfo> BillResourceSummary::GetTags() const
{
    return m_tags;
}

void BillResourceSummary::SetTags(const vector<BillTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BillResourceSummary::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string BillResourceSummary::GetPayerUin() const
{
    return m_payerUin;
}

void BillResourceSummary::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool BillResourceSummary::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string BillResourceSummary::GetOwnerUin() const
{
    return m_ownerUin;
}

void BillResourceSummary::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BillResourceSummary::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BillResourceSummary::GetOperateUin() const
{
    return m_operateUin;
}

void BillResourceSummary::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool BillResourceSummary::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

