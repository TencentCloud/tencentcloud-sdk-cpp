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

#include <tencentcloud/iotvideoindustry/v20201201/model/CreateLiveChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

CreateLiveChannelRequest::CreateLiveChannelRequest() :
    m_liveChannelNameHasBeenSet(false),
    m_liveChannelTypeHasBeenSet(false)
{
}

string CreateLiveChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveChannelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveChannelName.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_liveChannelType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveChannelRequest::GetLiveChannelName() const
{
    return m_liveChannelName;
}

void CreateLiveChannelRequest::SetLiveChannelName(const string& _liveChannelName)
{
    m_liveChannelName = _liveChannelName;
    m_liveChannelNameHasBeenSet = true;
}

bool CreateLiveChannelRequest::LiveChannelNameHasBeenSet() const
{
    return m_liveChannelNameHasBeenSet;
}

int64_t CreateLiveChannelRequest::GetLiveChannelType() const
{
    return m_liveChannelType;
}

void CreateLiveChannelRequest::SetLiveChannelType(const int64_t& _liveChannelType)
{
    m_liveChannelType = _liveChannelType;
    m_liveChannelTypeHasBeenSet = true;
}

bool CreateLiveChannelRequest::LiveChannelTypeHasBeenSet() const
{
    return m_liveChannelTypeHasBeenSet;
}


