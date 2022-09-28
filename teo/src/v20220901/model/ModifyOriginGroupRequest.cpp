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

#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyOriginGroupRequest::ModifyOriginGroupRequest() :
    m_zoneIdHasBeenSet(false),
    m_originGroupIdHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_originGroupNameHasBeenSet(false),
    m_configurationTypeHasBeenSet(false),
    m_originRecordsHasBeenSet(false),
    m_hostHeaderHasBeenSet(false)
{
}

string ModifyOriginGroupRequest::ToJsonString() const
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

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configurationType.c_str(), allocator).Move(), allocator);
    }

    if (m_originRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRecords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originRecords.begin(); itr != m_originRecords.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOriginGroupRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyOriginGroupRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyOriginGroupRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyOriginGroupRequest::GetOriginGroupId() const
{
    return m_originGroupId;
}

void ModifyOriginGroupRequest::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

string ModifyOriginGroupRequest::GetOriginType() const
{
    return m_originType;
}

void ModifyOriginGroupRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string ModifyOriginGroupRequest::GetOriginGroupName() const
{
    return m_originGroupName;
}

void ModifyOriginGroupRequest::SetOriginGroupName(const string& _originGroupName)
{
    m_originGroupName = _originGroupName;
    m_originGroupNameHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginGroupNameHasBeenSet() const
{
    return m_originGroupNameHasBeenSet;
}

string ModifyOriginGroupRequest::GetConfigurationType() const
{
    return m_configurationType;
}

void ModifyOriginGroupRequest::SetConfigurationType(const string& _configurationType)
{
    m_configurationType = _configurationType;
    m_configurationTypeHasBeenSet = true;
}

bool ModifyOriginGroupRequest::ConfigurationTypeHasBeenSet() const
{
    return m_configurationTypeHasBeenSet;
}

vector<OriginRecord> ModifyOriginGroupRequest::GetOriginRecords() const
{
    return m_originRecords;
}

void ModifyOriginGroupRequest::SetOriginRecords(const vector<OriginRecord>& _originRecords)
{
    m_originRecords = _originRecords;
    m_originRecordsHasBeenSet = true;
}

bool ModifyOriginGroupRequest::OriginRecordsHasBeenSet() const
{
    return m_originRecordsHasBeenSet;
}

string ModifyOriginGroupRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void ModifyOriginGroupRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool ModifyOriginGroupRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}


