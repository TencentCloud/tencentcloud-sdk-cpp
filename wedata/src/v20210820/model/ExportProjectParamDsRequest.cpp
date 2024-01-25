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

#include <tencentcloud/wedata/v20210820/model/ExportProjectParamDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExportProjectParamDsRequest::ExportProjectParamDsRequest() :
    m_projectIdHasBeenSet(false),
    m_originDomainHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

string ExportProjectParamDsRequest::ToJsonString() const
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

    if (m_originDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportProjectParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void ExportProjectParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportProjectParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ExportProjectParamDsRequest::GetOriginDomain() const
{
    return m_originDomain;
}

void ExportProjectParamDsRequest::SetOriginDomain(const string& _originDomain)
{
    m_originDomain = _originDomain;
    m_originDomainHasBeenSet = true;
}

bool ExportProjectParamDsRequest::OriginDomainHasBeenSet() const
{
    return m_originDomainHasBeenSet;
}

string ExportProjectParamDsRequest::GetRange() const
{
    return m_range;
}

void ExportProjectParamDsRequest::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ExportProjectParamDsRequest::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

string ExportProjectParamDsRequest::GetPublishTime() const
{
    return m_publishTime;
}

void ExportProjectParamDsRequest::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool ExportProjectParamDsRequest::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

vector<string> ExportProjectParamDsRequest::GetParams() const
{
    return m_params;
}

void ExportProjectParamDsRequest::SetParams(const vector<string>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ExportProjectParamDsRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}


