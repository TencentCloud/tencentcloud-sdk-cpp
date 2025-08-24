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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeSeeRecognitionTaskRequest::DescribeTWeSeeRecognitionTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_fileURLExpireTimeHasBeenSet(false)
{
}

string DescribeTWeSeeRecognitionTaskRequest::ToJsonString() const
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

    if (m_fileURLExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURLExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileURLExpireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTWeSeeRecognitionTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTWeSeeRecognitionTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTWeSeeRecognitionTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeTWeSeeRecognitionTaskRequest::GetFileURLExpireTime() const
{
    return m_fileURLExpireTime;
}

void DescribeTWeSeeRecognitionTaskRequest::SetFileURLExpireTime(const int64_t& _fileURLExpireTime)
{
    m_fileURLExpireTime = _fileURLExpireTime;
    m_fileURLExpireTimeHasBeenSet = true;
}

bool DescribeTWeSeeRecognitionTaskRequest::FileURLExpireTimeHasBeenSet() const
{
    return m_fileURLExpireTimeHasBeenSet;
}


