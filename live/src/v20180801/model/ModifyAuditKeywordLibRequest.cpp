/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/ModifyAuditKeywordLibRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyAuditKeywordLibRequest::ModifyAuditKeywordLibRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_libIdHasBeenSet(false)
{
}

string ModifyAuditKeywordLibRequest::ToJsonString() const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAuditKeywordLibRequest::GetName() const
{
    return m_name;
}

void ModifyAuditKeywordLibRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAuditKeywordLibRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAuditKeywordLibRequest::GetDescription() const
{
    return m_description;
}

void ModifyAuditKeywordLibRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAuditKeywordLibRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyAuditKeywordLibRequest::GetSuggestion() const
{
    return m_suggestion;
}

void ModifyAuditKeywordLibRequest::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ModifyAuditKeywordLibRequest::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ModifyAuditKeywordLibRequest::GetLibId() const
{
    return m_libId;
}

void ModifyAuditKeywordLibRequest::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool ModifyAuditKeywordLibRequest::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}


