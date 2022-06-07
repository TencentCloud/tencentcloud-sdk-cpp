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

#include <tencentcloud/tione/v20211111/model/ResourceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceGroup::ResourceGroup() :
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_freeInstanceHasBeenSet(false),
    m_totalInstanceHasBeenSet(false),
    m_usedResourceHasBeenSet(false),
    m_totalResourceHasBeenSet(false),
    m_instanceSetHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("FreeInstance") && !value["FreeInstance"].IsNull())
    {
        if (!value["FreeInstance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.FreeInstance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeInstance = value["FreeInstance"].GetUint64();
        m_freeInstanceHasBeenSet = true;
    }

    if (value.HasMember("TotalInstance") && !value["TotalInstance"].IsNull())
    {
        if (!value["TotalInstance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.TotalInstance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInstance = value["TotalInstance"].GetUint64();
        m_totalInstanceHasBeenSet = true;
    }

    if (value.HasMember("UsedResource") && !value["UsedResource"].IsNull())
    {
        if (!value["UsedResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.UsedResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usedResource.Deserialize(value["UsedResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usedResourceHasBeenSet = true;
    }

    if (value.HasMember("TotalResource") && !value["TotalResource"].IsNull())
    {
        if (!value["TotalResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.TotalResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalResource.Deserialize(value["TotalResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalResourceHasBeenSet = true;
    }

    if (value.HasMember("InstanceSet") && !value["InstanceSet"].IsNull())
    {
        if (!value["InstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.InstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Instance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceSet.push_back(item);
        }
        m_instanceSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_freeInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeInstance, allocator);
    }

    if (m_totalInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInstance, allocator);
    }

    if (m_usedResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usedResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceSet.begin(); itr != m_instanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceGroup::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ResourceGroup::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ResourceGroup::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string ResourceGroup::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ResourceGroup::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ResourceGroup::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

uint64_t ResourceGroup::GetFreeInstance() const
{
    return m_freeInstance;
}

void ResourceGroup::SetFreeInstance(const uint64_t& _freeInstance)
{
    m_freeInstance = _freeInstance;
    m_freeInstanceHasBeenSet = true;
}

bool ResourceGroup::FreeInstanceHasBeenSet() const
{
    return m_freeInstanceHasBeenSet;
}

uint64_t ResourceGroup::GetTotalInstance() const
{
    return m_totalInstance;
}

void ResourceGroup::SetTotalInstance(const uint64_t& _totalInstance)
{
    m_totalInstance = _totalInstance;
    m_totalInstanceHasBeenSet = true;
}

bool ResourceGroup::TotalInstanceHasBeenSet() const
{
    return m_totalInstanceHasBeenSet;
}

GroupResource ResourceGroup::GetUsedResource() const
{
    return m_usedResource;
}

void ResourceGroup::SetUsedResource(const GroupResource& _usedResource)
{
    m_usedResource = _usedResource;
    m_usedResourceHasBeenSet = true;
}

bool ResourceGroup::UsedResourceHasBeenSet() const
{
    return m_usedResourceHasBeenSet;
}

GroupResource ResourceGroup::GetTotalResource() const
{
    return m_totalResource;
}

void ResourceGroup::SetTotalResource(const GroupResource& _totalResource)
{
    m_totalResource = _totalResource;
    m_totalResourceHasBeenSet = true;
}

bool ResourceGroup::TotalResourceHasBeenSet() const
{
    return m_totalResourceHasBeenSet;
}

vector<Instance> ResourceGroup::GetInstanceSet() const
{
    return m_instanceSet;
}

void ResourceGroup::SetInstanceSet(const vector<Instance>& _instanceSet)
{
    m_instanceSet = _instanceSet;
    m_instanceSetHasBeenSet = true;
}

bool ResourceGroup::InstanceSetHasBeenSet() const
{
    return m_instanceSetHasBeenSet;
}

vector<Tag> ResourceGroup::GetTagSet() const
{
    return m_tagSet;
}

void ResourceGroup::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ResourceGroup::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

