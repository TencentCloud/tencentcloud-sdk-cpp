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

#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DeleteTrainingModelVersionRequest::DeleteTrainingModelVersionRequest() :
    m_trainingModelVersionIdHasBeenSet(false),
    m_enableDeleteCosHasBeenSet(false)
{
}

string DeleteTrainingModelVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trainingModelVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDeleteCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeleteCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeleteCos, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTrainingModelVersionRequest::GetTrainingModelVersionId() const
{
    return m_trainingModelVersionId;
}

void DeleteTrainingModelVersionRequest::SetTrainingModelVersionId(const string& _trainingModelVersionId)
{
    m_trainingModelVersionId = _trainingModelVersionId;
    m_trainingModelVersionIdHasBeenSet = true;
}

bool DeleteTrainingModelVersionRequest::TrainingModelVersionIdHasBeenSet() const
{
    return m_trainingModelVersionIdHasBeenSet;
}

bool DeleteTrainingModelVersionRequest::GetEnableDeleteCos() const
{
    return m_enableDeleteCos;
}

void DeleteTrainingModelVersionRequest::SetEnableDeleteCos(const bool& _enableDeleteCos)
{
    m_enableDeleteCos = _enableDeleteCos;
    m_enableDeleteCosHasBeenSet = true;
}

bool DeleteTrainingModelVersionRequest::EnableDeleteCosHasBeenSet() const
{
    return m_enableDeleteCosHasBeenSet;
}


