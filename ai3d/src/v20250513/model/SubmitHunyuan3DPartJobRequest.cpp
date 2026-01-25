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

#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuan3DPartJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitHunyuan3DPartJobRequest::SubmitHunyuan3DPartJobRequest() :
    m_fileHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

string SubmitHunyuan3DPartJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputFile3D SubmitHunyuan3DPartJobRequest::GetFile() const
{
    return m_file;
}

void SubmitHunyuan3DPartJobRequest::SetFile(const InputFile3D& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool SubmitHunyuan3DPartJobRequest::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

string SubmitHunyuan3DPartJobRequest::GetModel() const
{
    return m_model;
}

void SubmitHunyuan3DPartJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitHunyuan3DPartJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}


