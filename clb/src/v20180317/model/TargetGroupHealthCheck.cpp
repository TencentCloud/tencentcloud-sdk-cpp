/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/clb/v20180317/model/TargetGroupHealthCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TargetGroupHealthCheck::TargetGroupHealthCheck() :
    m_healthSwitchHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_gapTimeHasBeenSet(false),
    m_goodLimitHasBeenSet(false),
    m_badLimitHasBeenSet(false),
    m_jumboFrameHasBeenSet(false),
    m_httpCodeHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCheckMethodHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_sendContextHasBeenSet(false),
    m_recvContextHasBeenSet(false),
    m_httpVersionHasBeenSet(false),
    m_extendedCodeHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupHealthCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HealthSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetBool();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("GapTime") && !value["GapTime"].IsNull())
    {
        if (!value["GapTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.GapTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gapTime = value["GapTime"].GetInt64();
        m_gapTimeHasBeenSet = true;
    }

    if (value.HasMember("GoodLimit") && !value["GoodLimit"].IsNull())
    {
        if (!value["GoodLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.GoodLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodLimit = value["GoodLimit"].GetInt64();
        m_goodLimitHasBeenSet = true;
    }

    if (value.HasMember("BadLimit") && !value["BadLimit"].IsNull())
    {
        if (!value["BadLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.BadLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_badLimit = value["BadLimit"].GetInt64();
        m_badLimitHasBeenSet = true;
    }

    if (value.HasMember("JumboFrame") && !value["JumboFrame"].IsNull())
    {
        if (!value["JumboFrame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.JumboFrame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_jumboFrame = value["JumboFrame"].GetBool();
        m_jumboFrameHasBeenSet = true;
    }

    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HttpCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetInt64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckDomain") && !value["HttpCheckDomain"].IsNull())
    {
        if (!value["HttpCheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HttpCheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckDomain = string(value["HttpCheckDomain"].GetString());
        m_httpCheckDomainHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckMethod") && !value["HttpCheckMethod"].IsNull())
    {
        if (!value["HttpCheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HttpCheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckMethod = string(value["HttpCheckMethod"].GetString());
        m_httpCheckMethodHasBeenSet = true;
    }

    if (value.HasMember("ContextType") && !value["ContextType"].IsNull())
    {
        if (!value["ContextType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.ContextType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextType = string(value["ContextType"].GetString());
        m_contextTypeHasBeenSet = true;
    }

    if (value.HasMember("SendContext") && !value["SendContext"].IsNull())
    {
        if (!value["SendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.SendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendContext = string(value["SendContext"].GetString());
        m_sendContextHasBeenSet = true;
    }

    if (value.HasMember("RecvContext") && !value["RecvContext"].IsNull())
    {
        if (!value["RecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.RecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvContext = string(value["RecvContext"].GetString());
        m_recvContextHasBeenSet = true;
    }

    if (value.HasMember("HttpVersion") && !value["HttpVersion"].IsNull())
    {
        if (!value["HttpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HttpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpVersion = string(value["HttpVersion"].GetString());
        m_httpVersionHasBeenSet = true;
    }

    if (value.HasMember("ExtendedCode") && !value["ExtendedCode"].IsNull())
    {
        if (!value["ExtendedCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.ExtendedCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendedCode = string(value["ExtendedCode"].GetString());
        m_extendedCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupHealthCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_gapTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GapTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gapTime, allocator);
    }

    if (m_goodLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodLimit, allocator);
    }

    if (m_badLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_badLimit, allocator);
    }

    if (m_jumboFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumboFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jumboFrame, allocator);
    }

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_httpCheckDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_sendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_recvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recvContext.c_str(), allocator).Move(), allocator);
    }

    if (m_httpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendedCode.c_str(), allocator).Move(), allocator);
    }

}


bool TargetGroupHealthCheck::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void TargetGroupHealthCheck::SetHealthSwitch(const bool& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool TargetGroupHealthCheck::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

string TargetGroupHealthCheck::GetProtocol() const
{
    return m_protocol;
}

void TargetGroupHealthCheck::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TargetGroupHealthCheck::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetPort() const
{
    return m_port;
}

void TargetGroupHealthCheck::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupHealthCheck::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetTimeout() const
{
    return m_timeout;
}

void TargetGroupHealthCheck::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool TargetGroupHealthCheck::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetGapTime() const
{
    return m_gapTime;
}

void TargetGroupHealthCheck::SetGapTime(const int64_t& _gapTime)
{
    m_gapTime = _gapTime;
    m_gapTimeHasBeenSet = true;
}

bool TargetGroupHealthCheck::GapTimeHasBeenSet() const
{
    return m_gapTimeHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetGoodLimit() const
{
    return m_goodLimit;
}

void TargetGroupHealthCheck::SetGoodLimit(const int64_t& _goodLimit)
{
    m_goodLimit = _goodLimit;
    m_goodLimitHasBeenSet = true;
}

bool TargetGroupHealthCheck::GoodLimitHasBeenSet() const
{
    return m_goodLimitHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetBadLimit() const
{
    return m_badLimit;
}

void TargetGroupHealthCheck::SetBadLimit(const int64_t& _badLimit)
{
    m_badLimit = _badLimit;
    m_badLimitHasBeenSet = true;
}

bool TargetGroupHealthCheck::BadLimitHasBeenSet() const
{
    return m_badLimitHasBeenSet;
}

bool TargetGroupHealthCheck::GetJumboFrame() const
{
    return m_jumboFrame;
}

void TargetGroupHealthCheck::SetJumboFrame(const bool& _jumboFrame)
{
    m_jumboFrame = _jumboFrame;
    m_jumboFrameHasBeenSet = true;
}

bool TargetGroupHealthCheck::JumboFrameHasBeenSet() const
{
    return m_jumboFrameHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetHttpCode() const
{
    return m_httpCode;
}

void TargetGroupHealthCheck::SetHttpCode(const int64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool TargetGroupHealthCheck::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string TargetGroupHealthCheck::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void TargetGroupHealthCheck::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool TargetGroupHealthCheck::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

string TargetGroupHealthCheck::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void TargetGroupHealthCheck::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool TargetGroupHealthCheck::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

string TargetGroupHealthCheck::GetHttpCheckMethod() const
{
    return m_httpCheckMethod;
}

void TargetGroupHealthCheck::SetHttpCheckMethod(const string& _httpCheckMethod)
{
    m_httpCheckMethod = _httpCheckMethod;
    m_httpCheckMethodHasBeenSet = true;
}

bool TargetGroupHealthCheck::HttpCheckMethodHasBeenSet() const
{
    return m_httpCheckMethodHasBeenSet;
}

string TargetGroupHealthCheck::GetContextType() const
{
    return m_contextType;
}

void TargetGroupHealthCheck::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool TargetGroupHealthCheck::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string TargetGroupHealthCheck::GetSendContext() const
{
    return m_sendContext;
}

void TargetGroupHealthCheck::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool TargetGroupHealthCheck::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string TargetGroupHealthCheck::GetRecvContext() const
{
    return m_recvContext;
}

void TargetGroupHealthCheck::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool TargetGroupHealthCheck::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}

string TargetGroupHealthCheck::GetHttpVersion() const
{
    return m_httpVersion;
}

void TargetGroupHealthCheck::SetHttpVersion(const string& _httpVersion)
{
    m_httpVersion = _httpVersion;
    m_httpVersionHasBeenSet = true;
}

bool TargetGroupHealthCheck::HttpVersionHasBeenSet() const
{
    return m_httpVersionHasBeenSet;
}

string TargetGroupHealthCheck::GetExtendedCode() const
{
    return m_extendedCode;
}

void TargetGroupHealthCheck::SetExtendedCode(const string& _extendedCode)
{
    m_extendedCode = _extendedCode;
    m_extendedCodeHasBeenSet = true;
}

bool TargetGroupHealthCheck::ExtendedCodeHasBeenSet() const
{
    return m_extendedCodeHasBeenSet;
}

