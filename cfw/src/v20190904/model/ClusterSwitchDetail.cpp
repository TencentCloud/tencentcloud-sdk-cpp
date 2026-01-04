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

#include <tencentcloud/cfw/v20190904/model/ClusterSwitchDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ClusterSwitchDetail::ClusterSwitchDetail() :
    m_insObjHasBeenSet(false),
    m_objNameHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_nonClusterHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_attachInsHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_idpsactionHasBeenSet(false),
    m_transEnableHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_routingModeHasBeenSet(false),
    m_isPeerHasBeenSet(false),
    m_peerAppidHasBeenSet(false),
    m_peerStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClusterSwitchDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsObj") && !value["InsObj"].IsNull())
    {
        if (!value["InsObj"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.InsObj` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insObj = string(value["InsObj"].GetString());
        m_insObjHasBeenSet = true;
    }

    if (value.HasMember("ObjName") && !value["ObjName"].IsNull())
    {
        if (!value["ObjName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.ObjName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objName = string(value["ObjName"].GetString());
        m_objNameHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.SwitchMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetUint64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("NonCluster") && !value["NonCluster"].IsNull())
    {
        if (!value["NonCluster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.NonCluster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nonCluster = value["NonCluster"].GetInt64();
        m_nonClusterHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("AttachIns") && !value["AttachIns"].IsNull())
    {
        if (!value["AttachIns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.AttachIns` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachIns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttachInsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachIns.push_back(item);
        }
        m_attachInsHasBeenSet = true;
    }

    if (value.HasMember("Endpoints") && !value["Endpoints"].IsNull())
    {
        if (!value["Endpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.Endpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["Endpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpoints.push_back(item);
        }
        m_endpointsHasBeenSet = true;
    }

    if (value.HasMember("Idpsaction") && !value["Idpsaction"].IsNull())
    {
        if (!value["Idpsaction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.Idpsaction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idpsaction = value["Idpsaction"].GetUint64();
        m_idpsactionHasBeenSet = true;
    }

    if (value.HasMember("TransEnable") && !value["TransEnable"].IsNull())
    {
        if (!value["TransEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.TransEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transEnable = value["TransEnable"].GetUint64();
        m_transEnableHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }

    if (value.HasMember("IsPeer") && !value["IsPeer"].IsNull())
    {
        if (!value["IsPeer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.IsPeer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPeer = value["IsPeer"].GetInt64();
        m_isPeerHasBeenSet = true;
    }

    if (value.HasMember("PeerAppid") && !value["PeerAppid"].IsNull())
    {
        if (!value["PeerAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.PeerAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerAppid = string(value["PeerAppid"].GetString());
        m_peerAppidHasBeenSet = true;
    }

    if (value.HasMember("PeerStatus") && !value["PeerStatus"].IsNull())
    {
        if (!value["PeerStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSwitchDetail.PeerStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerStatus = value["PeerStatus"].GetInt64();
        m_peerStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterSwitchDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_insObjHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsObj";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insObj.c_str(), allocator).Move(), allocator);
    }

    if (m_objNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objName.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_nonClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonCluster, allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

    if (m_attachInsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachIns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachIns.begin(); itr != m_attachIns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idpsactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idpsaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idpsaction, allocator);
    }

    if (m_transEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transEnable, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

    if (m_isPeerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPeer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPeer, allocator);
    }

    if (m_peerAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_peerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerStatus, allocator);
    }

}


string ClusterSwitchDetail::GetInsObj() const
{
    return m_insObj;
}

void ClusterSwitchDetail::SetInsObj(const string& _insObj)
{
    m_insObj = _insObj;
    m_insObjHasBeenSet = true;
}

bool ClusterSwitchDetail::InsObjHasBeenSet() const
{
    return m_insObjHasBeenSet;
}

string ClusterSwitchDetail::GetObjName() const
{
    return m_objName;
}

void ClusterSwitchDetail::SetObjName(const string& _objName)
{
    m_objName = _objName;
    m_objNameHasBeenSet = true;
}

bool ClusterSwitchDetail::ObjNameHasBeenSet() const
{
    return m_objNameHasBeenSet;
}

string ClusterSwitchDetail::GetFwType() const
{
    return m_fwType;
}

void ClusterSwitchDetail::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool ClusterSwitchDetail::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string ClusterSwitchDetail::GetAssetType() const
{
    return m_assetType;
}

void ClusterSwitchDetail::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ClusterSwitchDetail::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ClusterSwitchDetail::GetRegion() const
{
    return m_region;
}

void ClusterSwitchDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterSwitchDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ClusterSwitchDetail::GetStatus() const
{
    return m_status;
}

void ClusterSwitchDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterSwitchDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ClusterSwitchDetail::GetSwitchMode() const
{
    return m_switchMode;
}

void ClusterSwitchDetail::SetSwitchMode(const uint64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool ClusterSwitchDetail::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t ClusterSwitchDetail::GetNonCluster() const
{
    return m_nonCluster;
}

void ClusterSwitchDetail::SetNonCluster(const int64_t& _nonCluster)
{
    m_nonCluster = _nonCluster;
    m_nonClusterHasBeenSet = true;
}

bool ClusterSwitchDetail::NonClusterHasBeenSet() const
{
    return m_nonClusterHasBeenSet;
}

int64_t ClusterSwitchDetail::GetIpVersion() const
{
    return m_ipVersion;
}

void ClusterSwitchDetail::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool ClusterSwitchDetail::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

vector<AttachInsInfo> ClusterSwitchDetail::GetAttachIns() const
{
    return m_attachIns;
}

void ClusterSwitchDetail::SetAttachIns(const vector<AttachInsInfo>& _attachIns)
{
    m_attachIns = _attachIns;
    m_attachInsHasBeenSet = true;
}

bool ClusterSwitchDetail::AttachInsHasBeenSet() const
{
    return m_attachInsHasBeenSet;
}

vector<EndpointInfo> ClusterSwitchDetail::GetEndpoints() const
{
    return m_endpoints;
}

void ClusterSwitchDetail::SetEndpoints(const vector<EndpointInfo>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool ClusterSwitchDetail::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

uint64_t ClusterSwitchDetail::GetIdpsaction() const
{
    return m_idpsaction;
}

void ClusterSwitchDetail::SetIdpsaction(const uint64_t& _idpsaction)
{
    m_idpsaction = _idpsaction;
    m_idpsactionHasBeenSet = true;
}

bool ClusterSwitchDetail::IdpsactionHasBeenSet() const
{
    return m_idpsactionHasBeenSet;
}

uint64_t ClusterSwitchDetail::GetTransEnable() const
{
    return m_transEnable;
}

void ClusterSwitchDetail::SetTransEnable(const uint64_t& _transEnable)
{
    m_transEnable = _transEnable;
    m_transEnableHasBeenSet = true;
}

bool ClusterSwitchDetail::TransEnableHasBeenSet() const
{
    return m_transEnableHasBeenSet;
}

int64_t ClusterSwitchDetail::GetEnable() const
{
    return m_enable;
}

void ClusterSwitchDetail::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ClusterSwitchDetail::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t ClusterSwitchDetail::GetRoutingMode() const
{
    return m_routingMode;
}

void ClusterSwitchDetail::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool ClusterSwitchDetail::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

int64_t ClusterSwitchDetail::GetIsPeer() const
{
    return m_isPeer;
}

void ClusterSwitchDetail::SetIsPeer(const int64_t& _isPeer)
{
    m_isPeer = _isPeer;
    m_isPeerHasBeenSet = true;
}

bool ClusterSwitchDetail::IsPeerHasBeenSet() const
{
    return m_isPeerHasBeenSet;
}

string ClusterSwitchDetail::GetPeerAppid() const
{
    return m_peerAppid;
}

void ClusterSwitchDetail::SetPeerAppid(const string& _peerAppid)
{
    m_peerAppid = _peerAppid;
    m_peerAppidHasBeenSet = true;
}

bool ClusterSwitchDetail::PeerAppidHasBeenSet() const
{
    return m_peerAppidHasBeenSet;
}

int64_t ClusterSwitchDetail::GetPeerStatus() const
{
    return m_peerStatus;
}

void ClusterSwitchDetail::SetPeerStatus(const int64_t& _peerStatus)
{
    m_peerStatus = _peerStatus;
    m_peerStatusHasBeenSet = true;
}

bool ClusterSwitchDetail::PeerStatusHasBeenSet() const
{
    return m_peerStatusHasBeenSet;
}

