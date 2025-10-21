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

#include <tencentcloud/emr/v20190103/model/NodeSpecType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSpecType::NodeSpecType() :
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpecType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecType.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilies") && !value["InstanceFamilies"].IsNull())
    {
        if (!value["InstanceFamilies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecType.InstanceFamilies` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceFamilies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecFamily item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceFamilies.push_back(item);
        }
        m_instanceFamiliesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpecType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_instanceFamiliesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceFamilies.begin(); itr != m_instanceFamilies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NodeSpecType::GetType() const
{
    return m_type;
}

void NodeSpecType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodeSpecType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NodeSpecType::GetTypeName() const
{
    return m_typeName;
}

void NodeSpecType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool NodeSpecType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

int64_t NodeSpecType::GetOrder() const
{
    return m_order;
}

void NodeSpecType::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool NodeSpecType::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<NodeSpecFamily> NodeSpecType::GetInstanceFamilies() const
{
    return m_instanceFamilies;
}

void NodeSpecType::SetInstanceFamilies(const vector<NodeSpecFamily>& _instanceFamilies)
{
    m_instanceFamilies = _instanceFamilies;
    m_instanceFamiliesHasBeenSet = true;
}

bool NodeSpecType::InstanceFamiliesHasBeenSet() const
{
    return m_instanceFamiliesHasBeenSet;
}

