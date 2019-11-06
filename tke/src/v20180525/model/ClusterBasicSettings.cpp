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
using namespace rapidjson;
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
    m_needWorkSecurityGroupHasBeenSet(false)
{
}

CoreInternalOutcome ClusterBasicSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDescription") && !value["ClusterDescription"].IsNull())
    {
        if (!value["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(value["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.TagSpecification` is not array type"));

        const Value &tmpValue = value["TagSpecification"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.OsCustomizeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osCustomizeType = string(value["OsCustomizeType"].GetString());
        m_osCustomizeTypeHasBeenSet = true;
    }

    if (value.HasMember("NeedWorkSecurityGroup") && !value["NeedWorkSecurityGroup"].IsNull())
    {
        if (!value["NeedWorkSecurityGroup"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterBasicSettings.NeedWorkSecurityGroup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needWorkSecurityGroup = value["NeedWorkSecurityGroup"].GetBool();
        m_needWorkSecurityGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterBasicSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterOsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_needWorkSecurityGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedWorkSecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needWorkSecurityGroup, allocator);
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

