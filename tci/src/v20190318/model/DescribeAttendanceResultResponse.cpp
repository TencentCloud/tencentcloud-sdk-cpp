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

#include <tencentcloud/tci/v20190318/model/DescribeAttendanceResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

DescribeAttendanceResultResponse::DescribeAttendanceResultResponse() :
    m_absenceSetInLibsHasBeenSet(false),
    m_attendanceSetHasBeenSet(false),
    m_suspectedSetHasBeenSet(false),
    m_absenceSetHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAttendanceResultResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AbsenceSetInLibs") && !rsp["AbsenceSetInLibs"].IsNull())
    {
        if (!rsp["AbsenceSetInLibs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbsenceSetInLibs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AbsenceSetInLibs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbsenceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_absenceSetInLibs.push_back(item);
        }
        m_absenceSetInLibsHasBeenSet = true;
    }

    if (rsp.HasMember("AttendanceSet") && !rsp["AttendanceSet"].IsNull())
    {
        if (!rsp["AttendanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttendanceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AttendanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttendanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attendanceSet.push_back(item);
        }
        m_attendanceSetHasBeenSet = true;
    }

    if (rsp.HasMember("SuspectedSet") && !rsp["SuspectedSet"].IsNull())
    {
        if (!rsp["SuspectedSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuspectedSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuspectedSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SuspectedInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_suspectedSet.push_back(item);
        }
        m_suspectedSetHasBeenSet = true;
    }

    if (rsp.HasMember("AbsenceSet") && !rsp["AbsenceSet"].IsNull())
    {
        if (!rsp["AbsenceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbsenceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AbsenceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_absenceSet.push_back((*itr).GetString());
        }
        m_absenceSetHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAttendanceResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_absenceSetInLibsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbsenceSetInLibs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_absenceSetInLibs.begin(); itr != m_absenceSetInLibs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attendanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttendanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attendanceSet.begin(); itr != m_attendanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_suspectedSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspectedSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_suspectedSet.begin(); itr != m_suspectedSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_absenceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbsenceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_absenceSet.begin(); itr != m_absenceSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<AbsenceInfo> DescribeAttendanceResultResponse::GetAbsenceSetInLibs() const
{
    return m_absenceSetInLibs;
}

bool DescribeAttendanceResultResponse::AbsenceSetInLibsHasBeenSet() const
{
    return m_absenceSetInLibsHasBeenSet;
}

vector<AttendanceInfo> DescribeAttendanceResultResponse::GetAttendanceSet() const
{
    return m_attendanceSet;
}

bool DescribeAttendanceResultResponse::AttendanceSetHasBeenSet() const
{
    return m_attendanceSetHasBeenSet;
}

vector<SuspectedInfo> DescribeAttendanceResultResponse::GetSuspectedSet() const
{
    return m_suspectedSet;
}

bool DescribeAttendanceResultResponse::SuspectedSetHasBeenSet() const
{
    return m_suspectedSetHasBeenSet;
}

vector<string> DescribeAttendanceResultResponse::GetAbsenceSet() const
{
    return m_absenceSet;
}

bool DescribeAttendanceResultResponse::AbsenceSetHasBeenSet() const
{
    return m_absenceSetHasBeenSet;
}

int64_t DescribeAttendanceResultResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeAttendanceResultResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}


