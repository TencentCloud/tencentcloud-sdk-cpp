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

#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveRecordPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

CreateLiveRecordPlanRequest::CreateLiveRecordPlanRequest() :
    m_planNameHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_recordStorageTimeHasBeenSet(false),
    m_liveChannelIdsHasBeenSet(false)
{
}

string CreateLiveRecordPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planType, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStorageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStorageTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordStorageTime, allocator);
    }

    if (m_liveChannelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_liveChannelIds.begin(); itr != m_liveChannelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveRecordPlanRequest::GetPlanName() const
{
    return m_planName;
}

void CreateLiveRecordPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool CreateLiveRecordPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

int64_t CreateLiveRecordPlanRequest::GetPlanType() const
{
    return m_planType;
}

void CreateLiveRecordPlanRequest::SetPlanType(const int64_t& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool CreateLiveRecordPlanRequest::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string CreateLiveRecordPlanRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateLiveRecordPlanRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateLiveRecordPlanRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateLiveRecordPlanRequest::GetRecordStorageTime() const
{
    return m_recordStorageTime;
}

void CreateLiveRecordPlanRequest::SetRecordStorageTime(const int64_t& _recordStorageTime)
{
    m_recordStorageTime = _recordStorageTime;
    m_recordStorageTimeHasBeenSet = true;
}

bool CreateLiveRecordPlanRequest::RecordStorageTimeHasBeenSet() const
{
    return m_recordStorageTimeHasBeenSet;
}

vector<string> CreateLiveRecordPlanRequest::GetLiveChannelIds() const
{
    return m_liveChannelIds;
}

void CreateLiveRecordPlanRequest::SetLiveChannelIds(const vector<string>& _liveChannelIds)
{
    m_liveChannelIds = _liveChannelIds;
    m_liveChannelIdsHasBeenSet = true;
}

bool CreateLiveRecordPlanRequest::LiveChannelIdsHasBeenSet() const
{
    return m_liveChannelIdsHasBeenSet;
}


