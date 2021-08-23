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

#include <tencentcloud/gse/v20191112/model/Alias.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

Alias::Alias() :
    m_aliasIdHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Alias::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AliasId") && !value["AliasId"].IsNull())
    {
        if (!value["AliasId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.AliasId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasId = string(value["AliasId"].GetString());
        m_aliasIdHasBeenSet = true;
    }

    if (value.HasMember("AliasArn") && !value["AliasArn"].IsNull())
    {
        if (!value["AliasArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.AliasArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasArn = string(value["AliasArn"].GetString());
        m_aliasArnHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RoutingStrategy") && !value["RoutingStrategy"].IsNull())
    {
        if (!value["RoutingStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.RoutingStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routingStrategy.Deserialize(value["RoutingStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routingStrategyHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdatedTime") && !value["LastUpdatedTime"].IsNull())
    {
        if (!value["LastUpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias.LastUpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdatedTime = string(value["LastUpdatedTime"].GetString());
        m_lastUpdatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Alias.Tags` is not array type"));

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

void Alias::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasArn.c_str(), allocator).Move(), allocator);
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

    if (m_routingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routingStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdatedTime.c_str(), allocator).Move(), allocator);
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


string Alias::GetAliasId() const
{
    return m_aliasId;
}

void Alias::SetAliasId(const string& _aliasId)
{
    m_aliasId = _aliasId;
    m_aliasIdHasBeenSet = true;
}

bool Alias::AliasIdHasBeenSet() const
{
    return m_aliasIdHasBeenSet;
}

string Alias::GetAliasArn() const
{
    return m_aliasArn;
}

void Alias::SetAliasArn(const string& _aliasArn)
{
    m_aliasArn = _aliasArn;
    m_aliasArnHasBeenSet = true;
}

bool Alias::AliasArnHasBeenSet() const
{
    return m_aliasArnHasBeenSet;
}

string Alias::GetName() const
{
    return m_name;
}

void Alias::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Alias::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Alias::GetDescription() const
{
    return m_description;
}

void Alias::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Alias::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RoutingStrategy Alias::GetRoutingStrategy() const
{
    return m_routingStrategy;
}

void Alias::SetRoutingStrategy(const RoutingStrategy& _routingStrategy)
{
    m_routingStrategy = _routingStrategy;
    m_routingStrategyHasBeenSet = true;
}

bool Alias::RoutingStrategyHasBeenSet() const
{
    return m_routingStrategyHasBeenSet;
}

string Alias::GetCreationTime() const
{
    return m_creationTime;
}

void Alias::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Alias::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string Alias::GetLastUpdatedTime() const
{
    return m_lastUpdatedTime;
}

void Alias::SetLastUpdatedTime(const string& _lastUpdatedTime)
{
    m_lastUpdatedTime = _lastUpdatedTime;
    m_lastUpdatedTimeHasBeenSet = true;
}

bool Alias::LastUpdatedTimeHasBeenSet() const
{
    return m_lastUpdatedTimeHasBeenSet;
}

vector<Tag> Alias::GetTags() const
{
    return m_tags;
}

void Alias::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Alias::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

