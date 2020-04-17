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

#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

ListClsLogTopicsRequest::ListClsLogTopicsRequest() :
    m_channelHasBeenSet(false)
{
}

string ListClsLogTopicsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_channel.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListClsLogTopicsRequest::GetChannel() const
{
    return m_channel;
}

void ListClsLogTopicsRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ListClsLogTopicsRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


