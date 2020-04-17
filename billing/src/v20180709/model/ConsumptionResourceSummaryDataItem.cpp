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

#include <tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

ConsumptionResourceSummaryDataItem::ConsumptionResourceSummaryDataItem() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_businessCodeNameHasBeenSet(false),
    m_consumptionTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionResourceSummaryDataItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionTypeName") && !value["ConsumptionTypeName"].IsNull())
    {
        if (!value["ConsumptionTypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumptionResourceSummaryDataItem.ConsumptionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionTypeName = string(value["ConsumptionTypeName"].GetString());
        m_consumptionTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionResourceSummaryDataItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

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

    if (m_realTotalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionTypeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsumptionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_consumptionTypeName.c_str(), allocator).Move(), allocator);
    }

}


string ConsumptionResourceSummaryDataItem::GetResourceId() const
{
    return m_resourceId;
}

void ConsumptionResourceSummaryDataItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetResourceName() const
{
    return m_resourceName;
}

void ConsumptionResourceSummaryDataItem::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ConsumptionResourceSummaryDataItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void ConsumptionResourceSummaryDataItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProjectId() const
{
    return m_projectId;
}

void ConsumptionResourceSummaryDataItem::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetProjectName() const
{
    return m_projectName;
}

void ConsumptionResourceSummaryDataItem::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionId() const
{
    return m_regionId;
}

void ConsumptionResourceSummaryDataItem::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetRegionName() const
{
    return m_regionName;
}

void ConsumptionResourceSummaryDataItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetPayMode() const
{
    return m_payMode;
}

void ConsumptionResourceSummaryDataItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetPayModeName() const
{
    return m_payModeName;
}

void ConsumptionResourceSummaryDataItem::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetBusinessCode() const
{
    return m_businessCode;
}

void ConsumptionResourceSummaryDataItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void ConsumptionResourceSummaryDataItem::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string ConsumptionResourceSummaryDataItem::GetConsumptionTypeName() const
{
    return m_consumptionTypeName;
}

void ConsumptionResourceSummaryDataItem::SetConsumptionTypeName(const string& _consumptionTypeName)
{
    m_consumptionTypeName = _consumptionTypeName;
    m_consumptionTypeNameHasBeenSet = true;
}

bool ConsumptionResourceSummaryDataItem::ConsumptionTypeNameHasBeenSet() const
{
    return m_consumptionTypeNameHasBeenSet;
}

