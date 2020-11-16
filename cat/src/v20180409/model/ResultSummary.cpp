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

#include <tencentcloud/cat/v20180409/model/ResultSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

ResultSummary::ResultSummary() :
    m_logTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_availRatioHasBeenSet(false),
    m_reponseTimeHasBeenSet(false)
{
}

CoreInternalOutcome ResultSummary::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LogTime") && !value["LogTime"].IsNull())
    {
        if (!value["LogTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultSummary.LogTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTime = string(value["LogTime"].GetString());
        m_logTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResultSummary.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("AvailRatio") && !value["AvailRatio"].IsNull())
    {
        if (!value["AvailRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ResultSummary.AvailRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_availRatio = value["AvailRatio"].GetDouble();
        m_availRatioHasBeenSet = true;
    }

    if (value.HasMember("ReponseTime") && !value["ReponseTime"].IsNull())
    {
        if (!value["ReponseTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ResultSummary.ReponseTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reponseTime = value["ReponseTime"].GetDouble();
        m_reponseTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultSummary::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_logTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_availRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AvailRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availRatio, allocator);
    }

    if (m_reponseTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReponseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reponseTime, allocator);
    }

}


string ResultSummary::GetLogTime() const
{
    return m_logTime;
}

void ResultSummary::SetLogTime(const string& _logTime)
{
    m_logTime = _logTime;
    m_logTimeHasBeenSet = true;
}

bool ResultSummary::LogTimeHasBeenSet() const
{
    return m_logTimeHasBeenSet;
}

uint64_t ResultSummary::GetTaskId() const
{
    return m_taskId;
}

void ResultSummary::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ResultSummary::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

double ResultSummary::GetAvailRatio() const
{
    return m_availRatio;
}

void ResultSummary::SetAvailRatio(const double& _availRatio)
{
    m_availRatio = _availRatio;
    m_availRatioHasBeenSet = true;
}

bool ResultSummary::AvailRatioHasBeenSet() const
{
    return m_availRatioHasBeenSet;
}

double ResultSummary::GetReponseTime() const
{
    return m_reponseTime;
}

void ResultSummary::SetReponseTime(const double& _reponseTime)
{
    m_reponseTime = _reponseTime;
    m_reponseTimeHasBeenSet = true;
}

bool ResultSummary::ReponseTimeHasBeenSet() const
{
    return m_reponseTimeHasBeenSet;
}

