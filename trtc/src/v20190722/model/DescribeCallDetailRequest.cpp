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

#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace rapidjson;
using namespace std;

DescribeCallDetailRequest::DescribeCallDetailRequest() :
    m_commIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

string DescribeCallDetailRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_commId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dataType.begin(); itr != m_dataType.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCallDetailRequest::GetCommId() const
{
    return m_commId;
}

void DescribeCallDetailRequest::SetCommId(const string& _commId)
{
    m_commId = _commId;
    m_commIdHasBeenSet = true;
}

bool DescribeCallDetailRequest::CommIdHasBeenSet() const
{
    return m_commIdHasBeenSet;
}

uint64_t DescribeCallDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCallDetailRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCallDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeCallDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCallDetailRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCallDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCallDetailRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeCallDetailRequest::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeCallDetailRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> DescribeCallDetailRequest::GetUserIds() const
{
    return m_userIds;
}

void DescribeCallDetailRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool DescribeCallDetailRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> DescribeCallDetailRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeCallDetailRequest::SetDataType(const vector<string>& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeCallDetailRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}


