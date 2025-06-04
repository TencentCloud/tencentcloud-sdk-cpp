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

#include <tencentcloud/tcss/v20201101/model/DeleteMachineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DeleteMachineRequest::DeleteMachineRequest() :
    m_uuidHasBeenSet(false),
    m_nodeUniqueIdsHasBeenSet(false),
    m_uUIDsHasBeenSet(false)
{
}

string DeleteMachineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeUniqueIds.begin(); itr != m_nodeUniqueIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uUIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uUIDs.begin(); itr != m_uUIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMachineRequest::GetUuid() const
{
    return m_uuid;
}

void DeleteMachineRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DeleteMachineRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

vector<string> DeleteMachineRequest::GetNodeUniqueIds() const
{
    return m_nodeUniqueIds;
}

void DeleteMachineRequest::SetNodeUniqueIds(const vector<string>& _nodeUniqueIds)
{
    m_nodeUniqueIds = _nodeUniqueIds;
    m_nodeUniqueIdsHasBeenSet = true;
}

bool DeleteMachineRequest::NodeUniqueIdsHasBeenSet() const
{
    return m_nodeUniqueIdsHasBeenSet;
}

vector<string> DeleteMachineRequest::GetUUIDs() const
{
    return m_uUIDs;
}

void DeleteMachineRequest::SetUUIDs(const vector<string>& _uUIDs)
{
    m_uUIDs = _uUIDs;
    m_uUIDsHasBeenSet = true;
}

bool DeleteMachineRequest::UUIDsHasBeenSet() const
{
    return m_uUIDsHasBeenSet;
}


