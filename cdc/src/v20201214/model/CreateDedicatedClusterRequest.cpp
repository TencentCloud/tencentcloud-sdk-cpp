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

#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

CreateDedicatedClusterRequest::CreateDedicatedClusterRequest() :
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateDedicatedClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_siteId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDedicatedClusterRequest::GetSiteId() const
{
    return m_siteId;
}

void CreateDedicatedClusterRequest::SetSiteId(const string& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool CreateDedicatedClusterRequest::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string CreateDedicatedClusterRequest::GetName() const
{
    return m_name;
}

void CreateDedicatedClusterRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDedicatedClusterRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDedicatedClusterRequest::GetZone() const
{
    return m_zone;
}

void CreateDedicatedClusterRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDedicatedClusterRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateDedicatedClusterRequest::GetDescription() const
{
    return m_description;
}

void CreateDedicatedClusterRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDedicatedClusterRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


