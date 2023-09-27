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

#include <tencentcloud/dbbrain/v20210527/model/IndexesToDrop.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

IndexesToDrop::IndexesToDrop() :
    m_indexStrHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_indexCommandHasBeenSet(false),
    m_indexNameHasBeenSet(false)
{
}

CoreInternalOutcome IndexesToDrop::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexStr") && !value["IndexStr"].IsNull())
    {
        if (!value["IndexStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToDrop.IndexStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStr = string(value["IndexStr"].GetString());
        m_indexStrHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToDrop.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToDrop.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("IndexCommand") && !value["IndexCommand"].IsNull())
    {
        if (!value["IndexCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToDrop.IndexCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexCommand = string(value["IndexCommand"].GetString());
        m_indexCommandHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexesToDrop.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexesToDrop::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStr.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_indexCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

}


string IndexesToDrop::GetIndexStr() const
{
    return m_indexStr;
}

void IndexesToDrop::SetIndexStr(const string& _indexStr)
{
    m_indexStr = _indexStr;
    m_indexStrHasBeenSet = true;
}

bool IndexesToDrop::IndexStrHasBeenSet() const
{
    return m_indexStrHasBeenSet;
}

int64_t IndexesToDrop::GetScore() const
{
    return m_score;
}

void IndexesToDrop::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool IndexesToDrop::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string IndexesToDrop::GetReason() const
{
    return m_reason;
}

void IndexesToDrop::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool IndexesToDrop::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string IndexesToDrop::GetIndexCommand() const
{
    return m_indexCommand;
}

void IndexesToDrop::SetIndexCommand(const string& _indexCommand)
{
    m_indexCommand = _indexCommand;
    m_indexCommandHasBeenSet = true;
}

bool IndexesToDrop::IndexCommandHasBeenSet() const
{
    return m_indexCommandHasBeenSet;
}

string IndexesToDrop::GetIndexName() const
{
    return m_indexName;
}

void IndexesToDrop::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool IndexesToDrop::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

