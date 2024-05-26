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

#include <tencentcloud/iotexplorer/v20190423/model/GetAuthMiniProgramAppListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetAuthMiniProgramAppListRequest::GetAuthMiniProgramAppListRequest() :
    m_miniProgramAppIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetAuthMiniProgramAppListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_miniProgramAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniProgramAppId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetAuthMiniProgramAppListRequest::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void GetAuthMiniProgramAppListRequest::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool GetAuthMiniProgramAppListRequest::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}

int64_t GetAuthMiniProgramAppListRequest::GetOffset() const
{
    return m_offset;
}

void GetAuthMiniProgramAppListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetAuthMiniProgramAppListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetAuthMiniProgramAppListRequest::GetLimit() const
{
    return m_limit;
}

void GetAuthMiniProgramAppListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetAuthMiniProgramAppListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


