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

#include <tencentcloud/antiddos/v20200309/model/InsL7Rules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

InsL7Rules::InsL7Rules() :
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_insIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_virtualPortHasBeenSet(false),
    m_sSLIdHasBeenSet(false)
{
}

CoreInternalOutcome InsL7Rules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("InsId") && !value["InsId"].IsNull())
    {
        if (!value["InsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.InsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insId = string(value["InsId"].GetString());
        m_insIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.VirtualPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = string(value["VirtualPort"].GetString());
        m_virtualPortHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsL7Rules.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InsL7Rules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_insIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualPort.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t InsL7Rules::GetStatus() const
{
    return m_status;
}

void InsL7Rules::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InsL7Rules::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InsL7Rules::GetDomain() const
{
    return m_domain;
}

void InsL7Rules::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool InsL7Rules::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string InsL7Rules::GetProtocol() const
{
    return m_protocol;
}

void InsL7Rules::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool InsL7Rules::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string InsL7Rules::GetInsId() const
{
    return m_insId;
}

void InsL7Rules::SetInsId(const string& _insId)
{
    m_insId = _insId;
    m_insIdHasBeenSet = true;
}

bool InsL7Rules::InsIdHasBeenSet() const
{
    return m_insIdHasBeenSet;
}

string InsL7Rules::GetAppId() const
{
    return m_appId;
}

void InsL7Rules::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InsL7Rules::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InsL7Rules::GetVirtualPort() const
{
    return m_virtualPort;
}

void InsL7Rules::SetVirtualPort(const string& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool InsL7Rules::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

string InsL7Rules::GetSSLId() const
{
    return m_sSLId;
}

void InsL7Rules::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool InsL7Rules::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

