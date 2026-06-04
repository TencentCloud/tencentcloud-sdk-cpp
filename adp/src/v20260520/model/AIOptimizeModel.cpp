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

#include <tencentcloud/adp/v20260520/model/AIOptimizeModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AIOptimizeModel::AIOptimizeModel() :
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome AIOptimizeModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIOptimizeModel.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIOptimizeModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

}


ModelDetailInfo AIOptimizeModel::GetModel() const
{
    return m_model;
}

void AIOptimizeModel::SetModel(const ModelDetailInfo& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AIOptimizeModel::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

