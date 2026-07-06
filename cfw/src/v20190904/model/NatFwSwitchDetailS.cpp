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

#include <tencentcloud/cfw/v20190904/model/NatFwSwitchDetailS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatFwSwitchDetailS::NatFwSwitchDetailS() :
    m_insObjHasBeenSet(false),
    m_objNameHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_routingModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_nonClusterHasBeenSet(false),
    m_ipsActionHasBeenSet(false),
    m_transEnableHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_attachIdHasBeenSet(false),
    m_attachNameHasBeenSet(false),
    m_natVpcIdHasBeenSet(false),
    m_natVpcNameHasBeenSet(false),
    m_attachInsHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_checkResultHasBeenSet(false)
{
}

CoreInternalOutcome NatFwSwitchDetailS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsObj") && !value["InsObj"].IsNull())
    {
        if (!value["InsObj"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.InsObj` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insObj = string(value["InsObj"].GetString());
        m_insObjHasBeenSet = true;
    }

    if (value.HasMember("ObjName") && !value["ObjName"].IsNull())
    {
        if (!value["ObjName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.ObjName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objName = string(value["ObjName"].GetString());
        m_objNameHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("RoutingMode") && !value["RoutingMode"].IsNull())
    {
        if (!value["RoutingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.RoutingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routingMode = value["RoutingMode"].GetInt64();
        m_routingModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("NonCluster") && !value["NonCluster"].IsNull())
    {
        if (!value["NonCluster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.NonCluster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nonCluster = value["NonCluster"].GetInt64();
        m_nonClusterHasBeenSet = true;
    }

    if (value.HasMember("IpsAction") && !value["IpsAction"].IsNull())
    {
        if (!value["IpsAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.IpsAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipsAction = value["IpsAction"].GetInt64();
        m_ipsActionHasBeenSet = true;
    }

    if (value.HasMember("TransEnable") && !value["TransEnable"].IsNull())
    {
        if (!value["TransEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.TransEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transEnable = value["TransEnable"].GetInt64();
        m_transEnableHasBeenSet = true;
    }

    if (value.HasMember("Bypass") && !value["Bypass"].IsNull())
    {
        if (!value["Bypass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.Bypass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bypass = value["Bypass"].GetInt64();
        m_bypassHasBeenSet = true;
    }

    if (value.HasMember("AttachId") && !value["AttachId"].IsNull())
    {
        if (!value["AttachId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.AttachId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachId = string(value["AttachId"].GetString());
        m_attachIdHasBeenSet = true;
    }

    if (value.HasMember("AttachName") && !value["AttachName"].IsNull())
    {
        if (!value["AttachName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.AttachName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachName = string(value["AttachName"].GetString());
        m_attachNameHasBeenSet = true;
    }

    if (value.HasMember("NatVpcId") && !value["NatVpcId"].IsNull())
    {
        if (!value["NatVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.NatVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natVpcId = string(value["NatVpcId"].GetString());
        m_natVpcIdHasBeenSet = true;
    }

    if (value.HasMember("NatVpcName") && !value["NatVpcName"].IsNull())
    {
        if (!value["NatVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.NatVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natVpcName = string(value["NatVpcName"].GetString());
        m_natVpcNameHasBeenSet = true;
    }

    if (value.HasMember("AttachIns") && !value["AttachIns"].IsNull())
    {
        if (!value["AttachIns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.AttachIns` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.Endpoints` is not array type"));

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

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(value["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwSwitchDetailS.CheckResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkResult.Deserialize(value["CheckResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatFwSwitchDetailS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routingMode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

    if (m_nonClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonCluster, allocator);
    }

    if (m_ipsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipsAction, allocator);
    }

    if (m_transEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transEnable, allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bypass, allocator);
    }

    if (m_attachIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachName.c_str(), allocator).Move(), allocator);
    }

    if (m_natVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_natVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatVpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natVpcName.c_str(), allocator).Move(), allocator);
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

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string NatFwSwitchDetailS::GetInsObj() const
{
    return m_insObj;
}

void NatFwSwitchDetailS::SetInsObj(const string& _insObj)
{
    m_insObj = _insObj;
    m_insObjHasBeenSet = true;
}

bool NatFwSwitchDetailS::InsObjHasBeenSet() const
{
    return m_insObjHasBeenSet;
}

string NatFwSwitchDetailS::GetObjName() const
{
    return m_objName;
}

void NatFwSwitchDetailS::SetObjName(const string& _objName)
{
    m_objName = _objName;
    m_objNameHasBeenSet = true;
}

bool NatFwSwitchDetailS::ObjNameHasBeenSet() const
{
    return m_objNameHasBeenSet;
}

string NatFwSwitchDetailS::GetFwType() const
{
    return m_fwType;
}

void NatFwSwitchDetailS::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool NatFwSwitchDetailS::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string NatFwSwitchDetailS::GetAssetType() const
{
    return m_assetType;
}

void NatFwSwitchDetailS::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool NatFwSwitchDetailS::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string NatFwSwitchDetailS::GetRegion() const
{
    return m_region;
}

void NatFwSwitchDetailS::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatFwSwitchDetailS::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetSwitchMode() const
{
    return m_switchMode;
}

void NatFwSwitchDetailS::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool NatFwSwitchDetailS::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetRoutingMode() const
{
    return m_routingMode;
}

void NatFwSwitchDetailS::SetRoutingMode(const int64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool NatFwSwitchDetailS::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetStatus() const
{
    return m_status;
}

void NatFwSwitchDetailS::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatFwSwitchDetailS::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetIpVersion() const
{
    return m_ipVersion;
}

void NatFwSwitchDetailS::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool NatFwSwitchDetailS::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetNonCluster() const
{
    return m_nonCluster;
}

void NatFwSwitchDetailS::SetNonCluster(const int64_t& _nonCluster)
{
    m_nonCluster = _nonCluster;
    m_nonClusterHasBeenSet = true;
}

bool NatFwSwitchDetailS::NonClusterHasBeenSet() const
{
    return m_nonClusterHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetIpsAction() const
{
    return m_ipsAction;
}

void NatFwSwitchDetailS::SetIpsAction(const int64_t& _ipsAction)
{
    m_ipsAction = _ipsAction;
    m_ipsActionHasBeenSet = true;
}

bool NatFwSwitchDetailS::IpsActionHasBeenSet() const
{
    return m_ipsActionHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetTransEnable() const
{
    return m_transEnable;
}

void NatFwSwitchDetailS::SetTransEnable(const int64_t& _transEnable)
{
    m_transEnable = _transEnable;
    m_transEnableHasBeenSet = true;
}

bool NatFwSwitchDetailS::TransEnableHasBeenSet() const
{
    return m_transEnableHasBeenSet;
}

int64_t NatFwSwitchDetailS::GetBypass() const
{
    return m_bypass;
}

void NatFwSwitchDetailS::SetBypass(const int64_t& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool NatFwSwitchDetailS::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string NatFwSwitchDetailS::GetAttachId() const
{
    return m_attachId;
}

void NatFwSwitchDetailS::SetAttachId(const string& _attachId)
{
    m_attachId = _attachId;
    m_attachIdHasBeenSet = true;
}

bool NatFwSwitchDetailS::AttachIdHasBeenSet() const
{
    return m_attachIdHasBeenSet;
}

string NatFwSwitchDetailS::GetAttachName() const
{
    return m_attachName;
}

void NatFwSwitchDetailS::SetAttachName(const string& _attachName)
{
    m_attachName = _attachName;
    m_attachNameHasBeenSet = true;
}

bool NatFwSwitchDetailS::AttachNameHasBeenSet() const
{
    return m_attachNameHasBeenSet;
}

string NatFwSwitchDetailS::GetNatVpcId() const
{
    return m_natVpcId;
}

void NatFwSwitchDetailS::SetNatVpcId(const string& _natVpcId)
{
    m_natVpcId = _natVpcId;
    m_natVpcIdHasBeenSet = true;
}

bool NatFwSwitchDetailS::NatVpcIdHasBeenSet() const
{
    return m_natVpcIdHasBeenSet;
}

string NatFwSwitchDetailS::GetNatVpcName() const
{
    return m_natVpcName;
}

void NatFwSwitchDetailS::SetNatVpcName(const string& _natVpcName)
{
    m_natVpcName = _natVpcName;
    m_natVpcNameHasBeenSet = true;
}

bool NatFwSwitchDetailS::NatVpcNameHasBeenSet() const
{
    return m_natVpcNameHasBeenSet;
}

vector<AttachInsInfo> NatFwSwitchDetailS::GetAttachIns() const
{
    return m_attachIns;
}

void NatFwSwitchDetailS::SetAttachIns(const vector<AttachInsInfo>& _attachIns)
{
    m_attachIns = _attachIns;
    m_attachInsHasBeenSet = true;
}

bool NatFwSwitchDetailS::AttachInsHasBeenSet() const
{
    return m_attachInsHasBeenSet;
}

vector<EndpointInfo> NatFwSwitchDetailS::GetEndpoints() const
{
    return m_endpoints;
}

void NatFwSwitchDetailS::SetEndpoints(const vector<EndpointInfo>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool NatFwSwitchDetailS::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

string NatFwSwitchDetailS::GetProgress() const
{
    return m_progress;
}

void NatFwSwitchDetailS::SetProgress(const string& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool NatFwSwitchDetailS::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

ClusterFwPreAccessCheckResult NatFwSwitchDetailS::GetCheckResult() const
{
    return m_checkResult;
}

void NatFwSwitchDetailS::SetCheckResult(const ClusterFwPreAccessCheckResult& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool NatFwSwitchDetailS::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

