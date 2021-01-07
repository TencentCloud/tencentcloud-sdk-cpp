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

#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

DescribeCloudMusicRequest::DescribeCloudMusicRequest() :
    m_musicIdHasBeenSet(false),
    m_musicTypeHasBeenSet(false)
{
}

string DescribeCloudMusicRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_musicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MusicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_musicType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudMusicRequest::GetMusicId() const
{
    return m_musicId;
}

void DescribeCloudMusicRequest::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool DescribeCloudMusicRequest::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string DescribeCloudMusicRequest::GetMusicType() const
{
    return m_musicType;
}

void DescribeCloudMusicRequest::SetMusicType(const string& _musicType)
{
    m_musicType = _musicType;
    m_musicTypeHasBeenSet = true;
}

bool DescribeCloudMusicRequest::MusicTypeHasBeenSet() const
{
    return m_musicTypeHasBeenSet;
}


