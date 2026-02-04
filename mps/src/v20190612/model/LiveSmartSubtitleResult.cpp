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

#include <tencentcloud/mps/v20190612/model/LiveSmartSubtitleResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveSmartSubtitleResult::LiveSmartSubtitleResult() :
    m_textHasBeenSet(false),
    m_startPTSTimeHasBeenSet(false),
    m_endPTSTimeHasBeenSet(false),
    m_transHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_steadyStateHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome LiveSmartSubtitleResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("StartPTSTime") && !value["StartPTSTime"].IsNull())
    {
        if (!value["StartPTSTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.StartPTSTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPTSTime = value["StartPTSTime"].GetDouble();
        m_startPTSTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPTSTime") && !value["EndPTSTime"].IsNull())
    {
        if (!value["EndPTSTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.EndPTSTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPTSTime = value["EndPTSTime"].GetDouble();
        m_endPTSTimeHasBeenSet = true;
    }

    if (value.HasMember("Trans") && !value["Trans"].IsNull())
    {
        if (!value["Trans"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.Trans` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trans = string(value["Trans"].GetString());
        m_transHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SteadyState") && !value["SteadyState"].IsNull())
    {
        if (!value["SteadyState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.SteadyState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_steadyState = value["SteadyState"].GetBool();
        m_steadyStateHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveSmartSubtitleResult.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveSmartSubtitleResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_startPTSTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPTSTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPTSTime, allocator);
    }

    if (m_endPTSTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPTSTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPTSTime, allocator);
    }

    if (m_transHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trans.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_steadyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SteadyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_steadyState, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string LiveSmartSubtitleResult::GetText() const
{
    return m_text;
}

void LiveSmartSubtitleResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool LiveSmartSubtitleResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

double LiveSmartSubtitleResult::GetStartPTSTime() const
{
    return m_startPTSTime;
}

void LiveSmartSubtitleResult::SetStartPTSTime(const double& _startPTSTime)
{
    m_startPTSTime = _startPTSTime;
    m_startPTSTimeHasBeenSet = true;
}

bool LiveSmartSubtitleResult::StartPTSTimeHasBeenSet() const
{
    return m_startPTSTimeHasBeenSet;
}

double LiveSmartSubtitleResult::GetEndPTSTime() const
{
    return m_endPTSTime;
}

void LiveSmartSubtitleResult::SetEndPTSTime(const double& _endPTSTime)
{
    m_endPTSTime = _endPTSTime;
    m_endPTSTimeHasBeenSet = true;
}

bool LiveSmartSubtitleResult::EndPTSTimeHasBeenSet() const
{
    return m_endPTSTimeHasBeenSet;
}

string LiveSmartSubtitleResult::GetTrans() const
{
    return m_trans;
}

void LiveSmartSubtitleResult::SetTrans(const string& _trans)
{
    m_trans = _trans;
    m_transHasBeenSet = true;
}

bool LiveSmartSubtitleResult::TransHasBeenSet() const
{
    return m_transHasBeenSet;
}

string LiveSmartSubtitleResult::GetStartTime() const
{
    return m_startTime;
}

void LiveSmartSubtitleResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveSmartSubtitleResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LiveSmartSubtitleResult::GetEndTime() const
{
    return m_endTime;
}

void LiveSmartSubtitleResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveSmartSubtitleResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool LiveSmartSubtitleResult::GetSteadyState() const
{
    return m_steadyState;
}

void LiveSmartSubtitleResult::SetSteadyState(const bool& _steadyState)
{
    m_steadyState = _steadyState;
    m_steadyStateHasBeenSet = true;
}

bool LiveSmartSubtitleResult::SteadyStateHasBeenSet() const
{
    return m_steadyStateHasBeenSet;
}

string LiveSmartSubtitleResult::GetUserId() const
{
    return m_userId;
}

void LiveSmartSubtitleResult::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool LiveSmartSubtitleResult::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

