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

#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyLoadBalancingRequest::ModifyLoadBalancingRequest() :
    m_zoneIdHasBeenSet(false),
    m_loadBalancingIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_tTLHasBeenSet(false)
{
}

string ModifyLoadBalancingRequest::ToJsonString() const
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

    if (m_loadBalancingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancingId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originId.begin(); itr != m_originId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoadBalancingRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyLoadBalancingRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyLoadBalancingRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyLoadBalancingRequest::GetLoadBalancingId() const
{
    return m_loadBalancingId;
}

void ModifyLoadBalancingRequest::SetLoadBalancingId(const string& _loadBalancingId)
{
    m_loadBalancingId = _loadBalancingId;
    m_loadBalancingIdHasBeenSet = true;
}

bool ModifyLoadBalancingRequest::LoadBalancingIdHasBeenSet() const
{
    return m_loadBalancingIdHasBeenSet;
}

string ModifyLoadBalancingRequest::GetType() const
{
    return m_type;
}

void ModifyLoadBalancingRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyLoadBalancingRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ModifyLoadBalancingRequest::GetOriginId() const
{
    return m_originId;
}

void ModifyLoadBalancingRequest::SetOriginId(const vector<string>& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool ModifyLoadBalancingRequest::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

uint64_t ModifyLoadBalancingRequest::GetTTL() const
{
    return m_tTL;
}

void ModifyLoadBalancingRequest::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool ModifyLoadBalancingRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}


