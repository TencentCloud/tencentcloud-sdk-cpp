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

#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodesRspItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDLPEdgeNodesRspItem::DescribeDLPEdgeNodesRspItem() :
    m_idHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_edgeNodeIdHasBeenSet(false),
    m_edgeNodeNameHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_isUpgradeEnableHasBeenSet(false),
    m_upgradeStatusHasBeenSet(false),
    m_upgradeDescriptionHasBeenSet(false),
    m_ruleVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDLPEdgeNodesRspItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("EdgeNodeId") && !value["EdgeNodeId"].IsNull())
    {
        if (!value["EdgeNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.EdgeNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeNodeId = string(value["EdgeNodeId"].GetString());
        m_edgeNodeIdHasBeenSet = true;
    }

    if (value.HasMember("EdgeNodeName") && !value["EdgeNodeName"].IsNull())
    {
        if (!value["EdgeNodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.EdgeNodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeNodeName = string(value["EdgeNodeName"].GetString());
        m_edgeNodeNameHasBeenSet = true;
    }

    if (value.HasMember("IsActive") && !value["IsActive"].IsNull())
    {
        if (!value["IsActive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.IsActive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActive = value["IsActive"].GetBool();
        m_isActiveHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("IsUpgradeEnable") && !value["IsUpgradeEnable"].IsNull())
    {
        if (!value["IsUpgradeEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.IsUpgradeEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpgradeEnable = value["IsUpgradeEnable"].GetBool();
        m_isUpgradeEnableHasBeenSet = true;
    }

    if (value.HasMember("UpgradeStatus") && !value["UpgradeStatus"].IsNull())
    {
        if (!value["UpgradeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.UpgradeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeStatus = value["UpgradeStatus"].GetInt64();
        m_upgradeStatusHasBeenSet = true;
    }

    if (value.HasMember("UpgradeDescription") && !value["UpgradeDescription"].IsNull())
    {
        if (!value["UpgradeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.UpgradeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeDescription = string(value["UpgradeDescription"].GetString());
        m_upgradeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleVersion") && !value["RuleVersion"].IsNull())
    {
        if (!value["RuleVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodesRspItem.RuleVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleVersion = string(value["RuleVersion"].GetString());
        m_ruleVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDLPEdgeNodesRspItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeNodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeNodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeNodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActive, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_isUpgradeEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpgradeEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpgradeEnable, allocator);
    }

    if (m_upgradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeStatus, allocator);
    }

    if (m_upgradeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeDLPEdgeNodesRspItem::GetId() const
{
    return m_id;
}

void DescribeDLPEdgeNodesRspItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetGroupId() const
{
    return m_groupId;
}

void DescribeDLPEdgeNodesRspItem::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetEdgeNodeId() const
{
    return m_edgeNodeId;
}

void DescribeDLPEdgeNodesRspItem::SetEdgeNodeId(const string& _edgeNodeId)
{
    m_edgeNodeId = _edgeNodeId;
    m_edgeNodeIdHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::EdgeNodeIdHasBeenSet() const
{
    return m_edgeNodeIdHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetEdgeNodeName() const
{
    return m_edgeNodeName;
}

void DescribeDLPEdgeNodesRspItem::SetEdgeNodeName(const string& _edgeNodeName)
{
    m_edgeNodeName = _edgeNodeName;
    m_edgeNodeNameHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::EdgeNodeNameHasBeenSet() const
{
    return m_edgeNodeNameHasBeenSet;
}

bool DescribeDLPEdgeNodesRspItem::GetIsActive() const
{
    return m_isActive;
}

void DescribeDLPEdgeNodesRspItem::SetIsActive(const bool& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetGroupName() const
{
    return m_groupName;
}

void DescribeDLPEdgeNodesRspItem::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetIp() const
{
    return m_ip;
}

void DescribeDLPEdgeNodesRspItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetVersion() const
{
    return m_version;
}

void DescribeDLPEdgeNodesRspItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

bool DescribeDLPEdgeNodesRspItem::GetIsUpgradeEnable() const
{
    return m_isUpgradeEnable;
}

void DescribeDLPEdgeNodesRspItem::SetIsUpgradeEnable(const bool& _isUpgradeEnable)
{
    m_isUpgradeEnable = _isUpgradeEnable;
    m_isUpgradeEnableHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::IsUpgradeEnableHasBeenSet() const
{
    return m_isUpgradeEnableHasBeenSet;
}

int64_t DescribeDLPEdgeNodesRspItem::GetUpgradeStatus() const
{
    return m_upgradeStatus;
}

void DescribeDLPEdgeNodesRspItem::SetUpgradeStatus(const int64_t& _upgradeStatus)
{
    m_upgradeStatus = _upgradeStatus;
    m_upgradeStatusHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::UpgradeStatusHasBeenSet() const
{
    return m_upgradeStatusHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetUpgradeDescription() const
{
    return m_upgradeDescription;
}

void DescribeDLPEdgeNodesRspItem::SetUpgradeDescription(const string& _upgradeDescription)
{
    m_upgradeDescription = _upgradeDescription;
    m_upgradeDescriptionHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::UpgradeDescriptionHasBeenSet() const
{
    return m_upgradeDescriptionHasBeenSet;
}

string DescribeDLPEdgeNodesRspItem::GetRuleVersion() const
{
    return m_ruleVersion;
}

void DescribeDLPEdgeNodesRspItem::SetRuleVersion(const string& _ruleVersion)
{
    m_ruleVersion = _ruleVersion;
    m_ruleVersionHasBeenSet = true;
}

bool DescribeDLPEdgeNodesRspItem::RuleVersionHasBeenSet() const
{
    return m_ruleVersionHasBeenSet;
}

