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

#include <tencentcloud/databuddy/v20260715/model/FieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FieldInfo::FieldInfo() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_langHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_sampleValuesHasBeenSet(false)
{
}

CoreInternalOutcome FieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("SampleValues") && !value["SampleValues"].IsNull())
    {
        if (!value["SampleValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldInfo.SampleValues` is not array type"));

        const rapidjson::Value &tmpValue = value["SampleValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sampleValues.push_back((*itr).GetString());
        }
        m_sampleValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleValues.begin(); itr != m_sampleValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FieldInfo::GetName() const
{
    return m_name;
}

void FieldInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FieldInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FieldInfo::GetComment() const
{
    return m_comment;
}

void FieldInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool FieldInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string FieldInfo::GetType() const
{
    return m_type;
}

void FieldInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FieldInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FieldInfo::GetLang() const
{
    return m_lang;
}

void FieldInfo::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool FieldInfo::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

string FieldInfo::GetContent() const
{
    return m_content;
}

void FieldInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool FieldInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<string> FieldInfo::GetSampleValues() const
{
    return m_sampleValues;
}

void FieldInfo::SetSampleValues(const vector<string>& _sampleValues)
{
    m_sampleValues = _sampleValues;
    m_sampleValuesHasBeenSet = true;
}

bool FieldInfo::SampleValuesHasBeenSet() const
{
    return m_sampleValuesHasBeenSet;
}

