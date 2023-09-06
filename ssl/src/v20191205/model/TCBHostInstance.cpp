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

#include <tencentcloud/ssl/v20191205/model/TCBHostInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TCBHostInstance::TCBHostInstance() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dNSStatusHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false)
{
}

CoreInternalOutcome TCBHostInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBHostInstance.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBHostInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DNSStatus") && !value["DNSStatus"].IsNull())
    {
        if (!value["DNSStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBHostInstance.DNSStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNSStatus = string(value["DNSStatus"].GetString());
        m_dNSStatusHasBeenSet = true;
    }

    if (value.HasMember("OldCertificateId") && !value["OldCertificateId"].IsNull())
    {
        if (!value["OldCertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBHostInstance.OldCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldCertificateId = string(value["OldCertificateId"].GetString());
        m_oldCertificateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCBHostInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_dNSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNSStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dNSStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

}


string TCBHostInstance::GetDomain() const
{
    return m_domain;
}

void TCBHostInstance::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TCBHostInstance::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string TCBHostInstance::GetStatus() const
{
    return m_status;
}

void TCBHostInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TCBHostInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TCBHostInstance::GetDNSStatus() const
{
    return m_dNSStatus;
}

void TCBHostInstance::SetDNSStatus(const string& _dNSStatus)
{
    m_dNSStatus = _dNSStatus;
    m_dNSStatusHasBeenSet = true;
}

bool TCBHostInstance::DNSStatusHasBeenSet() const
{
    return m_dNSStatusHasBeenSet;
}

string TCBHostInstance::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void TCBHostInstance::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool TCBHostInstance::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

