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

#include <tencentcloud/es/v20180416/model/IndexSettingsField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IndexSettingsField::IndexSettingsField() :
    m_numberOfShardsHasBeenSet(false),
    m_numberOfReplicasHasBeenSet(false),
    m_refreshIntervalHasBeenSet(false),
    m_dynamicHasBeenSet(false),
    m_totalFieldsLimitHasBeenSet(false)
{
}

CoreInternalOutcome IndexSettingsField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NumberOfShards") && !value["NumberOfShards"].IsNull())
    {
        if (!value["NumberOfShards"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexSettingsField.NumberOfShards` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfShards = string(value["NumberOfShards"].GetString());
        m_numberOfShardsHasBeenSet = true;
    }

    if (value.HasMember("NumberOfReplicas") && !value["NumberOfReplicas"].IsNull())
    {
        if (!value["NumberOfReplicas"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexSettingsField.NumberOfReplicas` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfReplicas = string(value["NumberOfReplicas"].GetString());
        m_numberOfReplicasHasBeenSet = true;
    }

    if (value.HasMember("RefreshInterval") && !value["RefreshInterval"].IsNull())
    {
        if (!value["RefreshInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexSettingsField.RefreshInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refreshInterval = string(value["RefreshInterval"].GetString());
        m_refreshIntervalHasBeenSet = true;
    }

    if (value.HasMember("Dynamic") && !value["Dynamic"].IsNull())
    {
        if (!value["Dynamic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexSettingsField.Dynamic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamic = string(value["Dynamic"].GetString());
        m_dynamicHasBeenSet = true;
    }

    if (value.HasMember("TotalFieldsLimit") && !value["TotalFieldsLimit"].IsNull())
    {
        if (!value["TotalFieldsLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexSettingsField.TotalFieldsLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalFieldsLimit = string(value["TotalFieldsLimit"].GetString());
        m_totalFieldsLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexSettingsField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberOfShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfShards.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfReplicas.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refreshInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dynamic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamic.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFieldsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFieldsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalFieldsLimit.c_str(), allocator).Move(), allocator);
    }

}


string IndexSettingsField::GetNumberOfShards() const
{
    return m_numberOfShards;
}

void IndexSettingsField::SetNumberOfShards(const string& _numberOfShards)
{
    m_numberOfShards = _numberOfShards;
    m_numberOfShardsHasBeenSet = true;
}

bool IndexSettingsField::NumberOfShardsHasBeenSet() const
{
    return m_numberOfShardsHasBeenSet;
}

string IndexSettingsField::GetNumberOfReplicas() const
{
    return m_numberOfReplicas;
}

void IndexSettingsField::SetNumberOfReplicas(const string& _numberOfReplicas)
{
    m_numberOfReplicas = _numberOfReplicas;
    m_numberOfReplicasHasBeenSet = true;
}

bool IndexSettingsField::NumberOfReplicasHasBeenSet() const
{
    return m_numberOfReplicasHasBeenSet;
}

string IndexSettingsField::GetRefreshInterval() const
{
    return m_refreshInterval;
}

void IndexSettingsField::SetRefreshInterval(const string& _refreshInterval)
{
    m_refreshInterval = _refreshInterval;
    m_refreshIntervalHasBeenSet = true;
}

bool IndexSettingsField::RefreshIntervalHasBeenSet() const
{
    return m_refreshIntervalHasBeenSet;
}

string IndexSettingsField::GetDynamic() const
{
    return m_dynamic;
}

void IndexSettingsField::SetDynamic(const string& _dynamic)
{
    m_dynamic = _dynamic;
    m_dynamicHasBeenSet = true;
}

bool IndexSettingsField::DynamicHasBeenSet() const
{
    return m_dynamicHasBeenSet;
}

string IndexSettingsField::GetTotalFieldsLimit() const
{
    return m_totalFieldsLimit;
}

void IndexSettingsField::SetTotalFieldsLimit(const string& _totalFieldsLimit)
{
    m_totalFieldsLimit = _totalFieldsLimit;
    m_totalFieldsLimitHasBeenSet = true;
}

bool IndexSettingsField::TotalFieldsLimitHasBeenSet() const
{
    return m_totalFieldsLimitHasBeenSet;
}

