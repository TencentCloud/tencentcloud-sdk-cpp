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

#include <tencentcloud/iss/v20230517/model/AddRecordPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordPlanRequest::AddRecordPlanRequest() :
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_repairModeHasBeenSet(false)
{
}

string AddRecordPlanRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifeCycle.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationId.begin(); itr != m_organizationId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_repairModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repairMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRecordPlanRequest::GetPlanName() const
{
    return m_planName;
}

void AddRecordPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool AddRecordPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string AddRecordPlanRequest::GetTemplateId() const
{
    return m_templateId;
}

void AddRecordPlanRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AddRecordPlanRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

LifeCycleData AddRecordPlanRequest::GetLifeCycle() const
{
    return m_lifeCycle;
}

void AddRecordPlanRequest::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool AddRecordPlanRequest::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

string AddRecordPlanRequest::GetDescribe() const
{
    return m_describe;
}

void AddRecordPlanRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool AddRecordPlanRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string AddRecordPlanRequest::GetStreamType() const
{
    return m_streamType;
}

void AddRecordPlanRequest::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool AddRecordPlanRequest::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

vector<ChannelInfo> AddRecordPlanRequest::GetChannels() const
{
    return m_channels;
}

void AddRecordPlanRequest::SetChannels(const vector<ChannelInfo>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool AddRecordPlanRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

vector<string> AddRecordPlanRequest::GetOrganizationId() const
{
    return m_organizationId;
}

void AddRecordPlanRequest::SetOrganizationId(const vector<string>& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool AddRecordPlanRequest::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

int64_t AddRecordPlanRequest::GetRepairMode() const
{
    return m_repairMode;
}

void AddRecordPlanRequest::SetRepairMode(const int64_t& _repairMode)
{
    m_repairMode = _repairMode;
    m_repairModeHasBeenSet = true;
}

bool AddRecordPlanRequest::RepairModeHasBeenSet() const
{
    return m_repairModeHasBeenSet;
}


