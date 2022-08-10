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

#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DeleteTrainingModelRequest::DeleteTrainingModelRequest() :
    m_trainingModelIdHasBeenSet(false),
    m_enableDeleteCosHasBeenSet(false),
    m_modelVersionTypeHasBeenSet(false)
{
}

string DeleteTrainingModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trainingModelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDeleteCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeleteCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeleteCos, allocator);
    }

    if (m_modelVersionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersionType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTrainingModelRequest::GetTrainingModelId() const
{
    return m_trainingModelId;
}

void DeleteTrainingModelRequest::SetTrainingModelId(const string& _trainingModelId)
{
    m_trainingModelId = _trainingModelId;
    m_trainingModelIdHasBeenSet = true;
}

bool DeleteTrainingModelRequest::TrainingModelIdHasBeenSet() const
{
    return m_trainingModelIdHasBeenSet;
}

bool DeleteTrainingModelRequest::GetEnableDeleteCos() const
{
    return m_enableDeleteCos;
}

void DeleteTrainingModelRequest::SetEnableDeleteCos(const bool& _enableDeleteCos)
{
    m_enableDeleteCos = _enableDeleteCos;
    m_enableDeleteCosHasBeenSet = true;
}

bool DeleteTrainingModelRequest::EnableDeleteCosHasBeenSet() const
{
    return m_enableDeleteCosHasBeenSet;
}

string DeleteTrainingModelRequest::GetModelVersionType() const
{
    return m_modelVersionType;
}

void DeleteTrainingModelRequest::SetModelVersionType(const string& _modelVersionType)
{
    m_modelVersionType = _modelVersionType;
    m_modelVersionTypeHasBeenSet = true;
}

bool DeleteTrainingModelRequest::ModelVersionTypeHasBeenSet() const
{
    return m_modelVersionTypeHasBeenSet;
}


