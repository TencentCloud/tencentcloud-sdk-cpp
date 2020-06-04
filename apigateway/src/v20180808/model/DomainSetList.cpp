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

#include <tencentcloud/apigateway/v20180808/model/DomainSetList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DomainSetList::DomainSetList() :
    m_domainNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_isDefaultMappingHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_netTypeHasBeenSet(false)
{
}

CoreInternalOutcome DomainSetList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultMapping") && !value["IsDefaultMapping"].IsNull())
    {
        if (!value["IsDefaultMapping"].IsBool())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.IsDefaultMapping` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultMapping = value["IsDefaultMapping"].GetBool();
        m_isDefaultMappingHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainSetList.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainSetList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultMappingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefaultMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultMapping, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_netType.c_str(), allocator).Move(), allocator);
    }

}


string DomainSetList::GetDomainName() const
{
    return m_domainName;
}

void DomainSetList::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DomainSetList::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t DomainSetList::GetStatus() const
{
    return m_status;
}

void DomainSetList::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainSetList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainSetList::GetCertificateId() const
{
    return m_certificateId;
}

void DomainSetList::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DomainSetList::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

bool DomainSetList::GetIsDefaultMapping() const
{
    return m_isDefaultMapping;
}

void DomainSetList::SetIsDefaultMapping(const bool& _isDefaultMapping)
{
    m_isDefaultMapping = _isDefaultMapping;
    m_isDefaultMappingHasBeenSet = true;
}

bool DomainSetList::IsDefaultMappingHasBeenSet() const
{
    return m_isDefaultMappingHasBeenSet;
}

string DomainSetList::GetProtocol() const
{
    return m_protocol;
}

void DomainSetList::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DomainSetList::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DomainSetList::GetNetType() const
{
    return m_netType;
}

void DomainSetList::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DomainSetList::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

