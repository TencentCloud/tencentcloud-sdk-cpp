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

#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyHostsCertificateRequest::ModifyHostsCertificateRequest() :
    m_zoneIdHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_serverCertInfoHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_clientCertInfoHasBeenSet(false)
{
}

string ModifyHostsCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_serverCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCertInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverCertInfo.begin(); itr != m_serverCertInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientCertInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyHostsCertificateRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyHostsCertificateRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> ModifyHostsCertificateRequest::GetHosts() const
{
    return m_hosts;
}

void ModifyHostsCertificateRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

string ModifyHostsCertificateRequest::GetMode() const
{
    return m_mode;
}

void ModifyHostsCertificateRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<ServerCertInfo> ModifyHostsCertificateRequest::GetServerCertInfo() const
{
    return m_serverCertInfo;
}

void ModifyHostsCertificateRequest::SetServerCertInfo(const vector<ServerCertInfo>& _serverCertInfo)
{
    m_serverCertInfo = _serverCertInfo;
    m_serverCertInfoHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::ServerCertInfoHasBeenSet() const
{
    return m_serverCertInfoHasBeenSet;
}

string ModifyHostsCertificateRequest::GetApplyType() const
{
    return m_applyType;
}

void ModifyHostsCertificateRequest::SetApplyType(const string& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

MutualTLS ModifyHostsCertificateRequest::GetClientCertInfo() const
{
    return m_clientCertInfo;
}

void ModifyHostsCertificateRequest::SetClientCertInfo(const MutualTLS& _clientCertInfo)
{
    m_clientCertInfo = _clientCertInfo;
    m_clientCertInfoHasBeenSet = true;
}

bool ModifyHostsCertificateRequest::ClientCertInfoHasBeenSet() const
{
    return m_clientCertInfoHasBeenSet;
}


