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

#include <tencentcloud/tcr/v20190924/model/CustomizedDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CustomizedDomainInfo::CustomizedDomainInfo() :
    m_registryIdHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CustomizedDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizedDomainInfo.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizedDomainInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizedDomainInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizedDomainInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomizedDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CustomizedDomainInfo::GetRegistryId() const
{
    return m_registryId;
}

void CustomizedDomainInfo::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CustomizedDomainInfo::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CustomizedDomainInfo::GetCertId() const
{
    return m_certId;
}

void CustomizedDomainInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CustomizedDomainInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CustomizedDomainInfo::GetDomainName() const
{
    return m_domainName;
}

void CustomizedDomainInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CustomizedDomainInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string CustomizedDomainInfo::GetStatus() const
{
    return m_status;
}

void CustomizedDomainInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CustomizedDomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

