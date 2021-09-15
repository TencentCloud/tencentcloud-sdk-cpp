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

#include <tencentcloud/essbasic/v20201222/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CreateFlowByFilesRequest::CreateFlowByFilesRequest() :
    m_callerHasBeenSet(false),
    m_flowInfoHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_customIdHasBeenSet(false)
{
}

string CreateFlowByFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CreateFlowByFilesRequest::GetCaller() const
{
    return m_caller;
}

void CreateFlowByFilesRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

FlowInfo CreateFlowByFilesRequest::GetFlowInfo() const
{
    return m_flowInfo;
}

void CreateFlowByFilesRequest::SetFlowInfo(const FlowInfo& _flowInfo)
{
    m_flowInfo = _flowInfo;
    m_flowInfoHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowInfoHasBeenSet() const
{
    return m_flowInfoHasBeenSet;
}

vector<string> CreateFlowByFilesRequest::GetFileIds() const
{
    return m_fileIds;
}

void CreateFlowByFilesRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string CreateFlowByFilesRequest::GetCustomId() const
{
    return m_customId;
}

void CreateFlowByFilesRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}


