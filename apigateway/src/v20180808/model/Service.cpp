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

#include <tencentcloud/apigateway/v20180808/model/Service.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

Service::Service() :
    m_innerHttpsPortHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_netTypesHasBeenSet(false),
    m_exclusiveSetNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_availableEnvironmentsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_outerSubDomainHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_innerHttpPortHasBeenSet(false),
    m_innerSubDomainHasBeenSet(false),
    m_tradeIsolateStatusHasBeenSet(false)
{
}

CoreInternalOutcome Service::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InnerHttpsPort") && !value["InnerHttpsPort"].IsNull())
    {
        if (!value["InnerHttpsPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Service.InnerHttpsPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpsPort = value["InnerHttpsPort"].GetInt64();
        m_innerHttpsPortHasBeenSet = true;
    }

    if (value.HasMember("ServiceDesc") && !value["ServiceDesc"].IsNull())
    {
        if (!value["ServiceDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDesc = string(value["ServiceDesc"].GetString());
        m_serviceDescHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("NetTypes") && !value["NetTypes"].IsNull())
    {
        if (!value["NetTypes"].IsArray())
            return CoreInternalOutcome(Error("response `Service.NetTypes` is not array type"));

        const Value &tmpValue = value["NetTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_netTypes.push_back((*itr).GetString());
        }
        m_netTypesHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveSetName") && !value["ExclusiveSetName"].IsNull())
    {
        if (!value["ExclusiveSetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ExclusiveSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveSetName = string(value["ExclusiveSetName"].GetString());
        m_exclusiveSetNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("AvailableEnvironments") && !value["AvailableEnvironments"].IsNull())
    {
        if (!value["AvailableEnvironments"].IsArray())
            return CoreInternalOutcome(Error("response `Service.AvailableEnvironments` is not array type"));

        const Value &tmpValue = value["AvailableEnvironments"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableEnvironments.push_back((*itr).GetString());
        }
        m_availableEnvironmentsHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("OuterSubDomain") && !value["OuterSubDomain"].IsNull())
    {
        if (!value["OuterSubDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.OuterSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outerSubDomain = string(value["OuterSubDomain"].GetString());
        m_outerSubDomainHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpPort") && !value["InnerHttpPort"].IsNull())
    {
        if (!value["InnerHttpPort"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.InnerHttpPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpPort = value["InnerHttpPort"].GetUint64();
        m_innerHttpPortHasBeenSet = true;
    }

    if (value.HasMember("InnerSubDomain") && !value["InnerSubDomain"].IsNull())
    {
        if (!value["InnerSubDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.InnerSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerSubDomain = string(value["InnerSubDomain"].GetString());
        m_innerSubDomainHasBeenSet = true;
    }

    if (value.HasMember("TradeIsolateStatus") && !value["TradeIsolateStatus"].IsNull())
    {
        if (!value["TradeIsolateStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Service.TradeIsolateStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeIsolateStatus = value["TradeIsolateStatus"].GetInt64();
        m_tradeIsolateStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Service::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_innerHttpsPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InnerHttpsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerHttpsPort, allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_netTypes.begin(); itr != m_netTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exclusiveSetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExclusiveSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_exclusiveSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_availableEnvironmentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AvailableEnvironments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_availableEnvironments.begin(); itr != m_availableEnvironments.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_outerSubDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OuterSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_outerSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_innerHttpPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InnerHttpPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerHttpPort, allocator);
    }

    if (m_innerSubDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InnerSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_innerSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeIsolateStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TradeIsolateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeIsolateStatus, allocator);
    }

}


int64_t Service::GetInnerHttpsPort() const
{
    return m_innerHttpsPort;
}

void Service::SetInnerHttpsPort(const int64_t& _innerHttpsPort)
{
    m_innerHttpsPort = _innerHttpsPort;
    m_innerHttpsPortHasBeenSet = true;
}

bool Service::InnerHttpsPortHasBeenSet() const
{
    return m_innerHttpsPortHasBeenSet;
}

string Service::GetServiceDesc() const
{
    return m_serviceDesc;
}

void Service::SetServiceDesc(const string& _serviceDesc)
{
    m_serviceDesc = _serviceDesc;
    m_serviceDescHasBeenSet = true;
}

bool Service::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string Service::GetProtocol() const
{
    return m_protocol;
}

void Service::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Service::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string Service::GetModifiedTime() const
{
    return m_modifiedTime;
}

void Service::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool Service::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

vector<string> Service::GetNetTypes() const
{
    return m_netTypes;
}

void Service::SetNetTypes(const vector<string>& _netTypes)
{
    m_netTypes = _netTypes;
    m_netTypesHasBeenSet = true;
}

bool Service::NetTypesHasBeenSet() const
{
    return m_netTypesHasBeenSet;
}

string Service::GetExclusiveSetName() const
{
    return m_exclusiveSetName;
}

void Service::SetExclusiveSetName(const string& _exclusiveSetName)
{
    m_exclusiveSetName = _exclusiveSetName;
    m_exclusiveSetNameHasBeenSet = true;
}

bool Service::ExclusiveSetNameHasBeenSet() const
{
    return m_exclusiveSetNameHasBeenSet;
}

string Service::GetServiceId() const
{
    return m_serviceId;
}

void Service::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool Service::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string Service::GetIpVersion() const
{
    return m_ipVersion;
}

void Service::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool Service::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

vector<string> Service::GetAvailableEnvironments() const
{
    return m_availableEnvironments;
}

void Service::SetAvailableEnvironments(const vector<string>& _availableEnvironments)
{
    m_availableEnvironments = _availableEnvironments;
    m_availableEnvironmentsHasBeenSet = true;
}

bool Service::AvailableEnvironmentsHasBeenSet() const
{
    return m_availableEnvironmentsHasBeenSet;
}

string Service::GetServiceName() const
{
    return m_serviceName;
}

void Service::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool Service::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string Service::GetOuterSubDomain() const
{
    return m_outerSubDomain;
}

void Service::SetOuterSubDomain(const string& _outerSubDomain)
{
    m_outerSubDomain = _outerSubDomain;
    m_outerSubDomainHasBeenSet = true;
}

bool Service::OuterSubDomainHasBeenSet() const
{
    return m_outerSubDomainHasBeenSet;
}

string Service::GetCreatedTime() const
{
    return m_createdTime;
}

void Service::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Service::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t Service::GetInnerHttpPort() const
{
    return m_innerHttpPort;
}

void Service::SetInnerHttpPort(const uint64_t& _innerHttpPort)
{
    m_innerHttpPort = _innerHttpPort;
    m_innerHttpPortHasBeenSet = true;
}

bool Service::InnerHttpPortHasBeenSet() const
{
    return m_innerHttpPortHasBeenSet;
}

string Service::GetInnerSubDomain() const
{
    return m_innerSubDomain;
}

void Service::SetInnerSubDomain(const string& _innerSubDomain)
{
    m_innerSubDomain = _innerSubDomain;
    m_innerSubDomainHasBeenSet = true;
}

bool Service::InnerSubDomainHasBeenSet() const
{
    return m_innerSubDomainHasBeenSet;
}

int64_t Service::GetTradeIsolateStatus() const
{
    return m_tradeIsolateStatus;
}

void Service::SetTradeIsolateStatus(const int64_t& _tradeIsolateStatus)
{
    m_tradeIsolateStatus = _tradeIsolateStatus;
    m_tradeIsolateStatusHasBeenSet = true;
}

bool Service::TradeIsolateStatusHasBeenSet() const
{
    return m_tradeIsolateStatusHasBeenSet;
}

