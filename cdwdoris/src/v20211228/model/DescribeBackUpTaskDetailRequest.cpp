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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTaskDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpTaskDetailRequest::DescribeBackUpTaskDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_backUpJobIdHasBeenSet(false)
{
}

string DescribeBackUpTaskDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backUpJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backUpJobId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackUpTaskDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackUpTaskDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackUpTaskDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeBackUpTaskDetailRequest::GetBackUpJobId() const
{
    return m_backUpJobId;
}

void DescribeBackUpTaskDetailRequest::SetBackUpJobId(const int64_t& _backUpJobId)
{
    m_backUpJobId = _backUpJobId;
    m_backUpJobIdHasBeenSet = true;
}

bool DescribeBackUpTaskDetailRequest::BackUpJobIdHasBeenSet() const
{
    return m_backUpJobIdHasBeenSet;
}


