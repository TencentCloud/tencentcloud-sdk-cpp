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

#include <tencentcloud/cme/v20191029/model/MediaTransitionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaTransitionItem::MediaTransitionItem() :
    m_transitionIdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome MediaTransitionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransitionId") && !value["TransitionId"].IsNull())
    {
        if (!value["TransitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTransitionItem.TransitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transitionId = string(value["TransitionId"].GetString());
        m_transitionIdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaTransitionItem.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTransitionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string MediaTransitionItem::GetTransitionId() const
{
    return m_transitionId;
}

void MediaTransitionItem::SetTransitionId(const string& _transitionId)
{
    m_transitionId = _transitionId;
    m_transitionIdHasBeenSet = true;
}

bool MediaTransitionItem::TransitionIdHasBeenSet() const
{
    return m_transitionIdHasBeenSet;
}

double MediaTransitionItem::GetDuration() const
{
    return m_duration;
}

void MediaTransitionItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaTransitionItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

