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

#include <tencentcloud/tci/v20190318/model/ActionStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ActionStatistic::ActionStatistic() :
    m_actionCountHasBeenSet(false),
    m_actionDurationHasBeenSet(false),
    m_actionDurationRatioHasBeenSet(false)
{
}

CoreInternalOutcome ActionStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionCount") && !value["ActionCount"].IsNull())
    {
        if (!value["ActionCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionStatistic.ActionCount` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionCountStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionCount.push_back(item);
        }
        m_actionCountHasBeenSet = true;
    }

    if (value.HasMember("ActionDuration") && !value["ActionDuration"].IsNull())
    {
        if (!value["ActionDuration"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionStatistic.ActionDuration` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionDuration"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionDurationStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionDuration.push_back(item);
        }
        m_actionDurationHasBeenSet = true;
    }

    if (value.HasMember("ActionDurationRatio") && !value["ActionDurationRatio"].IsNull())
    {
        if (!value["ActionDurationRatio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionStatistic.ActionDurationRatio` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionDurationRatio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionDurationRatioStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionDurationRatio.push_back(item);
        }
        m_actionDurationRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionCount.begin(); itr != m_actionCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionDuration.begin(); itr != m_actionDuration.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionDurationRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDurationRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionDurationRatio.begin(); itr != m_actionDurationRatio.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ActionCountStatistic> ActionStatistic::GetActionCount() const
{
    return m_actionCount;
}

void ActionStatistic::SetActionCount(const vector<ActionCountStatistic>& _actionCount)
{
    m_actionCount = _actionCount;
    m_actionCountHasBeenSet = true;
}

bool ActionStatistic::ActionCountHasBeenSet() const
{
    return m_actionCountHasBeenSet;
}

vector<ActionDurationStatistic> ActionStatistic::GetActionDuration() const
{
    return m_actionDuration;
}

void ActionStatistic::SetActionDuration(const vector<ActionDurationStatistic>& _actionDuration)
{
    m_actionDuration = _actionDuration;
    m_actionDurationHasBeenSet = true;
}

bool ActionStatistic::ActionDurationHasBeenSet() const
{
    return m_actionDurationHasBeenSet;
}

vector<ActionDurationRatioStatistic> ActionStatistic::GetActionDurationRatio() const
{
    return m_actionDurationRatio;
}

void ActionStatistic::SetActionDurationRatio(const vector<ActionDurationRatioStatistic>& _actionDurationRatio)
{
    m_actionDurationRatio = _actionDurationRatio;
    m_actionDurationRatioHasBeenSet = true;
}

bool ActionStatistic::ActionDurationRatioHasBeenSet() const
{
    return m_actionDurationRatioHasBeenSet;
}

