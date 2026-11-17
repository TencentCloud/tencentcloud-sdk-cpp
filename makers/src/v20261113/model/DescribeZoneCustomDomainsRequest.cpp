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

#include <tencentcloud/makers/v20261113/model/DescribeZoneCustomDomainsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

DescribeZoneCustomDomainsRequest::DescribeZoneCustomDomainsRequest() :
    m_zoneIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_customDomainsHasBeenSet(false)
{
}

string DescribeZoneCustomDomainsRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_customDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customDomains.begin(); itr != m_customDomains.end(); ++itr, ++i)
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


string DescribeZoneCustomDomainsRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeZoneCustomDomainsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeZoneCustomDomainsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeZoneCustomDomainsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeZoneCustomDomainsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeZoneCustomDomainsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<CustomDomainInput> DescribeZoneCustomDomainsRequest::GetCustomDomains() const
{
    return m_customDomains;
}

void DescribeZoneCustomDomainsRequest::SetCustomDomains(const vector<CustomDomainInput>& _customDomains)
{
    m_customDomains = _customDomains;
    m_customDomainsHasBeenSet = true;
}

bool DescribeZoneCustomDomainsRequest::CustomDomainsHasBeenSet() const
{
    return m_customDomainsHasBeenSet;
}


