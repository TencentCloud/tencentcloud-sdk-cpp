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

#include <tencentcloud/mps/v20190612/model/PlaybackInfoReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PlaybackInfoReq::PlaybackInfoReq() :
    m_transitionTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_relativePositionHasBeenSet(false),
    m_relativeProgramIdHasBeenSet(false),
    m_clipRangeConfHasBeenSet(false)
{
}

CoreInternalOutcome PlaybackInfoReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransitionType") && !value["TransitionType"].IsNull())
    {
        if (!value["TransitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.TransitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transitionType = string(value["TransitionType"].GetString());
        m_transitionTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RelativePosition") && !value["RelativePosition"].IsNull())
    {
        if (!value["RelativePosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.RelativePosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativePosition = string(value["RelativePosition"].GetString());
        m_relativePositionHasBeenSet = true;
    }

    if (value.HasMember("RelativeProgramId") && !value["RelativeProgramId"].IsNull())
    {
        if (!value["RelativeProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.RelativeProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeProgramId = string(value["RelativeProgramId"].GetString());
        m_relativeProgramIdHasBeenSet = true;
    }

    if (value.HasMember("ClipRangeConf") && !value["ClipRangeConf"].IsNull())
    {
        if (!value["ClipRangeConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackInfoReq.ClipRangeConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipRangeConf.Deserialize(value["ClipRangeConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipRangeConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlaybackInfoReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
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

}


string PlaybackInfoReq::GetTransitionType() const
{
    return m_transitionType;
}

void PlaybackInfoReq::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool PlaybackInfoReq::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

uint64_t PlaybackInfoReq::GetStartTime() const
{
    return m_startTime;
}

void PlaybackInfoReq::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PlaybackInfoReq::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t PlaybackInfoReq::GetDuration() const
{
    return m_duration;
}

void PlaybackInfoReq::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PlaybackInfoReq::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string PlaybackInfoReq::GetRelativePosition() const
{
    return m_relativePosition;
}

void PlaybackInfoReq::SetRelativePosition(const string& _relativePosition)
{
    m_relativePosition = _relativePosition;
    m_relativePositionHasBeenSet = true;
}

bool PlaybackInfoReq::RelativePositionHasBeenSet() const
{
    return m_relativePositionHasBeenSet;
}

string PlaybackInfoReq::GetRelativeProgramId() const
{
    return m_relativeProgramId;
}

void PlaybackInfoReq::SetRelativeProgramId(const string& _relativeProgramId)
{
    m_relativeProgramId = _relativeProgramId;
    m_relativeProgramIdHasBeenSet = true;
}

bool PlaybackInfoReq::RelativeProgramIdHasBeenSet() const
{
    return m_relativeProgramIdHasBeenSet;
}

ClipRangeInfo PlaybackInfoReq::GetClipRangeConf() const
{
    return m_clipRangeConf;
}

void PlaybackInfoReq::SetClipRangeConf(const ClipRangeInfo& _clipRangeConf)
{
    m_clipRangeConf = _clipRangeConf;
    m_clipRangeConfHasBeenSet = true;
}

bool PlaybackInfoReq::ClipRangeConfHasBeenSet() const
{
    return m_clipRangeConfHasBeenSet;
}

