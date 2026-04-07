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

#include <tencentcloud/mps/v20190612/model/TimeSignalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TimeSignalInfo::TimeSignalInfo() :
    m_eventIDHasBeenSet(false),
    m_uPIDTypeHasBeenSet(false),
    m_uPIDHasBeenSet(false),
    m_typeIDHasBeenSet(false),
    m_numHasBeenSet(false),
    m_expectedHasBeenSet(false),
    m_subsegmentNumHasBeenSet(false),
    m_subsegmentsExpectedHasBeenSet(false)
{
}

CoreInternalOutcome TimeSignalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.EventID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = string(value["EventID"].GetString());
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("UPIDType") && !value["UPIDType"].IsNull())
    {
        if (!value["UPIDType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.UPIDType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uPIDType = string(value["UPIDType"].GetString());
        m_uPIDTypeHasBeenSet = true;
    }

    if (value.HasMember("UPID") && !value["UPID"].IsNull())
    {
        if (!value["UPID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.UPID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uPID = string(value["UPID"].GetString());
        m_uPIDHasBeenSet = true;
    }

    if (value.HasMember("TypeID") && !value["TypeID"].IsNull())
    {
        if (!value["TypeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.TypeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeID = string(value["TypeID"].GetString());
        m_typeIDHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.Num` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_num = string(value["Num"].GetString());
        m_numHasBeenSet = true;
    }

    if (value.HasMember("Expected") && !value["Expected"].IsNull())
    {
        if (!value["Expected"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.Expected` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expected = string(value["Expected"].GetString());
        m_expectedHasBeenSet = true;
    }

    if (value.HasMember("SubsegmentNum") && !value["SubsegmentNum"].IsNull())
    {
        if (!value["SubsegmentNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.SubsegmentNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subsegmentNum = string(value["SubsegmentNum"].GetString());
        m_subsegmentNumHasBeenSet = true;
    }

    if (value.HasMember("SubsegmentsExpected") && !value["SubsegmentsExpected"].IsNull())
    {
        if (!value["SubsegmentsExpected"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSignalInfo.SubsegmentsExpected` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subsegmentsExpected = string(value["SubsegmentsExpected"].GetString());
        m_subsegmentsExpectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeSignalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventID.c_str(), allocator).Move(), allocator);
    }

    if (m_uPIDTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UPIDType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uPIDType.c_str(), allocator).Move(), allocator);
    }

    if (m_uPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uPID.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeID.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_num.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expected.c_str(), allocator).Move(), allocator);
    }

    if (m_subsegmentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubsegmentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subsegmentNum.c_str(), allocator).Move(), allocator);
    }

    if (m_subsegmentsExpectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubsegmentsExpected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subsegmentsExpected.c_str(), allocator).Move(), allocator);
    }

}


string TimeSignalInfo::GetEventID() const
{
    return m_eventID;
}

void TimeSignalInfo::SetEventID(const string& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool TimeSignalInfo::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string TimeSignalInfo::GetUPIDType() const
{
    return m_uPIDType;
}

void TimeSignalInfo::SetUPIDType(const string& _uPIDType)
{
    m_uPIDType = _uPIDType;
    m_uPIDTypeHasBeenSet = true;
}

bool TimeSignalInfo::UPIDTypeHasBeenSet() const
{
    return m_uPIDTypeHasBeenSet;
}

string TimeSignalInfo::GetUPID() const
{
    return m_uPID;
}

void TimeSignalInfo::SetUPID(const string& _uPID)
{
    m_uPID = _uPID;
    m_uPIDHasBeenSet = true;
}

bool TimeSignalInfo::UPIDHasBeenSet() const
{
    return m_uPIDHasBeenSet;
}

string TimeSignalInfo::GetTypeID() const
{
    return m_typeID;
}

void TimeSignalInfo::SetTypeID(const string& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool TimeSignalInfo::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

string TimeSignalInfo::GetNum() const
{
    return m_num;
}

void TimeSignalInfo::SetNum(const string& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool TimeSignalInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string TimeSignalInfo::GetExpected() const
{
    return m_expected;
}

void TimeSignalInfo::SetExpected(const string& _expected)
{
    m_expected = _expected;
    m_expectedHasBeenSet = true;
}

bool TimeSignalInfo::ExpectedHasBeenSet() const
{
    return m_expectedHasBeenSet;
}

string TimeSignalInfo::GetSubsegmentNum() const
{
    return m_subsegmentNum;
}

void TimeSignalInfo::SetSubsegmentNum(const string& _subsegmentNum)
{
    m_subsegmentNum = _subsegmentNum;
    m_subsegmentNumHasBeenSet = true;
}

bool TimeSignalInfo::SubsegmentNumHasBeenSet() const
{
    return m_subsegmentNumHasBeenSet;
}

string TimeSignalInfo::GetSubsegmentsExpected() const
{
    return m_subsegmentsExpected;
}

void TimeSignalInfo::SetSubsegmentsExpected(const string& _subsegmentsExpected)
{
    m_subsegmentsExpected = _subsegmentsExpected;
    m_subsegmentsExpectedHasBeenSet = true;
}

bool TimeSignalInfo::SubsegmentsExpectedHasBeenSet() const
{
    return m_subsegmentsExpectedHasBeenSet;
}

