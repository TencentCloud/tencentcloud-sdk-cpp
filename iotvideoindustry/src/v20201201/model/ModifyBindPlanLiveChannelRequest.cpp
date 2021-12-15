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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindPlanLiveChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifyBindPlanLiveChannelRequest::ModifyBindPlanLiveChannelRequest() :
    m_planIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_liveChannelIdsHasBeenSet(false)
{
}

string ModifyBindPlanLiveChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
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


string ModifyBindPlanLiveChannelRequest::GetPlanId() const
{
    return m_planId;
}

void ModifyBindPlanLiveChannelRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ModifyBindPlanLiveChannelRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

int64_t ModifyBindPlanLiveChannelRequest::GetType() const
{
    return m_type;
}

void ModifyBindPlanLiveChannelRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyBindPlanLiveChannelRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ModifyBindPlanLiveChannelRequest::GetLiveChannelIds() const
{
    return m_liveChannelIds;
}

void ModifyBindPlanLiveChannelRequest::SetLiveChannelIds(const vector<string>& _liveChannelIds)
{
    m_liveChannelIds = _liveChannelIds;
    m_liveChannelIdsHasBeenSet = true;
}

bool ModifyBindPlanLiveChannelRequest::LiveChannelIdsHasBeenSet() const
{
    return m_liveChannelIdsHasBeenSet;
}


