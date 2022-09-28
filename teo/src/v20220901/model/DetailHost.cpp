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

#include <tencentcloud/teo/v20220901/model/DetailHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DetailHost::DetailHost() :
    m_zoneIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_lockHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_cacheConfigHasBeenSet(false),
    m_originHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_wafHasBeenSet(false),
    m_cCHasBeenSet(false),
    m_dDoSHasBeenSet(false),
    m_smartRoutingHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_clientIpCountryHasBeenSet(false)
{
}

CoreInternalOutcome DetailHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Lock") && !value["Lock"].IsNull())
    {
        if (!value["Lock"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Lock` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lock = value["Lock"].GetInt64();
        m_lockHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("AccelerateType") && !value["AccelerateType"].IsNull())
    {
        if (!value["AccelerateType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.AccelerateType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accelerateType.Deserialize(value["AccelerateType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accelerateTypeHasBeenSet = true;
    }

    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(value["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("CacheConfig") && !value["CacheConfig"].IsNull())
    {
        if (!value["CacheConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.CacheConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheConfig.Deserialize(value["CacheConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheConfigHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("SecurityType") && !value["SecurityType"].IsNull())
    {
        if (!value["SecurityType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.SecurityType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityType.Deserialize(value["SecurityType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityTypeHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(value["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("Waf") && !value["Waf"].IsNull())
    {
        if (!value["Waf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Waf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waf.Deserialize(value["Waf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafHasBeenSet = true;
    }

    if (value.HasMember("CC") && !value["CC"].IsNull())
    {
        if (!value["CC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.CC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cC.Deserialize(value["CC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cCHasBeenSet = true;
    }

    if (value.HasMember("DDoS") && !value["DDoS"].IsNull())
    {
        if (!value["DDoS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.DDoS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dDoS.Deserialize(value["DDoS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dDoSHasBeenSet = true;
    }

    if (value.HasMember("SmartRouting") && !value["SmartRouting"].IsNull())
    {
        if (!value["SmartRouting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.SmartRouting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartRouting.Deserialize(value["SmartRouting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartRoutingHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.Ipv6` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6.Deserialize(value["Ipv6"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("ClientIpCountry") && !value["ClientIpCountry"].IsNull())
    {
        if (!value["ClientIpCountry"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailHost.ClientIpCountry` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIpCountry.Deserialize(value["ClientIpCountry"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIpCountryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lock, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accelerateType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dDoSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dDoS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smartRoutingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRouting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartRouting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIpCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIpCountry.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DetailHost::GetZoneId() const
{
    return m_zoneId;
}

void DetailHost::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DetailHost::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DetailHost::GetStatus() const
{
    return m_status;
}

void DetailHost::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DetailHost::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DetailHost::GetHost() const
{
    return m_host;
}

void DetailHost::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DetailHost::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DetailHost::GetZoneName() const
{
    return m_zoneName;
}

void DetailHost::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool DetailHost::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string DetailHost::GetCname() const
{
    return m_cname;
}

void DetailHost::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DetailHost::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string DetailHost::GetId() const
{
    return m_id;
}

void DetailHost::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DetailHost::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DetailHost::GetInstanceId() const
{
    return m_instanceId;
}

void DetailHost::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DetailHost::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DetailHost::GetLock() const
{
    return m_lock;
}

void DetailHost::SetLock(const int64_t& _lock)
{
    m_lock = _lock;
    m_lockHasBeenSet = true;
}

bool DetailHost::LockHasBeenSet() const
{
    return m_lockHasBeenSet;
}

int64_t DetailHost::GetMode() const
{
    return m_mode;
}

void DetailHost::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DetailHost::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DetailHost::GetArea() const
{
    return m_area;
}

void DetailHost::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DetailHost::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

AccelerateType DetailHost::GetAccelerateType() const
{
    return m_accelerateType;
}

void DetailHost::SetAccelerateType(const AccelerateType& _accelerateType)
{
    m_accelerateType = _accelerateType;
    m_accelerateTypeHasBeenSet = true;
}

bool DetailHost::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

Https DetailHost::GetHttps() const
{
    return m_https;
}

void DetailHost::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool DetailHost::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

CacheConfig DetailHost::GetCacheConfig() const
{
    return m_cacheConfig;
}

void DetailHost::SetCacheConfig(const CacheConfig& _cacheConfig)
{
    m_cacheConfig = _cacheConfig;
    m_cacheConfigHasBeenSet = true;
}

bool DetailHost::CacheConfigHasBeenSet() const
{
    return m_cacheConfigHasBeenSet;
}

Origin DetailHost::GetOrigin() const
{
    return m_origin;
}

void DetailHost::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool DetailHost::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

SecurityType DetailHost::GetSecurityType() const
{
    return m_securityType;
}

void DetailHost::SetSecurityType(const SecurityType& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool DetailHost::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

CacheKey DetailHost::GetCacheKey() const
{
    return m_cacheKey;
}

void DetailHost::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool DetailHost::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Compression DetailHost::GetCompression() const
{
    return m_compression;
}

void DetailHost::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool DetailHost::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

Waf DetailHost::GetWaf() const
{
    return m_waf;
}

void DetailHost::SetWaf(const Waf& _waf)
{
    m_waf = _waf;
    m_wafHasBeenSet = true;
}

bool DetailHost::WafHasBeenSet() const
{
    return m_wafHasBeenSet;
}

CC DetailHost::GetCC() const
{
    return m_cC;
}

void DetailHost::SetCC(const CC& _cC)
{
    m_cC = _cC;
    m_cCHasBeenSet = true;
}

bool DetailHost::CCHasBeenSet() const
{
    return m_cCHasBeenSet;
}

DDoS DetailHost::GetDDoS() const
{
    return m_dDoS;
}

void DetailHost::SetDDoS(const DDoS& _dDoS)
{
    m_dDoS = _dDoS;
    m_dDoSHasBeenSet = true;
}

bool DetailHost::DDoSHasBeenSet() const
{
    return m_dDoSHasBeenSet;
}

SmartRouting DetailHost::GetSmartRouting() const
{
    return m_smartRouting;
}

void DetailHost::SetSmartRouting(const SmartRouting& _smartRouting)
{
    m_smartRouting = _smartRouting;
    m_smartRoutingHasBeenSet = true;
}

bool DetailHost::SmartRoutingHasBeenSet() const
{
    return m_smartRoutingHasBeenSet;
}

Ipv6 DetailHost::GetIpv6() const
{
    return m_ipv6;
}

void DetailHost::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool DetailHost::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

ClientIpCountry DetailHost::GetClientIpCountry() const
{
    return m_clientIpCountry;
}

void DetailHost::SetClientIpCountry(const ClientIpCountry& _clientIpCountry)
{
    m_clientIpCountry = _clientIpCountry;
    m_clientIpCountryHasBeenSet = true;
}

bool DetailHost::ClientIpCountryHasBeenSet() const
{
    return m_clientIpCountryHasBeenSet;
}

