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

#include <tencentcloud/fmu/v20191213/model/ModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

ModelInfo::ModelInfo() :
    m_modelIdHasBeenSet(false),
    m_lUTFileUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("LUTFileUrl") && !value["LUTFileUrl"].IsNull())
    {
        if (!value["LUTFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.LUTFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lUTFileUrl = string(value["LUTFileUrl"].GetString());
        m_lUTFileUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_lUTFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LUTFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lUTFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string ModelInfo::GetModelId() const
{
    return m_modelId;
}

void ModelInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelInfo::GetLUTFileUrl() const
{
    return m_lUTFileUrl;
}

void ModelInfo::SetLUTFileUrl(const string& _lUTFileUrl)
{
    m_lUTFileUrl = _lUTFileUrl;
    m_lUTFileUrlHasBeenSet = true;
}

bool ModelInfo::LUTFileUrlHasBeenSet() const
{
    return m_lUTFileUrlHasBeenSet;
}

string ModelInfo::GetDescription() const
{
    return m_description;
}

void ModelInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

