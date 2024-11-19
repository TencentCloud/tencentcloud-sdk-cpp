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

#include <tencentcloud/dasb/v20191018/model/OperationEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

OperationEvent::OperationEvent() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_signValueHasBeenSet(false)
{
}

CoreInternalOutcome OperationEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.Kind` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetUint64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("SignValue") && !value["SignValue"].IsNull())
    {
        if (!value["SignValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationEvent.SignValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signValue = string(value["SignValue"].GetString());
        m_signValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_signValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signValue.c_str(), allocator).Move(), allocator);
    }

}


string OperationEvent::GetUserName() const
{
    return m_userName;
}

void OperationEvent::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool OperationEvent::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string OperationEvent::GetRealName() const
{
    return m_realName;
}

void OperationEvent::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool OperationEvent::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string OperationEvent::GetTime() const
{
    return m_time;
}

void OperationEvent::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool OperationEvent::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string OperationEvent::GetSourceIp() const
{
    return m_sourceIp;
}

void OperationEvent::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool OperationEvent::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

uint64_t OperationEvent::GetKind() const
{
    return m_kind;
}

void OperationEvent::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool OperationEvent::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string OperationEvent::GetOperation() const
{
    return m_operation;
}

void OperationEvent::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool OperationEvent::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t OperationEvent::GetResult() const
{
    return m_result;
}

void OperationEvent::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool OperationEvent::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string OperationEvent::GetSignValue() const
{
    return m_signValue;
}

void OperationEvent::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool OperationEvent::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}

