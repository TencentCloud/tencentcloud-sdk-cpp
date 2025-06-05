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

#include <tencentcloud/cwp/v20180228/model/VulEffectHostList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulEffectHostList::VulEffectHostList() :
    m_eventIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hostVersionHasBeenSet(false),
    m_isSupportAutoFixHasBeenSet(false),
    m_fixStatusMsgHasBeenSet(false),
    m_firstDiscoveryTimeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_hasSnapshotHasBeenSet(false),
    m_latestFixTimeHasBeenSet(false),
    m_descriptionEnHasBeenSet(false)
{
}

CoreInternalOutcome VulEffectHostList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.EventId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetUint64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("HostVersion") && !value["HostVersion"].IsNull())
    {
        if (!value["HostVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.HostVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostVersion = value["HostVersion"].GetUint64();
        m_hostVersionHasBeenSet = true;
    }

    if (value.HasMember("IsSupportAutoFix") && !value["IsSupportAutoFix"].IsNull())
    {
        if (!value["IsSupportAutoFix"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.IsSupportAutoFix` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportAutoFix = value["IsSupportAutoFix"].GetUint64();
        m_isSupportAutoFixHasBeenSet = true;
    }

    if (value.HasMember("FixStatusMsg") && !value["FixStatusMsg"].IsNull())
    {
        if (!value["FixStatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.FixStatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatusMsg = string(value["FixStatusMsg"].GetString());
        m_fixStatusMsgHasBeenSet = true;
    }

    if (value.HasMember("FirstDiscoveryTime") && !value["FirstDiscoveryTime"].IsNull())
    {
        if (!value["FirstDiscoveryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.FirstDiscoveryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDiscoveryTime = string(value["FirstDiscoveryTime"].GetString());
        m_firstDiscoveryTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.PublicIpAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddresses = string(value["PublicIpAddresses"].GetString());
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("HasSnapshot") && !value["HasSnapshot"].IsNull())
    {
        if (!value["HasSnapshot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.HasSnapshot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasSnapshot = value["HasSnapshot"].GetUint64();
        m_hasSnapshotHasBeenSet = true;
    }

    if (value.HasMember("LatestFixTime") && !value["LatestFixTime"].IsNull())
    {
        if (!value["LatestFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.LatestFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFixTime = string(value["LatestFixTime"].GetString());
        m_latestFixTimeHasBeenSet = true;
    }

    if (value.HasMember("DescriptionEn") && !value["DescriptionEn"].IsNull())
    {
        if (!value["DescriptionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectHostList.DescriptionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionEn = string(value["DescriptionEn"].GetString());
        m_descriptionEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulEffectHostList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_hostVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostVersion, allocator);
    }

    if (m_isSupportAutoFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportAutoFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportAutoFix, allocator);
    }

    if (m_fixStatusMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatusMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixStatusMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_firstDiscoveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDiscoveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDiscoveryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_hasSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSnapshot, allocator);
    }

    if (m_latestFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionEn.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulEffectHostList::GetEventId() const
{
    return m_eventId;
}

void VulEffectHostList::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool VulEffectHostList::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

uint64_t VulEffectHostList::GetStatus() const
{
    return m_status;
}

void VulEffectHostList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulEffectHostList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulEffectHostList::GetLastTime() const
{
    return m_lastTime;
}

void VulEffectHostList::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool VulEffectHostList::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

uint64_t VulEffectHostList::GetLevel() const
{
    return m_level;
}

void VulEffectHostList::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulEffectHostList::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulEffectHostList::GetQuuid() const
{
    return m_quuid;
}

void VulEffectHostList::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool VulEffectHostList::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string VulEffectHostList::GetUuid() const
{
    return m_uuid;
}

void VulEffectHostList::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool VulEffectHostList::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string VulEffectHostList::GetHostIp() const
{
    return m_hostIp;
}

void VulEffectHostList::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool VulEffectHostList::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string VulEffectHostList::GetAliasName() const
{
    return m_aliasName;
}

void VulEffectHostList::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool VulEffectHostList::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

vector<string> VulEffectHostList::GetTags() const
{
    return m_tags;
}

void VulEffectHostList::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool VulEffectHostList::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string VulEffectHostList::GetDescription() const
{
    return m_description;
}

void VulEffectHostList::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VulEffectHostList::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t VulEffectHostList::GetHostVersion() const
{
    return m_hostVersion;
}

void VulEffectHostList::SetHostVersion(const uint64_t& _hostVersion)
{
    m_hostVersion = _hostVersion;
    m_hostVersionHasBeenSet = true;
}

bool VulEffectHostList::HostVersionHasBeenSet() const
{
    return m_hostVersionHasBeenSet;
}

uint64_t VulEffectHostList::GetIsSupportAutoFix() const
{
    return m_isSupportAutoFix;
}

void VulEffectHostList::SetIsSupportAutoFix(const uint64_t& _isSupportAutoFix)
{
    m_isSupportAutoFix = _isSupportAutoFix;
    m_isSupportAutoFixHasBeenSet = true;
}

bool VulEffectHostList::IsSupportAutoFixHasBeenSet() const
{
    return m_isSupportAutoFixHasBeenSet;
}

string VulEffectHostList::GetFixStatusMsg() const
{
    return m_fixStatusMsg;
}

void VulEffectHostList::SetFixStatusMsg(const string& _fixStatusMsg)
{
    m_fixStatusMsg = _fixStatusMsg;
    m_fixStatusMsgHasBeenSet = true;
}

bool VulEffectHostList::FixStatusMsgHasBeenSet() const
{
    return m_fixStatusMsgHasBeenSet;
}

string VulEffectHostList::GetFirstDiscoveryTime() const
{
    return m_firstDiscoveryTime;
}

void VulEffectHostList::SetFirstDiscoveryTime(const string& _firstDiscoveryTime)
{
    m_firstDiscoveryTime = _firstDiscoveryTime;
    m_firstDiscoveryTimeHasBeenSet = true;
}

bool VulEffectHostList::FirstDiscoveryTimeHasBeenSet() const
{
    return m_firstDiscoveryTimeHasBeenSet;
}

string VulEffectHostList::GetInstanceState() const
{
    return m_instanceState;
}

void VulEffectHostList::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool VulEffectHostList::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string VulEffectHostList::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void VulEffectHostList::SetPublicIpAddresses(const string& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool VulEffectHostList::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

vector<Tags> VulEffectHostList::GetCloudTags() const
{
    return m_cloudTags;
}

void VulEffectHostList::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool VulEffectHostList::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

MachineExtraInfo VulEffectHostList::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void VulEffectHostList::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool VulEffectHostList::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string VulEffectHostList::GetMachineType() const
{
    return m_machineType;
}

void VulEffectHostList::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool VulEffectHostList::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

uint64_t VulEffectHostList::GetRegionId() const
{
    return m_regionId;
}

void VulEffectHostList::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool VulEffectHostList::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t VulEffectHostList::GetHasSnapshot() const
{
    return m_hasSnapshot;
}

void VulEffectHostList::SetHasSnapshot(const uint64_t& _hasSnapshot)
{
    m_hasSnapshot = _hasSnapshot;
    m_hasSnapshotHasBeenSet = true;
}

bool VulEffectHostList::HasSnapshotHasBeenSet() const
{
    return m_hasSnapshotHasBeenSet;
}

string VulEffectHostList::GetLatestFixTime() const
{
    return m_latestFixTime;
}

void VulEffectHostList::SetLatestFixTime(const string& _latestFixTime)
{
    m_latestFixTime = _latestFixTime;
    m_latestFixTimeHasBeenSet = true;
}

bool VulEffectHostList::LatestFixTimeHasBeenSet() const
{
    return m_latestFixTimeHasBeenSet;
}

string VulEffectHostList::GetDescriptionEn() const
{
    return m_descriptionEn;
}

void VulEffectHostList::SetDescriptionEn(const string& _descriptionEn)
{
    m_descriptionEn = _descriptionEn;
    m_descriptionEnHasBeenSet = true;
}

bool VulEffectHostList::DescriptionEnHasBeenSet() const
{
    return m_descriptionEnHasBeenSet;
}

