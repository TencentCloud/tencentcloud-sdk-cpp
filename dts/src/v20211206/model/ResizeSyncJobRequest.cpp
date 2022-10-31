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

#include <tencentcloud/dts/v20211206/model/ResizeSyncJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ResizeSyncJobRequest::ResizeSyncJobRequest() :
    m_jobIdHasBeenSet(false),
    m_newInstanceClassHasBeenSet(false)
{
}

string ResizeSyncJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_newInstanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewInstanceClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newInstanceClass.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResizeSyncJobRequest::GetJobId() const
{
    return m_jobId;
}

void ResizeSyncJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ResizeSyncJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ResizeSyncJobRequest::GetNewInstanceClass() const
{
    return m_newInstanceClass;
}

void ResizeSyncJobRequest::SetNewInstanceClass(const string& _newInstanceClass)
{
    m_newInstanceClass = _newInstanceClass;
    m_newInstanceClassHasBeenSet = true;
}

bool ResizeSyncJobRequest::NewInstanceClassHasBeenSet() const
{
    return m_newInstanceClassHasBeenSet;
}


