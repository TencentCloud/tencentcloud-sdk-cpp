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

#include <tencentcloud/iotexplorer/v20190423/model/GenerateCloudStorageAIServiceTaskFileURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GenerateCloudStorageAIServiceTaskFileURLRequest::GenerateCloudStorageAIServiceTaskFileURLRequest() :
    m_taskIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string GenerateCloudStorageAIServiceTaskFileURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateCloudStorageAIServiceTaskFileURLRequest::GetTaskId() const
{
    return m_taskId;
}

void GenerateCloudStorageAIServiceTaskFileURLRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GenerateCloudStorageAIServiceTaskFileURLRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string GenerateCloudStorageAIServiceTaskFileURLRequest::GetFileName() const
{
    return m_fileName;
}

void GenerateCloudStorageAIServiceTaskFileURLRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool GenerateCloudStorageAIServiceTaskFileURLRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t GenerateCloudStorageAIServiceTaskFileURLRequest::GetExpireTime() const
{
    return m_expireTime;
}

void GenerateCloudStorageAIServiceTaskFileURLRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GenerateCloudStorageAIServiceTaskFileURLRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


