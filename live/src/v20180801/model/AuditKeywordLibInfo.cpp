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

#include <tencentcloud/live/v20180801/model/AuditKeywordLibInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditKeywordLibInfo::AuditKeywordLibInfo() :
    m_libIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_matchTypeHasBeenSet(false)
{
}

CoreInternalOutcome AuditKeywordLibInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditKeywordLibInfo.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditKeywordLibInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

}


string AuditKeywordLibInfo::GetLibId() const
{
    return m_libId;
}

void AuditKeywordLibInfo::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool AuditKeywordLibInfo::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string AuditKeywordLibInfo::GetName() const
{
    return m_name;
}

void AuditKeywordLibInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AuditKeywordLibInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AuditKeywordLibInfo::GetDescription() const
{
    return m_description;
}

void AuditKeywordLibInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AuditKeywordLibInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AuditKeywordLibInfo::GetCreateTime() const
{
    return m_createTime;
}

void AuditKeywordLibInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuditKeywordLibInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AuditKeywordLibInfo::GetSuggestion() const
{
    return m_suggestion;
}

void AuditKeywordLibInfo::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AuditKeywordLibInfo::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string AuditKeywordLibInfo::GetMatchType() const
{
    return m_matchType;
}

void AuditKeywordLibInfo::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool AuditKeywordLibInfo::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

