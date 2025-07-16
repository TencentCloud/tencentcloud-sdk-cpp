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

#include <tencentcloud/live/v20180801/model/AuditKeywordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditKeywordInfo::AuditKeywordInfo() :
    m_keywordIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AuditKeywordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeywordId") && !value["KeywordId"].IsNull())
    {
        if (!value["KeywordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordInfo.KeywordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordId = string(value["KeywordId"].GetString());
        m_keywordIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditKeywordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywordId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AuditKeywordInfo::GetKeywordId() const
{
    return m_keywordId;
}

void AuditKeywordInfo::SetKeywordId(const string& _keywordId)
{
    m_keywordId = _keywordId;
    m_keywordIdHasBeenSet = true;
}

bool AuditKeywordInfo::KeywordIdHasBeenSet() const
{
    return m_keywordIdHasBeenSet;
}

string AuditKeywordInfo::GetContent() const
{
    return m_content;
}

void AuditKeywordInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AuditKeywordInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AuditKeywordInfo::GetLabel() const
{
    return m_label;
}

void AuditKeywordInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AuditKeywordInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string AuditKeywordInfo::GetCreateTime() const
{
    return m_createTime;
}

void AuditKeywordInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuditKeywordInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

