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

#include <tencentcloud/weilingwith/v20230427/model/BuildingModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BuildingModel::BuildingModel() :
    m_elementIdHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_modelUrlHasBeenSet(false)
{
}

CoreInternalOutcome BuildingModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingModel.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingModel.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingModel.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelUrl") && !value["ModelUrl"].IsNull())
    {
        if (!value["ModelUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildingModel.ModelUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUrl = string(value["ModelUrl"].GetString());
        m_modelUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildingModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelUrl.c_str(), allocator).Move(), allocator);
    }

}


string BuildingModel::GetElementId() const
{
    return m_elementId;
}

void BuildingModel::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool BuildingModel::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string BuildingModel::GetElementName() const
{
    return m_elementName;
}

void BuildingModel::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool BuildingModel::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

string BuildingModel::GetModelType() const
{
    return m_modelType;
}

void BuildingModel::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool BuildingModel::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string BuildingModel::GetModelUrl() const
{
    return m_modelUrl;
}

void BuildingModel::SetModelUrl(const string& _modelUrl)
{
    m_modelUrl = _modelUrl;
    m_modelUrlHasBeenSet = true;
}

bool BuildingModel::ModelUrlHasBeenSet() const
{
    return m_modelUrlHasBeenSet;
}

