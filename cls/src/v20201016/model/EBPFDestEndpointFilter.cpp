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

#include <tencentcloud/cls/v20201016/model/EBPFDestEndpointFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EBPFDestEndpointFilter::EBPFDestEndpointFilter() :
    m_modeHasBeenSet(false),
    m_endpointsHasBeenSet(false)
{
}

CoreInternalOutcome EBPFDestEndpointFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFDestEndpointFilter.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Endpoints") && !value["Endpoints"].IsNull())
    {
        if (!value["Endpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EBPFDestEndpointFilter.Endpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["Endpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EBPFEndpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpoints.push_back(item);
        }
        m_endpointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EBPFDestEndpointFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t EBPFDestEndpointFilter::GetMode() const
{
    return m_mode;
}

void EBPFDestEndpointFilter::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool EBPFDestEndpointFilter::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<EBPFEndpoint> EBPFDestEndpointFilter::GetEndpoints() const
{
    return m_endpoints;
}

void EBPFDestEndpointFilter::SetEndpoints(const vector<EBPFEndpoint>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool EBPFDestEndpointFilter::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

