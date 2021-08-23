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

#include <tencentcloud/cvm/v20170312/model/ReservedInstanceConfigInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstanceConfigInfoItem::ReservedInstanceConfigInfoItem() :
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstanceConfigInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceConfigInfoItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceConfigInfoItem.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceConfigInfoItem.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilies") && !value["InstanceFamilies"].IsNull())
    {
        if (!value["InstanceFamilies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceConfigInfoItem.InstanceFamilies` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceFamilies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReservedInstanceFamilyItem item;
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

void ReservedInstanceConfigInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string ReservedInstanceConfigInfoItem::GetType() const
{
    return m_type;
}

void ReservedInstanceConfigInfoItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReservedInstanceConfigInfoItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ReservedInstanceConfigInfoItem::GetTypeName() const
{
    return m_typeName;
}

void ReservedInstanceConfigInfoItem::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool ReservedInstanceConfigInfoItem::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

int64_t ReservedInstanceConfigInfoItem::GetOrder() const
{
    return m_order;
}

void ReservedInstanceConfigInfoItem::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ReservedInstanceConfigInfoItem::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<ReservedInstanceFamilyItem> ReservedInstanceConfigInfoItem::GetInstanceFamilies() const
{
    return m_instanceFamilies;
}

void ReservedInstanceConfigInfoItem::SetInstanceFamilies(const vector<ReservedInstanceFamilyItem>& _instanceFamilies)
{
    m_instanceFamilies = _instanceFamilies;
    m_instanceFamiliesHasBeenSet = true;
}

bool ReservedInstanceConfigInfoItem::InstanceFamiliesHasBeenSet() const
{
    return m_instanceFamiliesHasBeenSet;
}

