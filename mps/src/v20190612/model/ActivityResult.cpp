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

#include <tencentcloud/mps/v20190612/model/ActivityResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ActivityResult::ActivityResult() :
    m_activityTypeHasBeenSet(false),
    m_activityResItemHasBeenSet(false)
{
}

CoreInternalOutcome ActivityResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResult.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("ActivityResItem") && !value["ActivityResItem"].IsNull())
    {
        if (!value["ActivityResItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityResult.ActivityResItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activityResItem.Deserialize(value["ActivityResItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activityResItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_activityResItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityResItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_activityResItem.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ActivityResult::GetActivityType() const
{
    return m_activityType;
}

void ActivityResult::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool ActivityResult::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

ActivityResItem ActivityResult::GetActivityResItem() const
{
    return m_activityResItem;
}

void ActivityResult::SetActivityResItem(const ActivityResItem& _activityResItem)
{
    m_activityResItem = _activityResItem;
    m_activityResItemHasBeenSet = true;
}

bool ActivityResult::ActivityResItemHasBeenSet() const
{
    return m_activityResItemHasBeenSet;
}

