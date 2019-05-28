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

#include <tencentcloud/batch/v20170312/model/InstanceCategoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

InstanceCategoryItem::InstanceCategoryItem() :
    m_instanceCategoryHasBeenSet(false),
    m_instanceFamilySetHasBeenSet(false)
{
}

CoreInternalOutcome InstanceCategoryItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceCategory") && !value["InstanceCategory"].IsNull())
    {
        if (!value["InstanceCategory"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceCategoryItem.InstanceCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCategory = string(value["InstanceCategory"].GetString());
        m_instanceCategoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilySet") && !value["InstanceFamilySet"].IsNull())
    {
        if (!value["InstanceFamilySet"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceCategoryItem.InstanceFamilySet` is not array type"));

        const Value &tmpValue = value["InstanceFamilySet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceFamilySet.push_back((*itr).GetString());
        }
        m_instanceFamilySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceCategoryItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceCategoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceFamilySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceFamilySet.begin(); itr != m_instanceFamilySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstanceCategoryItem::GetInstanceCategory() const
{
    return m_instanceCategory;
}

void InstanceCategoryItem::SetInstanceCategory(const string& _instanceCategory)
{
    m_instanceCategory = _instanceCategory;
    m_instanceCategoryHasBeenSet = true;
}

bool InstanceCategoryItem::InstanceCategoryHasBeenSet() const
{
    return m_instanceCategoryHasBeenSet;
}

vector<string> InstanceCategoryItem::GetInstanceFamilySet() const
{
    return m_instanceFamilySet;
}

void InstanceCategoryItem::SetInstanceFamilySet(const vector<string>& _instanceFamilySet)
{
    m_instanceFamilySet = _instanceFamilySet;
    m_instanceFamilySetHasBeenSet = true;
}

bool InstanceCategoryItem::InstanceFamilySetHasBeenSet() const
{
    return m_instanceFamilySetHasBeenSet;
}

