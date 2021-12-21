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

#include <tencentcloud/wav/v20210129/model/QueryVehicleInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

QueryVehicleInfoListRequest::QueryVehicleInfoListRequest() :
    m_cursorHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string QueryVehicleInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
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


string QueryVehicleInfoListRequest::GetCursor() const
{
    return m_cursor;
}

void QueryVehicleInfoListRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool QueryVehicleInfoListRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t QueryVehicleInfoListRequest::GetLimit() const
{
    return m_limit;
}

void QueryVehicleInfoListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QueryVehicleInfoListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


