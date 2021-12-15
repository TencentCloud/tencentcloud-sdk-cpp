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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeLiveStreamRequest::DescribeLiveStreamRequest() :
    m_liveChannelIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string DescribeLiveStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveStreamRequest::GetLiveChannelId() const
{
    return m_liveChannelId;
}

void DescribeLiveStreamRequest::SetLiveChannelId(const string& _liveChannelId)
{
    m_liveChannelId = _liveChannelId;
    m_liveChannelIdHasBeenSet = true;
}

bool DescribeLiveStreamRequest::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

int64_t DescribeLiveStreamRequest::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeLiveStreamRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeLiveStreamRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


