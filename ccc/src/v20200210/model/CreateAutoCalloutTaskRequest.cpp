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

#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateAutoCalloutTaskRequest::CreateAutoCalloutTaskRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_ivrIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_triesHasBeenSet(false)
{
}

string CreateAutoCalloutTaskRequest::ToJsonString() const
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

    if (m_notBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBefore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notBefore, allocator);
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

    if (m_ivrIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IvrId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ivrId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notAfter, allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tries, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAutoCalloutTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateAutoCalloutTaskRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t CreateAutoCalloutTaskRequest::GetNotBefore() const
{
    return m_notBefore;
}

void CreateAutoCalloutTaskRequest::SetNotBefore(const int64_t& _notBefore)
{
    m_notBefore = _notBefore;
    m_notBeforeHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::NotBeforeHasBeenSet() const
{
    return m_notBeforeHasBeenSet;
}

vector<string> CreateAutoCalloutTaskRequest::GetCallees() const
{
    return m_callees;
}

void CreateAutoCalloutTaskRequest::SetCallees(const vector<string>& _callees)
{
    m_callees = _callees;
    m_calleesHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

vector<string> CreateAutoCalloutTaskRequest::GetCallers() const
{
    return m_callers;
}

void CreateAutoCalloutTaskRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

uint64_t CreateAutoCalloutTaskRequest::GetIvrId() const
{
    return m_ivrId;
}

void CreateAutoCalloutTaskRequest::SetIvrId(const uint64_t& _ivrId)
{
    m_ivrId = _ivrId;
    m_ivrIdHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::IvrIdHasBeenSet() const
{
    return m_ivrIdHasBeenSet;
}

string CreateAutoCalloutTaskRequest::GetName() const
{
    return m_name;
}

void CreateAutoCalloutTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAutoCalloutTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateAutoCalloutTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateAutoCalloutTaskRequest::GetNotAfter() const
{
    return m_notAfter;
}

void CreateAutoCalloutTaskRequest::SetNotAfter(const int64_t& _notAfter)
{
    m_notAfter = _notAfter;
    m_notAfterHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

uint64_t CreateAutoCalloutTaskRequest::GetTries() const
{
    return m_tries;
}

void CreateAutoCalloutTaskRequest::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool CreateAutoCalloutTaskRequest::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}


