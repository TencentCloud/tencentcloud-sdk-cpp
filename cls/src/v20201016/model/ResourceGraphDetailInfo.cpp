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

#include <tencentcloud/cls/v20201016/model/ResourceGraphDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ResourceGraphDetailInfo::ResourceGraphDetailInfo() :
    m_resourceGraphIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accessCountHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_relationLogsetHasBeenSet(false),
    m_relationTopicsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGraphDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGraphId") && !value["ResourceGraphId"].IsNull())
    {
        if (!value["ResourceGraphId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.ResourceGraphId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGraphId = string(value["ResourceGraphId"].GetString());
        m_resourceGraphIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AccessCount") && !value["AccessCount"].IsNull())
    {
        if (!value["AccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.AccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCount = value["AccessCount"].GetUint64();
        m_accessCountHasBeenSet = true;
    }

    if (value.HasMember("Products") && !value["Products"].IsNull())
    {
        if (!value["Products"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.Products` is not array type"));

        const rapidjson::Value &tmpValue = value["Products"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_products.push_back((*itr).GetString());
        }
        m_productsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RelationLogset") && !value["RelationLogset"].IsNull())
    {
        if (!value["RelationLogset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.RelationLogset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relationLogset.Deserialize(value["RelationLogset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relationLogsetHasBeenSet = true;
    }

    if (value.HasMember("RelationTopics") && !value["RelationTopics"].IsNull())
    {
        if (!value["RelationTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.RelationTopics` is not array type"));

        const rapidjson::Value &tmpValue = value["RelationTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelationTopic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relationTopics.push_back(item);
        }
        m_relationTopicsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGraphDetailInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void ResourceGraphDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_accessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCount, allocator);
    }

    if (m_productsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_products.begin(); itr != m_products.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_relationLogsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationLogset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relationLogset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relationTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relationTopics.begin(); itr != m_relationTopics.end(); ++itr, ++i)
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

}


string ResourceGraphDetailInfo::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void ResourceGraphDetailInfo::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool ResourceGraphDetailInfo::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

string ResourceGraphDetailInfo::GetName() const
{
    return m_name;
}

void ResourceGraphDetailInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceGraphDetailInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResourceGraphDetailInfo::GetDescription() const
{
    return m_description;
}

void ResourceGraphDetailInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ResourceGraphDetailInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ResourceGraphDetailInfo::GetStatus() const
{
    return m_status;
}

void ResourceGraphDetailInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceGraphDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ResourceGraphDetailInfo::GetAccessCount() const
{
    return m_accessCount;
}

void ResourceGraphDetailInfo::SetAccessCount(const uint64_t& _accessCount)
{
    m_accessCount = _accessCount;
    m_accessCountHasBeenSet = true;
}

bool ResourceGraphDetailInfo::AccessCountHasBeenSet() const
{
    return m_accessCountHasBeenSet;
}

vector<string> ResourceGraphDetailInfo::GetProducts() const
{
    return m_products;
}

void ResourceGraphDetailInfo::SetProducts(const vector<string>& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool ResourceGraphDetailInfo::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

uint64_t ResourceGraphDetailInfo::GetCreateTime() const
{
    return m_createTime;
}

void ResourceGraphDetailInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ResourceGraphDetailInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ResourceGraphDetailInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ResourceGraphDetailInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ResourceGraphDetailInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

RelationLogset ResourceGraphDetailInfo::GetRelationLogset() const
{
    return m_relationLogset;
}

void ResourceGraphDetailInfo::SetRelationLogset(const RelationLogset& _relationLogset)
{
    m_relationLogset = _relationLogset;
    m_relationLogsetHasBeenSet = true;
}

bool ResourceGraphDetailInfo::RelationLogsetHasBeenSet() const
{
    return m_relationLogsetHasBeenSet;
}

vector<RelationTopic> ResourceGraphDetailInfo::GetRelationTopics() const
{
    return m_relationTopics;
}

void ResourceGraphDetailInfo::SetRelationTopics(const vector<RelationTopic>& _relationTopics)
{
    m_relationTopics = _relationTopics;
    m_relationTopicsHasBeenSet = true;
}

bool ResourceGraphDetailInfo::RelationTopicsHasBeenSet() const
{
    return m_relationTopicsHasBeenSet;
}

vector<Tag> ResourceGraphDetailInfo::GetTags() const
{
    return m_tags;
}

void ResourceGraphDetailInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ResourceGraphDetailInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

