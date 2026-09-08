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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobDetailRequest::DescribeJobDetailRequest() :
    m_pathHasBeenSet(false),
    m_jobSerialIdHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

string DescribeJobDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_jobSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobSerialId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobDetailRequest::GetPath() const
{
    return m_path;
}

void DescribeJobDetailRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DescribeJobDetailRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DescribeJobDetailRequest::GetJobSerialId() const
{
    return m_jobSerialId;
}

void DescribeJobDetailRequest::SetJobSerialId(const string& _jobSerialId)
{
    m_jobSerialId = _jobSerialId;
    m_jobSerialIdHasBeenSet = true;
}

bool DescribeJobDetailRequest::JobSerialIdHasBeenSet() const
{
    return m_jobSerialIdHasBeenSet;
}

string DescribeJobDetailRequest::GetMethod() const
{
    return m_method;
}

void DescribeJobDetailRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DescribeJobDetailRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}


