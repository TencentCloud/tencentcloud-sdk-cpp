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

#include <tencentcloud/tokenhub/v20260322/model/ModelAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelAccessInfo::ModelAccessInfo() :
    m_modelSiteRegionsHasBeenSet(false)
{
}

CoreInternalOutcome ModelAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelSiteRegions") && !value["ModelSiteRegions"].IsNull())
    {
        if (!value["ModelSiteRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAccessInfo.ModelSiteRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelSiteRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelSiteRegion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelSiteRegions.push_back(item);
        }
        m_modelSiteRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelSiteRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSiteRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelSiteRegions.begin(); itr != m_modelSiteRegions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ModelSiteRegion> ModelAccessInfo::GetModelSiteRegions() const
{
    return m_modelSiteRegions;
}

void ModelAccessInfo::SetModelSiteRegions(const vector<ModelSiteRegion>& _modelSiteRegions)
{
    m_modelSiteRegions = _modelSiteRegions;
    m_modelSiteRegionsHasBeenSet = true;
}

bool ModelAccessInfo::ModelSiteRegionsHasBeenSet() const
{
    return m_modelSiteRegionsHasBeenSet;
}

