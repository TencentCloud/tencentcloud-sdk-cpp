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

#include <tencentcloud/vrs/v20200824/model/GetTrainingTextRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

GetTrainingTextRequest::GetTrainingTextRequest() :
    m_taskTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_textLanguageHasBeenSet(false)
{
}

string GetTrainingTextRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domain, allocator);
    }

    if (m_textLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_textLanguage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetTrainingTextRequest::GetTaskType() const
{
    return m_taskType;
}

void GetTrainingTextRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool GetTrainingTextRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t GetTrainingTextRequest::GetDomain() const
{
    return m_domain;
}

void GetTrainingTextRequest::SetDomain(const int64_t& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool GetTrainingTextRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t GetTrainingTextRequest::GetTextLanguage() const
{
    return m_textLanguage;
}

void GetTrainingTextRequest::SetTextLanguage(const int64_t& _textLanguage)
{
    m_textLanguage = _textLanguage;
    m_textLanguageHasBeenSet = true;
}

bool GetTrainingTextRequest::TextLanguageHasBeenSet() const
{
    return m_textLanguageHasBeenSet;
}


