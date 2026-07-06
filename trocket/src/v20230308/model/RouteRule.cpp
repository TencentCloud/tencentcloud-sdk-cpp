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

#include <tencentcloud/trocket/v20230308/model/RouteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

RouteRule::RouteRule() :
    m_matchConditionHasBeenSet(false),
    m_targetConsumerLabelHasBeenSet(false)
{
}

CoreInternalOutcome RouteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchCondition") && !value["MatchCondition"].IsNull())
    {
        if (!value["MatchCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteRule.MatchCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCondition = string(value["MatchCondition"].GetString());
        m_matchConditionHasBeenSet = true;
    }

    if (value.HasMember("TargetConsumerLabel") && !value["TargetConsumerLabel"].IsNull())
    {
        if (!value["TargetConsumerLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteRule.TargetConsumerLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetConsumerLabel = string(value["TargetConsumerLabel"].GetString());
        m_targetConsumerLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConsumerLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConsumerLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetConsumerLabel.c_str(), allocator).Move(), allocator);
    }

}


string RouteRule::GetMatchCondition() const
{
    return m_matchCondition;
}

void RouteRule::SetMatchCondition(const string& _matchCondition)
{
    m_matchCondition = _matchCondition;
    m_matchConditionHasBeenSet = true;
}

bool RouteRule::MatchConditionHasBeenSet() const
{
    return m_matchConditionHasBeenSet;
}

string RouteRule::GetTargetConsumerLabel() const
{
    return m_targetConsumerLabel;
}

void RouteRule::SetTargetConsumerLabel(const string& _targetConsumerLabel)
{
    m_targetConsumerLabel = _targetConsumerLabel;
    m_targetConsumerLabelHasBeenSet = true;
}

bool RouteRule::TargetConsumerLabelHasBeenSet() const
{
    return m_targetConsumerLabelHasBeenSet;
}

