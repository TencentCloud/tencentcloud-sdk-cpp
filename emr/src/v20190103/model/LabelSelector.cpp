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

#include <tencentcloud/emr/v20190103/model/LabelSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

LabelSelector::LabelSelector() :
    m_matchLabelsHasBeenSet(false),
    m_matchExpressionsHasBeenSet(false)
{
}

CoreInternalOutcome LabelSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchLabels") && !value["MatchLabels"].IsNull())
    {
        if (!value["MatchLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelSelector.MatchLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchLabels.push_back(item);
        }
        m_matchLabelsHasBeenSet = true;
    }

    if (value.HasMember("MatchExpressions") && !value["MatchExpressions"].IsNull())
    {
        if (!value["MatchExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelSelector.MatchExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelSelectorRequirement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchExpressions.push_back(item);
        }
        m_matchExpressionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchLabels.begin(); itr != m_matchLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_matchExpressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchExpressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchExpressions.begin(); itr != m_matchExpressions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<StringMap> LabelSelector::GetMatchLabels() const
{
    return m_matchLabels;
}

void LabelSelector::SetMatchLabels(const vector<StringMap>& _matchLabels)
{
    m_matchLabels = _matchLabels;
    m_matchLabelsHasBeenSet = true;
}

bool LabelSelector::MatchLabelsHasBeenSet() const
{
    return m_matchLabelsHasBeenSet;
}

vector<LabelSelectorRequirement> LabelSelector::GetMatchExpressions() const
{
    return m_matchExpressions;
}

void LabelSelector::SetMatchExpressions(const vector<LabelSelectorRequirement>& _matchExpressions)
{
    m_matchExpressions = _matchExpressions;
    m_matchExpressionsHasBeenSet = true;
}

bool LabelSelector::MatchExpressionsHasBeenSet() const
{
    return m_matchExpressionsHasBeenSet;
}

