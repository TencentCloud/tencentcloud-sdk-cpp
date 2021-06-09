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

#include <tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

VerifyIdlFilesRequest::VerifyIdlFilesRequest() :
    m_clusterIdHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_existingIdlFilesHasBeenSet(false),
    m_newIdlFilesHasBeenSet(false)
{
}

string VerifyIdlFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_existingIdlFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistingIdlFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_existingIdlFiles.begin(); itr != m_existingIdlFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_newIdlFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewIdlFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newIdlFiles.begin(); itr != m_newIdlFiles.end(); ++itr, ++i)
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


string VerifyIdlFilesRequest::GetClusterId() const
{
    return m_clusterId;
}

void VerifyIdlFilesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool VerifyIdlFilesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string VerifyIdlFilesRequest::GetTableGroupId() const
{
    return m_tableGroupId;
}

void VerifyIdlFilesRequest::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool VerifyIdlFilesRequest::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

vector<IdlFileInfo> VerifyIdlFilesRequest::GetExistingIdlFiles() const
{
    return m_existingIdlFiles;
}

void VerifyIdlFilesRequest::SetExistingIdlFiles(const vector<IdlFileInfo>& _existingIdlFiles)
{
    m_existingIdlFiles = _existingIdlFiles;
    m_existingIdlFilesHasBeenSet = true;
}

bool VerifyIdlFilesRequest::ExistingIdlFilesHasBeenSet() const
{
    return m_existingIdlFilesHasBeenSet;
}

vector<IdlFileInfo> VerifyIdlFilesRequest::GetNewIdlFiles() const
{
    return m_newIdlFiles;
}

void VerifyIdlFilesRequest::SetNewIdlFiles(const vector<IdlFileInfo>& _newIdlFiles)
{
    m_newIdlFiles = _newIdlFiles;
    m_newIdlFilesHasBeenSet = true;
}

bool VerifyIdlFilesRequest::NewIdlFilesHasBeenSet() const
{
    return m_newIdlFilesHasBeenSet;
}


