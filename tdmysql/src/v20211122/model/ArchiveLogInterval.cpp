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

#include <tencentcloud/tdmysql/v20211122/model/ArchiveLogInterval.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ArchiveLogInterval::ArchiveLogInterval() :
    m_endTimeHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome ArchiveLogInterval::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogInterval.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MajorVersion") && !value["MajorVersion"].IsNull())
    {
        if (!value["MajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogInterval.MajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_majorVersion = string(value["MajorVersion"].GetString());
        m_majorVersionHasBeenSet = true;
    }

    if (value.HasMember("MinorVersion") && !value["MinorVersion"].IsNull())
    {
        if (!value["MinorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogInterval.MinorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minorVersion = string(value["MinorVersion"].GetString());
        m_minorVersionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogInterval.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchiveLogInterval::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_majorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_majorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_minorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


string ArchiveLogInterval::GetEndTime() const
{
    return m_endTime;
}

void ArchiveLogInterval::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ArchiveLogInterval::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ArchiveLogInterval::GetMajorVersion() const
{
    return m_majorVersion;
}

void ArchiveLogInterval::SetMajorVersion(const string& _majorVersion)
{
    m_majorVersion = _majorVersion;
    m_majorVersionHasBeenSet = true;
}

bool ArchiveLogInterval::MajorVersionHasBeenSet() const
{
    return m_majorVersionHasBeenSet;
}

string ArchiveLogInterval::GetMinorVersion() const
{
    return m_minorVersion;
}

void ArchiveLogInterval::SetMinorVersion(const string& _minorVersion)
{
    m_minorVersion = _minorVersion;
    m_minorVersionHasBeenSet = true;
}

bool ArchiveLogInterval::MinorVersionHasBeenSet() const
{
    return m_minorVersionHasBeenSet;
}

string ArchiveLogInterval::GetStartTime() const
{
    return m_startTime;
}

void ArchiveLogInterval::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ArchiveLogInterval::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

