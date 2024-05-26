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

#include <tencentcloud/dasb/v20191018/model/RunChangePwdTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

RunChangePwdTaskRequest::RunChangePwdTaskRequest() :
    m_operationIdHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

string RunChangePwdTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationId.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunChangePwdTaskRequest::GetOperationId() const
{
    return m_operationId;
}

void RunChangePwdTaskRequest::SetOperationId(const string& _operationId)
{
    m_operationId = _operationId;
    m_operationIdHasBeenSet = true;
}

bool RunChangePwdTaskRequest::OperationIdHasBeenSet() const
{
    return m_operationIdHasBeenSet;
}

string RunChangePwdTaskRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void RunChangePwdTaskRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool RunChangePwdTaskRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

vector<RunChangePwdTaskDetail> RunChangePwdTaskRequest::GetDetails() const
{
    return m_details;
}

void RunChangePwdTaskRequest::SetDetails(const vector<RunChangePwdTaskDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool RunChangePwdTaskRequest::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}


