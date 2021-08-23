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

#include <tencentcloud/dbbrain/v20210527/model/ScoreDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ScoreDetail::ScoreDetail() :
    m_issueTypeHasBeenSet(false),
    m_scoreLostHasBeenSet(false),
    m_scoreLostMaxHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome ScoreDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IssueType") && !value["IssueType"].IsNull())
    {
        if (!value["IssueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreDetail.IssueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueType = string(value["IssueType"].GetString());
        m_issueTypeHasBeenSet = true;
    }

    if (value.HasMember("ScoreLost") && !value["ScoreLost"].IsNull())
    {
        if (!value["ScoreLost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreDetail.ScoreLost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scoreLost = value["ScoreLost"].GetInt64();
        m_scoreLostHasBeenSet = true;
    }

    if (value.HasMember("ScoreLostMax") && !value["ScoreLostMax"].IsNull())
    {
        if (!value["ScoreLostMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreDetail.ScoreLostMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scoreLostMax = value["ScoreLostMax"].GetInt64();
        m_scoreLostMaxHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScoreDetail.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScoreItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueType.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreLostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreLost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreLost, allocator);
    }

    if (m_scoreLostMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreLostMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreLostMax, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScoreDetail::GetIssueType() const
{
    return m_issueType;
}

void ScoreDetail::SetIssueType(const string& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool ScoreDetail::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

int64_t ScoreDetail::GetScoreLost() const
{
    return m_scoreLost;
}

void ScoreDetail::SetScoreLost(const int64_t& _scoreLost)
{
    m_scoreLost = _scoreLost;
    m_scoreLostHasBeenSet = true;
}

bool ScoreDetail::ScoreLostHasBeenSet() const
{
    return m_scoreLostHasBeenSet;
}

int64_t ScoreDetail::GetScoreLostMax() const
{
    return m_scoreLostMax;
}

void ScoreDetail::SetScoreLostMax(const int64_t& _scoreLostMax)
{
    m_scoreLostMax = _scoreLostMax;
    m_scoreLostMaxHasBeenSet = true;
}

bool ScoreDetail::ScoreLostMaxHasBeenSet() const
{
    return m_scoreLostMaxHasBeenSet;
}

vector<ScoreItem> ScoreDetail::GetItems() const
{
    return m_items;
}

void ScoreDetail::SetItems(const vector<ScoreItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool ScoreDetail::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

