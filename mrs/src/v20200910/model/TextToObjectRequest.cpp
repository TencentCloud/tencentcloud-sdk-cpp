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

#include <tencentcloud/mrs/v20200910/model/TextToObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TextToObjectRequest::TextToObjectRequest() :
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isUsedClassifyHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_reportTypeVersionHasBeenSet(false)
{
}

string TextToObjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_isUsedClassifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsedClassify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUsedClassify, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userType, allocator);
    }

    if (m_reportTypeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTypeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportTypeVersion.begin(); itr != m_reportTypeVersion.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToObjectRequest::GetText() const
{
    return m_text;
}

void TextToObjectRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToObjectRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t TextToObjectRequest::GetType() const
{
    return m_type;
}

void TextToObjectRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TextToObjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool TextToObjectRequest::GetIsUsedClassify() const
{
    return m_isUsedClassify;
}

void TextToObjectRequest::SetIsUsedClassify(const bool& _isUsedClassify)
{
    m_isUsedClassify = _isUsedClassify;
    m_isUsedClassifyHasBeenSet = true;
}

bool TextToObjectRequest::IsUsedClassifyHasBeenSet() const
{
    return m_isUsedClassifyHasBeenSet;
}

uint64_t TextToObjectRequest::GetUserType() const
{
    return m_userType;
}

void TextToObjectRequest::SetUserType(const uint64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool TextToObjectRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

vector<ReportTypeVersion> TextToObjectRequest::GetReportTypeVersion() const
{
    return m_reportTypeVersion;
}

void TextToObjectRequest::SetReportTypeVersion(const vector<ReportTypeVersion>& _reportTypeVersion)
{
    m_reportTypeVersion = _reportTypeVersion;
    m_reportTypeVersionHasBeenSet = true;
}

bool TextToObjectRequest::ReportTypeVersionHasBeenSet() const
{
    return m_reportTypeVersionHasBeenSet;
}


