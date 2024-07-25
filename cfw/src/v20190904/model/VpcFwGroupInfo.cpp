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

#include <tencentcloud/cfw/v20190904/model/VpcFwGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwGroupInfo::VpcFwGroupInfo() :
    m_fwGroupIdHasBeenSet(false),
    m_fwGroupNameHasBeenSet(false),
    m_fwSwitchNumHasBeenSet(false),
    m_regionLstHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_fwInstanceLstHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fwVpcCidrHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_cdcNameHasBeenSet(false),
    m_crossUserModeHasBeenSet(false),
    m_needSwitchCcnOverlapHasBeenSet(false),
    m_ccnIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupName") && !value["FwGroupName"].IsNull())
    {
        if (!value["FwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.FwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupName = string(value["FwGroupName"].GetString());
        m_fwGroupNameHasBeenSet = true;
    }

    if (value.HasMember("FwSwitchNum") && !value["FwSwitchNum"].IsNull())
    {
        if (!value["FwSwitchNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.FwSwitchNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwSwitchNum = value["FwSwitchNum"].GetInt64();
        m_fwSwitchNumHasBeenSet = true;
    }

    if (value.HasMember("RegionLst") && !value["RegionLst"].IsNull())
    {
        if (!value["RegionLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.RegionLst` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionLst.push_back((*itr).GetString());
        }
        m_regionLstHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("FwInstanceLst") && !value["FwInstanceLst"].IsNull())
    {
        if (!value["FwInstanceLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.FwInstanceLst` is not array type"));

        const rapidjson::Value &tmpValue = value["FwInstanceLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcFwInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fwInstanceLst.push_back(item);
        }
        m_fwInstanceLstHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FwVpcCidr") && !value["FwVpcCidr"].IsNull())
    {
        if (!value["FwVpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.FwVpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwVpcCidr = string(value["FwVpcCidr"].GetString());
        m_fwVpcCidrHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("CdcName") && !value["CdcName"].IsNull())
    {
        if (!value["CdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.CdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcName = string(value["CdcName"].GetString());
        m_cdcNameHasBeenSet = true;
    }

    if (value.HasMember("CrossUserMode") && !value["CrossUserMode"].IsNull())
    {
        if (!value["CrossUserMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.CrossUserMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossUserMode = string(value["CrossUserMode"].GetString());
        m_crossUserModeHasBeenSet = true;
    }

    if (value.HasMember("NeedSwitchCcnOverlap") && !value["NeedSwitchCcnOverlap"].IsNull())
    {
        if (!value["NeedSwitchCcnOverlap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.NeedSwitchCcnOverlap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needSwitchCcnOverlap = value["NeedSwitchCcnOverlap"].GetInt64();
        m_needSwitchCcnOverlapHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwGroupInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_fwSwitchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwSwitchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwSwitchNum, allocator);
    }

    if (m_regionLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionLst.begin(); itr != m_regionLst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_fwInstanceLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInstanceLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fwInstanceLst.begin(); itr != m_fwInstanceLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_fwVpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwVpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwVpcCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcName.c_str(), allocator).Move(), allocator);
    }

    if (m_crossUserModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossUserMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossUserMode.c_str(), allocator).Move(), allocator);
    }

    if (m_needSwitchCcnOverlapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSwitchCcnOverlap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSwitchCcnOverlap, allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

}


string VpcFwGroupInfo::GetFwGroupId() const
{
    return m_fwGroupId;
}

void VpcFwGroupInfo::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool VpcFwGroupInfo::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string VpcFwGroupInfo::GetFwGroupName() const
{
    return m_fwGroupName;
}

void VpcFwGroupInfo::SetFwGroupName(const string& _fwGroupName)
{
    m_fwGroupName = _fwGroupName;
    m_fwGroupNameHasBeenSet = true;
}

bool VpcFwGroupInfo::FwGroupNameHasBeenSet() const
{
    return m_fwGroupNameHasBeenSet;
}

int64_t VpcFwGroupInfo::GetFwSwitchNum() const
{
    return m_fwSwitchNum;
}

void VpcFwGroupInfo::SetFwSwitchNum(const int64_t& _fwSwitchNum)
{
    m_fwSwitchNum = _fwSwitchNum;
    m_fwSwitchNumHasBeenSet = true;
}

bool VpcFwGroupInfo::FwSwitchNumHasBeenSet() const
{
    return m_fwSwitchNumHasBeenSet;
}

vector<string> VpcFwGroupInfo::GetRegionLst() const
{
    return m_regionLst;
}

void VpcFwGroupInfo::SetRegionLst(const vector<string>& _regionLst)
{
    m_regionLst = _regionLst;
    m_regionLstHasBeenSet = true;
}

bool VpcFwGroupInfo::RegionLstHasBeenSet() const
{
    return m_regionLstHasBeenSet;
}

int64_t VpcFwGroupInfo::GetMode() const
{
    return m_mode;
}

void VpcFwGroupInfo::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool VpcFwGroupInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t VpcFwGroupInfo::GetSwitchMode() const
{
    return m_switchMode;
}

void VpcFwGroupInfo::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool VpcFwGroupInfo::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

vector<VpcFwInstanceInfo> VpcFwGroupInfo::GetFwInstanceLst() const
{
    return m_fwInstanceLst;
}

void VpcFwGroupInfo::SetFwInstanceLst(const vector<VpcFwInstanceInfo>& _fwInstanceLst)
{
    m_fwInstanceLst = _fwInstanceLst;
    m_fwInstanceLstHasBeenSet = true;
}

bool VpcFwGroupInfo::FwInstanceLstHasBeenSet() const
{
    return m_fwInstanceLstHasBeenSet;
}

int64_t VpcFwGroupInfo::GetStatus() const
{
    return m_status;
}

void VpcFwGroupInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VpcFwGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VpcFwGroupInfo::GetFwVpcCidr() const
{
    return m_fwVpcCidr;
}

void VpcFwGroupInfo::SetFwVpcCidr(const string& _fwVpcCidr)
{
    m_fwVpcCidr = _fwVpcCidr;
    m_fwVpcCidrHasBeenSet = true;
}

bool VpcFwGroupInfo::FwVpcCidrHasBeenSet() const
{
    return m_fwVpcCidrHasBeenSet;
}

string VpcFwGroupInfo::GetCdcId() const
{
    return m_cdcId;
}

void VpcFwGroupInfo::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool VpcFwGroupInfo::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string VpcFwGroupInfo::GetCdcName() const
{
    return m_cdcName;
}

void VpcFwGroupInfo::SetCdcName(const string& _cdcName)
{
    m_cdcName = _cdcName;
    m_cdcNameHasBeenSet = true;
}

bool VpcFwGroupInfo::CdcNameHasBeenSet() const
{
    return m_cdcNameHasBeenSet;
}

string VpcFwGroupInfo::GetCrossUserMode() const
{
    return m_crossUserMode;
}

void VpcFwGroupInfo::SetCrossUserMode(const string& _crossUserMode)
{
    m_crossUserMode = _crossUserMode;
    m_crossUserModeHasBeenSet = true;
}

bool VpcFwGroupInfo::CrossUserModeHasBeenSet() const
{
    return m_crossUserModeHasBeenSet;
}

int64_t VpcFwGroupInfo::GetNeedSwitchCcnOverlap() const
{
    return m_needSwitchCcnOverlap;
}

void VpcFwGroupInfo::SetNeedSwitchCcnOverlap(const int64_t& _needSwitchCcnOverlap)
{
    m_needSwitchCcnOverlap = _needSwitchCcnOverlap;
    m_needSwitchCcnOverlapHasBeenSet = true;
}

bool VpcFwGroupInfo::NeedSwitchCcnOverlapHasBeenSet() const
{
    return m_needSwitchCcnOverlapHasBeenSet;
}

string VpcFwGroupInfo::GetCcnId() const
{
    return m_ccnId;
}

void VpcFwGroupInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool VpcFwGroupInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

