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

#include <tencentcloud/batch/v20170312/model/SubmitJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

SubmitJobRequest::SubmitJobRequest() :
    m_placementHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string SubmitJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jobHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_job.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Placement SubmitJobRequest::GetPlacement() const
{
    return m_placement;
}

void SubmitJobRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool SubmitJobRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

Job SubmitJobRequest::GetJob() const
{
    return m_job;
}

void SubmitJobRequest::SetJob(const Job& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool SubmitJobRequest::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string SubmitJobRequest::GetClientToken() const
{
    return m_clientToken;
}

void SubmitJobRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool SubmitJobRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


