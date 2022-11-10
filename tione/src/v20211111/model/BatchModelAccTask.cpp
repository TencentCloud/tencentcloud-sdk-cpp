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

#include <tencentcloud/tione/v20211111/model/BatchModelAccTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

BatchModelAccTask::BatchModelAccTask() :
    m_modelIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_modelFormatHasBeenSet(false),
    m_tensorInfosHasBeenSet(false),
    m_accEngineVersionHasBeenSet(false),
    m_modelInputPathHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelSignatureHasBeenSet(false)
{
}

CoreInternalOutcome BatchModelAccTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelSource") && !value["ModelSource"].IsNull())
    {
        if (!value["ModelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSource = string(value["ModelSource"].GetString());
        m_modelSourceHasBeenSet = true;
    }

    if (value.HasMember("ModelFormat") && !value["ModelFormat"].IsNull())
    {
        if (!value["ModelFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelFormat = string(value["ModelFormat"].GetString());
        m_modelFormatHasBeenSet = true;
    }

    if (value.HasMember("TensorInfos") && !value["TensorInfos"].IsNull())
    {
        if (!value["TensorInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.TensorInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TensorInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tensorInfos.push_back((*itr).GetString());
        }
        m_tensorInfosHasBeenSet = true;
    }

    if (value.HasMember("AccEngineVersion") && !value["AccEngineVersion"].IsNull())
    {
        if (!value["AccEngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.AccEngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accEngineVersion = string(value["AccEngineVersion"].GetString());
        m_accEngineVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelInputPath") && !value["ModelInputPath"].IsNull())
    {
        if (!value["ModelInputPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelInputPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelInputPath.Deserialize(value["ModelInputPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelInputPathHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelSignature") && !value["ModelSignature"].IsNull())
    {
        if (!value["ModelSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModelAccTask.ModelSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSignature = string(value["ModelSignature"].GetString());
        m_modelSignatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchModelAccTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_tensorInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tensorInfos.begin(); itr != m_tensorInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accEngineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccEngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accEngineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInputPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSignature.c_str(), allocator).Move(), allocator);
    }

}


string BatchModelAccTask::GetModelId() const
{
    return m_modelId;
}

void BatchModelAccTask::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool BatchModelAccTask::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string BatchModelAccTask::GetModelVersion() const
{
    return m_modelVersion;
}

void BatchModelAccTask::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool BatchModelAccTask::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string BatchModelAccTask::GetModelSource() const
{
    return m_modelSource;
}

void BatchModelAccTask::SetModelSource(const string& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool BatchModelAccTask::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

string BatchModelAccTask::GetModelFormat() const
{
    return m_modelFormat;
}

void BatchModelAccTask::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool BatchModelAccTask::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

vector<string> BatchModelAccTask::GetTensorInfos() const
{
    return m_tensorInfos;
}

void BatchModelAccTask::SetTensorInfos(const vector<string>& _tensorInfos)
{
    m_tensorInfos = _tensorInfos;
    m_tensorInfosHasBeenSet = true;
}

bool BatchModelAccTask::TensorInfosHasBeenSet() const
{
    return m_tensorInfosHasBeenSet;
}

string BatchModelAccTask::GetAccEngineVersion() const
{
    return m_accEngineVersion;
}

void BatchModelAccTask::SetAccEngineVersion(const string& _accEngineVersion)
{
    m_accEngineVersion = _accEngineVersion;
    m_accEngineVersionHasBeenSet = true;
}

bool BatchModelAccTask::AccEngineVersionHasBeenSet() const
{
    return m_accEngineVersionHasBeenSet;
}

CosPathInfo BatchModelAccTask::GetModelInputPath() const
{
    return m_modelInputPath;
}

void BatchModelAccTask::SetModelInputPath(const CosPathInfo& _modelInputPath)
{
    m_modelInputPath = _modelInputPath;
    m_modelInputPathHasBeenSet = true;
}

bool BatchModelAccTask::ModelInputPathHasBeenSet() const
{
    return m_modelInputPathHasBeenSet;
}

string BatchModelAccTask::GetModelName() const
{
    return m_modelName;
}

void BatchModelAccTask::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool BatchModelAccTask::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string BatchModelAccTask::GetModelSignature() const
{
    return m_modelSignature;
}

void BatchModelAccTask::SetModelSignature(const string& _modelSignature)
{
    m_modelSignature = _modelSignature;
    m_modelSignatureHasBeenSet = true;
}

bool BatchModelAccTask::ModelSignatureHasBeenSet() const
{
    return m_modelSignatureHasBeenSet;
}

