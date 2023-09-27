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

#include <tencentcloud/dbbrain/v20210527/model/IndexesToBuild.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

IndexesToBuild::IndexesToBuild() :
    m_idHasBeenSet(false),
    m_indexCommandHasBeenSet(false),
    m_indexStrHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_signsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome IndexesToBuild::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IndexCommand") && !value["IndexCommand"].IsNull())
    {
        if (!value["IndexCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.IndexCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexCommand = string(value["IndexCommand"].GetString());
        m_indexCommandHasBeenSet = true;
    }

    if (value.HasMember("IndexStr") && !value["IndexStr"].IsNull())
    {
        if (!value["IndexStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.IndexStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStr = string(value["IndexStr"].GetString());
        m_indexStrHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Signs") && !value["Signs"].IsNull())
    {
        if (!value["Signs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.Signs` is not array type"));

        const rapidjson::Value &tmpValue = value["Signs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signs.push_back((*itr).GetString());
        }
        m_signsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToBuild.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexesToBuild::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_indexCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStr.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_signsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signs.begin(); itr != m_signs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t IndexesToBuild::GetId() const
{
    return m_id;
}

void IndexesToBuild::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IndexesToBuild::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IndexesToBuild::GetIndexCommand() const
{
    return m_indexCommand;
}

void IndexesToBuild::SetIndexCommand(const string& _indexCommand)
{
    m_indexCommand = _indexCommand;
    m_indexCommandHasBeenSet = true;
}

bool IndexesToBuild::IndexCommandHasBeenSet() const
{
    return m_indexCommandHasBeenSet;
}

string IndexesToBuild::GetIndexStr() const
{
    return m_indexStr;
}

void IndexesToBuild::SetIndexStr(const string& _indexStr)
{
    m_indexStr = _indexStr;
    m_indexStrHasBeenSet = true;
}

bool IndexesToBuild::IndexStrHasBeenSet() const
{
    return m_indexStrHasBeenSet;
}

int64_t IndexesToBuild::GetLevel() const
{
    return m_level;
}

void IndexesToBuild::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool IndexesToBuild::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t IndexesToBuild::GetScore() const
{
    return m_score;
}

void IndexesToBuild::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool IndexesToBuild::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> IndexesToBuild::GetSigns() const
{
    return m_signs;
}

void IndexesToBuild::SetSigns(const vector<string>& _signs)
{
    m_signs = _signs;
    m_signsHasBeenSet = true;
}

bool IndexesToBuild::SignsHasBeenSet() const
{
    return m_signsHasBeenSet;
}

int64_t IndexesToBuild::GetStatus() const
{
    return m_status;
}

void IndexesToBuild::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IndexesToBuild::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

