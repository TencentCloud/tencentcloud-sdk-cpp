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

#include <tencentcloud/adp/v20260520/model/ModelBasic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelBasic::ModelBasic() :
    m_descriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome ModelBasic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBasic.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBasic.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBasic.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBasic.ModelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = value["ModelType"].GetInt64();
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelBasic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelBasic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string ModelBasic::GetDescription() const
{
    return m_description;
}

void ModelBasic::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelBasic::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModelBasic::GetIconUrl() const
{
    return m_iconUrl;
}

void ModelBasic::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ModelBasic::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ModelBasic::GetModelId() const
{
    return m_modelId;
}

void ModelBasic::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelBasic::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t ModelBasic::GetModelType() const
{
    return m_modelType;
}

void ModelBasic::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool ModelBasic::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string ModelBasic::GetName() const
{
    return m_name;
}

void ModelBasic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelBasic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

