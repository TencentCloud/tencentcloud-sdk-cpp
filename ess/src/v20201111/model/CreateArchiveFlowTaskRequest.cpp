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

#include <tencentcloud/ess/v20201111/model/CreateArchiveFlowTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateArchiveFlowTaskRequest::CreateArchiveFlowTaskRequest() :
    m_operatorHasBeenSet(false),
    m_archiveFlowsHasBeenSet(false)
{
}

string CreateArchiveFlowTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_archiveFlowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveFlows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_archiveFlows.begin(); itr != m_archiveFlows.end(); ++itr, ++i)
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


UserInfo CreateArchiveFlowTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateArchiveFlowTaskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateArchiveFlowTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<CreateArchiveFlow> CreateArchiveFlowTaskRequest::GetArchiveFlows() const
{
    return m_archiveFlows;
}

void CreateArchiveFlowTaskRequest::SetArchiveFlows(const vector<CreateArchiveFlow>& _archiveFlows)
{
    m_archiveFlows = _archiveFlows;
    m_archiveFlowsHasBeenSet = true;
}

bool CreateArchiveFlowTaskRequest::ArchiveFlowsHasBeenSet() const
{
    return m_archiveFlowsHasBeenSet;
}


