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

#include <tencentcloud/csip/v20221121/model/ClusterServiceListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterServiceListItem::ClusterServiceListItem() :
    m_appIDHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_selectorLabelHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_serviceUniqueIDHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_clusterIPHasBeenSet(false),
    m_externalIPHasBeenSet(false),
    m_portsHasBeenSet(false)
{
}

CoreInternalOutcome ClusterServiceListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SelectorLabel") && !value["SelectorLabel"].IsNull())
    {
        if (!value["SelectorLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.SelectorLabel` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectorLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_selectorLabel.push_back(item);
        }
        m_selectorLabelHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceUniqueID") && !value["ServiceUniqueID"].IsNull())
    {
        if (!value["ServiceUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.ServiceUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceUniqueID = string(value["ServiceUniqueID"].GetString());
        m_serviceUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterIP") && !value["ClusterIP"].IsNull())
    {
        if (!value["ClusterIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.ClusterIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIP = string(value["ClusterIP"].GetString());
        m_clusterIPHasBeenSet = true;
    }

    if (value.HasMember("ExternalIP") && !value["ExternalIP"].IsNull())
    {
        if (!value["ExternalIP"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.ExternalIP` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalIP"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_externalIP.push_back((*itr).GetString());
        }
        m_externalIPHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterServiceListItem.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ports.push_back((*itr).GetString());
        }
        m_portsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterServiceListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_selectorLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectorLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectorLabel.begin(); itr != m_selectorLabel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIP.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_externalIP.begin(); itr != m_externalIP.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t ClusterServiceListItem::GetAppID() const
{
    return m_appID;
}

void ClusterServiceListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterServiceListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterServiceListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterServiceListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterServiceListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ClusterServiceListItem::GetName() const
{
    return m_name;
}

void ClusterServiceListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterServiceListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AssetTag> ClusterServiceListItem::GetSelectorLabel() const
{
    return m_selectorLabel;
}

void ClusterServiceListItem::SetSelectorLabel(const vector<AssetTag>& _selectorLabel)
{
    m_selectorLabel = _selectorLabel;
    m_selectorLabelHasBeenSet = true;
}

bool ClusterServiceListItem::SelectorLabelHasBeenSet() const
{
    return m_selectorLabelHasBeenSet;
}

string ClusterServiceListItem::GetNamespace() const
{
    return m_namespace;
}

void ClusterServiceListItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ClusterServiceListItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ClusterServiceListItem::GetCreateTime() const
{
    return m_createTime;
}

void ClusterServiceListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterServiceListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterServiceListItem::GetServiceUniqueID() const
{
    return m_serviceUniqueID;
}

void ClusterServiceListItem::SetServiceUniqueID(const string& _serviceUniqueID)
{
    m_serviceUniqueID = _serviceUniqueID;
    m_serviceUniqueIDHasBeenSet = true;
}

bool ClusterServiceListItem::ServiceUniqueIDHasBeenSet() const
{
    return m_serviceUniqueIDHasBeenSet;
}

string ClusterServiceListItem::GetServiceType() const
{
    return m_serviceType;
}

void ClusterServiceListItem::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ClusterServiceListItem::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ClusterServiceListItem::GetClusterIP() const
{
    return m_clusterIP;
}

void ClusterServiceListItem::SetClusterIP(const string& _clusterIP)
{
    m_clusterIP = _clusterIP;
    m_clusterIPHasBeenSet = true;
}

bool ClusterServiceListItem::ClusterIPHasBeenSet() const
{
    return m_clusterIPHasBeenSet;
}

vector<string> ClusterServiceListItem::GetExternalIP() const
{
    return m_externalIP;
}

void ClusterServiceListItem::SetExternalIP(const vector<string>& _externalIP)
{
    m_externalIP = _externalIP;
    m_externalIPHasBeenSet = true;
}

bool ClusterServiceListItem::ExternalIPHasBeenSet() const
{
    return m_externalIPHasBeenSet;
}

vector<string> ClusterServiceListItem::GetPorts() const
{
    return m_ports;
}

void ClusterServiceListItem::SetPorts(const vector<string>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool ClusterServiceListItem::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

