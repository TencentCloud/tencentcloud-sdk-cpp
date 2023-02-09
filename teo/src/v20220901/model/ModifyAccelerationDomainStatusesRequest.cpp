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

#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainStatusesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyAccelerationDomainStatusesRequest::ModifyAccelerationDomainStatusesRequest() :
    m_zoneIdHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string ModifyAccelerationDomainStatusesRequest::ToJsonString() const
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

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccelerationDomainStatusesRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyAccelerationDomainStatusesRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyAccelerationDomainStatusesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> ModifyAccelerationDomainStatusesRequest::GetDomainNames() const
{
    return m_domainNames;
}

void ModifyAccelerationDomainStatusesRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool ModifyAccelerationDomainStatusesRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

string ModifyAccelerationDomainStatusesRequest::GetStatus() const
{
    return m_status;
}

void ModifyAccelerationDomainStatusesRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAccelerationDomainStatusesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ModifyAccelerationDomainStatusesRequest::GetForce() const
{
    return m_force;
}

void ModifyAccelerationDomainStatusesRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool ModifyAccelerationDomainStatusesRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


