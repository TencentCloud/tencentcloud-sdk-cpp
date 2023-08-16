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

#include <tencentcloud/emr/v20190103/model/ModifyResourceTags.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyResourceTags::ModifyResourceTags() :
    m_resourceIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourcePrefixHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_deleteTagsHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_modifyTagsHasBeenSet(false)
{
}

CoreInternalOutcome ModifyResourceTags::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ResourcePrefix") && !value["ResourcePrefix"].IsNull())
    {
        if (!value["ResourcePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.ResourcePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePrefix = string(value["ResourcePrefix"].GetString());
        m_resourcePrefixHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeleteTags") && !value["DeleteTags"].IsNull())
    {
        if (!value["DeleteTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.DeleteTags` is not array type"));

        const rapidjson::Value &tmpValue = value["DeleteTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deleteTags.push_back(item);
        }
        m_deleteTagsHasBeenSet = true;
    }

    if (value.HasMember("AddTags") && !value["AddTags"].IsNull())
    {
        if (!value["AddTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.AddTags` is not array type"));

        const rapidjson::Value &tmpValue = value["AddTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addTags.push_back(item);
        }
        m_addTagsHasBeenSet = true;
    }

    if (value.HasMember("ModifyTags") && !value["ModifyTags"].IsNull())
    {
        if (!value["ModifyTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyResourceTags.ModifyTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ModifyTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modifyTags.push_back(item);
        }
        m_modifyTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyResourceTags::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteTags.begin(); itr != m_deleteTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_addTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addTags.begin(); itr != m_addTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifyTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyTags.begin(); itr != m_modifyTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ModifyResourceTags::GetResourceId() const
{
    return m_resourceId;
}

void ModifyResourceTags::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyResourceTags::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ModifyResourceTags::GetResource() const
{
    return m_resource;
}

void ModifyResourceTags::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ModifyResourceTags::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ModifyResourceTags::GetResourcePrefix() const
{
    return m_resourcePrefix;
}

void ModifyResourceTags::SetResourcePrefix(const string& _resourcePrefix)
{
    m_resourcePrefix = _resourcePrefix;
    m_resourcePrefixHasBeenSet = true;
}

bool ModifyResourceTags::ResourcePrefixHasBeenSet() const
{
    return m_resourcePrefixHasBeenSet;
}

string ModifyResourceTags::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ModifyResourceTags::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ModifyResourceTags::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string ModifyResourceTags::GetServiceType() const
{
    return m_serviceType;
}

void ModifyResourceTags::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyResourceTags::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<Tag> ModifyResourceTags::GetDeleteTags() const
{
    return m_deleteTags;
}

void ModifyResourceTags::SetDeleteTags(const vector<Tag>& _deleteTags)
{
    m_deleteTags = _deleteTags;
    m_deleteTagsHasBeenSet = true;
}

bool ModifyResourceTags::DeleteTagsHasBeenSet() const
{
    return m_deleteTagsHasBeenSet;
}

vector<Tag> ModifyResourceTags::GetAddTags() const
{
    return m_addTags;
}

void ModifyResourceTags::SetAddTags(const vector<Tag>& _addTags)
{
    m_addTags = _addTags;
    m_addTagsHasBeenSet = true;
}

bool ModifyResourceTags::AddTagsHasBeenSet() const
{
    return m_addTagsHasBeenSet;
}

vector<Tag> ModifyResourceTags::GetModifyTags() const
{
    return m_modifyTags;
}

void ModifyResourceTags::SetModifyTags(const vector<Tag>& _modifyTags)
{
    m_modifyTags = _modifyTags;
    m_modifyTagsHasBeenSet = true;
}

bool ModifyResourceTags::ModifyTagsHasBeenSet() const
{
    return m_modifyTagsHasBeenSet;
}

