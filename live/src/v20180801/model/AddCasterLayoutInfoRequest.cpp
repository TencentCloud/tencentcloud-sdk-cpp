/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/AddCasterLayoutInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AddCasterLayoutInfoRequest::AddCasterLayoutInfoRequest() :
    m_casterIdHasBeenSet(false),
    m_layoutInfoHasBeenSet(false)
{
}

string AddCasterLayoutInfoRequest::ToJsonString() const
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

    if (m_layoutInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t AddCasterLayoutInfoRequest::GetCasterId() const
{
    return m_casterId;
}

void AddCasterLayoutInfoRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool AddCasterLayoutInfoRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

CasterLayoutInfo AddCasterLayoutInfoRequest::GetLayoutInfo() const
{
    return m_layoutInfo;
}

void AddCasterLayoutInfoRequest::SetLayoutInfo(const CasterLayoutInfo& _layoutInfo)
{
    m_layoutInfo = _layoutInfo;
    m_layoutInfoHasBeenSet = true;
}

bool AddCasterLayoutInfoRequest::LayoutInfoHasBeenSet() const
{
    return m_layoutInfoHasBeenSet;
}


