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

#include <tencentcloud/dbbrain/v20191016/model/ScoreItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

ScoreItem::ScoreItem() :
    m_diagItemHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_topSeverityHasBeenSet(false),
    m_countHasBeenSet(false),
    m_scoreLostHasBeenSet(false)
{
}

CoreInternalOutcome ScoreItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagItem") && !value["DiagItem"].IsNull())
    {
        if (!value["DiagItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreItem.DiagItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagItem = string(value["DiagItem"].GetString());
        m_diagItemHasBeenSet = true;
    }

    if (value.HasMember("IssueType") && !value["IssueType"].IsNull())
    {
        if (!value["IssueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreItem.IssueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueType = string(value["IssueType"].GetString());
        m_issueTypeHasBeenSet = true;
    }

    if (value.HasMember("TopSeverity") && !value["TopSeverity"].IsNull())
    {
        if (!value["TopSeverity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreItem.TopSeverity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topSeverity = string(value["TopSeverity"].GetString());
        m_topSeverityHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("ScoreLost") && !value["ScoreLost"].IsNull())
    {
        if (!value["ScoreLost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreItem.ScoreLost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scoreLost = value["ScoreLost"].GetInt64();
        m_scoreLostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagItem.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueType.c_str(), allocator).Move(), allocator);
    }

    if (m_topSeverityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopSeverity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topSeverity.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_scoreLostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreLost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreLost, allocator);
    }

}


string ScoreItem::GetDiagItem() const
{
    return m_diagItem;
}

void ScoreItem::SetDiagItem(const string& _diagItem)
{
    m_diagItem = _diagItem;
    m_diagItemHasBeenSet = true;
}

bool ScoreItem::DiagItemHasBeenSet() const
{
    return m_diagItemHasBeenSet;
}

string ScoreItem::GetIssueType() const
{
    return m_issueType;
}

void ScoreItem::SetIssueType(const string& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool ScoreItem::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

string ScoreItem::GetTopSeverity() const
{
    return m_topSeverity;
}

void ScoreItem::SetTopSeverity(const string& _topSeverity)
{
    m_topSeverity = _topSeverity;
    m_topSeverityHasBeenSet = true;
}

bool ScoreItem::TopSeverityHasBeenSet() const
{
    return m_topSeverityHasBeenSet;
}

int64_t ScoreItem::GetCount() const
{
    return m_count;
}

void ScoreItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ScoreItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t ScoreItem::GetScoreLost() const
{
    return m_scoreLost;
}

void ScoreItem::SetScoreLost(const int64_t& _scoreLost)
{
    m_scoreLost = _scoreLost;
    m_scoreLostHasBeenSet = true;
}

bool ScoreItem::ScoreLostHasBeenSet() const
{
    return m_scoreLostHasBeenSet;
}

