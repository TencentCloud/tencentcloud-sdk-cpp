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

#include <tencentcloud/vod/v20180717/model/ModifyVodDomainAccelerateConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyVodDomainAccelerateConfigRequest::ModifyVodDomainAccelerateConfigRequest() :
    m_domainHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ModifyVodDomainAccelerateConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVodDomainAccelerateConfigRequest::GetDomain() const
{
    return m_domain;
}

void ModifyVodDomainAccelerateConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyVodDomainAccelerateConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyVodDomainAccelerateConfigRequest::GetArea() const
{
    return m_area;
}

void ModifyVodDomainAccelerateConfigRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ModifyVodDomainAccelerateConfigRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ModifyVodDomainAccelerateConfigRequest::GetStatus() const
{
    return m_status;
}

void ModifyVodDomainAccelerateConfigRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyVodDomainAccelerateConfigRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyVodDomainAccelerateConfigRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyVodDomainAccelerateConfigRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyVodDomainAccelerateConfigRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


