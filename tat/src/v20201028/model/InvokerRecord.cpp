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

#include <tencentcloud/tat/v20201028/model/InvokerRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

InvokerRecord::InvokerRecord() :
    m_invokerIdHasBeenSet(false),
    m_invokeTimeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome InvokerRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokerId") && !value["InvokerId"].IsNull())
    {
        if (!value["InvokerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokerRecord.InvokerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokerId = string(value["InvokerId"].GetString());
        m_invokerIdHasBeenSet = true;
    }

    if (value.HasMember("InvokeTime") && !value["InvokeTime"].IsNull())
    {
        if (!value["InvokeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokerRecord.InvokeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeTime = string(value["InvokeTime"].GetString());
        m_invokeTimeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokerRecord.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokerRecord.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokerRecord.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvokerRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokerId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

}


string InvokerRecord::GetInvokerId() const
{
    return m_invokerId;
}

void InvokerRecord::SetInvokerId(const string& _invokerId)
{
    m_invokerId = _invokerId;
    m_invokerIdHasBeenSet = true;
}

bool InvokerRecord::InvokerIdHasBeenSet() const
{
    return m_invokerIdHasBeenSet;
}

string InvokerRecord::GetInvokeTime() const
{
    return m_invokeTime;
}

void InvokerRecord::SetInvokeTime(const string& _invokeTime)
{
    m_invokeTime = _invokeTime;
    m_invokeTimeHasBeenSet = true;
}

bool InvokerRecord::InvokeTimeHasBeenSet() const
{
    return m_invokeTimeHasBeenSet;
}

string InvokerRecord::GetReason() const
{
    return m_reason;
}

void InvokerRecord::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool InvokerRecord::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string InvokerRecord::GetInvocationId() const
{
    return m_invocationId;
}

void InvokerRecord::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool InvokerRecord::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string InvokerRecord::GetResult() const
{
    return m_result;
}

void InvokerRecord::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool InvokerRecord::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

