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

#include <tencentcloud/wedata/v20250806/model/ExecutorResourceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExecutorResourceGroupInfo::ExecutorResourceGroupInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceGroupTypeHasBeenSet(false),
    m_associateProjectsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subNetHasBeenSet(false),
    m_autoRenewEnabledHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorResourceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupType") && !value["ResourceGroupType"].IsNull())
    {
        if (!value["ResourceGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.ResourceGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupType = string(value["ResourceGroupType"].GetString());
        m_resourceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("AssociateProjects") && !value["AssociateProjects"].IsNull())
    {
        if (!value["AssociateProjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.AssociateProjects` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociateProjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindProject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_associateProjects.push_back(item);
        }
        m_associateProjectsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubNet") && !value["SubNet"].IsNull())
    {
        if (!value["SubNet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.SubNet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNet = string(value["SubNet"].GetString());
        m_subNetHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewEnabled") && !value["AutoRenewEnabled"].IsNull())
    {
        if (!value["AutoRenewEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourceGroupInfo.AutoRenewEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewEnabled = value["AutoRenewEnabled"].GetBool();
        m_autoRenewEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorResourceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_associateProjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateProjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_associateProjects.begin(); itr != m_associateProjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNet.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewEnabled, allocator);
    }

}


string ExecutorResourceGroupInfo::GetId() const
{
    return m_id;
}

void ExecutorResourceGroupInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ExecutorResourceGroupInfo::GetName() const
{
    return m_name;
}

void ExecutorResourceGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExecutorResourceGroupInfo::GetDescription() const
{
    return m_description;
}

void ExecutorResourceGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ExecutorResourceGroupInfo::GetResourceGroupType() const
{
    return m_resourceGroupType;
}

void ExecutorResourceGroupInfo::SetResourceGroupType(const string& _resourceGroupType)
{
    m_resourceGroupType = _resourceGroupType;
    m_resourceGroupTypeHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::ResourceGroupTypeHasBeenSet() const
{
    return m_resourceGroupTypeHasBeenSet;
}

vector<BindProject> ExecutorResourceGroupInfo::GetAssociateProjects() const
{
    return m_associateProjects;
}

void ExecutorResourceGroupInfo::SetAssociateProjects(const vector<BindProject>& _associateProjects)
{
    m_associateProjects = _associateProjects;
    m_associateProjectsHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::AssociateProjectsHasBeenSet() const
{
    return m_associateProjectsHasBeenSet;
}

string ExecutorResourceGroupInfo::GetRegion() const
{
    return m_region;
}

void ExecutorResourceGroupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ExecutorResourceGroupInfo::GetVpcId() const
{
    return m_vpcId;
}

void ExecutorResourceGroupInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExecutorResourceGroupInfo::GetSubNet() const
{
    return m_subNet;
}

void ExecutorResourceGroupInfo::SetSubNet(const string& _subNet)
{
    m_subNet = _subNet;
    m_subNetHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::SubNetHasBeenSet() const
{
    return m_subNetHasBeenSet;
}

bool ExecutorResourceGroupInfo::GetAutoRenewEnabled() const
{
    return m_autoRenewEnabled;
}

void ExecutorResourceGroupInfo::SetAutoRenewEnabled(const bool& _autoRenewEnabled)
{
    m_autoRenewEnabled = _autoRenewEnabled;
    m_autoRenewEnabledHasBeenSet = true;
}

bool ExecutorResourceGroupInfo::AutoRenewEnabledHasBeenSet() const
{
    return m_autoRenewEnabledHasBeenSet;
}

