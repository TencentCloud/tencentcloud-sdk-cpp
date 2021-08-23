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

#include <tencentcloud/tke/v20180525/model/PrometheusGrafanaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusGrafanaInfo::PrometheusGrafanaInfo() :
    m_enabledHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_internetHasBeenSet(false),
    m_adminUserHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusGrafanaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusGrafanaInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusGrafanaInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusGrafanaInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Internet") && !value["Internet"].IsNull())
    {
        if (!value["Internet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusGrafanaInfo.Internet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internet = string(value["Internet"].GetString());
        m_internetHasBeenSet = true;
    }

    if (value.HasMember("AdminUser") && !value["AdminUser"].IsNull())
    {
        if (!value["AdminUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusGrafanaInfo.AdminUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUser = string(value["AdminUser"].GetString());
        m_adminUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusGrafanaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_internetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internet.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUser.c_str(), allocator).Move(), allocator);
    }

}


bool PrometheusGrafanaInfo::GetEnabled() const
{
    return m_enabled;
}

void PrometheusGrafanaInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PrometheusGrafanaInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string PrometheusGrafanaInfo::GetDomain() const
{
    return m_domain;
}

void PrometheusGrafanaInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PrometheusGrafanaInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PrometheusGrafanaInfo::GetAddress() const
{
    return m_address;
}

void PrometheusGrafanaInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PrometheusGrafanaInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PrometheusGrafanaInfo::GetInternet() const
{
    return m_internet;
}

void PrometheusGrafanaInfo::SetInternet(const string& _internet)
{
    m_internet = _internet;
    m_internetHasBeenSet = true;
}

bool PrometheusGrafanaInfo::InternetHasBeenSet() const
{
    return m_internetHasBeenSet;
}

string PrometheusGrafanaInfo::GetAdminUser() const
{
    return m_adminUser;
}

void PrometheusGrafanaInfo::SetAdminUser(const string& _adminUser)
{
    m_adminUser = _adminUser;
    m_adminUserHasBeenSet = true;
}

bool PrometheusGrafanaInfo::AdminUserHasBeenSet() const
{
    return m_adminUserHasBeenSet;
}

