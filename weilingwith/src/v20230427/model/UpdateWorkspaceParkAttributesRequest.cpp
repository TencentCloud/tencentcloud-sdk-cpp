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

#include <tencentcloud/weilingwith/v20230427/model/UpdateWorkspaceParkAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

UpdateWorkspaceParkAttributesRequest::UpdateWorkspaceParkAttributesRequest() :
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_parkNameHasBeenSet(false),
    m_parkNumHasBeenSet(false)
{
}

string UpdateWorkspaceParkAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_parkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parkName.c_str(), allocator).Move(), allocator);
    }

    if (m_parkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParkNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parkNum.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateWorkspaceParkAttributesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateWorkspaceParkAttributesRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateWorkspaceParkAttributesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string UpdateWorkspaceParkAttributesRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void UpdateWorkspaceParkAttributesRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool UpdateWorkspaceParkAttributesRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string UpdateWorkspaceParkAttributesRequest::GetParkName() const
{
    return m_parkName;
}

void UpdateWorkspaceParkAttributesRequest::SetParkName(const string& _parkName)
{
    m_parkName = _parkName;
    m_parkNameHasBeenSet = true;
}

bool UpdateWorkspaceParkAttributesRequest::ParkNameHasBeenSet() const
{
    return m_parkNameHasBeenSet;
}

string UpdateWorkspaceParkAttributesRequest::GetParkNum() const
{
    return m_parkNum;
}

void UpdateWorkspaceParkAttributesRequest::SetParkNum(const string& _parkNum)
{
    m_parkNum = _parkNum;
    m_parkNumHasBeenSet = true;
}

bool UpdateWorkspaceParkAttributesRequest::ParkNumHasBeenSet() const
{
    return m_parkNumHasBeenSet;
}


