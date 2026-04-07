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

#include <tencentcloud/mps/v20190612/model/ProgramScheduleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProgramScheduleInfo::ProgramScheduleInfo() :
    m_programNameHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceLocationIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome ProgramScheduleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramScheduleInfo.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProgramScheduleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

}


string ProgramScheduleInfo::GetProgramName() const
{
    return m_programName;
}

void ProgramScheduleInfo::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool ProgramScheduleInfo::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

string ProgramScheduleInfo::GetProgramId() const
{
    return m_programId;
}

void ProgramScheduleInfo::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool ProgramScheduleInfo::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string ProgramScheduleInfo::GetSourceType() const
{
    return m_sourceType;
}

void ProgramScheduleInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ProgramScheduleInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ProgramScheduleInfo::GetSourceId() const
{
    return m_sourceId;
}

void ProgramScheduleInfo::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool ProgramScheduleInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string ProgramScheduleInfo::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void ProgramScheduleInfo::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool ProgramScheduleInfo::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

uint64_t ProgramScheduleInfo::GetStartTime() const
{
    return m_startTime;
}

void ProgramScheduleInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ProgramScheduleInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ProgramScheduleInfo::GetDuration() const
{
    return m_duration;
}

void ProgramScheduleInfo::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ProgramScheduleInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

