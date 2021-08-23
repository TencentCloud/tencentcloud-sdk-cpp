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

#include <tencentcloud/scf/v20180416/model/FunctionLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

FunctionLog::FunctionLog() :
    m_functionNameHasBeenSet(false),
    m_retMsgHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_retCodeHasBeenSet(false),
    m_invokeFinishedHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_billDurationHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_logHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_retryNumHasBeenSet(false)
{
}

CoreInternalOutcome FunctionLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("RetMsg") && !value["RetMsg"].IsNull())
    {
        if (!value["RetMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.RetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retMsg = string(value["RetMsg"].GetString());
        m_retMsgHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = value["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }

    if (value.HasMember("InvokeFinished") && !value["InvokeFinished"].IsNull())
    {
        if (!value["InvokeFinished"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.InvokeFinished` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invokeFinished = value["InvokeFinished"].GetInt64();
        m_invokeFinishedHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("BillDuration") && !value["BillDuration"].IsNull())
    {
        if (!value["BillDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.BillDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billDuration = value["BillDuration"].GetInt64();
        m_billDurationHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.MemUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetInt64();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("RetryNum") && !value["RetryNum"].IsNull())
    {
        if (!value["RetryNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionLog.RetryNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryNum = value["RetryNum"].GetUint64();
        m_retryNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_invokeFinishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeFinished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeFinished, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_billDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billDuration, allocator);
    }

    if (m_memUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsage, allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_retryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryNum, allocator);
    }

}


string FunctionLog::GetFunctionName() const
{
    return m_functionName;
}

void FunctionLog::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool FunctionLog::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string FunctionLog::GetRetMsg() const
{
    return m_retMsg;
}

void FunctionLog::SetRetMsg(const string& _retMsg)
{
    m_retMsg = _retMsg;
    m_retMsgHasBeenSet = true;
}

bool FunctionLog::RetMsgHasBeenSet() const
{
    return m_retMsgHasBeenSet;
}

string FunctionLog::GetRequestId() const
{
    return m_requestId;
}

void FunctionLog::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool FunctionLog::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string FunctionLog::GetStartTime() const
{
    return m_startTime;
}

void FunctionLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool FunctionLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t FunctionLog::GetRetCode() const
{
    return m_retCode;
}

void FunctionLog::SetRetCode(const int64_t& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool FunctionLog::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

int64_t FunctionLog::GetInvokeFinished() const
{
    return m_invokeFinished;
}

void FunctionLog::SetInvokeFinished(const int64_t& _invokeFinished)
{
    m_invokeFinished = _invokeFinished;
    m_invokeFinishedHasBeenSet = true;
}

bool FunctionLog::InvokeFinishedHasBeenSet() const
{
    return m_invokeFinishedHasBeenSet;
}

double FunctionLog::GetDuration() const
{
    return m_duration;
}

void FunctionLog::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool FunctionLog::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t FunctionLog::GetBillDuration() const
{
    return m_billDuration;
}

void FunctionLog::SetBillDuration(const int64_t& _billDuration)
{
    m_billDuration = _billDuration;
    m_billDurationHasBeenSet = true;
}

bool FunctionLog::BillDurationHasBeenSet() const
{
    return m_billDurationHasBeenSet;
}

int64_t FunctionLog::GetMemUsage() const
{
    return m_memUsage;
}

void FunctionLog::SetMemUsage(const int64_t& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool FunctionLog::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

string FunctionLog::GetLog() const
{
    return m_log;
}

void FunctionLog::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool FunctionLog::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string FunctionLog::GetLevel() const
{
    return m_level;
}

void FunctionLog::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool FunctionLog::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string FunctionLog::GetSource() const
{
    return m_source;
}

void FunctionLog::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool FunctionLog::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t FunctionLog::GetRetryNum() const
{
    return m_retryNum;
}

void FunctionLog::SetRetryNum(const uint64_t& _retryNum)
{
    m_retryNum = _retryNum;
    m_retryNumHasBeenSet = true;
}

bool FunctionLog::RetryNumHasBeenSet() const
{
    return m_retryNumHasBeenSet;
}

