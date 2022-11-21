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

#include <tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateCarrierPrivilegeNumberApplicantRequest::CreateCarrierPrivilegeNumberApplicantRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateCarrierPrivilegeNumberApplicantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_calleesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callees.begin(); itr != m_callees.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCarrierPrivilegeNumberApplicantRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCarrierPrivilegeNumberApplicantRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCarrierPrivilegeNumberApplicantRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> CreateCarrierPrivilegeNumberApplicantRequest::GetCallers() const
{
    return m_callers;
}

void CreateCarrierPrivilegeNumberApplicantRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateCarrierPrivilegeNumberApplicantRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

vector<string> CreateCarrierPrivilegeNumberApplicantRequest::GetCallees() const
{
    return m_callees;
}

void CreateCarrierPrivilegeNumberApplicantRequest::SetCallees(const vector<string>& _callees)
{
    m_callees = _callees;
    m_calleesHasBeenSet = true;
}

bool CreateCarrierPrivilegeNumberApplicantRequest::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

string CreateCarrierPrivilegeNumberApplicantRequest::GetDescription() const
{
    return m_description;
}

void CreateCarrierPrivilegeNumberApplicantRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCarrierPrivilegeNumberApplicantRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


