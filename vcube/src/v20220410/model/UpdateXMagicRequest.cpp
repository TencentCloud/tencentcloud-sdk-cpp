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

#include <tencentcloud/vcube/v20220410/model/UpdateXMagicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

UpdateXMagicRequest::UpdateXMagicRequest() :
    m_xMagicIdHasBeenSet(false),
    m_xMagicResourceIdHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false)
{
}

string UpdateXMagicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_xMagicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xMagicId, allocator);
    }

    if (m_xMagicResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_xMagicResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_companyPermitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyPermit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyPermit.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyType.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateXMagicRequest::GetXMagicId() const
{
    return m_xMagicId;
}

void UpdateXMagicRequest::SetXMagicId(const uint64_t& _xMagicId)
{
    m_xMagicId = _xMagicId;
    m_xMagicIdHasBeenSet = true;
}

bool UpdateXMagicRequest::XMagicIdHasBeenSet() const
{
    return m_xMagicIdHasBeenSet;
}

string UpdateXMagicRequest::GetXMagicResourceId() const
{
    return m_xMagicResourceId;
}

void UpdateXMagicRequest::SetXMagicResourceId(const string& _xMagicResourceId)
{
    m_xMagicResourceId = _xMagicResourceId;
    m_xMagicResourceIdHasBeenSet = true;
}

bool UpdateXMagicRequest::XMagicResourceIdHasBeenSet() const
{
    return m_xMagicResourceIdHasBeenSet;
}

string UpdateXMagicRequest::GetCompanyPermit() const
{
    return m_companyPermit;
}

void UpdateXMagicRequest::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool UpdateXMagicRequest::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string UpdateXMagicRequest::GetCompanyType() const
{
    return m_companyType;
}

void UpdateXMagicRequest::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool UpdateXMagicRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string UpdateXMagicRequest::GetCompanyName() const
{
    return m_companyName;
}

void UpdateXMagicRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool UpdateXMagicRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}


