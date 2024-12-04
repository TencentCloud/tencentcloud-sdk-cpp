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

#include <tencentcloud/vcube/v20220410/model/CreateTestXMagicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateTestXMagicRequest::CreateTestXMagicRequest() :
    m_applicationIdHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_planListHasBeenSet(false)
{
}

string CreateTestXMagicRequest::ToJsonString() const
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

    if (m_planListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_planList.begin(); itr != m_planList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTestXMagicRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateTestXMagicRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateTestXMagicRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateTestXMagicRequest::GetCompanyPermit() const
{
    return m_companyPermit;
}

void CreateTestXMagicRequest::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool CreateTestXMagicRequest::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string CreateTestXMagicRequest::GetCompanyType() const
{
    return m_companyType;
}

void CreateTestXMagicRequest::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CreateTestXMagicRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string CreateTestXMagicRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateTestXMagicRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateTestXMagicRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

vector<string> CreateTestXMagicRequest::GetPlanList() const
{
    return m_planList;
}

void CreateTestXMagicRequest::SetPlanList(const vector<string>& _planList)
{
    m_planList = _planList;
    m_planListHasBeenSet = true;
}

bool CreateTestXMagicRequest::PlanListHasBeenSet() const
{
    return m_planListHasBeenSet;
}


