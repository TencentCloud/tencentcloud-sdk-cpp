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

#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeTrackTime::ComposeTrackTime() :
    m_startHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome ComposeTrackTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTrackTime.Start` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_start = string(value["Start"].GetString());
        m_startHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTrackTime.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeTrackTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_start.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

}


string ComposeTrackTime::GetStart() const
{
    return m_start;
}

void ComposeTrackTime::SetStart(const string& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool ComposeTrackTime::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

string ComposeTrackTime::GetDuration() const
{
    return m_duration;
}

void ComposeTrackTime::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ComposeTrackTime::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

