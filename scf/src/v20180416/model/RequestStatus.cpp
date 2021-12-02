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

#include <tencentcloud/scf/v20180416/model/RequestStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

RequestStatus::RequestStatus() :
    m_functionNameHasBeenSet(false),
    m_retMsgHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_retCodeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_retryNumHasBeenSet(false)
{
}

CoreInternalOutcome RequestStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("RetMsg") && !value["RetMsg"].IsNull())
    {
        if (!value["RetMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.RetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retMsg = string(value["RetMsg"].GetString());
        m_retMsgHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = value["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.MemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetDouble();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("RetryNum") && !value["RetryNum"].IsNull())
    {
        if (!value["RetryNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestStatus.RetryNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryNum = value["RetryNum"].GetInt64();
        m_retryNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_retMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retCode, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_memUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsage, allocator);
    }

    if (m_retryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryNum, allocator);
    }

}


string RequestStatus::GetFunctionName() const
{
    return m_functionName;
}

void RequestStatus::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool RequestStatus::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string RequestStatus::GetRetMsg() const
{
    return m_retMsg;
}

void RequestStatus::SetRetMsg(const string& _retMsg)
{
    m_retMsg = _retMsg;
    m_retMsgHasBeenSet = true;
}

bool RequestStatus::RetMsgHasBeenSet() const
{
    return m_retMsgHasBeenSet;
}

string RequestStatus::GetRequestId() const
{
    return m_requestId;
}

void RequestStatus::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool RequestStatus::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string RequestStatus::GetStartTime() const
{
    return m_startTime;
}

void RequestStatus::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RequestStatus::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t RequestStatus::GetRetCode() const
{
    return m_retCode;
}

void RequestStatus::SetRetCode(const int64_t& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool RequestStatus::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

double RequestStatus::GetDuration() const
{
    return m_duration;
}

void RequestStatus::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool RequestStatus::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double RequestStatus::GetMemUsage() const
{
    return m_memUsage;
}

void RequestStatus::SetMemUsage(const double& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool RequestStatus::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

int64_t RequestStatus::GetRetryNum() const
{
    return m_retryNum;
}

void RequestStatus::SetRetryNum(const int64_t& _retryNum)
{
    m_retryNum = _retryNum;
    m_retryNumHasBeenSet = true;
}

bool RequestStatus::RetryNumHasBeenSet() const
{
    return m_retryNumHasBeenSet;
}

