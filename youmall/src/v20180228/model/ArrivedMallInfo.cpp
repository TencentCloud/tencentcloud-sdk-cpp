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

#include <tencentcloud/youmall/v20180228/model/ArrivedMallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ArrivedMallInfo::ArrivedMallInfo() :
    m_arrivedTimeHasBeenSet(false),
    m_leaveTimeHasBeenSet(false),
    m_staySecondHasBeenSet(false),
    m_inCapPicHasBeenSet(false),
    m_outCapPicHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

CoreInternalOutcome ArrivedMallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArrivedTime") && !value["ArrivedTime"].IsNull())
    {
        if (!value["ArrivedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.ArrivedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrivedTime = string(value["ArrivedTime"].GetString());
        m_arrivedTimeHasBeenSet = true;
    }

    if (value.HasMember("LeaveTime") && !value["LeaveTime"].IsNull())
    {
        if (!value["LeaveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.LeaveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leaveTime = string(value["LeaveTime"].GetString());
        m_leaveTimeHasBeenSet = true;
    }

    if (value.HasMember("StaySecond") && !value["StaySecond"].IsNull())
    {
        if (!value["StaySecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.StaySecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_staySecond = value["StaySecond"].GetUint64();
        m_staySecondHasBeenSet = true;
    }

    if (value.HasMember("InCapPic") && !value["InCapPic"].IsNull())
    {
        if (!value["InCapPic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.InCapPic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCapPic = string(value["InCapPic"].GetString());
        m_inCapPicHasBeenSet = true;
    }

    if (value.HasMember("OutCapPic") && !value["OutCapPic"].IsNull())
    {
        if (!value["OutCapPic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.OutCapPic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outCapPic = string(value["OutCapPic"].GetString());
        m_outCapPicHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArrivedMallInfo.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArrivedMallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_arrivedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrivedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_leaveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leaveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_staySecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaySecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staySecond, allocator);
    }

    if (m_inCapPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCapPic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCapPic.c_str(), allocator).Move(), allocator);
    }

    if (m_outCapPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutCapPic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outCapPic.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

}


string ArrivedMallInfo::GetArrivedTime() const
{
    return m_arrivedTime;
}

void ArrivedMallInfo::SetArrivedTime(const string& _arrivedTime)
{
    m_arrivedTime = _arrivedTime;
    m_arrivedTimeHasBeenSet = true;
}

bool ArrivedMallInfo::ArrivedTimeHasBeenSet() const
{
    return m_arrivedTimeHasBeenSet;
}

string ArrivedMallInfo::GetLeaveTime() const
{
    return m_leaveTime;
}

void ArrivedMallInfo::SetLeaveTime(const string& _leaveTime)
{
    m_leaveTime = _leaveTime;
    m_leaveTimeHasBeenSet = true;
}

bool ArrivedMallInfo::LeaveTimeHasBeenSet() const
{
    return m_leaveTimeHasBeenSet;
}

uint64_t ArrivedMallInfo::GetStaySecond() const
{
    return m_staySecond;
}

void ArrivedMallInfo::SetStaySecond(const uint64_t& _staySecond)
{
    m_staySecond = _staySecond;
    m_staySecondHasBeenSet = true;
}

bool ArrivedMallInfo::StaySecondHasBeenSet() const
{
    return m_staySecondHasBeenSet;
}

string ArrivedMallInfo::GetInCapPic() const
{
    return m_inCapPic;
}

void ArrivedMallInfo::SetInCapPic(const string& _inCapPic)
{
    m_inCapPic = _inCapPic;
    m_inCapPicHasBeenSet = true;
}

bool ArrivedMallInfo::InCapPicHasBeenSet() const
{
    return m_inCapPicHasBeenSet;
}

string ArrivedMallInfo::GetOutCapPic() const
{
    return m_outCapPic;
}

void ArrivedMallInfo::SetOutCapPic(const string& _outCapPic)
{
    m_outCapPic = _outCapPic;
    m_outCapPicHasBeenSet = true;
}

bool ArrivedMallInfo::OutCapPicHasBeenSet() const
{
    return m_outCapPicHasBeenSet;
}

string ArrivedMallInfo::GetTraceId() const
{
    return m_traceId;
}

void ArrivedMallInfo::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool ArrivedMallInfo::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

