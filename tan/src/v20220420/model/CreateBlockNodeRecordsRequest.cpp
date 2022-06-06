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

#include <tencentcloud/tan/v20220420/model/CreateBlockNodeRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tan::V20220420::Model;
using namespace std;

CreateBlockNodeRecordsRequest::CreateBlockNodeRecordsRequest() :
    m_groupIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_recordsHasBeenSet(false)
{
}

string CreateBlockNodeRecordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_records.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBlockNodeRecordsRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateBlockNodeRecordsRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateBlockNodeRecordsRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateBlockNodeRecordsRequest::GetNodeId() const
{
    return m_nodeId;
}

void CreateBlockNodeRecordsRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool CreateBlockNodeRecordsRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string CreateBlockNodeRecordsRequest::GetRecords() const
{
    return m_records;
}

void CreateBlockNodeRecordsRequest::SetRecords(const string& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool CreateBlockNodeRecordsRequest::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}


