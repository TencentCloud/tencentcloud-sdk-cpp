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

#include <tencentcloud/teo/v20220901/model/L4Proxy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

L4Proxy::L4Proxy() :
    m_zoneIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_ipsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_staticIpHasBeenSet(false),
    m_accelerateMainlandHasBeenSet(false),
    m_dDosProtectionConfigHasBeenSet(false),
    m_l4ProxyRuleCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome L4Proxy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyName") && !value["ProxyName"].IsNull())
    {
        if (!value["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(value["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Ips") && !value["Ips"].IsNull())
    {
        if (!value["Ips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4Proxy.Ips` is not array type"));

        const rapidjson::Value &tmpValue = value["Ips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ips.push_back((*itr).GetString());
        }
        m_ipsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.Ipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = string(value["Ipv6"].GetString());
        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("StaticIp") && !value["StaticIp"].IsNull())
    {
        if (!value["StaticIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.StaticIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staticIp = string(value["StaticIp"].GetString());
        m_staticIpHasBeenSet = true;
    }

    if (value.HasMember("AccelerateMainland") && !value["AccelerateMainland"].IsNull())
    {
        if (!value["AccelerateMainland"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.AccelerateMainland` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateMainland = string(value["AccelerateMainland"].GetString());
        m_accelerateMainlandHasBeenSet = true;
    }

    if (value.HasMember("DDosProtectionConfig") && !value["DDosProtectionConfig"].IsNull())
    {
        if (!value["DDosProtectionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.DDosProtectionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDosProtectionConfig.Deserialize(value["DDosProtectionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDosProtectionConfigHasBeenSet = true;
    }

    if (value.HasMember("L4ProxyRuleCount") && !value["L4ProxyRuleCount"].IsNull())
    {
        if (!value["L4ProxyRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.L4ProxyRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_l4ProxyRuleCount = value["L4ProxyRuleCount"].GetInt64();
        m_l4ProxyRuleCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Proxy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4Proxy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_staticIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staticIp.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accelerateMainland.c_str(), allocator).Move(), allocator);
    }

    if (m_dDosProtectionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDosProtectionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDosProtectionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_l4ProxyRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4ProxyRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_l4ProxyRuleCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string L4Proxy::GetZoneId() const
{
    return m_zoneId;
}

void L4Proxy::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool L4Proxy::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string L4Proxy::GetProxyId() const
{
    return m_proxyId;
}

void L4Proxy::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool L4Proxy::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string L4Proxy::GetProxyName() const
{
    return m_proxyName;
}

void L4Proxy::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool L4Proxy::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string L4Proxy::GetArea() const
{
    return m_area;
}

void L4Proxy::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool L4Proxy::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string L4Proxy::GetCname() const
{
    return m_cname;
}

void L4Proxy::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool L4Proxy::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

vector<string> L4Proxy::GetIps() const
{
    return m_ips;
}

void L4Proxy::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool L4Proxy::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

string L4Proxy::GetStatus() const
{
    return m_status;
}

void L4Proxy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L4Proxy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L4Proxy::GetIpv6() const
{
    return m_ipv6;
}

void L4Proxy::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool L4Proxy::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

string L4Proxy::GetStaticIp() const
{
    return m_staticIp;
}

void L4Proxy::SetStaticIp(const string& _staticIp)
{
    m_staticIp = _staticIp;
    m_staticIpHasBeenSet = true;
}

bool L4Proxy::StaticIpHasBeenSet() const
{
    return m_staticIpHasBeenSet;
}

string L4Proxy::GetAccelerateMainland() const
{
    return m_accelerateMainland;
}

void L4Proxy::SetAccelerateMainland(const string& _accelerateMainland)
{
    m_accelerateMainland = _accelerateMainland;
    m_accelerateMainlandHasBeenSet = true;
}

bool L4Proxy::AccelerateMainlandHasBeenSet() const
{
    return m_accelerateMainlandHasBeenSet;
}

DDosProtectionConfig L4Proxy::GetDDosProtectionConfig() const
{
    return m_dDosProtectionConfig;
}

void L4Proxy::SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig)
{
    m_dDosProtectionConfig = _dDosProtectionConfig;
    m_dDosProtectionConfigHasBeenSet = true;
}

bool L4Proxy::DDosProtectionConfigHasBeenSet() const
{
    return m_dDosProtectionConfigHasBeenSet;
}

int64_t L4Proxy::GetL4ProxyRuleCount() const
{
    return m_l4ProxyRuleCount;
}

void L4Proxy::SetL4ProxyRuleCount(const int64_t& _l4ProxyRuleCount)
{
    m_l4ProxyRuleCount = _l4ProxyRuleCount;
    m_l4ProxyRuleCountHasBeenSet = true;
}

bool L4Proxy::L4ProxyRuleCountHasBeenSet() const
{
    return m_l4ProxyRuleCountHasBeenSet;
}

string L4Proxy::GetUpdateTime() const
{
    return m_updateTime;
}

void L4Proxy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool L4Proxy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

