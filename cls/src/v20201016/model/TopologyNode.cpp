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

#include <tencentcloud/cls/v20201016/model/TopologyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TopologyNode::TopologyNode() :
    m_entityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_productHasBeenSet(false),
    m_entityClassNameHasBeenSet(false),
    m_depthHasBeenSet(false)
{
}

CoreInternalOutcome TopologyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("EntityClassName") && !value["EntityClassName"].IsNull())
    {
        if (!value["EntityClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.EntityClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityClassName = string(value["EntityClassName"].GetString());
        m_entityClassNameHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Depth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_depth = value["Depth"].GetInt64();
        m_depthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_entityClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depth, allocator);
    }

}


string TopologyNode::GetEntityId() const
{
    return m_entityId;
}

void TopologyNode::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool TopologyNode::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string TopologyNode::GetName() const
{
    return m_name;
}

void TopologyNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TopologyNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TopologyNode::GetDomain() const
{
    return m_domain;
}

void TopologyNode::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TopologyNode::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string TopologyNode::GetProduct() const
{
    return m_product;
}

void TopologyNode::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool TopologyNode::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string TopologyNode::GetEntityClassName() const
{
    return m_entityClassName;
}

void TopologyNode::SetEntityClassName(const string& _entityClassName)
{
    m_entityClassName = _entityClassName;
    m_entityClassNameHasBeenSet = true;
}

bool TopologyNode::EntityClassNameHasBeenSet() const
{
    return m_entityClassNameHasBeenSet;
}

int64_t TopologyNode::GetDepth() const
{
    return m_depth;
}

void TopologyNode::SetDepth(const int64_t& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool TopologyNode::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

