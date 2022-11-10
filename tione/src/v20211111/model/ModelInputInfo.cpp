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

#include <tencentcloud/tione/v20211111/model/ModelInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelInputInfo::ModelInputInfo() :
    m_modelInputTypeHasBeenSet(false),
    m_modelInputDimensionHasBeenSet(false)
{
}

CoreInternalOutcome ModelInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelInputType") && !value["ModelInputType"].IsNull())
    {
        if (!value["ModelInputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInputInfo.ModelInputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelInputType = string(value["ModelInputType"].GetString());
        m_modelInputTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelInputDimension") && !value["ModelInputDimension"].IsNull())
    {
        if (!value["ModelInputDimension"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelInputInfo.ModelInputDimension` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelInputDimension"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelInputDimension.push_back((*itr).GetString());
        }
        m_modelInputDimensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelInputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelInputType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelInputDimension.begin(); itr != m_modelInputDimension.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ModelInputInfo::GetModelInputType() const
{
    return m_modelInputType;
}

void ModelInputInfo::SetModelInputType(const string& _modelInputType)
{
    m_modelInputType = _modelInputType;
    m_modelInputTypeHasBeenSet = true;
}

bool ModelInputInfo::ModelInputTypeHasBeenSet() const
{
    return m_modelInputTypeHasBeenSet;
}

vector<string> ModelInputInfo::GetModelInputDimension() const
{
    return m_modelInputDimension;
}

void ModelInputInfo::SetModelInputDimension(const vector<string>& _modelInputDimension)
{
    m_modelInputDimension = _modelInputDimension;
    m_modelInputDimensionHasBeenSet = true;
}

bool ModelInputInfo::ModelInputDimensionHasBeenSet() const
{
    return m_modelInputDimensionHasBeenSet;
}

