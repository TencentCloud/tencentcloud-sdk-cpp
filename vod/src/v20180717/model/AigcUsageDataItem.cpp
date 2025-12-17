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

#include <tencentcloud/vod/v20180717/model/AigcUsageDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcUsageDataItem::AigcUsageDataItem() :
    m_specificationHasBeenSet(false),
    m_dataSetHasBeenSet(false)
{
}

CoreInternalOutcome AigcUsageDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcUsageDataItem.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("DataSet") && !value["DataSet"].IsNull())
    {
        if (!value["DataSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcUsageDataItem.DataSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskStatDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSet.push_back(item);
        }
        m_dataSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcUsageDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSet.begin(); itr != m_dataSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AigcUsageDataItem::GetSpecification() const
{
    return m_specification;
}

void AigcUsageDataItem::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool AigcUsageDataItem::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

vector<TaskStatDataItem> AigcUsageDataItem::GetDataSet() const
{
    return m_dataSet;
}

void AigcUsageDataItem::SetDataSet(const vector<TaskStatDataItem>& _dataSet)
{
    m_dataSet = _dataSet;
    m_dataSetHasBeenSet = true;
}

bool AigcUsageDataItem::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

