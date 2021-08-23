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

#include <tencentcloud/cms/v20190321/model/TextSample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

TextSample::TextSample() :
    m_codeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome TextSample::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.CreatedAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetUint64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.EvilType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetUint64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.Label` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_label = value["Label"].GetUint64();
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TextSample.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextSample::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_label, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t TextSample::GetCode() const
{
    return m_code;
}

void TextSample::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TextSample::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TextSample::GetContent() const
{
    return m_content;
}

void TextSample::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TextSample::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t TextSample::GetCreatedAt() const
{
    return m_createdAt;
}

void TextSample::SetCreatedAt(const uint64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool TextSample::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t TextSample::GetEvilType() const
{
    return m_evilType;
}

void TextSample::SetEvilType(const uint64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool TextSample::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

string TextSample::GetId() const
{
    return m_id;
}

void TextSample::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TextSample::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t TextSample::GetLabel() const
{
    return m_label;
}

void TextSample::SetLabel(const uint64_t& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool TextSample::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t TextSample::GetStatus() const
{
    return m_status;
}

void TextSample::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TextSample::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

