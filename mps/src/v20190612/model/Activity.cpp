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

#include <tencentcloud/mps/v20190612/model/Activity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

Activity::Activity() :
    m_activityTypeHasBeenSet(false),
    m_reardriveIndexHasBeenSet(false),
    m_activityParaHasBeenSet(false)
{
}

CoreInternalOutcome Activity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("ReardriveIndex") && !value["ReardriveIndex"].IsNull())
    {
        if (!value["ReardriveIndex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Activity.ReardriveIndex` is not array type"));

        const rapidjson::Value &tmpValue = value["ReardriveIndex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reardriveIndex.push_back((*itr).GetInt64());
        }
        m_reardriveIndexHasBeenSet = true;
    }

    if (value.HasMember("ActivityPara") && !value["ActivityPara"].IsNull())
    {
        if (!value["ActivityPara"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityPara` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activityPara.Deserialize(value["ActivityPara"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activityParaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Activity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_reardriveIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReardriveIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reardriveIndex.begin(); itr != m_reardriveIndex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_activityParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_activityPara.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Activity::GetActivityType() const
{
    return m_activityType;
}

void Activity::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool Activity::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

vector<int64_t> Activity::GetReardriveIndex() const
{
    return m_reardriveIndex;
}

void Activity::SetReardriveIndex(const vector<int64_t>& _reardriveIndex)
{
    m_reardriveIndex = _reardriveIndex;
    m_reardriveIndexHasBeenSet = true;
}

bool Activity::ReardriveIndexHasBeenSet() const
{
    return m_reardriveIndexHasBeenSet;
}

ActivityPara Activity::GetActivityPara() const
{
    return m_activityPara;
}

void Activity::SetActivityPara(const ActivityPara& _activityPara)
{
    m_activityPara = _activityPara;
    m_activityParaHasBeenSet = true;
}

bool Activity::ActivityParaHasBeenSet() const
{
    return m_activityParaHasBeenSet;
}

