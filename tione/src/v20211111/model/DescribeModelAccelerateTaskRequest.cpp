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

#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeModelAccelerateTaskRequest::DescribeModelAccelerateTaskRequest() :
    m_modelAccTaskIdHasBeenSet(false)
{
}

string DescribeModelAccelerateTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelAccTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAccTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelAccelerateTaskRequest::GetModelAccTaskId() const
{
    return m_modelAccTaskId;
}

void DescribeModelAccelerateTaskRequest::SetModelAccTaskId(const string& _modelAccTaskId)
{
    m_modelAccTaskId = _modelAccTaskId;
    m_modelAccTaskIdHasBeenSet = true;
}

bool DescribeModelAccelerateTaskRequest::ModelAccTaskIdHasBeenSet() const
{
    return m_modelAccTaskIdHasBeenSet;
}


