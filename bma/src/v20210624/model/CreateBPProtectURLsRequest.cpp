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

#include <tencentcloud/bma/v20210624/model/CreateBPProtectURLsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateBPProtectURLsRequest::CreateBPProtectURLsRequest() :
    m_companyNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_licenseNameHasBeenSet(false),
    m_protectURLsHasBeenSet(false),
    m_protectWebsHasBeenSet(false)
{
}

string CreateBPProtectURLsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseName.c_str(), allocator).Move(), allocator);
    }

    if (m_protectURLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURLs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectURLs.begin(); itr != m_protectURLs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectWebsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectWebs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protectWebs.begin(); itr != m_protectWebs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBPProtectURLsRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateBPProtectURLsRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateBPProtectURLsRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CreateBPProtectURLsRequest::GetPhone() const
{
    return m_phone;
}

void CreateBPProtectURLsRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CreateBPProtectURLsRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CreateBPProtectURLsRequest::GetLicenseName() const
{
    return m_licenseName;
}

void CreateBPProtectURLsRequest::SetLicenseName(const string& _licenseName)
{
    m_licenseName = _licenseName;
    m_licenseNameHasBeenSet = true;
}

bool CreateBPProtectURLsRequest::LicenseNameHasBeenSet() const
{
    return m_licenseNameHasBeenSet;
}

vector<string> CreateBPProtectURLsRequest::GetProtectURLs() const
{
    return m_protectURLs;
}

void CreateBPProtectURLsRequest::SetProtectURLs(const vector<string>& _protectURLs)
{
    m_protectURLs = _protectURLs;
    m_protectURLsHasBeenSet = true;
}

bool CreateBPProtectURLsRequest::ProtectURLsHasBeenSet() const
{
    return m_protectURLsHasBeenSet;
}

vector<string> CreateBPProtectURLsRequest::GetProtectWebs() const
{
    return m_protectWebs;
}

void CreateBPProtectURLsRequest::SetProtectWebs(const vector<string>& _protectWebs)
{
    m_protectWebs = _protectWebs;
    m_protectWebsHasBeenSet = true;
}

bool CreateBPProtectURLsRequest::ProtectWebsHasBeenSet() const
{
    return m_protectWebsHasBeenSet;
}


