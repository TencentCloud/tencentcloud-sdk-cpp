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
using namespace rapidjson;
using namespace std;

VerifyIdlFilesRequest::VerifyIdlFilesRequest() :
    m_applicationIdHasBeenSet(false),
    m_logicZoneIdHasBeenSet(false),
    m_existingIdlFilesHasBeenSet(false),
    m_newIdlFilesHasBeenSet(false)
{
}

string VerifyIdlFilesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_existingIdlFilesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExistingIdlFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_existingIdlFiles.begin(); itr != m_existingIdlFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_newIdlFilesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewIdlFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newIdlFiles.begin(); itr != m_newIdlFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyIdlFilesRequest::GetApplicationId() const
{
    return m_applicationId;
}

void VerifyIdlFilesRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool VerifyIdlFilesRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string VerifyIdlFilesRequest::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void VerifyIdlFilesRequest::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool VerifyIdlFilesRequest::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
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


