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

#include <tencentcloud/teo/v20220901/model/ModifyZoneCustomVariablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyZoneCustomVariablesRequest::ModifyZoneCustomVariablesRequest() :
    m_zoneIdHasBeenSet(false),
    m_customVariablesHasBeenSet(false),
    m_customVariableOperationsHasBeenSet(false)
{
}

string ModifyZoneCustomVariablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customVariableOperationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableOperations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariableOperations.begin(); itr != m_customVariableOperations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyZoneCustomVariablesRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyZoneCustomVariablesRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyZoneCustomVariablesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<CustomVariable> ModifyZoneCustomVariablesRequest::GetCustomVariables() const
{
    return m_customVariables;
}

void ModifyZoneCustomVariablesRequest::SetCustomVariables(const vector<CustomVariable>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool ModifyZoneCustomVariablesRequest::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

vector<CustomVariableOperation> ModifyZoneCustomVariablesRequest::GetCustomVariableOperations() const
{
    return m_customVariableOperations;
}

void ModifyZoneCustomVariablesRequest::SetCustomVariableOperations(const vector<CustomVariableOperation>& _customVariableOperations)
{
    m_customVariableOperations = _customVariableOperations;
    m_customVariableOperationsHasBeenSet = true;
}

bool ModifyZoneCustomVariablesRequest::CustomVariableOperationsHasBeenSet() const
{
    return m_customVariableOperationsHasBeenSet;
}


