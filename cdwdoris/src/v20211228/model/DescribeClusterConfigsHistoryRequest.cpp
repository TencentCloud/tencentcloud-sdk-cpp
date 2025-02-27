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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeClusterConfigsHistoryRequest::DescribeClusterConfigsHistoryRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configFileNamesHasBeenSet(false),
    m_computeGroupIdsHasBeenSet(false)
{
}

string DescribeClusterConfigsHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configFileNames.begin(); itr != m_configFileNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_computeGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeGroupIds.begin(); itr != m_computeGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterConfigsHistoryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeClusterConfigsHistoryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeClusterConfigsHistoryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeClusterConfigsHistoryRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeClusterConfigsHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeClusterConfigsHistoryRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeClusterConfigsHistoryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeClusterConfigsHistoryRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeClusterConfigsHistoryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeClusterConfigsHistoryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeClusterConfigsHistoryRequest::GetConfigFileNames() const
{
    return m_configFileNames;
}

void DescribeClusterConfigsHistoryRequest::SetConfigFileNames(const vector<string>& _configFileNames)
{
    m_configFileNames = _configFileNames;
    m_configFileNamesHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::ConfigFileNamesHasBeenSet() const
{
    return m_configFileNamesHasBeenSet;
}

vector<string> DescribeClusterConfigsHistoryRequest::GetComputeGroupIds() const
{
    return m_computeGroupIds;
}

void DescribeClusterConfigsHistoryRequest::SetComputeGroupIds(const vector<string>& _computeGroupIds)
{
    m_computeGroupIds = _computeGroupIds;
    m_computeGroupIdsHasBeenSet = true;
}

bool DescribeClusterConfigsHistoryRequest::ComputeGroupIdsHasBeenSet() const
{
    return m_computeGroupIdsHasBeenSet;
}


