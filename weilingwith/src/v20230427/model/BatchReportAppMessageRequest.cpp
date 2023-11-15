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

#include <tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BatchReportAppMessageRequest::BatchReportAppMessageRequest() :
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_reportSetHasBeenSet(false)
{
}

string BatchReportAppMessageRequest::ToJsonString() const
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

    if (m_reportSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportSet.begin(); itr != m_reportSet.end(); ++itr, ++i)
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


int64_t BatchReportAppMessageRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void BatchReportAppMessageRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool BatchReportAppMessageRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string BatchReportAppMessageRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void BatchReportAppMessageRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool BatchReportAppMessageRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<ReportAppMessage> BatchReportAppMessageRequest::GetReportSet() const
{
    return m_reportSet;
}

void BatchReportAppMessageRequest::SetReportSet(const vector<ReportAppMessage>& _reportSet)
{
    m_reportSet = _reportSet;
    m_reportSetHasBeenSet = true;
}

bool BatchReportAppMessageRequest::ReportSetHasBeenSet() const
{
    return m_reportSetHasBeenSet;
}


