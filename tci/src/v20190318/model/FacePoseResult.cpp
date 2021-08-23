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

#include <tencentcloud/tci/v20190318/model/FacePoseResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FacePoseResult::FacePoseResult() :
    m_directionHasBeenSet(false),
    m_pitchHasBeenSet(false),
    m_rollHasBeenSet(false),
    m_yawHasBeenSet(false)
{
}

CoreInternalOutcome FacePoseResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FacePoseResult.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Pitch") && !value["Pitch"].IsNull())
    {
        if (!value["Pitch"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FacePoseResult.Pitch` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pitch = value["Pitch"].GetDouble();
        m_pitchHasBeenSet = true;
    }

    if (value.HasMember("Roll") && !value["Roll"].IsNull())
    {
        if (!value["Roll"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FacePoseResult.Roll` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_roll = value["Roll"].GetDouble();
        m_rollHasBeenSet = true;
    }

    if (value.HasMember("Yaw") && !value["Yaw"].IsNull())
    {
        if (!value["Yaw"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FacePoseResult.Yaw` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_yaw = value["Yaw"].GetDouble();
        m_yawHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FacePoseResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_pitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pitch, allocator);
    }

    if (m_rollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roll, allocator);
    }

    if (m_yawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yaw, allocator);
    }

}


string FacePoseResult::GetDirection() const
{
    return m_direction;
}

void FacePoseResult::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool FacePoseResult::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

double FacePoseResult::GetPitch() const
{
    return m_pitch;
}

void FacePoseResult::SetPitch(const double& _pitch)
{
    m_pitch = _pitch;
    m_pitchHasBeenSet = true;
}

bool FacePoseResult::PitchHasBeenSet() const
{
    return m_pitchHasBeenSet;
}

double FacePoseResult::GetRoll() const
{
    return m_roll;
}

void FacePoseResult::SetRoll(const double& _roll)
{
    m_roll = _roll;
    m_rollHasBeenSet = true;
}

bool FacePoseResult::RollHasBeenSet() const
{
    return m_rollHasBeenSet;
}

double FacePoseResult::GetYaw() const
{
    return m_yaw;
}

void FacePoseResult::SetYaw(const double& _yaw)
{
    m_yaw = _yaw;
    m_yawHasBeenSet = true;
}

bool FacePoseResult::YawHasBeenSet() const
{
    return m_yawHasBeenSet;
}

