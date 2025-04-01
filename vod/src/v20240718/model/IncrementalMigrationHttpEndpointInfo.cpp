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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpEndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpEndpointInfo::IncrementalMigrationHttpEndpointInfo() :
    m_endpointHasBeenSet(false),
    m_standbyEndpointSetHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpEndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpEndpointInfo.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("StandbyEndpointSet") && !value["StandbyEndpointSet"].IsNull())
    {
        if (!value["StandbyEndpointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpEndpointInfo.StandbyEndpointSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StandbyEndpointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_standbyEndpointSet.push_back((*itr).GetString());
        }
        m_standbyEndpointSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpEndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyEndpointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyEndpointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_standbyEndpointSet.begin(); itr != m_standbyEndpointSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IncrementalMigrationHttpEndpointInfo::GetEndpoint() const
{
    return m_endpoint;
}

void IncrementalMigrationHttpEndpointInfo::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool IncrementalMigrationHttpEndpointInfo::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

vector<string> IncrementalMigrationHttpEndpointInfo::GetStandbyEndpointSet() const
{
    return m_standbyEndpointSet;
}

void IncrementalMigrationHttpEndpointInfo::SetStandbyEndpointSet(const vector<string>& _standbyEndpointSet)
{
    m_standbyEndpointSet = _standbyEndpointSet;
    m_standbyEndpointSetHasBeenSet = true;
}

bool IncrementalMigrationHttpEndpointInfo::StandbyEndpointSetHasBeenSet() const
{
    return m_standbyEndpointSetHasBeenSet;
}

