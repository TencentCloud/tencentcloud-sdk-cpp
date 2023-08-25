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

#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyApiAnalyzeStatusRequest::ModifyApiAnalyzeStatusRequest() :
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_targetListHasBeenSet(false)
{
}

string ModifyApiAnalyzeStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetList.begin(); itr != m_targetList.end(); ++itr, ++i)
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


uint64_t ModifyApiAnalyzeStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyApiAnalyzeStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyApiAnalyzeStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyApiAnalyzeStatusRequest::GetDomain() const
{
    return m_domain;
}

void ModifyApiAnalyzeStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyApiAnalyzeStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyApiAnalyzeStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApiAnalyzeStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApiAnalyzeStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<TargetEntity> ModifyApiAnalyzeStatusRequest::GetTargetList() const
{
    return m_targetList;
}

void ModifyApiAnalyzeStatusRequest::SetTargetList(const vector<TargetEntity>& _targetList)
{
    m_targetList = _targetList;
    m_targetListHasBeenSet = true;
}

bool ModifyApiAnalyzeStatusRequest::TargetListHasBeenSet() const
{
    return m_targetListHasBeenSet;
}


