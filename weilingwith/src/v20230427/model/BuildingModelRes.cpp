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

#include <tencentcloud/weilingwith/v20230427/model/BuildingModelRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BuildingModelRes::BuildingModelRes() :
    m_modelsHasBeenSet(false)
{
}

CoreInternalOutcome BuildingModelRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Models") && !value["Models"].IsNull())
    {
        if (!value["Models"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BuildingModelRes.Models` is not array type"));

        const rapidjson::Value &tmpValue = value["Models"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BuildingModel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_models.push_back(item);
        }
        m_modelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildingModelRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BuildingModel> BuildingModelRes::GetModels() const
{
    return m_models;
}

void BuildingModelRes::SetModels(const vector<BuildingModel>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool BuildingModelRes::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

