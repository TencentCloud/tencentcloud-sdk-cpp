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

#include <tencentcloud/goosefs/v20220519/model/BatchAddClientNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

BatchAddClientNodesRequest::BatchAddClientNodesRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_clientNodesHasBeenSet(false),
    m_singleClusterFlagHasBeenSet(false)
{
}

string BatchAddClientNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientNodes.begin(); itr != m_clientNodes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_singleClusterFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleClusterFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_singleClusterFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchAddClientNodesRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void BatchAddClientNodesRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool BatchAddClientNodesRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

vector<LinuxNodeAttribute> BatchAddClientNodesRequest::GetClientNodes() const
{
    return m_clientNodes;
}

void BatchAddClientNodesRequest::SetClientNodes(const vector<LinuxNodeAttribute>& _clientNodes)
{
    m_clientNodes = _clientNodes;
    m_clientNodesHasBeenSet = true;
}

bool BatchAddClientNodesRequest::ClientNodesHasBeenSet() const
{
    return m_clientNodesHasBeenSet;
}

bool BatchAddClientNodesRequest::GetSingleClusterFlag() const
{
    return m_singleClusterFlag;
}

void BatchAddClientNodesRequest::SetSingleClusterFlag(const bool& _singleClusterFlag)
{
    m_singleClusterFlag = _singleClusterFlag;
    m_singleClusterFlagHasBeenSet = true;
}

bool BatchAddClientNodesRequest::SingleClusterFlagHasBeenSet() const
{
    return m_singleClusterFlagHasBeenSet;
}


