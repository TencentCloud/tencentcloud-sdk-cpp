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

#include <tencentcloud/databuddy/v20260715/model/Fragment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Fragment::Fragment() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_langHasBeenSet(false)
{
}

CoreInternalOutcome Fragment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fragment.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fragment.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fragment.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fragment.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fragment.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Fragment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

}


string Fragment::GetName() const
{
    return m_name;
}

void Fragment::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Fragment::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Fragment::GetType() const
{
    return m_type;
}

void Fragment::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Fragment::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Fragment::GetComment() const
{
    return m_comment;
}

void Fragment::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Fragment::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string Fragment::GetContent() const
{
    return m_content;
}

void Fragment::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Fragment::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Fragment::GetLang() const
{
    return m_lang;
}

void Fragment::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool Fragment::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

