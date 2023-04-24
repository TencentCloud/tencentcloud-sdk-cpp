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

#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeStaffStatusMetricsRequest::DescribeStaffStatusMetricsRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_staffListHasBeenSet(false),
    m_groupIdListHasBeenSet(false),
    m_statusListHasBeenSet(false)
{
}

string DescribeStaffStatusMetricsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_staffListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_staffList.begin(); itr != m_staffList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdList.begin(); itr != m_groupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeStaffStatusMetricsRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeStaffStatusMetricsRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeStaffStatusMetricsRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> DescribeStaffStatusMetricsRequest::GetStaffList() const
{
    return m_staffList;
}

void DescribeStaffStatusMetricsRequest::SetStaffList(const vector<string>& _staffList)
{
    m_staffList = _staffList;
    m_staffListHasBeenSet = true;
}

bool DescribeStaffStatusMetricsRequest::StaffListHasBeenSet() const
{
    return m_staffListHasBeenSet;
}

vector<int64_t> DescribeStaffStatusMetricsRequest::GetGroupIdList() const
{
    return m_groupIdList;
}

void DescribeStaffStatusMetricsRequest::SetGroupIdList(const vector<int64_t>& _groupIdList)
{
    m_groupIdList = _groupIdList;
    m_groupIdListHasBeenSet = true;
}

bool DescribeStaffStatusMetricsRequest::GroupIdListHasBeenSet() const
{
    return m_groupIdListHasBeenSet;
}

vector<string> DescribeStaffStatusMetricsRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeStaffStatusMetricsRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeStaffStatusMetricsRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}


