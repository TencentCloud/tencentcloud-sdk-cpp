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

#include <tencentcloud/live/v20180801/model/SetLiveWatermarkStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

SetLiveWatermarkStatusRequest::SetLiveWatermarkStatusRequest() :
    m_watermarkIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string SetLiveWatermarkStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_watermarkIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_watermarkId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SetLiveWatermarkStatusRequest::GetWatermarkId() const
{
    return m_watermarkId;
}

void SetLiveWatermarkStatusRequest::SetWatermarkId(const int64_t& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool SetLiveWatermarkStatusRequest::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

int64_t SetLiveWatermarkStatusRequest::GetStatus() const
{
    return m_status;
}

void SetLiveWatermarkStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SetLiveWatermarkStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


