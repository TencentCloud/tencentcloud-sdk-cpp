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

#include <tencentcloud/clb/v20180317/model/ModelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelItem::ModelItem() :
    m_modelIdHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_modelAliasHasBeenSet(false)
{
}

CoreInternalOutcome ModelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelItem.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("InputModalities") && !value["InputModalities"].IsNull())
    {
        if (!value["InputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelItem.InputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalities.push_back((*itr).GetString());
        }
        m_inputModalitiesHasBeenSet = true;
    }

    if (value.HasMember("ModelAlias") && !value["ModelAlias"].IsNull())
    {
        if (!value["ModelAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelItem.ModelAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAlias = string(value["ModelAlias"].GetString());
        m_modelAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputModalitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputModalities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputModalities.begin(); itr != m_inputModalities.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAlias.c_str(), allocator).Move(), allocator);
    }

}


string ModelItem::GetModelId() const
{
    return m_modelId;
}

void ModelItem::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelItem::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

vector<string> ModelItem::GetInputModalities() const
{
    return m_inputModalities;
}

void ModelItem::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ModelItem::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

string ModelItem::GetModelAlias() const
{
    return m_modelAlias;
}

void ModelItem::SetModelAlias(const string& _modelAlias)
{
    m_modelAlias = _modelAlias;
    m_modelAliasHasBeenSet = true;
}

bool ModelItem::ModelAliasHasBeenSet() const
{
    return m_modelAliasHasBeenSet;
}

