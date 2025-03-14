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

#include <tencentcloud/dlc/v20210125/model/DescribeTaskMonitorInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeTaskMonitorInfosRequest::DescribeTaskMonitorInfosRequest() :
    m_taskIdListHasBeenSet(false),
    m_houseNameHasBeenSet(false),
    m_createTimeStartHasBeenSet(false),
    m_createTimeEndHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeTaskMonitorInfosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_houseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_houseName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeTaskMonitorInfosRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void DescribeTaskMonitorInfosRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string DescribeTaskMonitorInfosRequest::GetHouseName() const
{
    return m_houseName;
}

void DescribeTaskMonitorInfosRequest::SetHouseName(const string& _houseName)
{
    m_houseName = _houseName;
    m_houseNameHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::HouseNameHasBeenSet() const
{
    return m_houseNameHasBeenSet;
}

string DescribeTaskMonitorInfosRequest::GetCreateTimeStart() const
{
    return m_createTimeStart;
}

void DescribeTaskMonitorInfosRequest::SetCreateTimeStart(const string& _createTimeStart)
{
    m_createTimeStart = _createTimeStart;
    m_createTimeStartHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::CreateTimeStartHasBeenSet() const
{
    return m_createTimeStartHasBeenSet;
}

string DescribeTaskMonitorInfosRequest::GetCreateTimeEnd() const
{
    return m_createTimeEnd;
}

void DescribeTaskMonitorInfosRequest::SetCreateTimeEnd(const string& _createTimeEnd)
{
    m_createTimeEnd = _createTimeEnd;
    m_createTimeEndHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::CreateTimeEndHasBeenSet() const
{
    return m_createTimeEndHasBeenSet;
}

int64_t DescribeTaskMonitorInfosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTaskMonitorInfosRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTaskMonitorInfosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTaskMonitorInfosRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTaskMonitorInfosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


