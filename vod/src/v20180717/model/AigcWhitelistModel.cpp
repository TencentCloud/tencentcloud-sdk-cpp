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

#include <tencentcloud/vod/v20180717/model/AigcWhitelistModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcWhitelistModel::AigcWhitelistModel() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

CoreInternalOutcome AigcWhitelistModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcWhitelistModel.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcWhitelistModel.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcWhitelistModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

}


string AigcWhitelistModel::GetModelName() const
{
    return m_modelName;
}

void AigcWhitelistModel::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AigcWhitelistModel::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AigcWhitelistModel::GetModelVersion() const
{
    return m_modelVersion;
}

void AigcWhitelistModel::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool AigcWhitelistModel::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

