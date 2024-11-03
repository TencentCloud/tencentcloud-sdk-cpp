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

#include <tencentcloud/cfw/v20190904/model/FwGroupSwitchShow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwGroupSwitchShow::FwGroupSwitchShow() :
    m_switchIdHasBeenSet(false),
    m_switchNameHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_connectTypeHasBeenSet(false),
    m_connectIdHasBeenSet(false),
    m_connectNameHasBeenSet(false),
    m_srcInstancesInfoHasBeenSet(false),
    m_dstInstancesInfoHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_fwGroupNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_attachWithEdgeHasBeenSet(false),
    m_crossEdgeStatusHasBeenSet(false),
    m_fwInsRegionHasBeenSet(false),
    m_ipsActionHasBeenSet(false),
    m_fwInsLstHasBeenSet(false),
    m_bypassStatusHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome FwGroupSwitchShow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SwitchId") && !value["SwitchId"].IsNull())
    {
        if (!value["SwitchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.SwitchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchId = string(value["SwitchId"].GetString());
        m_switchIdHasBeenSet = true;
    }

    if (value.HasMember("SwitchName") && !value["SwitchName"].IsNull())
    {
        if (!value["SwitchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.SwitchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchName = string(value["SwitchName"].GetString());
        m_switchNameHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("ConnectType") && !value["ConnectType"].IsNull())
    {
        if (!value["ConnectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.ConnectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectType = value["ConnectType"].GetInt64();
        m_connectTypeHasBeenSet = true;
    }

    if (value.HasMember("ConnectId") && !value["ConnectId"].IsNull())
    {
        if (!value["ConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.ConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectId = string(value["ConnectId"].GetString());
        m_connectIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectName") && !value["ConnectName"].IsNull())
    {
        if (!value["ConnectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.ConnectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectName = string(value["ConnectName"].GetString());
        m_connectNameHasBeenSet = true;
    }

    if (value.HasMember("SrcInstancesInfo") && !value["SrcInstancesInfo"].IsNull())
    {
        if (!value["SrcInstancesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.SrcInstancesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcInstancesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetInstancesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_srcInstancesInfo.push_back(item);
        }
        m_srcInstancesInfoHasBeenSet = true;
    }

    if (value.HasMember("DstInstancesInfo") && !value["DstInstancesInfo"].IsNull())
    {
        if (!value["DstInstancesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.DstInstancesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DstInstancesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetInstancesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstInstancesInfo.push_back(item);
        }
        m_dstInstancesInfoHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupName") && !value["FwGroupName"].IsNull())
    {
        if (!value["FwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.FwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupName = string(value["FwGroupName"].GetString());
        m_fwGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AttachWithEdge") && !value["AttachWithEdge"].IsNull())
    {
        if (!value["AttachWithEdge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.AttachWithEdge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attachWithEdge = value["AttachWithEdge"].GetInt64();
        m_attachWithEdgeHasBeenSet = true;
    }

    if (value.HasMember("CrossEdgeStatus") && !value["CrossEdgeStatus"].IsNull())
    {
        if (!value["CrossEdgeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.CrossEdgeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossEdgeStatus = value["CrossEdgeStatus"].GetInt64();
        m_crossEdgeStatusHasBeenSet = true;
    }

    if (value.HasMember("FwInsRegion") && !value["FwInsRegion"].IsNull())
    {
        if (!value["FwInsRegion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.FwInsRegion` is not array type"));

        const rapidjson::Value &tmpValue = value["FwInsRegion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fwInsRegion.push_back((*itr).GetString());
        }
        m_fwInsRegionHasBeenSet = true;
    }

    if (value.HasMember("IpsAction") && !value["IpsAction"].IsNull())
    {
        if (!value["IpsAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.IpsAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipsAction = value["IpsAction"].GetInt64();
        m_ipsActionHasBeenSet = true;
    }

    if (value.HasMember("FwInsLst") && !value["FwInsLst"].IsNull())
    {
        if (!value["FwInsLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.FwInsLst` is not array type"));

        const rapidjson::Value &tmpValue = value["FwInsLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcFwInstanceShow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fwInsLst.push_back(item);
        }
        m_fwInsLstHasBeenSet = true;
    }

    if (value.HasMember("BypassStatus") && !value["BypassStatus"].IsNull())
    {
        if (!value["BypassStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.BypassStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bypassStatus = value["BypassStatus"].GetInt64();
        m_bypassStatusHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitchShow.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwGroupSwitchShow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchName.c_str(), allocator).Move(), allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_connectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectType, allocator);
    }

    if (m_connectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInstancesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstancesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_srcInstancesInfo.begin(); itr != m_srcInstancesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dstInstancesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInstancesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstInstancesInfo.begin(); itr != m_dstInstancesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupName.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_attachWithEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachWithEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachWithEdge, allocator);
    }

    if (m_crossEdgeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossEdgeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossEdgeStatus, allocator);
    }

    if (m_fwInsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fwInsRegion.begin(); itr != m_fwInsRegion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipsAction, allocator);
    }

    if (m_fwInsLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fwInsLst.begin(); itr != m_fwInsLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bypassStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BypassStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bypassStatus, allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

}


string FwGroupSwitchShow::GetSwitchId() const
{
    return m_switchId;
}

void FwGroupSwitchShow::SetSwitchId(const string& _switchId)
{
    m_switchId = _switchId;
    m_switchIdHasBeenSet = true;
}

bool FwGroupSwitchShow::SwitchIdHasBeenSet() const
{
    return m_switchIdHasBeenSet;
}

string FwGroupSwitchShow::GetSwitchName() const
{
    return m_switchName;
}

void FwGroupSwitchShow::SetSwitchName(const string& _switchName)
{
    m_switchName = _switchName;
    m_switchNameHasBeenSet = true;
}

bool FwGroupSwitchShow::SwitchNameHasBeenSet() const
{
    return m_switchNameHasBeenSet;
}

int64_t FwGroupSwitchShow::GetSwitchMode() const
{
    return m_switchMode;
}

void FwGroupSwitchShow::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool FwGroupSwitchShow::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t FwGroupSwitchShow::GetConnectType() const
{
    return m_connectType;
}

void FwGroupSwitchShow::SetConnectType(const int64_t& _connectType)
{
    m_connectType = _connectType;
    m_connectTypeHasBeenSet = true;
}

bool FwGroupSwitchShow::ConnectTypeHasBeenSet() const
{
    return m_connectTypeHasBeenSet;
}

string FwGroupSwitchShow::GetConnectId() const
{
    return m_connectId;
}

void FwGroupSwitchShow::SetConnectId(const string& _connectId)
{
    m_connectId = _connectId;
    m_connectIdHasBeenSet = true;
}

bool FwGroupSwitchShow::ConnectIdHasBeenSet() const
{
    return m_connectIdHasBeenSet;
}

string FwGroupSwitchShow::GetConnectName() const
{
    return m_connectName;
}

void FwGroupSwitchShow::SetConnectName(const string& _connectName)
{
    m_connectName = _connectName;
    m_connectNameHasBeenSet = true;
}

bool FwGroupSwitchShow::ConnectNameHasBeenSet() const
{
    return m_connectNameHasBeenSet;
}

vector<NetInstancesInfo> FwGroupSwitchShow::GetSrcInstancesInfo() const
{
    return m_srcInstancesInfo;
}

void FwGroupSwitchShow::SetSrcInstancesInfo(const vector<NetInstancesInfo>& _srcInstancesInfo)
{
    m_srcInstancesInfo = _srcInstancesInfo;
    m_srcInstancesInfoHasBeenSet = true;
}

bool FwGroupSwitchShow::SrcInstancesInfoHasBeenSet() const
{
    return m_srcInstancesInfoHasBeenSet;
}

vector<NetInstancesInfo> FwGroupSwitchShow::GetDstInstancesInfo() const
{
    return m_dstInstancesInfo;
}

void FwGroupSwitchShow::SetDstInstancesInfo(const vector<NetInstancesInfo>& _dstInstancesInfo)
{
    m_dstInstancesInfo = _dstInstancesInfo;
    m_dstInstancesInfoHasBeenSet = true;
}

bool FwGroupSwitchShow::DstInstancesInfoHasBeenSet() const
{
    return m_dstInstancesInfoHasBeenSet;
}

string FwGroupSwitchShow::GetFwGroupId() const
{
    return m_fwGroupId;
}

void FwGroupSwitchShow::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool FwGroupSwitchShow::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string FwGroupSwitchShow::GetFwGroupName() const
{
    return m_fwGroupName;
}

void FwGroupSwitchShow::SetFwGroupName(const string& _fwGroupName)
{
    m_fwGroupName = _fwGroupName;
    m_fwGroupNameHasBeenSet = true;
}

bool FwGroupSwitchShow::FwGroupNameHasBeenSet() const
{
    return m_fwGroupNameHasBeenSet;
}

int64_t FwGroupSwitchShow::GetEnable() const
{
    return m_enable;
}

void FwGroupSwitchShow::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool FwGroupSwitchShow::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t FwGroupSwitchShow::GetStatus() const
{
    return m_status;
}

void FwGroupSwitchShow::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FwGroupSwitchShow::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t FwGroupSwitchShow::GetAttachWithEdge() const
{
    return m_attachWithEdge;
}

void FwGroupSwitchShow::SetAttachWithEdge(const int64_t& _attachWithEdge)
{
    m_attachWithEdge = _attachWithEdge;
    m_attachWithEdgeHasBeenSet = true;
}

bool FwGroupSwitchShow::AttachWithEdgeHasBeenSet() const
{
    return m_attachWithEdgeHasBeenSet;
}

int64_t FwGroupSwitchShow::GetCrossEdgeStatus() const
{
    return m_crossEdgeStatus;
}

void FwGroupSwitchShow::SetCrossEdgeStatus(const int64_t& _crossEdgeStatus)
{
    m_crossEdgeStatus = _crossEdgeStatus;
    m_crossEdgeStatusHasBeenSet = true;
}

bool FwGroupSwitchShow::CrossEdgeStatusHasBeenSet() const
{
    return m_crossEdgeStatusHasBeenSet;
}

vector<string> FwGroupSwitchShow::GetFwInsRegion() const
{
    return m_fwInsRegion;
}

void FwGroupSwitchShow::SetFwInsRegion(const vector<string>& _fwInsRegion)
{
    m_fwInsRegion = _fwInsRegion;
    m_fwInsRegionHasBeenSet = true;
}

bool FwGroupSwitchShow::FwInsRegionHasBeenSet() const
{
    return m_fwInsRegionHasBeenSet;
}

int64_t FwGroupSwitchShow::GetIpsAction() const
{
    return m_ipsAction;
}

void FwGroupSwitchShow::SetIpsAction(const int64_t& _ipsAction)
{
    m_ipsAction = _ipsAction;
    m_ipsActionHasBeenSet = true;
}

bool FwGroupSwitchShow::IpsActionHasBeenSet() const
{
    return m_ipsActionHasBeenSet;
}

vector<VpcFwInstanceShow> FwGroupSwitchShow::GetFwInsLst() const
{
    return m_fwInsLst;
}

void FwGroupSwitchShow::SetFwInsLst(const vector<VpcFwInstanceShow>& _fwInsLst)
{
    m_fwInsLst = _fwInsLst;
    m_fwInsLstHasBeenSet = true;
}

bool FwGroupSwitchShow::FwInsLstHasBeenSet() const
{
    return m_fwInsLstHasBeenSet;
}

int64_t FwGroupSwitchShow::GetBypassStatus() const
{
    return m_bypassStatus;
}

void FwGroupSwitchShow::SetBypassStatus(const int64_t& _bypassStatus)
{
    m_bypassStatus = _bypassStatus;
    m_bypassStatusHasBeenSet = true;
}

bool FwGroupSwitchShow::BypassStatusHasBeenSet() const
{
    return m_bypassStatusHasBeenSet;
}

int64_t FwGroupSwitchShow::GetIpVersion() const
{
    return m_ipVersion;
}

void FwGroupSwitchShow::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool FwGroupSwitchShow::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

