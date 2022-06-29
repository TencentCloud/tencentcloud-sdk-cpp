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

#include <tencentcloud/memcached/v20190318/model/InstanceListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Memcached::V20190318::Model;
using namespace std;

InstanceListInfo::InstanceListInfo() :
    m_modTimeStampHasBeenSet(false),
    m_isolateTimeStampHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_setIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cmemIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_addTimeStampHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_deadlineTimeStampHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

CoreInternalOutcome InstanceListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTimeStamp") && !value["ModTimeStamp"].IsNull())
    {
        if (!value["ModTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.ModTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTimeStamp = string(value["ModTimeStamp"].GetString());
        m_modTimeStampHasBeenSet = true;
    }

    if (value.HasMember("IsolateTimeStamp") && !value["IsolateTimeStamp"].IsNull())
    {
        if (!value["IsolateTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.IsolateTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTimeStamp = string(value["IsolateTimeStamp"].GetString());
        m_isolateTimeStampHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.SetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_setId = value["SetId"].GetInt64();
        m_setIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CmemId") && !value["CmemId"].IsNull())
    {
        if (!value["CmemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.CmemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cmemId = value["CmemId"].GetInt64();
        m_cmemIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceDesc") && !value["InstanceDesc"].IsNull())
    {
        if (!value["InstanceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.InstanceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDesc = string(value["InstanceDesc"].GetString());
        m_instanceDescHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = value["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AddTimeStamp") && !value["AddTimeStamp"].IsNull())
    {
        if (!value["AddTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.AddTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimeStamp = string(value["AddTimeStamp"].GetString());
        m_addTimeStampHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTimeStamp") && !value["DeadlineTimeStamp"].IsNull())
    {
        if (!value["DeadlineTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.DeadlineTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTimeStamp = string(value["DeadlineTimeStamp"].GetString());
        m_deadlineTimeStampHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceListInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_setId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cmemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmemId, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_addTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

}


string InstanceListInfo::GetModTimeStamp() const
{
    return m_modTimeStamp;
}

void InstanceListInfo::SetModTimeStamp(const string& _modTimeStamp)
{
    m_modTimeStamp = _modTimeStamp;
    m_modTimeStampHasBeenSet = true;
}

bool InstanceListInfo::ModTimeStampHasBeenSet() const
{
    return m_modTimeStampHasBeenSet;
}

string InstanceListInfo::GetIsolateTimeStamp() const
{
    return m_isolateTimeStamp;
}

void InstanceListInfo::SetIsolateTimeStamp(const string& _isolateTimeStamp)
{
    m_isolateTimeStamp = _isolateTimeStamp;
    m_isolateTimeStampHasBeenSet = true;
}

bool InstanceListInfo::IsolateTimeStampHasBeenSet() const
{
    return m_isolateTimeStampHasBeenSet;
}

int64_t InstanceListInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceListInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceListInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t InstanceListInfo::GetSetId() const
{
    return m_setId;
}

void InstanceListInfo::SetSetId(const int64_t& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool InstanceListInfo::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

int64_t InstanceListInfo::GetStatus() const
{
    return m_status;
}

void InstanceListInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceListInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceListInfo::GetCmemId() const
{
    return m_cmemId;
}

void InstanceListInfo::SetCmemId(const int64_t& _cmemId)
{
    m_cmemId = _cmemId;
    m_cmemIdHasBeenSet = true;
}

bool InstanceListInfo::CmemIdHasBeenSet() const
{
    return m_cmemIdHasBeenSet;
}

vector<TagInfo> InstanceListInfo::GetTags() const
{
    return m_tags;
}

void InstanceListInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceListInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string InstanceListInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceListInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceListInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceListInfo::GetRegionId() const
{
    return m_regionId;
}

void InstanceListInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceListInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string InstanceListInfo::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void InstanceListInfo::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool InstanceListInfo::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

int64_t InstanceListInfo::GetExpire() const
{
    return m_expire;
}

void InstanceListInfo::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool InstanceListInfo::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

int64_t InstanceListInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceListInfo::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceListInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceListInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceListInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceListInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceListInfo::GetAddTimeStamp() const
{
    return m_addTimeStamp;
}

void InstanceListInfo::SetAddTimeStamp(const string& _addTimeStamp)
{
    m_addTimeStamp = _addTimeStamp;
    m_addTimeStampHasBeenSet = true;
}

bool InstanceListInfo::AddTimeStampHasBeenSet() const
{
    return m_addTimeStampHasBeenSet;
}

int64_t InstanceListInfo::GetZoneId() const
{
    return m_zoneId;
}

void InstanceListInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceListInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InstanceListInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceListInfo::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceListInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t InstanceListInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceListInfo::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceListInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceListInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceListInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceListInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceListInfo::GetDeadlineTimeStamp() const
{
    return m_deadlineTimeStamp;
}

void InstanceListInfo::SetDeadlineTimeStamp(const string& _deadlineTimeStamp)
{
    m_deadlineTimeStamp = _deadlineTimeStamp;
    m_deadlineTimeStampHasBeenSet = true;
}

bool InstanceListInfo::DeadlineTimeStampHasBeenSet() const
{
    return m_deadlineTimeStampHasBeenSet;
}

string InstanceListInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void InstanceListInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool InstanceListInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string InstanceListInfo::GetVip() const
{
    return m_vip;
}

void InstanceListInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceListInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string InstanceListInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void InstanceListInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool InstanceListInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t InstanceListInfo::GetAppId() const
{
    return m_appId;
}

void InstanceListInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceListInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t InstanceListInfo::GetVport() const
{
    return m_vport;
}

void InstanceListInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceListInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

