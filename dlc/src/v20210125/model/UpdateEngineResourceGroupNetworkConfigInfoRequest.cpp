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

#include <tencentcloud/dlc/v20210125/model/UpdateEngineResourceGroupNetworkConfigInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateEngineResourceGroupNetworkConfigInfoRequest::UpdateEngineResourceGroupNetworkConfigInfoRequest() :
    m_engineResourceGroupIdHasBeenSet(false),
    m_isEffectiveNowHasBeenSet(false),
    m_networkConfigNamesHasBeenSet(false)
{
}

string UpdateEngineResourceGroupNetworkConfigInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_isEffectiveNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEffectiveNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEffectiveNow, allocator);
    }

    if (m_networkConfigNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfigNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkConfigNames.begin(); itr != m_networkConfigNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateEngineResourceGroupNetworkConfigInfoRequest::GetEngineResourceGroupId() const
{
    return m_engineResourceGroupId;
}

void UpdateEngineResourceGroupNetworkConfigInfoRequest::SetEngineResourceGroupId(const string& _engineResourceGroupId)
{
    m_engineResourceGroupId = _engineResourceGroupId;
    m_engineResourceGroupIdHasBeenSet = true;
}

bool UpdateEngineResourceGroupNetworkConfigInfoRequest::EngineResourceGroupIdHasBeenSet() const
{
    return m_engineResourceGroupIdHasBeenSet;
}

int64_t UpdateEngineResourceGroupNetworkConfigInfoRequest::GetIsEffectiveNow() const
{
    return m_isEffectiveNow;
}

void UpdateEngineResourceGroupNetworkConfigInfoRequest::SetIsEffectiveNow(const int64_t& _isEffectiveNow)
{
    m_isEffectiveNow = _isEffectiveNow;
    m_isEffectiveNowHasBeenSet = true;
}

bool UpdateEngineResourceGroupNetworkConfigInfoRequest::IsEffectiveNowHasBeenSet() const
{
    return m_isEffectiveNowHasBeenSet;
}

vector<string> UpdateEngineResourceGroupNetworkConfigInfoRequest::GetNetworkConfigNames() const
{
    return m_networkConfigNames;
}

void UpdateEngineResourceGroupNetworkConfigInfoRequest::SetNetworkConfigNames(const vector<string>& _networkConfigNames)
{
    m_networkConfigNames = _networkConfigNames;
    m_networkConfigNamesHasBeenSet = true;
}

bool UpdateEngineResourceGroupNetworkConfigInfoRequest::NetworkConfigNamesHasBeenSet() const
{
    return m_networkConfigNamesHasBeenSet;
}


