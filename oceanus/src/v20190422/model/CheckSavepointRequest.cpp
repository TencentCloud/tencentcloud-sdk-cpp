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

#include <tencentcloud/oceanus/v20190422/model/CheckSavepointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CheckSavepointRequest::CheckSavepointRequest() :
    m_jobIdHasBeenSet(false),
    m_serialIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_savepointPathHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string CheckSavepointRequest::ToJsonString() const
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

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordType, allocator);
    }

    if (m_savepointPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_savepointPath.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckSavepointRequest::GetJobId() const
{
    return m_jobId;
}

void CheckSavepointRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CheckSavepointRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CheckSavepointRequest::GetSerialId() const
{
    return m_serialId;
}

void CheckSavepointRequest::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool CheckSavepointRequest::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t CheckSavepointRequest::GetRecordType() const
{
    return m_recordType;
}

void CheckSavepointRequest::SetRecordType(const int64_t& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CheckSavepointRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CheckSavepointRequest::GetSavepointPath() const
{
    return m_savepointPath;
}

void CheckSavepointRequest::SetSavepointPath(const string& _savepointPath)
{
    m_savepointPath = _savepointPath;
    m_savepointPathHasBeenSet = true;
}

bool CheckSavepointRequest::SavepointPathHasBeenSet() const
{
    return m_savepointPathHasBeenSet;
}

string CheckSavepointRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CheckSavepointRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CheckSavepointRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


