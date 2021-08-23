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

#include <tencentcloud/iai/v20180301/model/HeadPose.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

HeadPose::HeadPose() :
    m_pitchHasBeenSet(false),
    m_yawHasBeenSet(false),
    m_rollHasBeenSet(false)
{
}

CoreInternalOutcome HeadPose::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pitch") && !value["Pitch"].IsNull())
    {
        if (!value["Pitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadPose.Pitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pitch = value["Pitch"].GetInt64();
        m_pitchHasBeenSet = true;
    }

    if (value.HasMember("Yaw") && !value["Yaw"].IsNull())
    {
        if (!value["Yaw"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadPose.Yaw` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yaw = value["Yaw"].GetInt64();
        m_yawHasBeenSet = true;
    }

    if (value.HasMember("Roll") && !value["Roll"].IsNull())
    {
        if (!value["Roll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadPose.Roll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roll = value["Roll"].GetInt64();
        m_rollHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeadPose::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pitch, allocator);
    }

    if (m_yawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yaw, allocator);
    }

    if (m_rollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roll, allocator);
    }

}


int64_t HeadPose::GetPitch() const
{
    return m_pitch;
}

void HeadPose::SetPitch(const int64_t& _pitch)
{
    m_pitch = _pitch;
    m_pitchHasBeenSet = true;
}

bool HeadPose::PitchHasBeenSet() const
{
    return m_pitchHasBeenSet;
}

int64_t HeadPose::GetYaw() const
{
    return m_yaw;
}

void HeadPose::SetYaw(const int64_t& _yaw)
{
    m_yaw = _yaw;
    m_yawHasBeenSet = true;
}

bool HeadPose::YawHasBeenSet() const
{
    return m_yawHasBeenSet;
}

int64_t HeadPose::GetRoll() const
{
    return m_roll;
}

void HeadPose::SetRoll(const int64_t& _roll)
{
    m_roll = _roll;
    m_rollHasBeenSet = true;
}

bool HeadPose::RollHasBeenSet() const
{
    return m_rollHasBeenSet;
}

