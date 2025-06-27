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

#include <tencentcloud/ctem/v20231128/model/DescribeJobRecordDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DescribeJobRecordDetailsRequest::DescribeJobRecordDetailsRequest() :
    m_moduleHasBeenSet(false),
    m_idHasBeenSet(false),
    m_jobRecordIdHasBeenSet(false)
{
}

string DescribeJobRecordDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_jobRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobRecordId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobRecordDetailsRequest::GetModule() const
{
    return m_module;
}

void DescribeJobRecordDetailsRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeJobRecordDetailsRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeJobRecordDetailsRequest::GetId() const
{
    return m_id;
}

void DescribeJobRecordDetailsRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeJobRecordDetailsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DescribeJobRecordDetailsRequest::GetJobRecordId() const
{
    return m_jobRecordId;
}

void DescribeJobRecordDetailsRequest::SetJobRecordId(const int64_t& _jobRecordId)
{
    m_jobRecordId = _jobRecordId;
    m_jobRecordIdHasBeenSet = true;
}

bool DescribeJobRecordDetailsRequest::JobRecordIdHasBeenSet() const
{
    return m_jobRecordIdHasBeenSet;
}


