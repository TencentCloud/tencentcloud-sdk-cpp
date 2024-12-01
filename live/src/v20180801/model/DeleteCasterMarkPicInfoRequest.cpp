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

#include <tencentcloud/live/v20180801/model/DeleteCasterMarkPicInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DeleteCasterMarkPicInfoRequest::DeleteCasterMarkPicInfoRequest() :
    m_casterIdHasBeenSet(false),
    m_markPicIndexHasBeenSet(false)
{
}

string DeleteCasterMarkPicInfoRequest::ToJsonString() const
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

    if (m_markPicIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_markPicIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteCasterMarkPicInfoRequest::GetCasterId() const
{
    return m_casterId;
}

void DeleteCasterMarkPicInfoRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool DeleteCasterMarkPicInfoRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

int64_t DeleteCasterMarkPicInfoRequest::GetMarkPicIndex() const
{
    return m_markPicIndex;
}

void DeleteCasterMarkPicInfoRequest::SetMarkPicIndex(const int64_t& _markPicIndex)
{
    m_markPicIndex = _markPicIndex;
    m_markPicIndexHasBeenSet = true;
}

bool DeleteCasterMarkPicInfoRequest::MarkPicIndexHasBeenSet() const
{
    return m_markPicIndexHasBeenSet;
}


