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

#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeTelCallInfoRequest::DescribeTelCallInfoRequest() :
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_sdkAppIdListHasBeenSet(false)
{
}

string DescribeTelCallInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_sdkAppIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sdkAppIdList.begin(); itr != m_sdkAppIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTelCallInfoRequest::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void DescribeTelCallInfoRequest::SetStartTimeStamp(const int64_t& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool DescribeTelCallInfoRequest::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t DescribeTelCallInfoRequest::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void DescribeTelCallInfoRequest::SetEndTimeStamp(const int64_t& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool DescribeTelCallInfoRequest::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

vector<int64_t> DescribeTelCallInfoRequest::GetSdkAppIdList() const
{
    return m_sdkAppIdList;
}

void DescribeTelCallInfoRequest::SetSdkAppIdList(const vector<int64_t>& _sdkAppIdList)
{
    m_sdkAppIdList = _sdkAppIdList;
    m_sdkAppIdListHasBeenSet = true;
}

bool DescribeTelCallInfoRequest::SdkAppIdListHasBeenSet() const
{
    return m_sdkAppIdListHasBeenSet;
}


