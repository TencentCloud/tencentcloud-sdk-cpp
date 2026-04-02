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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceDomainParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceDomainParam::HTTPServiceDomainParam() :
    m_domainHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_customCnameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceDomainParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("CustomCname") && !value["CustomCname"].IsNull())
    {
        if (!value["CustomCname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.CustomCname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCname = string(value["CustomCname"].GetString());
        m_customCnameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Routes") && !value["Routes"].IsNull())
    {
        if (!value["Routes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.Routes` is not array type"));

        const rapidjson::Value &tmpValue = value["Routes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPServiceRouteParam item;
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
            return CoreInternalOutcome(Core::Error("response `HTTPServiceDomainParam.Extension` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extension.Deserialize(value["Extension"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceDomainParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_customCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCname.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
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

}


string HTTPServiceDomainParam::GetDomain() const
{
    return m_domain;
}

void HTTPServiceDomainParam::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool HTTPServiceDomainParam::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string HTTPServiceDomainParam::GetAccessType() const
{
    return m_accessType;
}

void HTTPServiceDomainParam::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool HTTPServiceDomainParam::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string HTTPServiceDomainParam::GetCertId() const
{
    return m_certId;
}

void HTTPServiceDomainParam::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool HTTPServiceDomainParam::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string HTTPServiceDomainParam::GetProtocol() const
{
    return m_protocol;
}

void HTTPServiceDomainParam::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool HTTPServiceDomainParam::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string HTTPServiceDomainParam::GetCustomCname() const
{
    return m_customCname;
}

void HTTPServiceDomainParam::SetCustomCname(const string& _customCname)
{
    m_customCname = _customCname;
    m_customCnameHasBeenSet = true;
}

bool HTTPServiceDomainParam::CustomCnameHasBeenSet() const
{
    return m_customCnameHasBeenSet;
}

bool HTTPServiceDomainParam::GetEnable() const
{
    return m_enable;
}

void HTTPServiceDomainParam::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool HTTPServiceDomainParam::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<HTTPServiceRouteParam> HTTPServiceDomainParam::GetRoutes() const
{
    return m_routes;
}

void HTTPServiceDomainParam::SetRoutes(const vector<HTTPServiceRouteParam>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool HTTPServiceDomainParam::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

HTTPServiceExtension HTTPServiceDomainParam::GetExtension() const
{
    return m_extension;
}

void HTTPServiceDomainParam::SetExtension(const HTTPServiceExtension& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool HTTPServiceDomainParam::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

