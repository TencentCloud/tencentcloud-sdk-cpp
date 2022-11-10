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

#include <tencentcloud/tione/v20211111/model/ModelAccEngineVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelAccEngineVersion::ModelAccEngineVersion() :
    m_modelFormatHasBeenSet(false),
    m_engineVersionsHasBeenSet(false)
{
}

CoreInternalOutcome ModelAccEngineVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelFormat") && !value["ModelFormat"].IsNull())
    {
        if (!value["ModelFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccEngineVersion.ModelFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelFormat = string(value["ModelFormat"].GetString());
        m_modelFormatHasBeenSet = true;
    }

    if (value.HasMember("EngineVersions") && !value["EngineVersions"].IsNull())
    {
        if (!value["EngineVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAccEngineVersion.EngineVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["EngineVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EngineVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_engineVersions.push_back(item);
        }
        m_engineVersionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAccEngineVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_engineVersions.begin(); itr != m_engineVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ModelAccEngineVersion::GetModelFormat() const
{
    return m_modelFormat;
}

void ModelAccEngineVersion::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool ModelAccEngineVersion::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

vector<EngineVersion> ModelAccEngineVersion::GetEngineVersions() const
{
    return m_engineVersions;
}

void ModelAccEngineVersion::SetEngineVersions(const vector<EngineVersion>& _engineVersions)
{
    m_engineVersions = _engineVersions;
    m_engineVersionsHasBeenSet = true;
}

bool ModelAccEngineVersion::EngineVersionsHasBeenSet() const
{
    return m_engineVersionsHasBeenSet;
}

