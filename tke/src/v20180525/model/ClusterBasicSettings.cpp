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

#include <tencentcloud/tke/v20180525/model/ClusterBasicSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterBasicSettings::ClusterBasicSettings() :
    m_clusterOsHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_needWorkSecurityGroupHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false)
{
}

CoreInternalOutcome ClusterBasicSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDescription") && !value["ClusterDescription"].IsNull())
    {
        if (!value["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(value["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("OsCustomizeType") && !value["OsCustomizeType"].IsNull())
    {
        if (!value["OsCustomizeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.OsCustomizeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osCustomizeType = string(value["OsCustomizeType"].GetString());
        m_osCustomizeTypeHasBeenSet = true;
    }

    if (value.HasMember("NeedWorkSecurityGroup") && !value["NeedWorkSecurityGroup"].IsNull())
    {
        if (!value["NeedWorkSecurityGroup"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.NeedWorkSecurityGroup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needWorkSecurityGroup = value["NeedWorkSecurityGroup"].GetBool();
        m_needWorkSecurityGroupHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterLevel") && !value["ClusterLevel"].IsNull())
    {
        if (!value["ClusterLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.ClusterLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLevel = string(value["ClusterLevel"].GetString());
        m_clusterLevelHasBeenSet = true;
    }

    if (value.HasMember("AutoUpgradeClusterLevel") && !value["AutoUpgradeClusterLevel"].IsNull())
    {
        if (!value["AutoUpgradeClusterLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterBasicSettings.AutoUpgradeClusterLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoUpgradeClusterLevel.Deserialize(value["AutoUpgradeClusterLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoUpgradeClusterLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterBasicSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_needWorkSecurityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedWorkSecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needWorkSecurityGroup, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoUpgradeClusterLevel.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClusterBasicSettings::GetClusterOs() const
{
    return m_clusterOs;
}

void ClusterBasicSettings::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string ClusterBasicSettings::GetClusterVersion() const
{
    return m_clusterVersion;
}

void ClusterBasicSettings::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string ClusterBasicSettings::GetClusterName() const
{
    return m_clusterName;
}

void ClusterBasicSettings::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterBasicSettings::GetClusterDescription() const
{
    return m_clusterDescription;
}

void ClusterBasicSettings::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

string ClusterBasicSettings::GetVpcId() const
{
    return m_vpcId;
}

void ClusterBasicSettings::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterBasicSettings::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t ClusterBasicSettings::GetProjectId() const
{
    return m_projectId;
}

void ClusterBasicSettings::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ClusterBasicSettings::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagSpecification> ClusterBasicSettings::GetTagSpecification() const
{
    return m_tagSpecification;
}

void ClusterBasicSettings::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool ClusterBasicSettings::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string ClusterBasicSettings::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void ClusterBasicSettings::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool ClusterBasicSettings::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

bool ClusterBasicSettings::GetNeedWorkSecurityGroup() const
{
    return m_needWorkSecurityGroup;
}

void ClusterBasicSettings::SetNeedWorkSecurityGroup(const bool& _needWorkSecurityGroup)
{
    m_needWorkSecurityGroup = _needWorkSecurityGroup;
    m_needWorkSecurityGroupHasBeenSet = true;
}

bool ClusterBasicSettings::NeedWorkSecurityGroupHasBeenSet() const
{
    return m_needWorkSecurityGroupHasBeenSet;
}

string ClusterBasicSettings::GetSubnetId() const
{
    return m_subnetId;
}

void ClusterBasicSettings::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ClusterBasicSettings::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ClusterBasicSettings::GetClusterLevel() const
{
    return m_clusterLevel;
}

void ClusterBasicSettings::SetClusterLevel(const string& _clusterLevel)
{
    m_clusterLevel = _clusterLevel;
    m_clusterLevelHasBeenSet = true;
}

bool ClusterBasicSettings::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

AutoUpgradeClusterLevel ClusterBasicSettings::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void ClusterBasicSettings::SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool ClusterBasicSettings::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

