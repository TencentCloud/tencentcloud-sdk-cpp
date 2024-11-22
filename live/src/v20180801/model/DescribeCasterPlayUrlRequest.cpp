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

#include <tencentcloud/live/v20180801/model/DescribeCasterPlayUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeCasterPlayUrlRequest::DescribeCasterPlayUrlRequest() :
    m_casterIdHasBeenSet(false),
    m_playUrlTypeHasBeenSet(false),
    m_playUrlIndexHasBeenSet(false)
{
}

string DescribeCasterPlayUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_casterId, allocator);
    }

    if (m_playUrlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayUrlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playUrlType, allocator);
    }

    if (m_playUrlIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayUrlIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playUrlIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCasterPlayUrlRequest::GetCasterId() const
{
    return m_casterId;
}

void DescribeCasterPlayUrlRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool DescribeCasterPlayUrlRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

int64_t DescribeCasterPlayUrlRequest::GetPlayUrlType() const
{
    return m_playUrlType;
}

void DescribeCasterPlayUrlRequest::SetPlayUrlType(const int64_t& _playUrlType)
{
    m_playUrlType = _playUrlType;
    m_playUrlTypeHasBeenSet = true;
}

bool DescribeCasterPlayUrlRequest::PlayUrlTypeHasBeenSet() const
{
    return m_playUrlTypeHasBeenSet;
}

int64_t DescribeCasterPlayUrlRequest::GetPlayUrlIndex() const
{
    return m_playUrlIndex;
}

void DescribeCasterPlayUrlRequest::SetPlayUrlIndex(const int64_t& _playUrlIndex)
{
    m_playUrlIndex = _playUrlIndex;
    m_playUrlIndexHasBeenSet = true;
}

bool DescribeCasterPlayUrlRequest::PlayUrlIndexHasBeenSet() const
{
    return m_playUrlIndexHasBeenSet;
}


