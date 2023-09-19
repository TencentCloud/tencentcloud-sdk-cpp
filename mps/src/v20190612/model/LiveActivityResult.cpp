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

#include <tencentcloud/mps/v20190612/model/LiveActivityResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveActivityResult::LiveActivityResult() :
    m_activityTypeHasBeenSet(false),
    m_liveActivityResItemHasBeenSet(false)
{
}

CoreInternalOutcome LiveActivityResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveActivityResult.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("LiveActivityResItem") && !value["LiveActivityResItem"].IsNull())
    {
        if (!value["LiveActivityResItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveActivityResult.LiveActivityResItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveActivityResItem.Deserialize(value["LiveActivityResItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveActivityResItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveActivityResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_liveActivityResItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveActivityResItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveActivityResItem.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LiveActivityResult::GetActivityType() const
{
    return m_activityType;
}

void LiveActivityResult::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool LiveActivityResult::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

LiveActivityResItem LiveActivityResult::GetLiveActivityResItem() const
{
    return m_liveActivityResItem;
}

void LiveActivityResult::SetLiveActivityResItem(const LiveActivityResItem& _liveActivityResItem)
{
    m_liveActivityResItem = _liveActivityResItem;
    m_liveActivityResItemHasBeenSet = true;
}

bool LiveActivityResult::LiveActivityResItemHasBeenSet() const
{
    return m_liveActivityResItemHasBeenSet;
}

