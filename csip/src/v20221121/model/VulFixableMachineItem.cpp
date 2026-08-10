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

#include <tencentcloud/csip/v20221121/model/VulFixableMachineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixableMachineItem::VulFixableMachineItem() :
    m_vulIdsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_supportAutoFixHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_latestFixTimeHasBeenSet(false),
    m_notFixableReasonHasBeenSet(false),
    m_fixCommandsHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_tagItemsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_payVersionHasBeenSet(false)
{
}

CoreInternalOutcome VulFixableMachineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulIds") && !value["VulIds"].IsNull())
    {
        if (!value["VulIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.VulIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VulIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulIds.push_back((*itr).GetInt64());
        }
        m_vulIdsHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("SupportAutoFix") && !value["SupportAutoFix"].IsNull())
    {
        if (!value["SupportAutoFix"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.SupportAutoFix` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportAutoFix = value["SupportAutoFix"].GetInt64();
        m_supportAutoFixHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.FixStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetInt64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestFixTime") && !value["LatestFixTime"].IsNull())
    {
        if (!value["LatestFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.LatestFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFixTime = string(value["LatestFixTime"].GetString());
        m_latestFixTimeHasBeenSet = true;
    }

    if (value.HasMember("NotFixableReason") && !value["NotFixableReason"].IsNull())
    {
        if (!value["NotFixableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.NotFixableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notFixableReason = string(value["NotFixableReason"].GetString());
        m_notFixableReasonHasBeenSet = true;
    }

    if (value.HasMember("FixCommands") && !value["FixCommands"].IsNull())
    {
        if (!value["FixCommands"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.FixCommands` is not array type"));

        const rapidjson::Value &tmpValue = value["FixCommands"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fixCommands.push_back((*itr).GetString());
        }
        m_fixCommandsHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_components.push_back((*itr).GetString());
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("TagItems") && !value["TagItems"].IsNull())
    {
        if (!value["TagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.TagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MiniTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItems.push_back(item);
        }
        m_tagItemsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PayVersion") && !value["PayVersion"].IsNull())
    {
        if (!value["PayVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineItem.PayVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payVersion = string(value["PayVersion"].GetString());
        m_payVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixableMachineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulIds.begin(); itr != m_vulIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_supportAutoFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAutoFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAutoFix, allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_latestFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notFixableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotFixableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notFixableReason.c_str(), allocator).Move(), allocator);
    }

    if (m_fixCommandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixCommands";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fixCommands.begin(); itr != m_fixCommands.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_payVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payVersion.c_str(), allocator).Move(), allocator);
    }

}


vector<int64_t> VulFixableMachineItem::GetVulIds() const
{
    return m_vulIds;
}

void VulFixableMachineItem::SetVulIds(const vector<int64_t>& _vulIds)
{
    m_vulIds = _vulIds;
    m_vulIdsHasBeenSet = true;
}

bool VulFixableMachineItem::VulIdsHasBeenSet() const
{
    return m_vulIdsHasBeenSet;
}

string VulFixableMachineItem::GetInstanceId() const
{
    return m_instanceId;
}

void VulFixableMachineItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VulFixableMachineItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string VulFixableMachineItem::GetMachineName() const
{
    return m_machineName;
}

void VulFixableMachineItem::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool VulFixableMachineItem::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string VulFixableMachineItem::GetMachineIp() const
{
    return m_machineIp;
}

void VulFixableMachineItem::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool VulFixableMachineItem::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string VulFixableMachineItem::GetPublicIp() const
{
    return m_publicIp;
}

void VulFixableMachineItem::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool VulFixableMachineItem::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string VulFixableMachineItem::GetOsType() const
{
    return m_osType;
}

void VulFixableMachineItem::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool VulFixableMachineItem::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string VulFixableMachineItem::GetOsName() const
{
    return m_osName;
}

void VulFixableMachineItem::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool VulFixableMachineItem::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string VulFixableMachineItem::GetMachineStatus() const
{
    return m_machineStatus;
}

void VulFixableMachineItem::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool VulFixableMachineItem::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

int64_t VulFixableMachineItem::GetSupportAutoFix() const
{
    return m_supportAutoFix;
}

void VulFixableMachineItem::SetSupportAutoFix(const int64_t& _supportAutoFix)
{
    m_supportAutoFix = _supportAutoFix;
    m_supportAutoFixHasBeenSet = true;
}

bool VulFixableMachineItem::SupportAutoFixHasBeenSet() const
{
    return m_supportAutoFixHasBeenSet;
}

int64_t VulFixableMachineItem::GetFixStatus() const
{
    return m_fixStatus;
}

void VulFixableMachineItem::SetFixStatus(const int64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool VulFixableMachineItem::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

string VulFixableMachineItem::GetLatestFixTime() const
{
    return m_latestFixTime;
}

void VulFixableMachineItem::SetLatestFixTime(const string& _latestFixTime)
{
    m_latestFixTime = _latestFixTime;
    m_latestFixTimeHasBeenSet = true;
}

bool VulFixableMachineItem::LatestFixTimeHasBeenSet() const
{
    return m_latestFixTimeHasBeenSet;
}

string VulFixableMachineItem::GetNotFixableReason() const
{
    return m_notFixableReason;
}

void VulFixableMachineItem::SetNotFixableReason(const string& _notFixableReason)
{
    m_notFixableReason = _notFixableReason;
    m_notFixableReasonHasBeenSet = true;
}

bool VulFixableMachineItem::NotFixableReasonHasBeenSet() const
{
    return m_notFixableReasonHasBeenSet;
}

vector<string> VulFixableMachineItem::GetFixCommands() const
{
    return m_fixCommands;
}

void VulFixableMachineItem::SetFixCommands(const vector<string>& _fixCommands)
{
    m_fixCommands = _fixCommands;
    m_fixCommandsHasBeenSet = true;
}

bool VulFixableMachineItem::FixCommandsHasBeenSet() const
{
    return m_fixCommandsHasBeenSet;
}

vector<string> VulFixableMachineItem::GetComponents() const
{
    return m_components;
}

void VulFixableMachineItem::SetComponents(const vector<string>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool VulFixableMachineItem::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<MiniTagItem> VulFixableMachineItem::GetTagItems() const
{
    return m_tagItems;
}

void VulFixableMachineItem::SetTagItems(const vector<MiniTagItem>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool VulFixableMachineItem::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

uint64_t VulFixableMachineItem::GetAppId() const
{
    return m_appId;
}

void VulFixableMachineItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VulFixableMachineItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VulFixableMachineItem::GetPayVersion() const
{
    return m_payVersion;
}

void VulFixableMachineItem::SetPayVersion(const string& _payVersion)
{
    m_payVersion = _payVersion;
    m_payVersionHasBeenSet = true;
}

bool VulFixableMachineItem::PayVersionHasBeenSet() const
{
    return m_payVersionHasBeenSet;
}

