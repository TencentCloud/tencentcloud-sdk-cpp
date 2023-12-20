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

#include <tencentcloud/tione/v20211111/model/ModelAccelerateVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelAccelerateVersion::ModelAccelerateVersion() :
    m_modelIdHasBeenSet(false),
    m_modelVersionIdHasBeenSet(false),
    m_modelJobIdHasBeenSet(false),
    m_modelJobNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_speedUpHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_cosPathInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modelFormatHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_gPUTypeHasBeenSet(false),
    m_modelCosPathHasBeenSet(false)
{
}

CoreInternalOutcome ModelAccelerateVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelVersionId") && !value["ModelVersionId"].IsNull())
    {
        if (!value["ModelVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersionId = string(value["ModelVersionId"].GetString());
        m_modelVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ModelJobId") && !value["ModelJobId"].IsNull())
    {
        if (!value["ModelJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelJobId = string(value["ModelJobId"].GetString());
        m_modelJobIdHasBeenSet = true;
    }

    if (value.HasMember("ModelJobName") && !value["ModelJobName"].IsNull())
    {
        if (!value["ModelJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelJobName = string(value["ModelJobName"].GetString());
        m_modelJobNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("SpeedUp") && !value["SpeedUp"].IsNull())
    {
        if (!value["SpeedUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.SpeedUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speedUp = string(value["SpeedUp"].GetString());
        m_speedUpHasBeenSet = true;
    }

    if (value.HasMember("ModelSource") && !value["ModelSource"].IsNull())
    {
        if (!value["ModelSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelSource.Deserialize(value["ModelSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelSourceHasBeenSet = true;
    }

    if (value.HasMember("CosPathInfo") && !value["CosPathInfo"].IsNull())
    {
        if (!value["CosPathInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.CosPathInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosPathInfo.Deserialize(value["CosPathInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosPathInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModelFormat") && !value["ModelFormat"].IsNull())
    {
        if (!value["ModelFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelFormat = string(value["ModelFormat"].GetString());
        m_modelFormatHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelCosPath") && !value["ModelCosPath"].IsNull())
    {
        if (!value["ModelCosPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateVersion.ModelCosPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelCosPath.Deserialize(value["ModelCosPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelCosPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAccelerateVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_speedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speedUp.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosPathInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPathInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosPathInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelCosPath.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelAccelerateVersion::GetModelId() const
{
    return m_modelId;
}

void ModelAccelerateVersion::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelAccelerateVersion::GetModelVersionId() const
{
    return m_modelVersionId;
}

void ModelAccelerateVersion::SetModelVersionId(const string& _modelVersionId)
{
    m_modelVersionId = _modelVersionId;
    m_modelVersionIdHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelVersionIdHasBeenSet() const
{
    return m_modelVersionIdHasBeenSet;
}

string ModelAccelerateVersion::GetModelJobId() const
{
    return m_modelJobId;
}

void ModelAccelerateVersion::SetModelJobId(const string& _modelJobId)
{
    m_modelJobId = _modelJobId;
    m_modelJobIdHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelJobIdHasBeenSet() const
{
    return m_modelJobIdHasBeenSet;
}

string ModelAccelerateVersion::GetModelJobName() const
{
    return m_modelJobName;
}

void ModelAccelerateVersion::SetModelJobName(const string& _modelJobName)
{
    m_modelJobName = _modelJobName;
    m_modelJobNameHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelJobNameHasBeenSet() const
{
    return m_modelJobNameHasBeenSet;
}

string ModelAccelerateVersion::GetModelVersion() const
{
    return m_modelVersion;
}

void ModelAccelerateVersion::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string ModelAccelerateVersion::GetSpeedUp() const
{
    return m_speedUp;
}

void ModelAccelerateVersion::SetSpeedUp(const string& _speedUp)
{
    m_speedUp = _speedUp;
    m_speedUpHasBeenSet = true;
}

bool ModelAccelerateVersion::SpeedUpHasBeenSet() const
{
    return m_speedUpHasBeenSet;
}

ModelSource ModelAccelerateVersion::GetModelSource() const
{
    return m_modelSource;
}

void ModelAccelerateVersion::SetModelSource(const ModelSource& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

CosPathInfo ModelAccelerateVersion::GetCosPathInfo() const
{
    return m_cosPathInfo;
}

void ModelAccelerateVersion::SetCosPathInfo(const CosPathInfo& _cosPathInfo)
{
    m_cosPathInfo = _cosPathInfo;
    m_cosPathInfoHasBeenSet = true;
}

bool ModelAccelerateVersion::CosPathInfoHasBeenSet() const
{
    return m_cosPathInfoHasBeenSet;
}

string ModelAccelerateVersion::GetCreateTime() const
{
    return m_createTime;
}

void ModelAccelerateVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelAccelerateVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ModelAccelerateVersion::GetModelFormat() const
{
    return m_modelFormat;
}

void ModelAccelerateVersion::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

string ModelAccelerateVersion::GetStatus() const
{
    return m_status;
}

void ModelAccelerateVersion::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelAccelerateVersion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModelAccelerateVersion::GetProgress() const
{
    return m_progress;
}

void ModelAccelerateVersion::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ModelAccelerateVersion::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ModelAccelerateVersion::GetErrorMsg() const
{
    return m_errorMsg;
}

void ModelAccelerateVersion::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool ModelAccelerateVersion::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string ModelAccelerateVersion::GetGPUType() const
{
    return m_gPUType;
}

void ModelAccelerateVersion::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool ModelAccelerateVersion::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

CosPathInfo ModelAccelerateVersion::GetModelCosPath() const
{
    return m_modelCosPath;
}

void ModelAccelerateVersion::SetModelCosPath(const CosPathInfo& _modelCosPath)
{
    m_modelCosPath = _modelCosPath;
    m_modelCosPathHasBeenSet = true;
}

bool ModelAccelerateVersion::ModelCosPathHasBeenSet() const
{
    return m_modelCosPathHasBeenSet;
}

