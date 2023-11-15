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

#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeWorkSpaceBuildingCountAndAreaRequest::DescribeWorkSpaceBuildingCountAndAreaRequest() :
    m_workspaceIdListHasBeenSet(false),
    m_applicationTokenHasBeenSet(false)
{
}

string DescribeWorkSpaceBuildingCountAndAreaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workspaceIdList.begin(); itr != m_workspaceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeWorkSpaceBuildingCountAndAreaRequest::GetWorkspaceIdList() const
{
    return m_workspaceIdList;
}

void DescribeWorkSpaceBuildingCountAndAreaRequest::SetWorkspaceIdList(const vector<string>& _workspaceIdList)
{
    m_workspaceIdList = _workspaceIdList;
    m_workspaceIdListHasBeenSet = true;
}

bool DescribeWorkSpaceBuildingCountAndAreaRequest::WorkspaceIdListHasBeenSet() const
{
    return m_workspaceIdListHasBeenSet;
}

string DescribeWorkSpaceBuildingCountAndAreaRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeWorkSpaceBuildingCountAndAreaRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeWorkSpaceBuildingCountAndAreaRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}


