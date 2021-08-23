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
using namespace std;

RuleCheckParams::RuleCheckParams() :
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_failedCountInterHasBeenSet(false),
    m_failedThresholdHasBeenSet(false),
    m_blockInterHasBeenSet(false)
{
}

CoreInternalOutcome RuleCheckParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DelayLoop") && !value["DelayLoop"].IsNull())
    {
        if (!value["DelayLoop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.DelayLoop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayLoop = value["DelayLoop"].GetUint64();
        m_delayLoopHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.StatusCode` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_statusCode.push_back((*itr).GetUint64());
        }
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("FailedCountInter") && !value["FailedCountInter"].IsNull())
    {
        if (!value["FailedCountInter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.FailedCountInter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCountInter = value["FailedCountInter"].GetUint64();
        m_failedCountInterHasBeenSet = true;
    }

    if (value.HasMember("FailedThreshold") && !value["FailedThreshold"].IsNull())
    {
        if (!value["FailedThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.FailedThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedThreshold = value["FailedThreshold"].GetUint64();
        m_failedThresholdHasBeenSet = true;
    }

    if (value.HasMember("BlockInter") && !value["BlockInter"].IsNull())
    {
        if (!value["BlockInter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCheckParams.BlockInter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockInter = value["BlockInter"].GetUint64();
        m_blockInterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCheckParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_delayLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusCode.begin(); itr != m_statusCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_failedCountInterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCountInter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCountInter, allocator);
    }

    if (m_failedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedThreshold, allocator);
    }

    if (m_blockInterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockInter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockInter, allocator);
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

uint64_t RuleCheckParams::GetFailedCountInter() const
{
    return m_failedCountInter;
}

void RuleCheckParams::SetFailedCountInter(const uint64_t& _failedCountInter)
{
    m_failedCountInter = _failedCountInter;
    m_failedCountInterHasBeenSet = true;
}

bool RuleCheckParams::FailedCountInterHasBeenSet() const
{
    return m_failedCountInterHasBeenSet;
}

uint64_t RuleCheckParams::GetFailedThreshold() const
{
    return m_failedThreshold;
}

void RuleCheckParams::SetFailedThreshold(const uint64_t& _failedThreshold)
{
    m_failedThreshold = _failedThreshold;
    m_failedThresholdHasBeenSet = true;
}

bool RuleCheckParams::FailedThresholdHasBeenSet() const
{
    return m_failedThresholdHasBeenSet;
}

uint64_t RuleCheckParams::GetBlockInter() const
{
    return m_blockInter;
}

void RuleCheckParams::SetBlockInter(const uint64_t& _blockInter)
{
    m_blockInter = _blockInter;
    m_blockInterHasBeenSet = true;
}

bool RuleCheckParams::BlockInterHasBeenSet() const
{
    return m_blockInterHasBeenSet;
}

