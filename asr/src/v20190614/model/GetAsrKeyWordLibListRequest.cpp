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

#include <tencentcloud/asr/v20190614/model/GetAsrKeyWordLibListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

GetAsrKeyWordLibListRequest::GetAsrKeyWordLibListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_specifyNamesHasBeenSet(false),
    m_onlySelfHasBeenSet(false)
{
}

string GetAsrKeyWordLibListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_specifyNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_specifyNames.begin(); itr != m_specifyNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlySelfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlySelf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlySelf, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetAsrKeyWordLibListRequest::GetOffset() const
{
    return m_offset;
}

void GetAsrKeyWordLibListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetAsrKeyWordLibListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetAsrKeyWordLibListRequest::GetLimit() const
{
    return m_limit;
}

void GetAsrKeyWordLibListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetAsrKeyWordLibListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> GetAsrKeyWordLibListRequest::GetSpecifyNames() const
{
    return m_specifyNames;
}

void GetAsrKeyWordLibListRequest::SetSpecifyNames(const vector<string>& _specifyNames)
{
    m_specifyNames = _specifyNames;
    m_specifyNamesHasBeenSet = true;
}

bool GetAsrKeyWordLibListRequest::SpecifyNamesHasBeenSet() const
{
    return m_specifyNamesHasBeenSet;
}

bool GetAsrKeyWordLibListRequest::GetOnlySelf() const
{
    return m_onlySelf;
}

void GetAsrKeyWordLibListRequest::SetOnlySelf(const bool& _onlySelf)
{
    m_onlySelf = _onlySelf;
    m_onlySelfHasBeenSet = true;
}

bool GetAsrKeyWordLibListRequest::OnlySelfHasBeenSet() const
{
    return m_onlySelfHasBeenSet;
}


