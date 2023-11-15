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

#include <tencentcloud/cfw/v20190904/model/ModifyAddressTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyAddressTemplateRequest::ModifyAddressTemplateRequest() :
    m_uuidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ipStringHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_protocolTypeHasBeenSet(false)
{
}

string ModifyAddressTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_ipStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipString.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAddressTemplateRequest::GetUuid() const
{
    return m_uuid;
}

void ModifyAddressTemplateRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ModifyAddressTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyAddressTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAddressTemplateRequest::GetDetail() const
{
    return m_detail;
}

void ModifyAddressTemplateRequest::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string ModifyAddressTemplateRequest::GetIpString() const
{
    return m_ipString;
}

void ModifyAddressTemplateRequest::SetIpString(const string& _ipString)
{
    m_ipString = _ipString;
    m_ipStringHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::IpStringHasBeenSet() const
{
    return m_ipStringHasBeenSet;
}

int64_t ModifyAddressTemplateRequest::GetType() const
{
    return m_type;
}

void ModifyAddressTemplateRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyAddressTemplateRequest::GetProtocolType() const
{
    return m_protocolType;
}

void ModifyAddressTemplateRequest::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool ModifyAddressTemplateRequest::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}


