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

#include <tencentcloud/teo/v20220901/model/CreateSecurityClientAttesterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateSecurityClientAttesterRequest::CreateSecurityClientAttesterRequest() :
    m_zoneIdHasBeenSet(false),
    m_clientAttestersHasBeenSet(false)
{
}

string CreateSecurityClientAttesterRequest::ToJsonString() const
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

    if (m_clientAttestersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAttesters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientAttesters.begin(); itr != m_clientAttesters.end(); ++itr, ++i)
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


string CreateSecurityClientAttesterRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateSecurityClientAttesterRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateSecurityClientAttesterRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<ClientAttester> CreateSecurityClientAttesterRequest::GetClientAttesters() const
{
    return m_clientAttesters;
}

void CreateSecurityClientAttesterRequest::SetClientAttesters(const vector<ClientAttester>& _clientAttesters)
{
    m_clientAttesters = _clientAttesters;
    m_clientAttestersHasBeenSet = true;
}

bool CreateSecurityClientAttesterRequest::ClientAttestersHasBeenSet() const
{
    return m_clientAttestersHasBeenSet;
}


