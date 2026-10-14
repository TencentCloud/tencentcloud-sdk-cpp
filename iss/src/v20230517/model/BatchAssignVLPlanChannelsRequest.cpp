/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iss/v20230517/model/BatchAssignVLPlanChannelsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BatchAssignVLPlanChannelsRequest::BatchAssignVLPlanChannelsRequest() :
    m_vLPlanIdHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_channelIdsHasBeenSet(false),
    m_organizationIdsHasBeenSet(false)
{
}

string BatchAssignVLPlanChannelsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vLPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vLPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cmd, allocator);
    }

    if (m_channelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIds.begin(); itr != m_channelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationIds.begin(); itr != m_organizationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchAssignVLPlanChannelsRequest::GetVLPlanId() const
{
    return m_vLPlanId;
}

void BatchAssignVLPlanChannelsRequest::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool BatchAssignVLPlanChannelsRequest::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

int64_t BatchAssignVLPlanChannelsRequest::GetCmd() const
{
    return m_cmd;
}

void BatchAssignVLPlanChannelsRequest::SetCmd(const int64_t& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool BatchAssignVLPlanChannelsRequest::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

vector<string> BatchAssignVLPlanChannelsRequest::GetChannelIds() const
{
    return m_channelIds;
}

void BatchAssignVLPlanChannelsRequest::SetChannelIds(const vector<string>& _channelIds)
{
    m_channelIds = _channelIds;
    m_channelIdsHasBeenSet = true;
}

bool BatchAssignVLPlanChannelsRequest::ChannelIdsHasBeenSet() const
{
    return m_channelIdsHasBeenSet;
}

vector<string> BatchAssignVLPlanChannelsRequest::GetOrganizationIds() const
{
    return m_organizationIds;
}

void BatchAssignVLPlanChannelsRequest::SetOrganizationIds(const vector<string>& _organizationIds)
{
    m_organizationIds = _organizationIds;
    m_organizationIdsHasBeenSet = true;
}

bool BatchAssignVLPlanChannelsRequest::OrganizationIdsHasBeenSet() const
{
    return m_organizationIdsHasBeenSet;
}


