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

#include <tencentcloud/tdmq/v20200217/model/DimensionInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DimensionInstance::DimensionInstance() :
    m_dimensionsHasBeenSet(false)
{
}

CoreInternalOutcome DimensionInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionInstance.Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DimensionOpt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensions.push_back(item);
        }
        m_dimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DimensionOpt> DimensionInstance::GetDimensions() const
{
    return m_dimensions;
}

void DimensionInstance::SetDimensions(const vector<DimensionOpt>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DimensionInstance::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

