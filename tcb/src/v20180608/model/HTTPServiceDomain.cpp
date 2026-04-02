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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceDomain::HTTPServiceDomain() :
    m_domainHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dNSStatusHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainType") && !value["DomainType"].IsNull())
    {
        if (!value["DomainType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.DomainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = string(value["DomainType"].GetString());
        m_domainTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DNSStatus") && !value["DNSStatus"].IsNull())
    {
        if (!value["DNSStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.DNSStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNSStatus = string(value["DNSStatus"].GetString());
        m_dNSStatusHasBeenSet = true;
    }

    if (value.HasMember("Routes") && !value["Routes"].IsNull())
    {
        if (!value["Routes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Routes` is not array type"));

        const rapidjson::Value &tmpValue = value["Routes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPServiceRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routes.push_back(item);
        }
        m_routesHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.Extension` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extension.Deserialize(value["Extension"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extensionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomain.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
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

    if (m_routesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Routes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routes.begin(); itr != m_routes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extension.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string HTTPServiceDomain::GetDomain() const
{
    return m_domain;
}

void HTTPServiceDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool HTTPServiceDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string HTTPServiceDomain::GetDomainType() const
{
    return m_domainType;
}

void HTTPServiceDomain::SetDomainType(const string& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool HTTPServiceDomain::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

string HTTPServiceDomain::GetAccessType() const
{
    return m_accessType;
}

void HTTPServiceDomain::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool HTTPServiceDomain::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string HTTPServiceDomain::GetCertId() const
{
    return m_certId;
}

void HTTPServiceDomain::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool HTTPServiceDomain::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string HTTPServiceDomain::GetProtocol() const
{
    return m_protocol;
}

void HTTPServiceDomain::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool HTTPServiceDomain::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string HTTPServiceDomain::GetCname() const
{
    return m_cname;
}

void HTTPServiceDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool HTTPServiceDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

bool HTTPServiceDomain::GetIsDefault() const
{
    return m_isDefault;
}

void HTTPServiceDomain::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool HTTPServiceDomain::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool HTTPServiceDomain::GetEnable() const
{
    return m_enable;
}

void HTTPServiceDomain::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool HTTPServiceDomain::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string HTTPServiceDomain::GetStatus() const
{
    return m_status;
}

void HTTPServiceDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HTTPServiceDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string HTTPServiceDomain::GetDNSStatus() const
{
    return m_dNSStatus;
}

void HTTPServiceDomain::SetDNSStatus(const string& _dNSStatus)
{
    m_dNSStatus = _dNSStatus;
    m_dNSStatusHasBeenSet = true;
}

bool HTTPServiceDomain::DNSStatusHasBeenSet() const
{
    return m_dNSStatusHasBeenSet;
}

vector<HTTPServiceRoute> HTTPServiceDomain::GetRoutes() const
{
    return m_routes;
}

void HTTPServiceDomain::SetRoutes(const vector<HTTPServiceRoute>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool HTTPServiceDomain::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

HTTPServiceExtension HTTPServiceDomain::GetExtension() const
{
    return m_extension;
}

void HTTPServiceDomain::SetExtension(const HTTPServiceExtension& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool HTTPServiceDomain::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

string HTTPServiceDomain::GetCreateTime() const
{
    return m_createTime;
}

void HTTPServiceDomain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HTTPServiceDomain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HTTPServiceDomain::GetUpdateTime() const
{
    return m_updateTime;
}

void HTTPServiceDomain::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HTTPServiceDomain::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

