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

#include <tencentcloud/emr/v20190103/model/NodeSpecFamily.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSpecFamily::NodeSpecFamily() :
    m_instanceFamilyHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_instanceTypesHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpecFamily::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecFamily.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("FamilyName") && !value["FamilyName"].IsNull())
    {
        if (!value["FamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecFamily.FamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyName = string(value["FamilyName"].GetString());
        m_familyNameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecFamily.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSpecFamily.InstanceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecInstanceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTypes.push_back(item);
        }
        m_instanceTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpecFamily::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_familyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NodeSpecFamily::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void NodeSpecFamily::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool NodeSpecFamily::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string NodeSpecFamily::GetFamilyName() const
{
    return m_familyName;
}

void NodeSpecFamily::SetFamilyName(const string& _familyName)
{
    m_familyName = _familyName;
    m_familyNameHasBeenSet = true;
}

bool NodeSpecFamily::FamilyNameHasBeenSet() const
{
    return m_familyNameHasBeenSet;
}

int64_t NodeSpecFamily::GetOrder() const
{
    return m_order;
}

void NodeSpecFamily::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool NodeSpecFamily::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<NodeSpecInstanceType> NodeSpecFamily::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void NodeSpecFamily::SetInstanceTypes(const vector<NodeSpecInstanceType>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool NodeSpecFamily::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

