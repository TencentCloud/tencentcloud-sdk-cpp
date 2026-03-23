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

#include <tencentcloud/apis/v20240801/model/AgentCredentialContentDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentCredentialContentDTO::AgentCredentialContentDTO() :
    m_sTSSystemHasBeenSet(false),
    m_sTSServiceHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome AgentCredentialContentDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("STSSystem") && !value["STSSystem"].IsNull())
    {
        if (!value["STSSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentCredentialContentDTO.STSSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sTSSystem = string(value["STSSystem"].GetString());
        m_sTSSystemHasBeenSet = true;
    }

    if (value.HasMember("STSService") && !value["STSService"].IsNull())
    {
        if (!value["STSService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentCredentialContentDTO.STSService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sTSService = string(value["STSService"].GetString());
        m_sTSServiceHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentCredentialContentDTO.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentCredentialContentHeaderDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentCredentialContentDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sTSSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STSSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sTSSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_sTSServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STSService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sTSService.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentCredentialContentDTO::GetSTSSystem() const
{
    return m_sTSSystem;
}

void AgentCredentialContentDTO::SetSTSSystem(const string& _sTSSystem)
{
    m_sTSSystem = _sTSSystem;
    m_sTSSystemHasBeenSet = true;
}

bool AgentCredentialContentDTO::STSSystemHasBeenSet() const
{
    return m_sTSSystemHasBeenSet;
}

string AgentCredentialContentDTO::GetSTSService() const
{
    return m_sTSService;
}

void AgentCredentialContentDTO::SetSTSService(const string& _sTSService)
{
    m_sTSService = _sTSService;
    m_sTSServiceHasBeenSet = true;
}

bool AgentCredentialContentDTO::STSServiceHasBeenSet() const
{
    return m_sTSServiceHasBeenSet;
}

vector<AgentCredentialContentHeaderDTO> AgentCredentialContentDTO::GetHeaders() const
{
    return m_headers;
}

void AgentCredentialContentDTO::SetHeaders(const vector<AgentCredentialContentHeaderDTO>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AgentCredentialContentDTO::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

