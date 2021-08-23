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

#include <tencentcloud/ecdn/v20191012/model/Https.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

Https::Https() :
    m_switchHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_ocspStaplingHasBeenSet(false),
    m_verifyClientHasBeenSet(false),
    m_certInfoHasBeenSet(false),
    m_clientCertInfoHasBeenSet(false),
    m_spdyHasBeenSet(false),
    m_sslStatusHasBeenSet(false),
    m_hstsHasBeenSet(false)
{
}

CoreInternalOutcome Https::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Http2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_http2 = string(value["Http2"].GetString());
        m_http2HasBeenSet = true;
    }

    if (value.HasMember("OcspStapling") && !value["OcspStapling"].IsNull())
    {
        if (!value["OcspStapling"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.OcspStapling` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocspStapling = string(value["OcspStapling"].GetString());
        m_ocspStaplingHasBeenSet = true;
    }

    if (value.HasMember("VerifyClient") && !value["VerifyClient"].IsNull())
    {
        if (!value["VerifyClient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.VerifyClient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyClient = string(value["VerifyClient"].GetString());
        m_verifyClientHasBeenSet = true;
    }

    if (value.HasMember("CertInfo") && !value["CertInfo"].IsNull())
    {
        if (!value["CertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https.CertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certInfo.Deserialize(value["CertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certInfoHasBeenSet = true;
    }

    if (value.HasMember("ClientCertInfo") && !value["ClientCertInfo"].IsNull())
    {
        if (!value["ClientCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https.ClientCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientCertInfo.Deserialize(value["ClientCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientCertInfoHasBeenSet = true;
    }

    if (value.HasMember("Spdy") && !value["Spdy"].IsNull())
    {
        if (!value["Spdy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Spdy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spdy = string(value["Spdy"].GetString());
        m_spdyHasBeenSet = true;
    }

    if (value.HasMember("SslStatus") && !value["SslStatus"].IsNull())
    {
        if (!value["SslStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.SslStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslStatus = string(value["SslStatus"].GetString());
        m_sslStatusHasBeenSet = true;
    }

    if (value.HasMember("Hsts") && !value["Hsts"].IsNull())
    {
        if (!value["Hsts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Hsts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hsts.Deserialize(value["Hsts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hstsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Https::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_http2.c_str(), allocator).Move(), allocator);
    }

    if (m_ocspStaplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcspStapling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocspStapling.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyClient.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spdyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spdy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spdy.c_str(), allocator).Move(), allocator);
    }

    if (m_sslStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_hstsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hsts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hsts.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Https::GetSwitch() const
{
    return m_switch;
}

void Https::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Https::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string Https::GetHttp2() const
{
    return m_http2;
}

void Https::SetHttp2(const string& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool Https::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

string Https::GetOcspStapling() const
{
    return m_ocspStapling;
}

void Https::SetOcspStapling(const string& _ocspStapling)
{
    m_ocspStapling = _ocspStapling;
    m_ocspStaplingHasBeenSet = true;
}

bool Https::OcspStaplingHasBeenSet() const
{
    return m_ocspStaplingHasBeenSet;
}

string Https::GetVerifyClient() const
{
    return m_verifyClient;
}

void Https::SetVerifyClient(const string& _verifyClient)
{
    m_verifyClient = _verifyClient;
    m_verifyClientHasBeenSet = true;
}

bool Https::VerifyClientHasBeenSet() const
{
    return m_verifyClientHasBeenSet;
}

ServerCert Https::GetCertInfo() const
{
    return m_certInfo;
}

void Https::SetCertInfo(const ServerCert& _certInfo)
{
    m_certInfo = _certInfo;
    m_certInfoHasBeenSet = true;
}

bool Https::CertInfoHasBeenSet() const
{
    return m_certInfoHasBeenSet;
}

ClientCert Https::GetClientCertInfo() const
{
    return m_clientCertInfo;
}

void Https::SetClientCertInfo(const ClientCert& _clientCertInfo)
{
    m_clientCertInfo = _clientCertInfo;
    m_clientCertInfoHasBeenSet = true;
}

bool Https::ClientCertInfoHasBeenSet() const
{
    return m_clientCertInfoHasBeenSet;
}

string Https::GetSpdy() const
{
    return m_spdy;
}

void Https::SetSpdy(const string& _spdy)
{
    m_spdy = _spdy;
    m_spdyHasBeenSet = true;
}

bool Https::SpdyHasBeenSet() const
{
    return m_spdyHasBeenSet;
}

string Https::GetSslStatus() const
{
    return m_sslStatus;
}

void Https::SetSslStatus(const string& _sslStatus)
{
    m_sslStatus = _sslStatus;
    m_sslStatusHasBeenSet = true;
}

bool Https::SslStatusHasBeenSet() const
{
    return m_sslStatusHasBeenSet;
}

Hsts Https::GetHsts() const
{
    return m_hsts;
}

void Https::SetHsts(const Hsts& _hsts)
{
    m_hsts = _hsts;
    m_hstsHasBeenSet = true;
}

bool Https::HstsHasBeenSet() const
{
    return m_hstsHasBeenSet;
}

