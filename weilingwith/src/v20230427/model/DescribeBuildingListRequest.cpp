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

#include <tencentcloud/weilingwith/v20230427/model/DescribeBuildingListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeBuildingListRequest::DescribeBuildingListRequest() :
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_hasModelHasBeenSet(false),
    m_spaceCodesHasBeenSet(false)
{
}

string DescribeBuildingListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_hasModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasModel, allocator);
    }

    if (m_spaceCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceCodes.begin(); itr != m_spaceCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBuildingListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeBuildingListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeBuildingListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeBuildingListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeBuildingListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeBuildingListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

bool DescribeBuildingListRequest::GetHasModel() const
{
    return m_hasModel;
}

void DescribeBuildingListRequest::SetHasModel(const bool& _hasModel)
{
    m_hasModel = _hasModel;
    m_hasModelHasBeenSet = true;
}

bool DescribeBuildingListRequest::HasModelHasBeenSet() const
{
    return m_hasModelHasBeenSet;
}

vector<string> DescribeBuildingListRequest::GetSpaceCodes() const
{
    return m_spaceCodes;
}

void DescribeBuildingListRequest::SetSpaceCodes(const vector<string>& _spaceCodes)
{
    m_spaceCodes = _spaceCodes;
    m_spaceCodesHasBeenSet = true;
}

bool DescribeBuildingListRequest::SpaceCodesHasBeenSet() const
{
    return m_spaceCodesHasBeenSet;
}


