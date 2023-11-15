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

#include <tencentcloud/weilingwith/v20230427/model/ModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ModelInfo::ModelInfo() :
    m_workspaceIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_relatedProductHasBeenSet(false),
    m_deviceTypeNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_modelParamsHasBeenSet(false)
{
}

CoreInternalOutcome ModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedProduct") && !value["RelatedProduct"].IsNull())
    {
        if (!value["RelatedProduct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelInfo.RelatedProduct` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedProduct"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelatedProduct item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedProduct.push_back(item);
        }
        m_relatedProductHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeName") && !value["DeviceTypeName"].IsNull())
    {
        if (!value["DeviceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.DeviceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeName = string(value["DeviceTypeName"].GetString());
        m_deviceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = value["ModelType"].GetInt64();
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelParams") && !value["ModelParams"].IsNull())
    {
        if (!value["ModelParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelParams = string(value["ModelParams"].GetString());
        m_modelParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedProduct.begin(); itr != m_relatedProduct.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelType, allocator);
    }

    if (m_modelParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelParams.c_str(), allocator).Move(), allocator);
    }

}


int64_t ModelInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ModelInfo::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ModelInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ModelInfo::GetModelName() const
{
    return m_modelName;
}

void ModelInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
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

vector<RelatedProduct> ModelInfo::GetRelatedProduct() const
{
    return m_relatedProduct;
}

void ModelInfo::SetRelatedProduct(const vector<RelatedProduct>& _relatedProduct)
{
    m_relatedProduct = _relatedProduct;
    m_relatedProductHasBeenSet = true;
}

bool ModelInfo::RelatedProductHasBeenSet() const
{
    return m_relatedProductHasBeenSet;
}

string ModelInfo::GetDeviceTypeName() const
{
    return m_deviceTypeName;
}

void ModelInfo::SetDeviceTypeName(const string& _deviceTypeName)
{
    m_deviceTypeName = _deviceTypeName;
    m_deviceTypeNameHasBeenSet = true;
}

bool ModelInfo::DeviceTypeNameHasBeenSet() const
{
    return m_deviceTypeNameHasBeenSet;
}

string ModelInfo::GetDeviceType() const
{
    return m_deviceType;
}

void ModelInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModelInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t ModelInfo::GetModelType() const
{
    return m_modelType;
}

void ModelInfo::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool ModelInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string ModelInfo::GetModelParams() const
{
    return m_modelParams;
}

void ModelInfo::SetModelParams(const string& _modelParams)
{
    m_modelParams = _modelParams;
    m_modelParamsHasBeenSet = true;
}

bool ModelInfo::ModelParamsHasBeenSet() const
{
    return m_modelParamsHasBeenSet;
}

