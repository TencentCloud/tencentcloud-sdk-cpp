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

#include <tencentcloud/gaap/v20180529/model/RuleCheckParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

RuleCheckParams::RuleCheckParams() :
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome RuleCheckParams::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DelayLoop") && !value["DelayLoop"].IsNull())
    {
        if (!value["DelayLoop"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RuleCheckParams.DelayLoop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayLoop = value["DelayLoop"].GetUint64();
        m_delayLoopHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RuleCheckParams.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleCheckParams.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleCheckParams.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsArray())
            return CoreInternalOutcome(Error("response `RuleCheckParams.StatusCode` is not array type"));

        const Value &tmpValue = value["StatusCode"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusCode.push_back((*itr).GetUint64());
        }
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleCheckParams.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCheckParams::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_delayLoopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_statusCode.begin(); itr != m_statusCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleCheckParams::GetDelayLoop() const
{
    return m_delayLoop;
}

void RuleCheckParams::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool RuleCheckParams::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t RuleCheckParams::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void RuleCheckParams::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool RuleCheckParams::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

string RuleCheckParams::GetPath() const
{
    return m_path;
}

void RuleCheckParams::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool RuleCheckParams::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string RuleCheckParams::GetMethod() const
{
    return m_method;
}

void RuleCheckParams::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool RuleCheckParams::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<uint64_t> RuleCheckParams::GetStatusCode() const
{
    return m_statusCode;
}

void RuleCheckParams::SetStatusCode(const vector<uint64_t>& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool RuleCheckParams::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string RuleCheckParams::GetDomain() const
{
    return m_domain;
}

void RuleCheckParams::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RuleCheckParams::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

