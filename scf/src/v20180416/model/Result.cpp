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

#include <tencentcloud/scf/v20180416/model/Result.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

Result::Result() :
    m_logHasBeenSet(false),
    m_retMsgHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_billDurationHasBeenSet(false),
    m_functionRequestIdHasBeenSet(false),
    m_invokeResultHasBeenSet(false)
{
}

CoreInternalOutcome Result::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("RetMsg") && !value["RetMsg"].IsNull())
    {
        if (!value["RetMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result.RetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retMsg = string(value["RetMsg"].GetString());
        m_retMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result.MemUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetInt64();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Result.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("BillDuration") && !value["BillDuration"].IsNull())
    {
        if (!value["BillDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result.BillDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billDuration = value["BillDuration"].GetInt64();
        m_billDurationHasBeenSet = true;
    }

    if (value.HasMember("FunctionRequestId") && !value["FunctionRequestId"].IsNull())
    {
        if (!value["FunctionRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result.FunctionRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionRequestId = string(value["FunctionRequestId"].GetString());
        m_functionRequestIdHasBeenSet = true;
    }

    if (value.HasMember("InvokeResult") && !value["InvokeResult"].IsNull())
    {
        if (!value["InvokeResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result.InvokeResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invokeResult = value["InvokeResult"].GetInt64();
        m_invokeResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Result::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_retMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_memUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsage, allocator);
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

    if (m_functionRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeResult, allocator);
    }

}


string Result::GetLog() const
{
    return m_log;
}

void Result::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool Result::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string Result::GetRetMsg() const
{
    return m_retMsg;
}

void Result::SetRetMsg(const string& _retMsg)
{
    m_retMsg = _retMsg;
    m_retMsgHasBeenSet = true;
}

bool Result::RetMsgHasBeenSet() const
{
    return m_retMsgHasBeenSet;
}

string Result::GetErrMsg() const
{
    return m_errMsg;
}

void Result::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool Result::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

int64_t Result::GetMemUsage() const
{
    return m_memUsage;
}

void Result::SetMemUsage(const int64_t& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool Result::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

double Result::GetDuration() const
{
    return m_duration;
}

void Result::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool Result::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t Result::GetBillDuration() const
{
    return m_billDuration;
}

void Result::SetBillDuration(const int64_t& _billDuration)
{
    m_billDuration = _billDuration;
    m_billDurationHasBeenSet = true;
}

bool Result::BillDurationHasBeenSet() const
{
    return m_billDurationHasBeenSet;
}

string Result::GetFunctionRequestId() const
{
    return m_functionRequestId;
}

void Result::SetFunctionRequestId(const string& _functionRequestId)
{
    m_functionRequestId = _functionRequestId;
    m_functionRequestIdHasBeenSet = true;
}

bool Result::FunctionRequestIdHasBeenSet() const
{
    return m_functionRequestIdHasBeenSet;
}

int64_t Result::GetInvokeResult() const
{
    return m_invokeResult;
}

void Result::SetInvokeResult(const int64_t& _invokeResult)
{
    m_invokeResult = _invokeResult;
    m_invokeResultHasBeenSet = true;
}

bool Result::InvokeResultHasBeenSet() const
{
    return m_invokeResultHasBeenSet;
}

