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

#include <tencentcloud/wedata/v20210820/model/GetAdvanceRunParamsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetAdvanceRunParamsRequest::GetAdvanceRunParamsRequest() :
    m_projectIdHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_advanceRunParamHasBeenSet(false),
    m_originalParamsHasBeenSet(false)
{
}

string GetAdvanceRunParamsRequest::ToJsonString() const
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

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_advanceRunParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceRunParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advanceRunParam.c_str(), allocator).Move(), allocator);
    }

    if (m_originalParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalParams.begin(); itr != m_originalParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetAdvanceRunParamsRequest::GetProjectId() const
{
    return m_projectId;
}

void GetAdvanceRunParamsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetAdvanceRunParamsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetAdvanceRunParamsRequest::GetRemotePath() const
{
    return m_remotePath;
}

void GetAdvanceRunParamsRequest::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool GetAdvanceRunParamsRequest::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string GetAdvanceRunParamsRequest::GetAdvanceRunParam() const
{
    return m_advanceRunParam;
}

void GetAdvanceRunParamsRequest::SetAdvanceRunParam(const string& _advanceRunParam)
{
    m_advanceRunParam = _advanceRunParam;
    m_advanceRunParamHasBeenSet = true;
}

bool GetAdvanceRunParamsRequest::AdvanceRunParamHasBeenSet() const
{
    return m_advanceRunParamHasBeenSet;
}

vector<string> GetAdvanceRunParamsRequest::GetOriginalParams() const
{
    return m_originalParams;
}

void GetAdvanceRunParamsRequest::SetOriginalParams(const vector<string>& _originalParams)
{
    m_originalParams = _originalParams;
    m_originalParamsHasBeenSet = true;
}

bool GetAdvanceRunParamsRequest::OriginalParamsHasBeenSet() const
{
    return m_originalParamsHasBeenSet;
}


