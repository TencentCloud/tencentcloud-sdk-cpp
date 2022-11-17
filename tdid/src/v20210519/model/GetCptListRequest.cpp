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

#include <tencentcloud/tdid/v20210519/model/GetCptListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetCptListRequest::GetCptListRequest() :
    m_displayStartHasBeenSet(false),
    m_displayLengthHasBeenSet(false),
    m_cptTypeHasBeenSet(false)
{
}

string GetCptListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_displayStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayStart, allocator);
    }

    if (m_displayLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayLength, allocator);
    }

    if (m_cptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cptType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetCptListRequest::GetDisplayStart() const
{
    return m_displayStart;
}

void GetCptListRequest::SetDisplayStart(const uint64_t& _displayStart)
{
    m_displayStart = _displayStart;
    m_displayStartHasBeenSet = true;
}

bool GetCptListRequest::DisplayStartHasBeenSet() const
{
    return m_displayStartHasBeenSet;
}

uint64_t GetCptListRequest::GetDisplayLength() const
{
    return m_displayLength;
}

void GetCptListRequest::SetDisplayLength(const uint64_t& _displayLength)
{
    m_displayLength = _displayLength;
    m_displayLengthHasBeenSet = true;
}

bool GetCptListRequest::DisplayLengthHasBeenSet() const
{
    return m_displayLengthHasBeenSet;
}

uint64_t GetCptListRequest::GetCptType() const
{
    return m_cptType;
}

void GetCptListRequest::SetCptType(const uint64_t& _cptType)
{
    m_cptType = _cptType;
    m_cptTypeHasBeenSet = true;
}

bool GetCptListRequest::CptTypeHasBeenSet() const
{
    return m_cptTypeHasBeenSet;
}


