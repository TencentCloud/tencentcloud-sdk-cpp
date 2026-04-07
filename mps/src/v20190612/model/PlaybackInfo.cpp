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

#include <tencentcloud/mps/v20190612/model/PlaybackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PlaybackInfo::PlaybackInfo() :
    m_durationHasBeenSet(false),
    m_transitionTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_relativePositionHasBeenSet(false),
    m_relativeProgramIdHasBeenSet(false),
    m_clipRangeConfHasBeenSet(false),
    m_relativeProgramNameHasBeenSet(false)
{
}

CoreInternalOutcome PlaybackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("TransitionType") && !value["TransitionType"].IsNull())
    {
        if (!value["TransitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.TransitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transitionType = string(value["TransitionType"].GetString());
        m_transitionTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RelativePosition") && !value["RelativePosition"].IsNull())
    {
        if (!value["RelativePosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.RelativePosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativePosition = string(value["RelativePosition"].GetString());
        m_relativePositionHasBeenSet = true;
    }

    if (value.HasMember("RelativeProgramId") && !value["RelativeProgramId"].IsNull())
    {
        if (!value["RelativeProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.RelativeProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeProgramId = string(value["RelativeProgramId"].GetString());
        m_relativeProgramIdHasBeenSet = true;
    }

    if (value.HasMember("ClipRangeConf") && !value["ClipRangeConf"].IsNull())
    {
        if (!value["ClipRangeConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.ClipRangeConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipRangeConf.Deserialize(value["ClipRangeConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipRangeConfHasBeenSet = true;
    }

    if (value.HasMember("RelativeProgramName") && !value["RelativeProgramName"].IsNull())
    {
        if (!value["RelativeProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfo.RelativeProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeProgramName = string(value["RelativeProgramName"].GetString());
        m_relativeProgramNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlaybackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_transitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_relativePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativePosition.c_str(), allocator).Move(), allocator);
    }

    if (m_relativeProgramIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeProgramId.c_str(), allocator).Move(), allocator);
    }

    if (m_clipRangeConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipRangeConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clipRangeConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relativeProgramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeProgramName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PlaybackInfo::GetDuration() const
{
    return m_duration;
}

void PlaybackInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PlaybackInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string PlaybackInfo::GetTransitionType() const
{
    return m_transitionType;
}

void PlaybackInfo::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool PlaybackInfo::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

uint64_t PlaybackInfo::GetStartTime() const
{
    return m_startTime;
}

void PlaybackInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PlaybackInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PlaybackInfo::GetRelativePosition() const
{
    return m_relativePosition;
}

void PlaybackInfo::SetRelativePosition(const string& _relativePosition)
{
    m_relativePosition = _relativePosition;
    m_relativePositionHasBeenSet = true;
}

bool PlaybackInfo::RelativePositionHasBeenSet() const
{
    return m_relativePositionHasBeenSet;
}

string PlaybackInfo::GetRelativeProgramId() const
{
    return m_relativeProgramId;
}

void PlaybackInfo::SetRelativeProgramId(const string& _relativeProgramId)
{
    m_relativeProgramId = _relativeProgramId;
    m_relativeProgramIdHasBeenSet = true;
}

bool PlaybackInfo::RelativeProgramIdHasBeenSet() const
{
    return m_relativeProgramIdHasBeenSet;
}

ClipRangeInfo PlaybackInfo::GetClipRangeConf() const
{
    return m_clipRangeConf;
}

void PlaybackInfo::SetClipRangeConf(const ClipRangeInfo& _clipRangeConf)
{
    m_clipRangeConf = _clipRangeConf;
    m_clipRangeConfHasBeenSet = true;
}

bool PlaybackInfo::ClipRangeConfHasBeenSet() const
{
    return m_clipRangeConfHasBeenSet;
}

string PlaybackInfo::GetRelativeProgramName() const
{
    return m_relativeProgramName;
}

void PlaybackInfo::SetRelativeProgramName(const string& _relativeProgramName)
{
    m_relativeProgramName = _relativeProgramName;
    m_relativeProgramNameHasBeenSet = true;
}

bool PlaybackInfo::RelativeProgramNameHasBeenSet() const
{
    return m_relativeProgramNameHasBeenSet;
}

