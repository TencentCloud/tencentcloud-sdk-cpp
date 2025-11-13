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

#include <tencentcloud/dataagent/v20250513/model/AddChunkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

AddChunkRequest::AddChunkRequest() :
    m_instanceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_beforeChunkIdHasBeenSet(false),
    m_insertPosHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_afterChunkIdHasBeenSet(false)
{
}

string AddChunkRequest::ToJsonString() const
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

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeChunkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforeChunkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beforeChunkId.c_str(), allocator).Move(), allocator);
    }

    if (m_insertPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertPos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_insertPos, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_afterChunkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterChunkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_afterChunkId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddChunkRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AddChunkRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AddChunkRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AddChunkRequest::GetFileId() const
{
    return m_fileId;
}

void AddChunkRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AddChunkRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AddChunkRequest::GetBeforeChunkId() const
{
    return m_beforeChunkId;
}

void AddChunkRequest::SetBeforeChunkId(const string& _beforeChunkId)
{
    m_beforeChunkId = _beforeChunkId;
    m_beforeChunkIdHasBeenSet = true;
}

bool AddChunkRequest::BeforeChunkIdHasBeenSet() const
{
    return m_beforeChunkIdHasBeenSet;
}

int64_t AddChunkRequest::GetInsertPos() const
{
    return m_insertPos;
}

void AddChunkRequest::SetInsertPos(const int64_t& _insertPos)
{
    m_insertPos = _insertPos;
    m_insertPosHasBeenSet = true;
}

bool AddChunkRequest::InsertPosHasBeenSet() const
{
    return m_insertPosHasBeenSet;
}

string AddChunkRequest::GetContent() const
{
    return m_content;
}

void AddChunkRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AddChunkRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AddChunkRequest::GetAfterChunkId() const
{
    return m_afterChunkId;
}

void AddChunkRequest::SetAfterChunkId(const string& _afterChunkId)
{
    m_afterChunkId = _afterChunkId;
    m_afterChunkIdHasBeenSet = true;
}

bool AddChunkRequest::AfterChunkIdHasBeenSet() const
{
    return m_afterChunkIdHasBeenSet;
}


