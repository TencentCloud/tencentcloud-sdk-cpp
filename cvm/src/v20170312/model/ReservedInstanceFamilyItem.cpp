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

#include <tencentcloud/cvm/v20170312/model/ReservedInstanceFamilyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstanceFamilyItem::ReservedInstanceFamilyItem() :
    m_instanceFamilyHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_instanceTypesHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstanceFamilyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceFamilyItem.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceFamilyItem.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceFamilyItem.InstanceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReservedInstanceTypeItem item;
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

void ReservedInstanceFamilyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
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


string ReservedInstanceFamilyItem::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void ReservedInstanceFamilyItem::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool ReservedInstanceFamilyItem::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

int64_t ReservedInstanceFamilyItem::GetOrder() const
{
    return m_order;
}

void ReservedInstanceFamilyItem::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ReservedInstanceFamilyItem::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<ReservedInstanceTypeItem> ReservedInstanceFamilyItem::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void ReservedInstanceFamilyItem::SetInstanceTypes(const vector<ReservedInstanceTypeItem>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool ReservedInstanceFamilyItem::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

