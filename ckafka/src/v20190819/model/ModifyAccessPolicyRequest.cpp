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

#include <tencentcloud/ckafka/v20190819/model/ModifyAccessPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyAccessPolicyRequest::ModifyAccessPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false)
{
}

string ModifyAccessPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routeId, allocator);
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr, ++i)
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


string ModifyAccessPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAccessPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAccessPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyAccessPolicyRequest::GetRouteId() const
{
    return m_routeId;
}

void ModifyAccessPolicyRequest::SetRouteId(const int64_t& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool ModifyAccessPolicyRequest::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

vector<IpWhitelistDTO> ModifyAccessPolicyRequest::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void ModifyAccessPolicyRequest::SetIpWhitelist(const vector<IpWhitelistDTO>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool ModifyAccessPolicyRequest::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}


