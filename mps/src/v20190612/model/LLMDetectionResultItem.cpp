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

#include <tencentcloud/mps/v20190612/model/LLMDetectionResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LLMDetectionResultItem::LLMDetectionResultItem() :
    m_categoryHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_issueSetHasBeenSet(false)
{
}

CoreInternalOutcome LLMDetectionResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("IssueSet") && !value["IssueSet"].IsNull())
    {
        if (!value["IssueSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDetectionResultItem.IssueSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IssueSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMDetectionIssue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_issueSet.push_back(item);
        }
        m_issueSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMDetectionResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_issueSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_issueSet.begin(); itr != m_issueSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LLMDetectionResultItem::GetCategory() const
{
    return m_category;
}

void LLMDetectionResultItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool LLMDetectionResultItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string LLMDetectionResultItem::GetGroup() const
{
    return m_group;
}

void LLMDetectionResultItem::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool LLMDetectionResultItem::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string LLMDetectionResultItem::GetType() const
{
    return m_type;
}

void LLMDetectionResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LLMDetectionResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double LLMDetectionResultItem::GetScore() const
{
    return m_score;
}

void LLMDetectionResultItem::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool LLMDetectionResultItem::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double LLMDetectionResultItem::GetConfidence() const
{
    return m_confidence;
}

void LLMDetectionResultItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LLMDetectionResultItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<LLMDetectionIssue> LLMDetectionResultItem::GetIssueSet() const
{
    return m_issueSet;
}

void LLMDetectionResultItem::SetIssueSet(const vector<LLMDetectionIssue>& _issueSet)
{
    m_issueSet = _issueSet;
    m_issueSetHasBeenSet = true;
}

bool LLMDetectionResultItem::IssueSetHasBeenSet() const
{
    return m_issueSetHasBeenSet;
}

