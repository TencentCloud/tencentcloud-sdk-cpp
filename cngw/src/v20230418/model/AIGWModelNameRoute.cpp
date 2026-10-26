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

#include <tencentcloud/cngw/v20230418/model/AIGWModelNameRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWModelNameRoute::AIGWModelNameRoute() :
    m_modelNamesHasBeenSet(false)
{
}

CoreInternalOutcome AIGWModelNameRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelNames") && !value["ModelNames"].IsNull())
    {
        if (!value["ModelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWModelNameRoute.ModelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelNames.push_back((*itr).GetString());
        }
        m_modelNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWModelNameRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelNames.begin(); itr != m_modelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> AIGWModelNameRoute::GetModelNames() const
{
    return m_modelNames;
}

void AIGWModelNameRoute::SetModelNames(const vector<string>& _modelNames)
{
    m_modelNames = _modelNames;
    m_modelNamesHasBeenSet = true;
}

bool AIGWModelNameRoute::ModelNamesHasBeenSet() const
{
    return m_modelNamesHasBeenSet;
}

