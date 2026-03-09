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

#include <tencentcloud/tse/v20201207/model/LaneTrafficEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

LaneTrafficEntry::LaneTrafficEntry() :
    m_entryTypeHasBeenSet(false),
    m_tSEGatewaySelectorHasBeenSet(false),
    m_serviceGatewaySelectorHasBeenSet(false),
    m_serviceSelectorHasBeenSet(false)
{
}

CoreInternalOutcome LaneTrafficEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntryType") && !value["EntryType"].IsNull())
    {
        if (!value["EntryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneTrafficEntry.EntryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryType = string(value["EntryType"].GetString());
        m_entryTypeHasBeenSet = true;
    }

    if (value.HasMember("TSEGatewaySelector") && !value["TSEGatewaySelector"].IsNull())
    {
        if (!value["TSEGatewaySelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaneTrafficEntry.TSEGatewaySelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tSEGatewaySelector.Deserialize(value["TSEGatewaySelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tSEGatewaySelectorHasBeenSet = true;
    }

    if (value.HasMember("ServiceGatewaySelector") && !value["ServiceGatewaySelector"].IsNull())
    {
        if (!value["ServiceGatewaySelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaneTrafficEntry.ServiceGatewaySelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceGatewaySelector.Deserialize(value["ServiceGatewaySelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceGatewaySelectorHasBeenSet = true;
    }

    if (value.HasMember("ServiceSelector") && !value["ServiceSelector"].IsNull())
    {
        if (!value["ServiceSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaneTrafficEntry.ServiceSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceSelector.Deserialize(value["ServiceSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceSelectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaneTrafficEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryType.c_str(), allocator).Move(), allocator);
    }

    if (m_tSEGatewaySelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TSEGatewaySelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tSEGatewaySelector.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceGatewaySelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGatewaySelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceGatewaySelector.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceSelector.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LaneTrafficEntry::GetEntryType() const
{
    return m_entryType;
}

void LaneTrafficEntry::SetEntryType(const string& _entryType)
{
    m_entryType = _entryType;
    m_entryTypeHasBeenSet = true;
}

bool LaneTrafficEntry::EntryTypeHasBeenSet() const
{
    return m_entryTypeHasBeenSet;
}

TSEGatewaySelector LaneTrafficEntry::GetTSEGatewaySelector() const
{
    return m_tSEGatewaySelector;
}

void LaneTrafficEntry::SetTSEGatewaySelector(const TSEGatewaySelector& _tSEGatewaySelector)
{
    m_tSEGatewaySelector = _tSEGatewaySelector;
    m_tSEGatewaySelectorHasBeenSet = true;
}

bool LaneTrafficEntry::TSEGatewaySelectorHasBeenSet() const
{
    return m_tSEGatewaySelectorHasBeenSet;
}

ServiceGatewaySelector LaneTrafficEntry::GetServiceGatewaySelector() const
{
    return m_serviceGatewaySelector;
}

void LaneTrafficEntry::SetServiceGatewaySelector(const ServiceGatewaySelector& _serviceGatewaySelector)
{
    m_serviceGatewaySelector = _serviceGatewaySelector;
    m_serviceGatewaySelectorHasBeenSet = true;
}

bool LaneTrafficEntry::ServiceGatewaySelectorHasBeenSet() const
{
    return m_serviceGatewaySelectorHasBeenSet;
}

ServiceSelector LaneTrafficEntry::GetServiceSelector() const
{
    return m_serviceSelector;
}

void LaneTrafficEntry::SetServiceSelector(const ServiceSelector& _serviceSelector)
{
    m_serviceSelector = _serviceSelector;
    m_serviceSelectorHasBeenSet = true;
}

bool LaneTrafficEntry::ServiceSelectorHasBeenSet() const
{
    return m_serviceSelectorHasBeenSet;
}

