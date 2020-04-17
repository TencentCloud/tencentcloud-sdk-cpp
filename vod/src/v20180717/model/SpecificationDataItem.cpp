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

#include <tencentcloud/vod/v20180717/model/SpecificationDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

SpecificationDataItem::SpecificationDataItem() :
    m_specificationHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome SpecificationDataItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Error("response `SpecificationDataItem.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Error("response `SpecificationDataItem.Data` is not array type"));

        const Value &tmpValue = value["Data"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskStatDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecificationDataItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_specificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SpecificationDataItem::GetSpecification() const
{
    return m_specification;
}

void SpecificationDataItem::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool SpecificationDataItem::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

vector<TaskStatDataItem> SpecificationDataItem::GetData() const
{
    return m_data;
}

void SpecificationDataItem::SetData(const vector<TaskStatDataItem>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool SpecificationDataItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

