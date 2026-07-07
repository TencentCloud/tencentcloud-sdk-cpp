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

#include <tencentcloud/clb/v20180317/model/ModelAvailability.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelAvailability::ModelAvailability() :
    m_inputModalitiesHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ModelAvailability::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputModalities") && !value["InputModalities"].IsNull())
    {
        if (!value["InputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAvailability.InputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalities.push_back((*itr).GetString());
        }
        m_inputModalitiesHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAvailability.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAvailability.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAvailability::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


vector<string> ModelAvailability::GetInputModalities() const
{
    return m_inputModalities;
}

void ModelAvailability::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ModelAvailability::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

string ModelAvailability::GetModel() const
{
    return m_model;
}

void ModelAvailability::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModelAvailability::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModelAvailability::GetStatus() const
{
    return m_status;
}

void ModelAvailability::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelAvailability::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

