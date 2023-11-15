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

#include <tencentcloud/weilingwith/v20230427/model/AddAlarmProcessRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AddAlarmProcessRecordRequest::AddAlarmProcessRecordRequest() :
    m_recordSetHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_extendOneHasBeenSet(false)
{
}

string AddAlarmProcessRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_recordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordSet.begin(); itr != m_recordSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_extendOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendOne.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ProcessRecordInfo> AddAlarmProcessRecordRequest::GetRecordSet() const
{
    return m_recordSet;
}

void AddAlarmProcessRecordRequest::SetRecordSet(const vector<ProcessRecordInfo>& _recordSet)
{
    m_recordSet = _recordSet;
    m_recordSetHasBeenSet = true;
}

bool AddAlarmProcessRecordRequest::RecordSetHasBeenSet() const
{
    return m_recordSetHasBeenSet;
}

int64_t AddAlarmProcessRecordRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void AddAlarmProcessRecordRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool AddAlarmProcessRecordRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string AddAlarmProcessRecordRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void AddAlarmProcessRecordRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool AddAlarmProcessRecordRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

int64_t AddAlarmProcessRecordRequest::GetApplicationId() const
{
    return m_applicationId;
}

void AddAlarmProcessRecordRequest::SetApplicationId(const int64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool AddAlarmProcessRecordRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string AddAlarmProcessRecordRequest::GetExtendOne() const
{
    return m_extendOne;
}

void AddAlarmProcessRecordRequest::SetExtendOne(const string& _extendOne)
{
    m_extendOne = _extendOne;
    m_extendOneHasBeenSet = true;
}

bool AddAlarmProcessRecordRequest::ExtendOneHasBeenSet() const
{
    return m_extendOneHasBeenSet;
}


