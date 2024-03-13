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

#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLifeDetailDto::InstanceLifeDetailDto() :
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_detailStateHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLifeDetailDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeDetailDto.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeDetailDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("DetailState") && !value["DetailState"].IsNull())
    {
        if (!value["DetailState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeDetailDto.DetailState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailState = string(value["DetailState"].GetString());
        m_detailStateHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeDetailDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLifeDetailDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_detailStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detailState.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLifeDetailDto::GetState() const
{
    return m_state;
}

void InstanceLifeDetailDto::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool InstanceLifeDetailDto::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string InstanceLifeDetailDto::GetStartTime() const
{
    return m_startTime;
}

void InstanceLifeDetailDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceLifeDetailDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceLifeDetailDto::GetDetailState() const
{
    return m_detailState;
}

void InstanceLifeDetailDto::SetDetailState(const string& _detailState)
{
    m_detailState = _detailState;
    m_detailStateHasBeenSet = true;
}

bool InstanceLifeDetailDto::DetailStateHasBeenSet() const
{
    return m_detailStateHasBeenSet;
}

string InstanceLifeDetailDto::GetEndTime() const
{
    return m_endTime;
}

void InstanceLifeDetailDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceLifeDetailDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

