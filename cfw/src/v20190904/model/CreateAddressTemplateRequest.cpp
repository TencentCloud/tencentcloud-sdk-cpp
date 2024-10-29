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

#include <tencentcloud/cfw/v20190904/model/CreateAddressTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAddressTemplateRequest::CreateAddressTemplateRequest() :
    m_nameHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ipStringHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

string CreateAddressTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAddressTemplateRequest::GetName() const
{
    return m_name;
}

void CreateAddressTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAddressTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAddressTemplateRequest::GetDetail() const
{
    return m_detail;
}

void CreateAddressTemplateRequest::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool CreateAddressTemplateRequest::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string CreateAddressTemplateRequest::GetIpString() const
{
    return m_ipString;
}

void CreateAddressTemplateRequest::SetIpString(const string& _ipString)
{
    m_ipString = _ipString;
    m_ipStringHasBeenSet = true;
}

bool CreateAddressTemplateRequest::IpStringHasBeenSet() const
{
    return m_ipStringHasBeenSet;
}

int64_t CreateAddressTemplateRequest::GetType() const
{
    return m_type;
}

void CreateAddressTemplateRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAddressTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAddressTemplateRequest::GetProtocolType() const
{
    return m_protocolType;
}

void CreateAddressTemplateRequest::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool CreateAddressTemplateRequest::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

int64_t CreateAddressTemplateRequest::GetIpVersion() const
{
    return m_ipVersion;
}

void CreateAddressTemplateRequest::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool CreateAddressTemplateRequest::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}


