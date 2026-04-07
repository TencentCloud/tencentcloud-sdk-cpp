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

#include <tencentcloud/mps/v20190612/model/SpliceInsertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SpliceInsertInfo::SpliceInsertInfo() :
    m_eventIDHasBeenSet(false),
    m_availNumHasBeenSet(false),
    m_availExpectedHasBeenSet(false),
    m_programIDHasBeenSet(false)
{
}

CoreInternalOutcome SpliceInsertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpliceInsertInfo.EventID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = string(value["EventID"].GetString());
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("AvailNum") && !value["AvailNum"].IsNull())
    {
        if (!value["AvailNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpliceInsertInfo.AvailNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availNum = string(value["AvailNum"].GetString());
        m_availNumHasBeenSet = true;
    }

    if (value.HasMember("AvailExpected") && !value["AvailExpected"].IsNull())
    {
        if (!value["AvailExpected"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpliceInsertInfo.AvailExpected` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availExpected = string(value["AvailExpected"].GetString());
        m_availExpectedHasBeenSet = true;
    }

    if (value.HasMember("ProgramID") && !value["ProgramID"].IsNull())
    {
        if (!value["ProgramID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpliceInsertInfo.ProgramID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programID = string(value["ProgramID"].GetString());
        m_programIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpliceInsertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventID.c_str(), allocator).Move(), allocator);
    }

    if (m_availNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availNum.c_str(), allocator).Move(), allocator);
    }

    if (m_availExpectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailExpected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availExpected.c_str(), allocator).Move(), allocator);
    }

    if (m_programIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programID.c_str(), allocator).Move(), allocator);
    }

}


string SpliceInsertInfo::GetEventID() const
{
    return m_eventID;
}

void SpliceInsertInfo::SetEventID(const string& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool SpliceInsertInfo::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string SpliceInsertInfo::GetAvailNum() const
{
    return m_availNum;
}

void SpliceInsertInfo::SetAvailNum(const string& _availNum)
{
    m_availNum = _availNum;
    m_availNumHasBeenSet = true;
}

bool SpliceInsertInfo::AvailNumHasBeenSet() const
{
    return m_availNumHasBeenSet;
}

string SpliceInsertInfo::GetAvailExpected() const
{
    return m_availExpected;
}

void SpliceInsertInfo::SetAvailExpected(const string& _availExpected)
{
    m_availExpected = _availExpected;
    m_availExpectedHasBeenSet = true;
}

bool SpliceInsertInfo::AvailExpectedHasBeenSet() const
{
    return m_availExpectedHasBeenSet;
}

string SpliceInsertInfo::GetProgramID() const
{
    return m_programID;
}

void SpliceInsertInfo::SetProgramID(const string& _programID)
{
    m_programID = _programID;
    m_programIDHasBeenSet = true;
}

bool SpliceInsertInfo::ProgramIDHasBeenSet() const
{
    return m_programIDHasBeenSet;
}

