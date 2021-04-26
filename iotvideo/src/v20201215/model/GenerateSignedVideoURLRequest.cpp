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

#include <tencentcloud/iotvideo/v20201215/model/GenerateSignedVideoURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

GenerateSignedVideoURLRequest::GenerateSignedVideoURLRequest() :
    m_videoURLHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string GenerateSignedVideoURLRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_videoURLHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_videoURL.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateSignedVideoURLRequest::GetVideoURL() const
{
    return m_videoURL;
}

void GenerateSignedVideoURLRequest::SetVideoURL(const string& _videoURL)
{
    m_videoURL = _videoURL;
    m_videoURLHasBeenSet = true;
}

bool GenerateSignedVideoURLRequest::VideoURLHasBeenSet() const
{
    return m_videoURLHasBeenSet;
}

uint64_t GenerateSignedVideoURLRequest::GetExpireTime() const
{
    return m_expireTime;
}

void GenerateSignedVideoURLRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GenerateSignedVideoURLRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


