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

#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImportMediaKnowledgeRequest::ImportMediaKnowledgeRequest() :
    m_subAppIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_importTasksHasBeenSet(false)
{
}

string ImportMediaKnowledgeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_importTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_importTasks.begin(); itr != m_importTasks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ImportMediaKnowledgeRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ImportMediaKnowledgeRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ImportMediaKnowledgeRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ImportMediaKnowledgeRequest::GetFileId() const
{
    return m_fileId;
}

void ImportMediaKnowledgeRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ImportMediaKnowledgeRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

vector<string> ImportMediaKnowledgeRequest::GetImportTasks() const
{
    return m_importTasks;
}

void ImportMediaKnowledgeRequest::SetImportTasks(const vector<string>& _importTasks)
{
    m_importTasks = _importTasks;
    m_importTasksHasBeenSet = true;
}

bool ImportMediaKnowledgeRequest::ImportTasksHasBeenSet() const
{
    return m_importTasksHasBeenSet;
}


