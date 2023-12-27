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

#include <tencentcloud/omics/v20221128/model/RetryRunsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RetryRunsRequest::RetryRunsRequest() :
    m_projectIdHasBeenSet(false),
    m_runGroupIdHasBeenSet(false),
    m_runUuidsHasBeenSet(false),
    m_wDLOptionHasBeenSet(false),
    m_nFOptionHasBeenSet(false)
{
}

string RetryRunsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_runGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_runUuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runUuids.begin(); itr != m_runUuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wDLOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WDLOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wDLOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nFOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFOption.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RetryRunsRequest::GetProjectId() const
{
    return m_projectId;
}

void RetryRunsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RetryRunsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RetryRunsRequest::GetRunGroupId() const
{
    return m_runGroupId;
}

void RetryRunsRequest::SetRunGroupId(const string& _runGroupId)
{
    m_runGroupId = _runGroupId;
    m_runGroupIdHasBeenSet = true;
}

bool RetryRunsRequest::RunGroupIdHasBeenSet() const
{
    return m_runGroupIdHasBeenSet;
}

vector<string> RetryRunsRequest::GetRunUuids() const
{
    return m_runUuids;
}

void RetryRunsRequest::SetRunUuids(const vector<string>& _runUuids)
{
    m_runUuids = _runUuids;
    m_runUuidsHasBeenSet = true;
}

bool RetryRunsRequest::RunUuidsHasBeenSet() const
{
    return m_runUuidsHasBeenSet;
}

RunOption RetryRunsRequest::GetWDLOption() const
{
    return m_wDLOption;
}

void RetryRunsRequest::SetWDLOption(const RunOption& _wDLOption)
{
    m_wDLOption = _wDLOption;
    m_wDLOptionHasBeenSet = true;
}

bool RetryRunsRequest::WDLOptionHasBeenSet() const
{
    return m_wDLOptionHasBeenSet;
}

NFOption RetryRunsRequest::GetNFOption() const
{
    return m_nFOption;
}

void RetryRunsRequest::SetNFOption(const NFOption& _nFOption)
{
    m_nFOption = _nFOption;
    m_nFOptionHasBeenSet = true;
}

bool RetryRunsRequest::NFOptionHasBeenSet() const
{
    return m_nFOptionHasBeenSet;
}


