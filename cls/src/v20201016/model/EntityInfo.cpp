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

#include <tencentcloud/cls/v20201016/model/EntityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EntityInfo::EntityInfo() :
    m_entityIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_productHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_entityClassNameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_relatedLogTopicsHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome EntityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("EntityName") && !value["EntityName"].IsNull())
    {
        if (!value["EntityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.EntityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityName = string(value["EntityName"].GetString());
        m_entityNameHasBeenSet = true;
    }

    if (value.HasMember("EntityClassName") && !value["EntityClassName"].IsNull())
    {
        if (!value["EntityClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.EntityClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityClassName = string(value["EntityClassName"].GetString());
        m_entityClassNameHasBeenSet = true;
    }

    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EntityInfo.Attributes` is not array type"));

        const rapidjson::Value &tmpValue = value["Attributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EntityAttribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributes.push_back(item);
        }
        m_attributesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EntityInfo.Tags` is not array type"));

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

    if (value.HasMember("RelatedLogTopics") && !value["RelatedLogTopics"].IsNull())
    {
        if (!value["RelatedLogTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EntityInfo.RelatedLogTopics` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedLogTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelatedTopicItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedLogTopics.push_back(item);
        }
        m_relatedLogTopicsHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntityInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_entityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityName.c_str(), allocator).Move(), allocator);
    }

    if (m_entityClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_relatedLogTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedLogTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedLogTopics.begin(); itr != m_relatedLogTopics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string EntityInfo::GetEntityId() const
{
    return m_entityId;
}

void EntityInfo::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool EntityInfo::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string EntityInfo::GetDomain() const
{
    return m_domain;
}

void EntityInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool EntityInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string EntityInfo::GetProduct() const
{
    return m_product;
}

void EntityInfo::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool EntityInfo::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string EntityInfo::GetEntityName() const
{
    return m_entityName;
}

void EntityInfo::SetEntityName(const string& _entityName)
{
    m_entityName = _entityName;
    m_entityNameHasBeenSet = true;
}

bool EntityInfo::EntityNameHasBeenSet() const
{
    return m_entityNameHasBeenSet;
}

string EntityInfo::GetEntityClassName() const
{
    return m_entityClassName;
}

void EntityInfo::SetEntityClassName(const string& _entityClassName)
{
    m_entityClassName = _entityClassName;
    m_entityClassNameHasBeenSet = true;
}

bool EntityInfo::EntityClassNameHasBeenSet() const
{
    return m_entityClassNameHasBeenSet;
}

vector<EntityAttribute> EntityInfo::GetAttributes() const
{
    return m_attributes;
}

void EntityInfo::SetAttributes(const vector<EntityAttribute>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool EntityInfo::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

vector<Tag> EntityInfo::GetTags() const
{
    return m_tags;
}

void EntityInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EntityInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<RelatedTopicItem> EntityInfo::GetRelatedLogTopics() const
{
    return m_relatedLogTopics;
}

void EntityInfo::SetRelatedLogTopics(const vector<RelatedTopicItem>& _relatedLogTopics)
{
    m_relatedLogTopics = _relatedLogTopics;
    m_relatedLogTopicsHasBeenSet = true;
}

bool EntityInfo::RelatedLogTopicsHasBeenSet() const
{
    return m_relatedLogTopicsHasBeenSet;
}

string EntityInfo::GetResourceId() const
{
    return m_resourceId;
}

void EntityInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool EntityInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

