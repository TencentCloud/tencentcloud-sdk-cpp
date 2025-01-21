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

#include <tencentcloud/teo/v20220901/model/ResponseSpeedLimitParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ResponseSpeedLimitParameters::ResponseSpeedLimitParameters() :
    m_modeHasBeenSet(false),
    m_maxSpeedHasBeenSet(false),
    m_startAtHasBeenSet(false)
{
}

CoreInternalOutcome ResponseSpeedLimitParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseSpeedLimitParameters.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("MaxSpeed") && !value["MaxSpeed"].IsNull())
    {
        if (!value["MaxSpeed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseSpeedLimitParameters.MaxSpeed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxSpeed = string(value["MaxSpeed"].GetString());
        m_maxSpeedHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseSpeedLimitParameters.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseSpeedLimitParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxSpeed.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

}


string ResponseSpeedLimitParameters::GetMode() const
{
    return m_mode;
}

void ResponseSpeedLimitParameters::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ResponseSpeedLimitParameters::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ResponseSpeedLimitParameters::GetMaxSpeed() const
{
    return m_maxSpeed;
}

void ResponseSpeedLimitParameters::SetMaxSpeed(const string& _maxSpeed)
{
    m_maxSpeed = _maxSpeed;
    m_maxSpeedHasBeenSet = true;
}

bool ResponseSpeedLimitParameters::MaxSpeedHasBeenSet() const
{
    return m_maxSpeedHasBeenSet;
}

string ResponseSpeedLimitParameters::GetStartAt() const
{
    return m_startAt;
}

void ResponseSpeedLimitParameters::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool ResponseSpeedLimitParameters::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

