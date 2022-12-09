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

#include <tencentcloud/tem/v20210701/model/NamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

NamespaceInfo::NamespaceInfo() :
    m_environmentIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_apmInstanceIdHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_envTypeHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("ApmInstanceId") && !value["ApmInstanceId"].IsNull())
    {
        if (!value["ApmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.ApmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apmInstanceId = string(value["ApmInstanceId"].GetString());
        m_apmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfo.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
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

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
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

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_apmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
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

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

}


string NamespaceInfo::GetEnvironmentId() const
{
    return m_environmentId;
}

void NamespaceInfo::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool NamespaceInfo::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string NamespaceInfo::GetNamespaceName() const
{
    return m_namespaceName;
}

void NamespaceInfo::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool NamespaceInfo::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string NamespaceInfo::GetRegion() const
{
    return m_region;
}

void NamespaceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NamespaceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NamespaceInfo::GetVpcId() const
{
    return m_vpcId;
}

void NamespaceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NamespaceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> NamespaceInfo::GetSubnetIds() const
{
    return m_subnetIds;
}

void NamespaceInfo::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool NamespaceInfo::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string NamespaceInfo::GetDescription() const
{
    return m_description;
}

void NamespaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NamespaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NamespaceInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void NamespaceInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool NamespaceInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string NamespaceInfo::GetEnvironmentName() const
{
    return m_environmentName;
}

void NamespaceInfo::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool NamespaceInfo::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string NamespaceInfo::GetApmInstanceId() const
{
    return m_apmInstanceId;
}

void NamespaceInfo::SetApmInstanceId(const string& _apmInstanceId)
{
    m_apmInstanceId = _apmInstanceId;
    m_apmInstanceIdHasBeenSet = true;
}

bool NamespaceInfo::ApmInstanceIdHasBeenSet() const
{
    return m_apmInstanceIdHasBeenSet;
}

int64_t NamespaceInfo::GetLocked() const
{
    return m_locked;
}

void NamespaceInfo::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool NamespaceInfo::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

vector<Tag> NamespaceInfo::GetTags() const
{
    return m_tags;
}

void NamespaceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NamespaceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string NamespaceInfo::GetEnvType() const
{
    return m_envType;
}

void NamespaceInfo::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool NamespaceInfo::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

