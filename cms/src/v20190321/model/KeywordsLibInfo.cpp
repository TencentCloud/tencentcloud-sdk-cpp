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

#include <tencentcloud/cms/v20190321/model/KeywordsLibInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

KeywordsLibInfo::KeywordsLibInfo() :
    m_iDHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_bizTypesHasBeenSet(false)
{
}

CoreInternalOutcome KeywordsLibInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("BizTypes") && !value["BizTypes"].IsNull())
    {
        if (!value["BizTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeywordsLibInfo.BizTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["BizTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizTypes.push_back((*itr).GetString());
        }
        m_bizTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeywordsLibInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
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

    if (m_bizTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizTypes.begin(); itr != m_bizTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string KeywordsLibInfo::GetID() const
{
    return m_iD;
}

void KeywordsLibInfo::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KeywordsLibInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KeywordsLibInfo::GetLibName() const
{
    return m_libName;
}

void KeywordsLibInfo::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool KeywordsLibInfo::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

string KeywordsLibInfo::GetDescribe() const
{
    return m_describe;
}

void KeywordsLibInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool KeywordsLibInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string KeywordsLibInfo::GetCreateTime() const
{
    return m_createTime;
}

void KeywordsLibInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KeywordsLibInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KeywordsLibInfo::GetSuggestion() const
{
    return m_suggestion;
}

void KeywordsLibInfo::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool KeywordsLibInfo::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string KeywordsLibInfo::GetMatchType() const
{
    return m_matchType;
}

void KeywordsLibInfo::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool KeywordsLibInfo::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

vector<string> KeywordsLibInfo::GetBizTypes() const
{
    return m_bizTypes;
}

void KeywordsLibInfo::SetBizTypes(const vector<string>& _bizTypes)
{
    m_bizTypes = _bizTypes;
    m_bizTypesHasBeenSet = true;
}

bool KeywordsLibInfo::BizTypesHasBeenSet() const
{
    return m_bizTypesHasBeenSet;
}

