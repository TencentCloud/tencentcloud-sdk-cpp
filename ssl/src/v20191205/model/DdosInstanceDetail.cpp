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

#include <tencentcloud/ssl/v20191205/model/DdosInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DdosInstanceDetail::DdosInstanceDetail() :
    m_domainHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_virtualPortHasBeenSet(false)
{
}

CoreInternalOutcome DdosInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosInstanceDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosInstanceDetail.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosInstanceDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosInstanceDetail.VirtualPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = string(value["VirtualPort"].GetString());
        m_virtualPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdosInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualPort.c_str(), allocator).Move(), allocator);
    }

}


string DdosInstanceDetail::GetDomain() const
{
    return m_domain;
}

void DdosInstanceDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DdosInstanceDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DdosInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void DdosInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DdosInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DdosInstanceDetail::GetProtocol() const
{
    return m_protocol;
}

void DdosInstanceDetail::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DdosInstanceDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DdosInstanceDetail::GetCertId() const
{
    return m_certId;
}

void DdosInstanceDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DdosInstanceDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DdosInstanceDetail::GetVirtualPort() const
{
    return m_virtualPort;
}

void DdosInstanceDetail::SetVirtualPort(const string& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool DdosInstanceDetail::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

