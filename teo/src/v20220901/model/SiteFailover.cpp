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

#include <tencentcloud/teo/v20220901/model/SiteFailover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SiteFailover::SiteFailover() :
    m_modeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_originProtocolHasBeenSet(false),
    m_hTTPOriginPortHasBeenSet(false),
    m_hTTPSOriginPortHasBeenSet(false),
    m_upstreamHostHeaderHasBeenSet(false),
    m_upstreamURLRewriteHasBeenSet(false),
    m_upstreamRequestParametersHasBeenSet(false),
    m_upstreamHTTP2ParametersHasBeenSet(false),
    m_privateAccessHasBeenSet(false),
    m_privateParametersHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_responsePageIdHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
}

CoreInternalOutcome SiteFailover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("OriginProtocol") && !value["OriginProtocol"].IsNull())
    {
        if (!value["OriginProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.OriginProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originProtocol = string(value["OriginProtocol"].GetString());
        m_originProtocolHasBeenSet = true;
    }

    if (value.HasMember("HTTPOriginPort") && !value["HTTPOriginPort"].IsNull())
    {
        if (!value["HTTPOriginPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.HTTPOriginPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPOriginPort = value["HTTPOriginPort"].GetInt64();
        m_hTTPOriginPortHasBeenSet = true;
    }

    if (value.HasMember("HTTPSOriginPort") && !value["HTTPSOriginPort"].IsNull())
    {
        if (!value["HTTPSOriginPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.HTTPSOriginPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPSOriginPort = value["HTTPSOriginPort"].GetInt64();
        m_hTTPSOriginPortHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHostHeader") && !value["UpstreamHostHeader"].IsNull())
    {
        if (!value["UpstreamHostHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.UpstreamHostHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHostHeader.Deserialize(value["UpstreamHostHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHostHeaderHasBeenSet = true;
    }

    if (value.HasMember("UpstreamURLRewrite") && !value["UpstreamURLRewrite"].IsNull())
    {
        if (!value["UpstreamURLRewrite"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.UpstreamURLRewrite` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamURLRewrite.Deserialize(value["UpstreamURLRewrite"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamURLRewriteHasBeenSet = true;
    }

    if (value.HasMember("UpstreamRequestParameters") && !value["UpstreamRequestParameters"].IsNull())
    {
        if (!value["UpstreamRequestParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.UpstreamRequestParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamRequestParameters.Deserialize(value["UpstreamRequestParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamRequestParametersHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHTTP2Parameters") && !value["UpstreamHTTP2Parameters"].IsNull())
    {
        if (!value["UpstreamHTTP2Parameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.UpstreamHTTP2Parameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHTTP2Parameters.Deserialize(value["UpstreamHTTP2Parameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHTTP2ParametersHasBeenSet = true;
    }

    if (value.HasMember("PrivateAccess") && !value["PrivateAccess"].IsNull())
    {
        if (!value["PrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.PrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateAccess = string(value["PrivateAccess"].GetString());
        m_privateAccessHasBeenSet = true;
    }

    if (value.HasMember("PrivateParameters") && !value["PrivateParameters"].IsNull())
    {
        if (!value["PrivateParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.PrivateParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privateParameters.Deserialize(value["PrivateParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privateParametersHasBeenSet = true;
    }

    if (value.HasMember("RedirectURL") && !value["RedirectURL"].IsNull())
    {
        if (!value["RedirectURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.RedirectURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectURL = string(value["RedirectURL"].GetString());
        m_redirectURLHasBeenSet = true;
    }

    if (value.HasMember("ResponsePageId") && !value["ResponsePageId"].IsNull())
    {
        if (!value["ResponsePageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.ResponsePageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responsePageId = string(value["ResponsePageId"].GetString());
        m_responsePageIdHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SiteFailover.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SiteFailover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_originProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_hTTPOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPOriginPort, allocator);
    }

    if (m_hTTPSOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPSOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPSOriginPort, allocator);
    }

    if (m_upstreamHostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHostHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHostHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamURLRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamURLRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamURLRewrite.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamRequestParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamRequestParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamRequestParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamHTTP2ParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHTTP2Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHTTP2Parameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_privateParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privateParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redirectURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectURL.c_str(), allocator).Move(), allocator);
    }

    if (m_responsePageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponsePageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responsePageId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

}


string SiteFailover::GetMode() const
{
    return m_mode;
}

void SiteFailover::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SiteFailover::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string SiteFailover::GetOrigin() const
{
    return m_origin;
}

void SiteFailover::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool SiteFailover::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string SiteFailover::GetOriginProtocol() const
{
    return m_originProtocol;
}

void SiteFailover::SetOriginProtocol(const string& _originProtocol)
{
    m_originProtocol = _originProtocol;
    m_originProtocolHasBeenSet = true;
}

bool SiteFailover::OriginProtocolHasBeenSet() const
{
    return m_originProtocolHasBeenSet;
}

int64_t SiteFailover::GetHTTPOriginPort() const
{
    return m_hTTPOriginPort;
}

void SiteFailover::SetHTTPOriginPort(const int64_t& _hTTPOriginPort)
{
    m_hTTPOriginPort = _hTTPOriginPort;
    m_hTTPOriginPortHasBeenSet = true;
}

bool SiteFailover::HTTPOriginPortHasBeenSet() const
{
    return m_hTTPOriginPortHasBeenSet;
}

int64_t SiteFailover::GetHTTPSOriginPort() const
{
    return m_hTTPSOriginPort;
}

void SiteFailover::SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort)
{
    m_hTTPSOriginPort = _hTTPSOriginPort;
    m_hTTPSOriginPortHasBeenSet = true;
}

bool SiteFailover::HTTPSOriginPortHasBeenSet() const
{
    return m_hTTPSOriginPortHasBeenSet;
}

HostHeaderParameters SiteFailover::GetUpstreamHostHeader() const
{
    return m_upstreamHostHeader;
}

void SiteFailover::SetUpstreamHostHeader(const HostHeaderParameters& _upstreamHostHeader)
{
    m_upstreamHostHeader = _upstreamHostHeader;
    m_upstreamHostHeaderHasBeenSet = true;
}

bool SiteFailover::UpstreamHostHeaderHasBeenSet() const
{
    return m_upstreamHostHeaderHasBeenSet;
}

UpstreamURLRewriteParameters SiteFailover::GetUpstreamURLRewrite() const
{
    return m_upstreamURLRewrite;
}

void SiteFailover::SetUpstreamURLRewrite(const UpstreamURLRewriteParameters& _upstreamURLRewrite)
{
    m_upstreamURLRewrite = _upstreamURLRewrite;
    m_upstreamURLRewriteHasBeenSet = true;
}

bool SiteFailover::UpstreamURLRewriteHasBeenSet() const
{
    return m_upstreamURLRewriteHasBeenSet;
}

UpstreamRequestParameters SiteFailover::GetUpstreamRequestParameters() const
{
    return m_upstreamRequestParameters;
}

void SiteFailover::SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters)
{
    m_upstreamRequestParameters = _upstreamRequestParameters;
    m_upstreamRequestParametersHasBeenSet = true;
}

bool SiteFailover::UpstreamRequestParametersHasBeenSet() const
{
    return m_upstreamRequestParametersHasBeenSet;
}

UpstreamHTTP2Parameters SiteFailover::GetUpstreamHTTP2Parameters() const
{
    return m_upstreamHTTP2Parameters;
}

void SiteFailover::SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters)
{
    m_upstreamHTTP2Parameters = _upstreamHTTP2Parameters;
    m_upstreamHTTP2ParametersHasBeenSet = true;
}

bool SiteFailover::UpstreamHTTP2ParametersHasBeenSet() const
{
    return m_upstreamHTTP2ParametersHasBeenSet;
}

string SiteFailover::GetPrivateAccess() const
{
    return m_privateAccess;
}

void SiteFailover::SetPrivateAccess(const string& _privateAccess)
{
    m_privateAccess = _privateAccess;
    m_privateAccessHasBeenSet = true;
}

bool SiteFailover::PrivateAccessHasBeenSet() const
{
    return m_privateAccessHasBeenSet;
}

OriginPrivateParameters SiteFailover::GetPrivateParameters() const
{
    return m_privateParameters;
}

void SiteFailover::SetPrivateParameters(const OriginPrivateParameters& _privateParameters)
{
    m_privateParameters = _privateParameters;
    m_privateParametersHasBeenSet = true;
}

bool SiteFailover::PrivateParametersHasBeenSet() const
{
    return m_privateParametersHasBeenSet;
}

string SiteFailover::GetRedirectURL() const
{
    return m_redirectURL;
}

void SiteFailover::SetRedirectURL(const string& _redirectURL)
{
    m_redirectURL = _redirectURL;
    m_redirectURLHasBeenSet = true;
}

bool SiteFailover::RedirectURLHasBeenSet() const
{
    return m_redirectURLHasBeenSet;
}

string SiteFailover::GetResponsePageId() const
{
    return m_responsePageId;
}

void SiteFailover::SetResponsePageId(const string& _responsePageId)
{
    m_responsePageId = _responsePageId;
    m_responsePageIdHasBeenSet = true;
}

bool SiteFailover::ResponsePageIdHasBeenSet() const
{
    return m_responsePageIdHasBeenSet;
}

int64_t SiteFailover::GetStatusCode() const
{
    return m_statusCode;
}

void SiteFailover::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool SiteFailover::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

