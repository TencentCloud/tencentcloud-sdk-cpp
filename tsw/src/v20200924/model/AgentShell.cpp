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

#include <tencentcloud/tsw/v20200924/model/AgentShell.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsw::V20200924::Model;
using namespace std;

AgentShell::AgentShell() :
    m_tokenHasBeenSet(false),
    m_etlIpHasBeenSet(false),
    m_etlPortHasBeenSet(false),
    m_byHandAccessHasBeenSet(false),
    m_byShellAccessHasBeenSet(false),
    m_skyWalkingPortHasBeenSet(false),
    m_zipkinPortHasBeenSet(false),
    m_jaegerPortHasBeenSet(false)
{
}

CoreInternalOutcome AgentShell::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("EtlIp") && !value["EtlIp"].IsNull())
    {
        if (!value["EtlIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.EtlIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_etlIp = string(value["EtlIp"].GetString());
        m_etlIpHasBeenSet = true;
    }

    if (value.HasMember("EtlPort") && !value["EtlPort"].IsNull())
    {
        if (!value["EtlPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.EtlPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_etlPort = string(value["EtlPort"].GetString());
        m_etlPortHasBeenSet = true;
    }

    if (value.HasMember("ByHandAccess") && !value["ByHandAccess"].IsNull())
    {
        if (!value["ByHandAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.ByHandAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_byHandAccess = string(value["ByHandAccess"].GetString());
        m_byHandAccessHasBeenSet = true;
    }

    if (value.HasMember("ByShellAccess") && !value["ByShellAccess"].IsNull())
    {
        if (!value["ByShellAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.ByShellAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_byShellAccess = string(value["ByShellAccess"].GetString());
        m_byShellAccessHasBeenSet = true;
    }

    if (value.HasMember("SkyWalkingPort") && !value["SkyWalkingPort"].IsNull())
    {
        if (!value["SkyWalkingPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.SkyWalkingPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skyWalkingPort = string(value["SkyWalkingPort"].GetString());
        m_skyWalkingPortHasBeenSet = true;
    }

    if (value.HasMember("ZipkinPort") && !value["ZipkinPort"].IsNull())
    {
        if (!value["ZipkinPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.ZipkinPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipkinPort = string(value["ZipkinPort"].GetString());
        m_zipkinPortHasBeenSet = true;
    }

    if (value.HasMember("JaegerPort") && !value["JaegerPort"].IsNull())
    {
        if (!value["JaegerPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentShell.JaegerPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jaegerPort = string(value["JaegerPort"].GetString());
        m_jaegerPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentShell::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_etlIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_etlIp.c_str(), allocator).Move(), allocator);
    }

    if (m_etlPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_etlPort.c_str(), allocator).Move(), allocator);
    }

    if (m_byHandAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByHandAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_byHandAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_byShellAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByShellAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_byShellAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_skyWalkingPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkyWalkingPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skyWalkingPort.c_str(), allocator).Move(), allocator);
    }

    if (m_zipkinPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipkinPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipkinPort.c_str(), allocator).Move(), allocator);
    }

    if (m_jaegerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JaegerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jaegerPort.c_str(), allocator).Move(), allocator);
    }

}


string AgentShell::GetToken() const
{
    return m_token;
}

void AgentShell::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool AgentShell::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string AgentShell::GetEtlIp() const
{
    return m_etlIp;
}

void AgentShell::SetEtlIp(const string& _etlIp)
{
    m_etlIp = _etlIp;
    m_etlIpHasBeenSet = true;
}

bool AgentShell::EtlIpHasBeenSet() const
{
    return m_etlIpHasBeenSet;
}

string AgentShell::GetEtlPort() const
{
    return m_etlPort;
}

void AgentShell::SetEtlPort(const string& _etlPort)
{
    m_etlPort = _etlPort;
    m_etlPortHasBeenSet = true;
}

bool AgentShell::EtlPortHasBeenSet() const
{
    return m_etlPortHasBeenSet;
}

string AgentShell::GetByHandAccess() const
{
    return m_byHandAccess;
}

void AgentShell::SetByHandAccess(const string& _byHandAccess)
{
    m_byHandAccess = _byHandAccess;
    m_byHandAccessHasBeenSet = true;
}

bool AgentShell::ByHandAccessHasBeenSet() const
{
    return m_byHandAccessHasBeenSet;
}

string AgentShell::GetByShellAccess() const
{
    return m_byShellAccess;
}

void AgentShell::SetByShellAccess(const string& _byShellAccess)
{
    m_byShellAccess = _byShellAccess;
    m_byShellAccessHasBeenSet = true;
}

bool AgentShell::ByShellAccessHasBeenSet() const
{
    return m_byShellAccessHasBeenSet;
}

string AgentShell::GetSkyWalkingPort() const
{
    return m_skyWalkingPort;
}

void AgentShell::SetSkyWalkingPort(const string& _skyWalkingPort)
{
    m_skyWalkingPort = _skyWalkingPort;
    m_skyWalkingPortHasBeenSet = true;
}

bool AgentShell::SkyWalkingPortHasBeenSet() const
{
    return m_skyWalkingPortHasBeenSet;
}

string AgentShell::GetZipkinPort() const
{
    return m_zipkinPort;
}

void AgentShell::SetZipkinPort(const string& _zipkinPort)
{
    m_zipkinPort = _zipkinPort;
    m_zipkinPortHasBeenSet = true;
}

bool AgentShell::ZipkinPortHasBeenSet() const
{
    return m_zipkinPortHasBeenSet;
}

string AgentShell::GetJaegerPort() const
{
    return m_jaegerPort;
}

void AgentShell::SetJaegerPort(const string& _jaegerPort)
{
    m_jaegerPort = _jaegerPort;
    m_jaegerPortHasBeenSet = true;
}

bool AgentShell::JaegerPortHasBeenSet() const
{
    return m_jaegerPortHasBeenSet;
}

