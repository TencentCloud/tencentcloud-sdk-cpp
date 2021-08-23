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

#include <tencentcloud/billing/v20180709/model/Conditions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

Conditions::Conditions() :
    m_timeRangeHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_resourceKeywordHasBeenSet(false),
    m_businessCodesHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_regionIdsHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_payModesHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_hideFreeCostHasBeenSet(false),
    m_orderByCostHasBeenSet(false),
    m_billIdsHasBeenSet(false),
    m_componentCodesHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome Conditions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.TimeRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = value["TimeRange"].GetUint64();
        m_timeRangeHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ResourceKeyword") && !value["ResourceKeyword"].IsNull())
    {
        if (!value["ResourceKeyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.ResourceKeyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceKeyword = string(value["ResourceKeyword"].GetString());
        m_resourceKeywordHasBeenSet = true;
    }

    if (value.HasMember("BusinessCodes") && !value["BusinessCodes"].IsNull())
    {
        if (!value["BusinessCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.BusinessCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["BusinessCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_businessCodes.push_back((*itr).GetString());
        }
        m_businessCodesHasBeenSet = true;
    }

    if (value.HasMember("ProductCodes") && !value["ProductCodes"].IsNull())
    {
        if (!value["ProductCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.ProductCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productCodes.push_back((*itr).GetString());
        }
        m_productCodesHasBeenSet = true;
    }

    if (value.HasMember("RegionIds") && !value["RegionIds"].IsNull())
    {
        if (!value["RegionIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.RegionIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionIds.push_back((*itr).GetInt64());
        }
        m_regionIdsHasBeenSet = true;
    }

    if (value.HasMember("ProjectIds") && !value["ProjectIds"].IsNull())
    {
        if (!value["ProjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.ProjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ProjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_projectIds.push_back((*itr).GetInt64());
        }
        m_projectIdsHasBeenSet = true;
    }

    if (value.HasMember("PayModes") && !value["PayModes"].IsNull())
    {
        if (!value["PayModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.PayModes` is not array type"));

        const rapidjson::Value &tmpValue = value["PayModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payModes.push_back((*itr).GetString());
        }
        m_payModesHasBeenSet = true;
    }

    if (value.HasMember("ActionTypes") && !value["ActionTypes"].IsNull())
    {
        if (!value["ActionTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.ActionTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionTypes.push_back((*itr).GetString());
        }
        m_actionTypesHasBeenSet = true;
    }

    if (value.HasMember("HideFreeCost") && !value["HideFreeCost"].IsNull())
    {
        if (!value["HideFreeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.HideFreeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hideFreeCost = value["HideFreeCost"].GetInt64();
        m_hideFreeCostHasBeenSet = true;
    }

    if (value.HasMember("OrderByCost") && !value["OrderByCost"].IsNull())
    {
        if (!value["OrderByCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.OrderByCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderByCost = string(value["OrderByCost"].GetString());
        m_orderByCostHasBeenSet = true;
    }

    if (value.HasMember("BillIds") && !value["BillIds"].IsNull())
    {
        if (!value["BillIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.BillIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BillIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_billIds.push_back((*itr).GetString());
        }
        m_billIdsHasBeenSet = true;
    }

    if (value.HasMember("ComponentCodes") && !value["ComponentCodes"].IsNull())
    {
        if (!value["ComponentCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.ComponentCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentCodes.push_back((*itr).GetString());
        }
        m_componentCodesHasBeenSet = true;
    }

    if (value.HasMember("FileIds") && !value["FileIds"].IsNull())
    {
        if (!value["FileIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.FileIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FileIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileIds.push_back((*itr).GetString());
        }
        m_fileIdsHasBeenSet = true;
    }

    if (value.HasMember("FileTypes") && !value["FileTypes"].IsNull())
    {
        if (!value["FileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.FileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["FileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileTypes.push_back((*itr).GetString());
        }
        m_fileTypesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Conditions.Status` is not array type"));

        const rapidjson::Value &tmpValue = value["Status"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_status.push_back((*itr).GetUint64());
        }
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Conditions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeRange, allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceKeyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessCodes.begin(); itr != m_businessCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productCodes.begin(); itr != m_productCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_payModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payModes.begin(); itr != m_payModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTypes.begin(); itr != m_actionTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hideFreeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideFreeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideFreeCost, allocator);
    }

    if (m_orderByCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderByCost.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_billIds.begin(); itr != m_billIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_componentCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentCodes.begin(); itr != m_componentCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t Conditions::GetTimeRange() const
{
    return m_timeRange;
}

void Conditions::SetTimeRange(const uint64_t& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool Conditions::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

string Conditions::GetBusinessCode() const
{
    return m_businessCode;
}

void Conditions::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool Conditions::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

int64_t Conditions::GetProjectId() const
{
    return m_projectId;
}

void Conditions::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Conditions::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t Conditions::GetRegionId() const
{
    return m_regionId;
}

void Conditions::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Conditions::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string Conditions::GetPayMode() const
{
    return m_payMode;
}

void Conditions::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Conditions::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string Conditions::GetResourceKeyword() const
{
    return m_resourceKeyword;
}

void Conditions::SetResourceKeyword(const string& _resourceKeyword)
{
    m_resourceKeyword = _resourceKeyword;
    m_resourceKeywordHasBeenSet = true;
}

bool Conditions::ResourceKeywordHasBeenSet() const
{
    return m_resourceKeywordHasBeenSet;
}

vector<string> Conditions::GetBusinessCodes() const
{
    return m_businessCodes;
}

void Conditions::SetBusinessCodes(const vector<string>& _businessCodes)
{
    m_businessCodes = _businessCodes;
    m_businessCodesHasBeenSet = true;
}

bool Conditions::BusinessCodesHasBeenSet() const
{
    return m_businessCodesHasBeenSet;
}

vector<string> Conditions::GetProductCodes() const
{
    return m_productCodes;
}

void Conditions::SetProductCodes(const vector<string>& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool Conditions::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}

vector<int64_t> Conditions::GetRegionIds() const
{
    return m_regionIds;
}

void Conditions::SetRegionIds(const vector<int64_t>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool Conditions::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

vector<int64_t> Conditions::GetProjectIds() const
{
    return m_projectIds;
}

void Conditions::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool Conditions::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> Conditions::GetPayModes() const
{
    return m_payModes;
}

void Conditions::SetPayModes(const vector<string>& _payModes)
{
    m_payModes = _payModes;
    m_payModesHasBeenSet = true;
}

bool Conditions::PayModesHasBeenSet() const
{
    return m_payModesHasBeenSet;
}

vector<string> Conditions::GetActionTypes() const
{
    return m_actionTypes;
}

void Conditions::SetActionTypes(const vector<string>& _actionTypes)
{
    m_actionTypes = _actionTypes;
    m_actionTypesHasBeenSet = true;
}

bool Conditions::ActionTypesHasBeenSet() const
{
    return m_actionTypesHasBeenSet;
}

int64_t Conditions::GetHideFreeCost() const
{
    return m_hideFreeCost;
}

void Conditions::SetHideFreeCost(const int64_t& _hideFreeCost)
{
    m_hideFreeCost = _hideFreeCost;
    m_hideFreeCostHasBeenSet = true;
}

bool Conditions::HideFreeCostHasBeenSet() const
{
    return m_hideFreeCostHasBeenSet;
}

string Conditions::GetOrderByCost() const
{
    return m_orderByCost;
}

void Conditions::SetOrderByCost(const string& _orderByCost)
{
    m_orderByCost = _orderByCost;
    m_orderByCostHasBeenSet = true;
}

bool Conditions::OrderByCostHasBeenSet() const
{
    return m_orderByCostHasBeenSet;
}

vector<string> Conditions::GetBillIds() const
{
    return m_billIds;
}

void Conditions::SetBillIds(const vector<string>& _billIds)
{
    m_billIds = _billIds;
    m_billIdsHasBeenSet = true;
}

bool Conditions::BillIdsHasBeenSet() const
{
    return m_billIdsHasBeenSet;
}

vector<string> Conditions::GetComponentCodes() const
{
    return m_componentCodes;
}

void Conditions::SetComponentCodes(const vector<string>& _componentCodes)
{
    m_componentCodes = _componentCodes;
    m_componentCodesHasBeenSet = true;
}

bool Conditions::ComponentCodesHasBeenSet() const
{
    return m_componentCodesHasBeenSet;
}

vector<string> Conditions::GetFileIds() const
{
    return m_fileIds;
}

void Conditions::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool Conditions::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<string> Conditions::GetFileTypes() const
{
    return m_fileTypes;
}

void Conditions::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool Conditions::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

vector<uint64_t> Conditions::GetStatus() const
{
    return m_status;
}

void Conditions::SetStatus(const vector<uint64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Conditions::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

