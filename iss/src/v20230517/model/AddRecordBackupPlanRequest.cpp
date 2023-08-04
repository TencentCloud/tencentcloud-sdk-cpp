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

#include <tencentcloud/iss/v20230517/model/AddRecordBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordBackupPlanRequest::AddRecordBackupPlanRequest() :
    m_templateIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

string AddRecordBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifeCycle.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRecordBackupPlanRequest::GetTemplateId() const
{
    return m_templateId;
}

void AddRecordBackupPlanRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AddRecordBackupPlanRequest::GetPlanName() const
{
    return m_planName;
}

void AddRecordBackupPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string AddRecordBackupPlanRequest::GetDescribe() const
{
    return m_describe;
}

void AddRecordBackupPlanRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

LifeCycleData AddRecordBackupPlanRequest::GetLifeCycle() const
{
    return m_lifeCycle;
}

void AddRecordBackupPlanRequest::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

vector<ChannelInfo> AddRecordBackupPlanRequest::GetChannels() const
{
    return m_channels;
}

void AddRecordBackupPlanRequest::SetChannels(const vector<ChannelInfo>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

vector<string> AddRecordBackupPlanRequest::GetOrganizationId() const
{
    return m_organizationId;
}

void AddRecordBackupPlanRequest::SetOrganizationId(const vector<string>& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool AddRecordBackupPlanRequest::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}


