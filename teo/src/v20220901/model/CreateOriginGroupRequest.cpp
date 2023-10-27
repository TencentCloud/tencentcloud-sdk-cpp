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

#include <tencentcloud/teo/v20220901/model/CreateOriginGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateOriginGroupRequest::CreateOriginGroupRequest() :
    m_zoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_hostHeaderHasBeenSet(false)
{
}

string CreateOriginGroupRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_records.begin(); itr != m_records.end(); ++itr, ++i)
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


string CreateOriginGroupRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateOriginGroupRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateOriginGroupRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateOriginGroupRequest::GetName() const
{
    return m_name;
}

void CreateOriginGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateOriginGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateOriginGroupRequest::GetType() const
{
    return m_type;
}

void CreateOriginGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateOriginGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OriginRecord> CreateOriginGroupRequest::GetRecords() const
{
    return m_records;
}

void CreateOriginGroupRequest::SetRecords(const vector<OriginRecord>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool CreateOriginGroupRequest::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

string CreateOriginGroupRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void CreateOriginGroupRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool CreateOriginGroupRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}


