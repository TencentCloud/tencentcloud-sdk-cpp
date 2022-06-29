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

#include <tencentcloud/apigateway/v20180808/model/UpstreamHealthChecker.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UpstreamHealthChecker::UpstreamHealthChecker() :
    m_enableActiveCheckHasBeenSet(false),
    m_enablePassiveCheckHasBeenSet(false),
    m_healthyHttpStatusHasBeenSet(false),
    m_unhealthyHttpStatusHasBeenSet(false),
    m_tcpFailureThresholdHasBeenSet(false),
    m_timeoutThresholdHasBeenSet(false),
    m_httpFailureThresholdHasBeenSet(false),
    m_activeCheckHttpPathHasBeenSet(false),
    m_activeCheckTimeoutHasBeenSet(false),
    m_activeCheckIntervalHasBeenSet(false),
    m_activeRequestHeaderHasBeenSet(false),
    m_unhealthyTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamHealthChecker::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableActiveCheck") && !value["EnableActiveCheck"].IsNull())
    {
        if (!value["EnableActiveCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.EnableActiveCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableActiveCheck = value["EnableActiveCheck"].GetBool();
        m_enableActiveCheckHasBeenSet = true;
    }

    if (value.HasMember("EnablePassiveCheck") && !value["EnablePassiveCheck"].IsNull())
    {
        if (!value["EnablePassiveCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.EnablePassiveCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePassiveCheck = value["EnablePassiveCheck"].GetBool();
        m_enablePassiveCheckHasBeenSet = true;
    }

    if (value.HasMember("HealthyHttpStatus") && !value["HealthyHttpStatus"].IsNull())
    {
        if (!value["HealthyHttpStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.HealthyHttpStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyHttpStatus = string(value["HealthyHttpStatus"].GetString());
        m_healthyHttpStatusHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyHttpStatus") && !value["UnhealthyHttpStatus"].IsNull())
    {
        if (!value["UnhealthyHttpStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.UnhealthyHttpStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyHttpStatus = string(value["UnhealthyHttpStatus"].GetString());
        m_unhealthyHttpStatusHasBeenSet = true;
    }

    if (value.HasMember("TcpFailureThreshold") && !value["TcpFailureThreshold"].IsNull())
    {
        if (!value["TcpFailureThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.TcpFailureThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpFailureThreshold = value["TcpFailureThreshold"].GetUint64();
        m_tcpFailureThresholdHasBeenSet = true;
    }

    if (value.HasMember("TimeoutThreshold") && !value["TimeoutThreshold"].IsNull())
    {
        if (!value["TimeoutThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.TimeoutThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutThreshold = value["TimeoutThreshold"].GetUint64();
        m_timeoutThresholdHasBeenSet = true;
    }

    if (value.HasMember("HttpFailureThreshold") && !value["HttpFailureThreshold"].IsNull())
    {
        if (!value["HttpFailureThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.HttpFailureThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpFailureThreshold = value["HttpFailureThreshold"].GetUint64();
        m_httpFailureThresholdHasBeenSet = true;
    }

    if (value.HasMember("ActiveCheckHttpPath") && !value["ActiveCheckHttpPath"].IsNull())
    {
        if (!value["ActiveCheckHttpPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.ActiveCheckHttpPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeCheckHttpPath = string(value["ActiveCheckHttpPath"].GetString());
        m_activeCheckHttpPathHasBeenSet = true;
    }

    if (value.HasMember("ActiveCheckTimeout") && !value["ActiveCheckTimeout"].IsNull())
    {
        if (!value["ActiveCheckTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.ActiveCheckTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCheckTimeout = value["ActiveCheckTimeout"].GetUint64();
        m_activeCheckTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ActiveCheckInterval") && !value["ActiveCheckInterval"].IsNull())
    {
        if (!value["ActiveCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.ActiveCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCheckInterval = value["ActiveCheckInterval"].GetUint64();
        m_activeCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("ActiveRequestHeader") && !value["ActiveRequestHeader"].IsNull())
    {
        if (!value["ActiveRequestHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.ActiveRequestHeader` is not array type"));

        const rapidjson::Value &tmpValue = value["ActiveRequestHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpstreamHealthCheckerReqHeaders item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activeRequestHeader.push_back(item);
        }
        m_activeRequestHeaderHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyTimeout") && !value["UnhealthyTimeout"].IsNull())
    {
        if (!value["UnhealthyTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthChecker.UnhealthyTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyTimeout = value["UnhealthyTimeout"].GetUint64();
        m_unhealthyTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamHealthChecker::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableActiveCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableActiveCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableActiveCheck, allocator);
    }

    if (m_enablePassiveCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePassiveCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePassiveCheck, allocator);
    }

    if (m_healthyHttpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyHttpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthyHttpStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_unhealthyHttpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyHttpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unhealthyHttpStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tcpFailureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpFailureThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpFailureThreshold, allocator);
    }

    if (m_timeoutThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutThreshold, allocator);
    }

    if (m_httpFailureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpFailureThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpFailureThreshold, allocator);
    }

    if (m_activeCheckHttpPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheckHttpPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeCheckHttpPath.c_str(), allocator).Move(), allocator);
    }

    if (m_activeCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCheckTimeout, allocator);
    }

    if (m_activeCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCheckInterval, allocator);
    }

    if (m_activeRequestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveRequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activeRequestHeader.begin(); itr != m_activeRequestHeader.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unhealthyTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthyTimeout, allocator);
    }

}


bool UpstreamHealthChecker::GetEnableActiveCheck() const
{
    return m_enableActiveCheck;
}

void UpstreamHealthChecker::SetEnableActiveCheck(const bool& _enableActiveCheck)
{
    m_enableActiveCheck = _enableActiveCheck;
    m_enableActiveCheckHasBeenSet = true;
}

bool UpstreamHealthChecker::EnableActiveCheckHasBeenSet() const
{
    return m_enableActiveCheckHasBeenSet;
}

bool UpstreamHealthChecker::GetEnablePassiveCheck() const
{
    return m_enablePassiveCheck;
}

void UpstreamHealthChecker::SetEnablePassiveCheck(const bool& _enablePassiveCheck)
{
    m_enablePassiveCheck = _enablePassiveCheck;
    m_enablePassiveCheckHasBeenSet = true;
}

bool UpstreamHealthChecker::EnablePassiveCheckHasBeenSet() const
{
    return m_enablePassiveCheckHasBeenSet;
}

string UpstreamHealthChecker::GetHealthyHttpStatus() const
{
    return m_healthyHttpStatus;
}

void UpstreamHealthChecker::SetHealthyHttpStatus(const string& _healthyHttpStatus)
{
    m_healthyHttpStatus = _healthyHttpStatus;
    m_healthyHttpStatusHasBeenSet = true;
}

bool UpstreamHealthChecker::HealthyHttpStatusHasBeenSet() const
{
    return m_healthyHttpStatusHasBeenSet;
}

string UpstreamHealthChecker::GetUnhealthyHttpStatus() const
{
    return m_unhealthyHttpStatus;
}

void UpstreamHealthChecker::SetUnhealthyHttpStatus(const string& _unhealthyHttpStatus)
{
    m_unhealthyHttpStatus = _unhealthyHttpStatus;
    m_unhealthyHttpStatusHasBeenSet = true;
}

bool UpstreamHealthChecker::UnhealthyHttpStatusHasBeenSet() const
{
    return m_unhealthyHttpStatusHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetTcpFailureThreshold() const
{
    return m_tcpFailureThreshold;
}

void UpstreamHealthChecker::SetTcpFailureThreshold(const uint64_t& _tcpFailureThreshold)
{
    m_tcpFailureThreshold = _tcpFailureThreshold;
    m_tcpFailureThresholdHasBeenSet = true;
}

bool UpstreamHealthChecker::TcpFailureThresholdHasBeenSet() const
{
    return m_tcpFailureThresholdHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetTimeoutThreshold() const
{
    return m_timeoutThreshold;
}

void UpstreamHealthChecker::SetTimeoutThreshold(const uint64_t& _timeoutThreshold)
{
    m_timeoutThreshold = _timeoutThreshold;
    m_timeoutThresholdHasBeenSet = true;
}

bool UpstreamHealthChecker::TimeoutThresholdHasBeenSet() const
{
    return m_timeoutThresholdHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetHttpFailureThreshold() const
{
    return m_httpFailureThreshold;
}

void UpstreamHealthChecker::SetHttpFailureThreshold(const uint64_t& _httpFailureThreshold)
{
    m_httpFailureThreshold = _httpFailureThreshold;
    m_httpFailureThresholdHasBeenSet = true;
}

bool UpstreamHealthChecker::HttpFailureThresholdHasBeenSet() const
{
    return m_httpFailureThresholdHasBeenSet;
}

string UpstreamHealthChecker::GetActiveCheckHttpPath() const
{
    return m_activeCheckHttpPath;
}

void UpstreamHealthChecker::SetActiveCheckHttpPath(const string& _activeCheckHttpPath)
{
    m_activeCheckHttpPath = _activeCheckHttpPath;
    m_activeCheckHttpPathHasBeenSet = true;
}

bool UpstreamHealthChecker::ActiveCheckHttpPathHasBeenSet() const
{
    return m_activeCheckHttpPathHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetActiveCheckTimeout() const
{
    return m_activeCheckTimeout;
}

void UpstreamHealthChecker::SetActiveCheckTimeout(const uint64_t& _activeCheckTimeout)
{
    m_activeCheckTimeout = _activeCheckTimeout;
    m_activeCheckTimeoutHasBeenSet = true;
}

bool UpstreamHealthChecker::ActiveCheckTimeoutHasBeenSet() const
{
    return m_activeCheckTimeoutHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetActiveCheckInterval() const
{
    return m_activeCheckInterval;
}

void UpstreamHealthChecker::SetActiveCheckInterval(const uint64_t& _activeCheckInterval)
{
    m_activeCheckInterval = _activeCheckInterval;
    m_activeCheckIntervalHasBeenSet = true;
}

bool UpstreamHealthChecker::ActiveCheckIntervalHasBeenSet() const
{
    return m_activeCheckIntervalHasBeenSet;
}

vector<UpstreamHealthCheckerReqHeaders> UpstreamHealthChecker::GetActiveRequestHeader() const
{
    return m_activeRequestHeader;
}

void UpstreamHealthChecker::SetActiveRequestHeader(const vector<UpstreamHealthCheckerReqHeaders>& _activeRequestHeader)
{
    m_activeRequestHeader = _activeRequestHeader;
    m_activeRequestHeaderHasBeenSet = true;
}

bool UpstreamHealthChecker::ActiveRequestHeaderHasBeenSet() const
{
    return m_activeRequestHeaderHasBeenSet;
}

uint64_t UpstreamHealthChecker::GetUnhealthyTimeout() const
{
    return m_unhealthyTimeout;
}

void UpstreamHealthChecker::SetUnhealthyTimeout(const uint64_t& _unhealthyTimeout)
{
    m_unhealthyTimeout = _unhealthyTimeout;
    m_unhealthyTimeoutHasBeenSet = true;
}

bool UpstreamHealthChecker::UnhealthyTimeoutHasBeenSet() const
{
    return m_unhealthyTimeoutHasBeenSet;
}

