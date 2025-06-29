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

#include <tencentcloud/teo/v20220901/model/EnableOriginACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

EnableOriginACLRequest::EnableOriginACLRequest() :
    m_zoneIdHasBeenSet(false),
    m_l7EnableModeHasBeenSet(false),
    m_l7HostsHasBeenSet(false),
    m_l4EnableModeHasBeenSet(false),
    m_l4ProxyIdsHasBeenSet(false)
{
}

string EnableOriginACLRequest::ToJsonString() const
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

    if (m_l7EnableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7EnableMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l7EnableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_l7HostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l7Hosts.begin(); itr != m_l7Hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_l4EnableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4EnableMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l4EnableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_l4ProxyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4ProxyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l4ProxyIds.begin(); itr != m_l4ProxyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableOriginACLRequest::GetZoneId() const
{
    return m_zoneId;
}

void EnableOriginACLRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool EnableOriginACLRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string EnableOriginACLRequest::GetL7EnableMode() const
{
    return m_l7EnableMode;
}

void EnableOriginACLRequest::SetL7EnableMode(const string& _l7EnableMode)
{
    m_l7EnableMode = _l7EnableMode;
    m_l7EnableModeHasBeenSet = true;
}

bool EnableOriginACLRequest::L7EnableModeHasBeenSet() const
{
    return m_l7EnableModeHasBeenSet;
}

vector<string> EnableOriginACLRequest::GetL7Hosts() const
{
    return m_l7Hosts;
}

void EnableOriginACLRequest::SetL7Hosts(const vector<string>& _l7Hosts)
{
    m_l7Hosts = _l7Hosts;
    m_l7HostsHasBeenSet = true;
}

bool EnableOriginACLRequest::L7HostsHasBeenSet() const
{
    return m_l7HostsHasBeenSet;
}

string EnableOriginACLRequest::GetL4EnableMode() const
{
    return m_l4EnableMode;
}

void EnableOriginACLRequest::SetL4EnableMode(const string& _l4EnableMode)
{
    m_l4EnableMode = _l4EnableMode;
    m_l4EnableModeHasBeenSet = true;
}

bool EnableOriginACLRequest::L4EnableModeHasBeenSet() const
{
    return m_l4EnableModeHasBeenSet;
}

vector<string> EnableOriginACLRequest::GetL4ProxyIds() const
{
    return m_l4ProxyIds;
}

void EnableOriginACLRequest::SetL4ProxyIds(const vector<string>& _l4ProxyIds)
{
    m_l4ProxyIds = _l4ProxyIds;
    m_l4ProxyIdsHasBeenSet = true;
}

bool EnableOriginACLRequest::L4ProxyIdsHasBeenSet() const
{
    return m_l4ProxyIdsHasBeenSet;
}


