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

#include <tencentcloud/tcb/v20180608/model/WxGatewayRountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

WxGatewayRountItem::WxGatewayRountItem() :
    m_gatewayRouteNameHasBeenSet(false),
    m_gatewayRouteProtocolHasBeenSet(false),
    m_gatewayRouteAddrHasBeenSet(false),
    m_gatewayRouteDescHasBeenSet(false),
    m_gatewayRouteClusterIdHasBeenSet(false),
    m_gatewayRouteCreateTimeHasBeenSet(false),
    m_frequencyLimitConfigHasBeenSet(false),
    m_gatewayRouteServerTypeHasBeenSet(false),
    m_gatewayRouteServerNameHasBeenSet(false),
    m_gatewayRewriteHostHasBeenSet(false),
    m_gatewayVersionHasBeenSet(false),
    m_gatewayRoutePathHasBeenSet(false),
    m_gatewayRouteMethodHasBeenSet(false),
    m_gatewayRoutePortHasBeenSet(false),
    m_gatewayRouteEnvIdHasBeenSet(false),
    m_gatewayRoutePathMatchTypeHasBeenSet(false),
    m_customHeaderHasBeenSet(false)
{
}

CoreInternalOutcome WxGatewayRountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayRouteName") && !value["GatewayRouteName"].IsNull())
    {
        if (!value["GatewayRouteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteName = string(value["GatewayRouteName"].GetString());
        m_gatewayRouteNameHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteProtocol") && !value["GatewayRouteProtocol"].IsNull())
    {
        if (!value["GatewayRouteProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteProtocol = string(value["GatewayRouteProtocol"].GetString());
        m_gatewayRouteProtocolHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteAddr") && !value["GatewayRouteAddr"].IsNull())
    {
        if (!value["GatewayRouteAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteAddr = string(value["GatewayRouteAddr"].GetString());
        m_gatewayRouteAddrHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteDesc") && !value["GatewayRouteDesc"].IsNull())
    {
        if (!value["GatewayRouteDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteDesc = string(value["GatewayRouteDesc"].GetString());
        m_gatewayRouteDescHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteClusterId") && !value["GatewayRouteClusterId"].IsNull())
    {
        if (!value["GatewayRouteClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteClusterId = string(value["GatewayRouteClusterId"].GetString());
        m_gatewayRouteClusterIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteCreateTime") && !value["GatewayRouteCreateTime"].IsNull())
    {
        if (!value["GatewayRouteCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteCreateTime = string(value["GatewayRouteCreateTime"].GetString());
        m_gatewayRouteCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("FrequencyLimitConfig") && !value["FrequencyLimitConfig"].IsNull())
    {
        if (!value["FrequencyLimitConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.FrequencyLimitConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["FrequencyLimitConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FrequencyLimitConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_frequencyLimitConfig.push_back(item);
        }
        m_frequencyLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteServerType") && !value["GatewayRouteServerType"].IsNull())
    {
        if (!value["GatewayRouteServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteServerType = string(value["GatewayRouteServerType"].GetString());
        m_gatewayRouteServerTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteServerName") && !value["GatewayRouteServerName"].IsNull())
    {
        if (!value["GatewayRouteServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteServerName = string(value["GatewayRouteServerName"].GetString());
        m_gatewayRouteServerNameHasBeenSet = true;
    }

    if (value.HasMember("GatewayRewriteHost") && !value["GatewayRewriteHost"].IsNull())
    {
        if (!value["GatewayRewriteHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRewriteHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRewriteHost = string(value["GatewayRewriteHost"].GetString());
        m_gatewayRewriteHostHasBeenSet = true;
    }

    if (value.HasMember("GatewayVersion") && !value["GatewayVersion"].IsNull())
    {
        if (!value["GatewayVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayVersion = string(value["GatewayVersion"].GetString());
        m_gatewayVersionHasBeenSet = true;
    }

    if (value.HasMember("GatewayRoutePath") && !value["GatewayRoutePath"].IsNull())
    {
        if (!value["GatewayRoutePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRoutePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRoutePath = string(value["GatewayRoutePath"].GetString());
        m_gatewayRoutePathHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteMethod") && !value["GatewayRouteMethod"].IsNull())
    {
        if (!value["GatewayRouteMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteMethod = string(value["GatewayRouteMethod"].GetString());
        m_gatewayRouteMethodHasBeenSet = true;
    }

    if (value.HasMember("GatewayRoutePort") && !value["GatewayRoutePort"].IsNull())
    {
        if (!value["GatewayRoutePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRoutePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRoutePort = value["GatewayRoutePort"].GetInt64();
        m_gatewayRoutePortHasBeenSet = true;
    }

    if (value.HasMember("GatewayRouteEnvId") && !value["GatewayRouteEnvId"].IsNull())
    {
        if (!value["GatewayRouteEnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRouteEnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRouteEnvId = string(value["GatewayRouteEnvId"].GetString());
        m_gatewayRouteEnvIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayRoutePathMatchType") && !value["GatewayRoutePathMatchType"].IsNull())
    {
        if (!value["GatewayRoutePathMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.GatewayRoutePathMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayRoutePathMatchType = string(value["GatewayRoutePathMatchType"].GetString());
        m_gatewayRoutePathMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomHeader") && !value["CustomHeader"].IsNull())
    {
        if (!value["CustomHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WxGatewayRountItem.CustomHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customHeader.Deserialize(value["CustomHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customHeaderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WxGatewayRountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayRouteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_frequencyLimitConfig.begin(); itr != m_frequencyLimitConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gatewayRouteServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRewriteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRewriteHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRewriteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRoutePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRoutePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRoutePath.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRoutePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRoutePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gatewayRoutePort, allocator);
    }

    if (m_gatewayRouteEnvIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteEnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRouteEnvId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRoutePathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRoutePathMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayRoutePathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_customHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customHeader.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WxGatewayRountItem::GetGatewayRouteName() const
{
    return m_gatewayRouteName;
}

void WxGatewayRountItem::SetGatewayRouteName(const string& _gatewayRouteName)
{
    m_gatewayRouteName = _gatewayRouteName;
    m_gatewayRouteNameHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteNameHasBeenSet() const
{
    return m_gatewayRouteNameHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteProtocol() const
{
    return m_gatewayRouteProtocol;
}

void WxGatewayRountItem::SetGatewayRouteProtocol(const string& _gatewayRouteProtocol)
{
    m_gatewayRouteProtocol = _gatewayRouteProtocol;
    m_gatewayRouteProtocolHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteProtocolHasBeenSet() const
{
    return m_gatewayRouteProtocolHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteAddr() const
{
    return m_gatewayRouteAddr;
}

void WxGatewayRountItem::SetGatewayRouteAddr(const string& _gatewayRouteAddr)
{
    m_gatewayRouteAddr = _gatewayRouteAddr;
    m_gatewayRouteAddrHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteAddrHasBeenSet() const
{
    return m_gatewayRouteAddrHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteDesc() const
{
    return m_gatewayRouteDesc;
}

void WxGatewayRountItem::SetGatewayRouteDesc(const string& _gatewayRouteDesc)
{
    m_gatewayRouteDesc = _gatewayRouteDesc;
    m_gatewayRouteDescHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteDescHasBeenSet() const
{
    return m_gatewayRouteDescHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteClusterId() const
{
    return m_gatewayRouteClusterId;
}

void WxGatewayRountItem::SetGatewayRouteClusterId(const string& _gatewayRouteClusterId)
{
    m_gatewayRouteClusterId = _gatewayRouteClusterId;
    m_gatewayRouteClusterIdHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteClusterIdHasBeenSet() const
{
    return m_gatewayRouteClusterIdHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteCreateTime() const
{
    return m_gatewayRouteCreateTime;
}

void WxGatewayRountItem::SetGatewayRouteCreateTime(const string& _gatewayRouteCreateTime)
{
    m_gatewayRouteCreateTime = _gatewayRouteCreateTime;
    m_gatewayRouteCreateTimeHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteCreateTimeHasBeenSet() const
{
    return m_gatewayRouteCreateTimeHasBeenSet;
}

vector<FrequencyLimitConfig> WxGatewayRountItem::GetFrequencyLimitConfig() const
{
    return m_frequencyLimitConfig;
}

void WxGatewayRountItem::SetFrequencyLimitConfig(const vector<FrequencyLimitConfig>& _frequencyLimitConfig)
{
    m_frequencyLimitConfig = _frequencyLimitConfig;
    m_frequencyLimitConfigHasBeenSet = true;
}

bool WxGatewayRountItem::FrequencyLimitConfigHasBeenSet() const
{
    return m_frequencyLimitConfigHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteServerType() const
{
    return m_gatewayRouteServerType;
}

void WxGatewayRountItem::SetGatewayRouteServerType(const string& _gatewayRouteServerType)
{
    m_gatewayRouteServerType = _gatewayRouteServerType;
    m_gatewayRouteServerTypeHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteServerTypeHasBeenSet() const
{
    return m_gatewayRouteServerTypeHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteServerName() const
{
    return m_gatewayRouteServerName;
}

void WxGatewayRountItem::SetGatewayRouteServerName(const string& _gatewayRouteServerName)
{
    m_gatewayRouteServerName = _gatewayRouteServerName;
    m_gatewayRouteServerNameHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteServerNameHasBeenSet() const
{
    return m_gatewayRouteServerNameHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRewriteHost() const
{
    return m_gatewayRewriteHost;
}

void WxGatewayRountItem::SetGatewayRewriteHost(const string& _gatewayRewriteHost)
{
    m_gatewayRewriteHost = _gatewayRewriteHost;
    m_gatewayRewriteHostHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRewriteHostHasBeenSet() const
{
    return m_gatewayRewriteHostHasBeenSet;
}

string WxGatewayRountItem::GetGatewayVersion() const
{
    return m_gatewayVersion;
}

void WxGatewayRountItem::SetGatewayVersion(const string& _gatewayVersion)
{
    m_gatewayVersion = _gatewayVersion;
    m_gatewayVersionHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayVersionHasBeenSet() const
{
    return m_gatewayVersionHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRoutePath() const
{
    return m_gatewayRoutePath;
}

void WxGatewayRountItem::SetGatewayRoutePath(const string& _gatewayRoutePath)
{
    m_gatewayRoutePath = _gatewayRoutePath;
    m_gatewayRoutePathHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRoutePathHasBeenSet() const
{
    return m_gatewayRoutePathHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteMethod() const
{
    return m_gatewayRouteMethod;
}

void WxGatewayRountItem::SetGatewayRouteMethod(const string& _gatewayRouteMethod)
{
    m_gatewayRouteMethod = _gatewayRouteMethod;
    m_gatewayRouteMethodHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteMethodHasBeenSet() const
{
    return m_gatewayRouteMethodHasBeenSet;
}

int64_t WxGatewayRountItem::GetGatewayRoutePort() const
{
    return m_gatewayRoutePort;
}

void WxGatewayRountItem::SetGatewayRoutePort(const int64_t& _gatewayRoutePort)
{
    m_gatewayRoutePort = _gatewayRoutePort;
    m_gatewayRoutePortHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRoutePortHasBeenSet() const
{
    return m_gatewayRoutePortHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRouteEnvId() const
{
    return m_gatewayRouteEnvId;
}

void WxGatewayRountItem::SetGatewayRouteEnvId(const string& _gatewayRouteEnvId)
{
    m_gatewayRouteEnvId = _gatewayRouteEnvId;
    m_gatewayRouteEnvIdHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRouteEnvIdHasBeenSet() const
{
    return m_gatewayRouteEnvIdHasBeenSet;
}

string WxGatewayRountItem::GetGatewayRoutePathMatchType() const
{
    return m_gatewayRoutePathMatchType;
}

void WxGatewayRountItem::SetGatewayRoutePathMatchType(const string& _gatewayRoutePathMatchType)
{
    m_gatewayRoutePathMatchType = _gatewayRoutePathMatchType;
    m_gatewayRoutePathMatchTypeHasBeenSet = true;
}

bool WxGatewayRountItem::GatewayRoutePathMatchTypeHasBeenSet() const
{
    return m_gatewayRoutePathMatchTypeHasBeenSet;
}

CustomHeader WxGatewayRountItem::GetCustomHeader() const
{
    return m_customHeader;
}

void WxGatewayRountItem::SetCustomHeader(const CustomHeader& _customHeader)
{
    m_customHeader = _customHeader;
    m_customHeaderHasBeenSet = true;
}

bool WxGatewayRountItem::CustomHeaderHasBeenSet() const
{
    return m_customHeaderHasBeenSet;
}

