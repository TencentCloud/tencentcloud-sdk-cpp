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

#include <tencentcloud/csip/v20221121/model/ClusterNodeListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterNodeListItem::ClusterNodeListItem() :
    m_assetIdHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_internalIPHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_coresCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_uniqueIDHasBeenSet(false),
    m_clientStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterNodeListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("InternalIP") && !value["InternalIP"].IsNull())
    {
        if (!value["InternalIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.InternalIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalIP = string(value["InternalIP"].GetString());
        m_internalIPHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("CoresCount") && !value["CoresCount"].IsNull())
    {
        if (!value["CoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.CoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCount = value["CoresCount"].GetInt64();
        m_coresCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("RunStatus") && !value["RunStatus"].IsNull())
    {
        if (!value["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(value["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.IsNew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetBool();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("UniqueID") && !value["UniqueID"].IsNull())
    {
        if (!value["UniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.UniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueID = string(value["UniqueID"].GetString());
        m_uniqueIDHasBeenSet = true;
    }

    if (value.HasMember("ClientStatus") && !value["ClientStatus"].IsNull())
    {
        if (!value["ClientStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.ClientStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientStatus = string(value["ClientStatus"].GetString());
        m_clientStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeListItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterNodeListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_internalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_uniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_clientStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string ClusterNodeListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterNodeListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterNodeListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

uint64_t ClusterNodeListItem::GetAppID() const
{
    return m_appID;
}

void ClusterNodeListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterNodeListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterNodeListItem::GetNodeId() const
{
    return m_nodeId;
}

void ClusterNodeListItem::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ClusterNodeListItem::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ClusterNodeListItem::GetNodeName() const
{
    return m_nodeName;
}

void ClusterNodeListItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ClusterNodeListItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ClusterNodeListItem::GetPublicIP() const
{
    return m_publicIP;
}

void ClusterNodeListItem::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool ClusterNodeListItem::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string ClusterNodeListItem::GetInternalIP() const
{
    return m_internalIP;
}

void ClusterNodeListItem::SetInternalIP(const string& _internalIP)
{
    m_internalIP = _internalIP;
    m_internalIPHasBeenSet = true;
}

bool ClusterNodeListItem::InternalIPHasBeenSet() const
{
    return m_internalIPHasBeenSet;
}

string ClusterNodeListItem::GetNodeType() const
{
    return m_nodeType;
}

void ClusterNodeListItem::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ClusterNodeListItem::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t ClusterNodeListItem::GetCoresCount() const
{
    return m_coresCount;
}

void ClusterNodeListItem::SetCoresCount(const int64_t& _coresCount)
{
    m_coresCount = _coresCount;
    m_coresCountHasBeenSet = true;
}

bool ClusterNodeListItem::CoresCountHasBeenSet() const
{
    return m_coresCountHasBeenSet;
}

vector<string> ClusterNodeListItem::GetTags() const
{
    return m_tags;
}

void ClusterNodeListItem::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ClusterNodeListItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ClusterNodeListItem::GetRunStatus() const
{
    return m_runStatus;
}

void ClusterNodeListItem::SetRunStatus(const string& _runStatus)
{
    m_runStatus = _runStatus;
    m_runStatusHasBeenSet = true;
}

bool ClusterNodeListItem::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

bool ClusterNodeListItem::GetIsNew() const
{
    return m_isNew;
}

void ClusterNodeListItem::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool ClusterNodeListItem::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string ClusterNodeListItem::GetUniqueID() const
{
    return m_uniqueID;
}

void ClusterNodeListItem::SetUniqueID(const string& _uniqueID)
{
    m_uniqueID = _uniqueID;
    m_uniqueIDHasBeenSet = true;
}

bool ClusterNodeListItem::UniqueIDHasBeenSet() const
{
    return m_uniqueIDHasBeenSet;
}

string ClusterNodeListItem::GetClientStatus() const
{
    return m_clientStatus;
}

void ClusterNodeListItem::SetClientStatus(const string& _clientStatus)
{
    m_clientStatus = _clientStatus;
    m_clientStatusHasBeenSet = true;
}

bool ClusterNodeListItem::ClientStatusHasBeenSet() const
{
    return m_clientStatusHasBeenSet;
}

string ClusterNodeListItem::GetInstanceId() const
{
    return m_instanceId;
}

void ClusterNodeListItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClusterNodeListItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

