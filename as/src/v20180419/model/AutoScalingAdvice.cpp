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

#include <tencentcloud/as/v20180419/model/AutoScalingAdvice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

AutoScalingAdvice::AutoScalingAdvice() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_advicesHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingAdvice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingAdvice.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingAdvice.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Advices") && !value["Advices"].IsNull())
    {
        if (!value["Advices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoScalingAdvice.Advices` is not array type"));

        const rapidjson::Value &tmpValue = value["Advices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Advice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advices.push_back(item);
        }
        m_advicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingAdvice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_advicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advices.begin(); itr != m_advices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AutoScalingAdvice::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void AutoScalingAdvice::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool AutoScalingAdvice::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string AutoScalingAdvice::GetLevel() const
{
    return m_level;
}

void AutoScalingAdvice::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AutoScalingAdvice::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<Advice> AutoScalingAdvice::GetAdvices() const
{
    return m_advices;
}

void AutoScalingAdvice::SetAdvices(const vector<Advice>& _advices)
{
    m_advices = _advices;
    m_advicesHasBeenSet = true;
}

bool AutoScalingAdvice::AdvicesHasBeenSet() const
{
    return m_advicesHasBeenSet;
}

