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

#include <tencentcloud/live/v20180801/model/AuditKeywordDeleteDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditKeywordDeleteDetail::AuditKeywordDeleteDetail() :
    m_keywordIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome AuditKeywordDeleteDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeywordId") && !value["KeywordId"].IsNull())
    {
        if (!value["KeywordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordDeleteDetail.KeywordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordId = string(value["KeywordId"].GetString());
        m_keywordIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordDeleteDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordDeleteDetail.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordDeleteDetail.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditKeywordDeleteDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string AuditKeywordDeleteDetail::GetKeywordId() const
{
    return m_keywordId;
}

void AuditKeywordDeleteDetail::SetKeywordId(const string& _keywordId)
{
    m_keywordId = _keywordId;
    m_keywordIdHasBeenSet = true;
}

bool AuditKeywordDeleteDetail::KeywordIdHasBeenSet() const
{
    return m_keywordIdHasBeenSet;
}

string AuditKeywordDeleteDetail::GetContent() const
{
    return m_content;
}

void AuditKeywordDeleteDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AuditKeywordDeleteDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool AuditKeywordDeleteDetail::GetDeleted() const
{
    return m_deleted;
}

void AuditKeywordDeleteDetail::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool AuditKeywordDeleteDetail::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string AuditKeywordDeleteDetail::GetError() const
{
    return m_error;
}

void AuditKeywordDeleteDetail::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool AuditKeywordDeleteDetail::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

