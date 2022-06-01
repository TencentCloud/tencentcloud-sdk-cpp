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

#include <tencentcloud/teo/v20220106/model/CreateDnsRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreateDnsRecordRequest::CreateDnsRecordRequest() :
    m_zoneIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string CreateDnsRecordRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttl, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDnsRecordRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateDnsRecordRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateDnsRecordRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateDnsRecordRequest::GetType() const
{
    return m_type;
}

void CreateDnsRecordRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDnsRecordRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDnsRecordRequest::GetName() const
{
    return m_name;
}

void CreateDnsRecordRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDnsRecordRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDnsRecordRequest::GetContent() const
{
    return m_content;
}

void CreateDnsRecordRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateDnsRecordRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreateDnsRecordRequest::GetMode() const
{
    return m_mode;
}

void CreateDnsRecordRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateDnsRecordRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t CreateDnsRecordRequest::GetTtl() const
{
    return m_ttl;
}

void CreateDnsRecordRequest::SetTtl(const int64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool CreateDnsRecordRequest::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

int64_t CreateDnsRecordRequest::GetPriority() const
{
    return m_priority;
}

void CreateDnsRecordRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateDnsRecordRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


