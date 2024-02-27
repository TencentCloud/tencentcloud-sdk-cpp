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

#include <tencentcloud/billing/v20180709/model/AnalyseConditions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseConditions::AnalyseConditions() :
    m_businessCodesHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_regionIdsHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_payModesHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_payerUinsHasBeenSet(false),
    m_ownerUinsHasBeenSet(false),
    m_consumptionTypesHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseConditions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodes") && !value["BusinessCodes"].IsNull())
    {
        if (!value["BusinessCodes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.BusinessCodes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodes = string(value["BusinessCodes"].GetString());
        m_businessCodesHasBeenSet = true;
    }

    if (value.HasMember("ProductCodes") && !value["ProductCodes"].IsNull())
    {
        if (!value["ProductCodes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ProductCodes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodes = string(value["ProductCodes"].GetString());
        m_productCodesHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ZoneIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneIds = string(value["ZoneIds"].GetString());
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("RegionIds") && !value["RegionIds"].IsNull())
    {
        if (!value["RegionIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.RegionIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionIds = string(value["RegionIds"].GetString());
        m_regionIdsHasBeenSet = true;
    }

    if (value.HasMember("ProjectIds") && !value["ProjectIds"].IsNull())
    {
        if (!value["ProjectIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ProjectIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIds = string(value["ProjectIds"].GetString());
        m_projectIdsHasBeenSet = true;
    }

    if (value.HasMember("PayModes") && !value["PayModes"].IsNull())
    {
        if (!value["PayModes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.PayModes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModes = string(value["PayModes"].GetString());
        m_payModesHasBeenSet = true;
    }

    if (value.HasMember("ActionTypes") && !value["ActionTypes"].IsNull())
    {
        if (!value["ActionTypes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ActionTypes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypes = string(value["ActionTypes"].GetString());
        m_actionTypesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("FeeType") && !value["FeeType"].IsNull())
    {
        if (!value["FeeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.FeeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeType = string(value["FeeType"].GetString());
        m_feeTypeHasBeenSet = true;
    }

    if (value.HasMember("PayerUins") && !value["PayerUins"].IsNull())
    {
        if (!value["PayerUins"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.PayerUins` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUins = string(value["PayerUins"].GetString());
        m_payerUinsHasBeenSet = true;
    }

    if (value.HasMember("OwnerUins") && !value["OwnerUins"].IsNull())
    {
        if (!value["OwnerUins"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.OwnerUins` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUins = string(value["OwnerUins"].GetString());
        m_ownerUinsHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionTypes") && !value["ConsumptionTypes"].IsNull())
    {
        if (!value["ConsumptionTypes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseConditions.ConsumptionTypes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionTypes = string(value["ConsumptionTypes"].GetString());
        m_consumptionTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseConditions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodes.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodes.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneIds.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionIds.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIds.c_str(), allocator).Move(), allocator);
    }

    if (m_payModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModes.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTypes.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeType.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUins.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUins.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumptionTypes.c_str(), allocator).Move(), allocator);
    }

}


string AnalyseConditions::GetBusinessCodes() const
{
    return m_businessCodes;
}

void AnalyseConditions::SetBusinessCodes(const string& _businessCodes)
{
    m_businessCodes = _businessCodes;
    m_businessCodesHasBeenSet = true;
}

bool AnalyseConditions::BusinessCodesHasBeenSet() const
{
    return m_businessCodesHasBeenSet;
}

string AnalyseConditions::GetProductCodes() const
{
    return m_productCodes;
}

void AnalyseConditions::SetProductCodes(const string& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool AnalyseConditions::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}

string AnalyseConditions::GetComponentCode() const
{
    return m_componentCode;
}

void AnalyseConditions::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool AnalyseConditions::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string AnalyseConditions::GetZoneIds() const
{
    return m_zoneIds;
}

void AnalyseConditions::SetZoneIds(const string& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool AnalyseConditions::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

string AnalyseConditions::GetRegionIds() const
{
    return m_regionIds;
}

void AnalyseConditions::SetRegionIds(const string& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool AnalyseConditions::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

string AnalyseConditions::GetProjectIds() const
{
    return m_projectIds;
}

void AnalyseConditions::SetProjectIds(const string& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool AnalyseConditions::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

string AnalyseConditions::GetPayModes() const
{
    return m_payModes;
}

void AnalyseConditions::SetPayModes(const string& _payModes)
{
    m_payModes = _payModes;
    m_payModesHasBeenSet = true;
}

bool AnalyseConditions::PayModesHasBeenSet() const
{
    return m_payModesHasBeenSet;
}

string AnalyseConditions::GetActionTypes() const
{
    return m_actionTypes;
}

void AnalyseConditions::SetActionTypes(const string& _actionTypes)
{
    m_actionTypes = _actionTypes;
    m_actionTypesHasBeenSet = true;
}

bool AnalyseConditions::ActionTypesHasBeenSet() const
{
    return m_actionTypesHasBeenSet;
}

string AnalyseConditions::GetTags() const
{
    return m_tags;
}

void AnalyseConditions::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AnalyseConditions::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AnalyseConditions::GetFeeType() const
{
    return m_feeType;
}

void AnalyseConditions::SetFeeType(const string& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool AnalyseConditions::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

string AnalyseConditions::GetPayerUins() const
{
    return m_payerUins;
}

void AnalyseConditions::SetPayerUins(const string& _payerUins)
{
    m_payerUins = _payerUins;
    m_payerUinsHasBeenSet = true;
}

bool AnalyseConditions::PayerUinsHasBeenSet() const
{
    return m_payerUinsHasBeenSet;
}

string AnalyseConditions::GetOwnerUins() const
{
    return m_ownerUins;
}

void AnalyseConditions::SetOwnerUins(const string& _ownerUins)
{
    m_ownerUins = _ownerUins;
    m_ownerUinsHasBeenSet = true;
}

bool AnalyseConditions::OwnerUinsHasBeenSet() const
{
    return m_ownerUinsHasBeenSet;
}

string AnalyseConditions::GetConsumptionTypes() const
{
    return m_consumptionTypes;
}

void AnalyseConditions::SetConsumptionTypes(const string& _consumptionTypes)
{
    m_consumptionTypes = _consumptionTypes;
    m_consumptionTypesHasBeenSet = true;
}

bool AnalyseConditions::ConsumptionTypesHasBeenSet() const
{
    return m_consumptionTypesHasBeenSet;
}

