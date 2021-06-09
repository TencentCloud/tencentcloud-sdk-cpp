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

#include <tencentcloud/tione/v20191022/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest() :
    m_notebookInstanceNameHasBeenSet(false),
    m_sessionExpirationDurationInSecondsHasBeenSet(false)
{
}

string CreatePresignedNotebookInstanceUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notebookInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpirationDurationInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpirationDurationInSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpirationDurationInSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePresignedNotebookInstanceUrlRequest::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void CreatePresignedNotebookInstanceUrlRequest::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool CreatePresignedNotebookInstanceUrlRequest::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

int64_t CreatePresignedNotebookInstanceUrlRequest::GetSessionExpirationDurationInSeconds() const
{
    return m_sessionExpirationDurationInSeconds;
}

void CreatePresignedNotebookInstanceUrlRequest::SetSessionExpirationDurationInSeconds(const int64_t& _sessionExpirationDurationInSeconds)
{
    m_sessionExpirationDurationInSeconds = _sessionExpirationDurationInSeconds;
    m_sessionExpirationDurationInSecondsHasBeenSet = true;
}

bool CreatePresignedNotebookInstanceUrlRequest::SessionExpirationDurationInSecondsHasBeenSet() const
{
    return m_sessionExpirationDurationInSecondsHasBeenSet;
}


