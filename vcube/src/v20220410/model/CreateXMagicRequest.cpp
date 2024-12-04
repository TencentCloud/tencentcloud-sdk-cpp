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

#include <tencentcloud/vcube/v20220410/model/CreateXMagicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateXMagicRequest::CreateXMagicRequest() :
    m_applicationIdHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_xMagicResourceIdsHasBeenSet(false)
{
}

string CreateXMagicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
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

    if (m_xMagicResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_xMagicResourceIds.begin(); itr != m_xMagicResourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateXMagicRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateXMagicRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateXMagicRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateXMagicRequest::GetCompanyPermit() const
{
    return m_companyPermit;
}

void CreateXMagicRequest::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool CreateXMagicRequest::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string CreateXMagicRequest::GetCompanyType() const
{
    return m_companyType;
}

void CreateXMagicRequest::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CreateXMagicRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string CreateXMagicRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateXMagicRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateXMagicRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

vector<string> CreateXMagicRequest::GetXMagicResourceIds() const
{
    return m_xMagicResourceIds;
}

void CreateXMagicRequest::SetXMagicResourceIds(const vector<string>& _xMagicResourceIds)
{
    m_xMagicResourceIds = _xMagicResourceIds;
    m_xMagicResourceIdsHasBeenSet = true;
}

bool CreateXMagicRequest::XMagicResourceIdsHasBeenSet() const
{
    return m_xMagicResourceIdsHasBeenSet;
}


