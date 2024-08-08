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

#include <tencentcloud/cls/v20201016/model/ModifyConsoleSharingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyConsoleSharingRequest::ModifyConsoleSharingRequest() :
    m_sharingIdHasBeenSet(false),
    m_durationMillisecondsHasBeenSet(false)
{
}

string ModifyConsoleSharingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sharingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sharingId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationMilliseconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConsoleSharingRequest::GetSharingId() const
{
    return m_sharingId;
}

void ModifyConsoleSharingRequest::SetSharingId(const string& _sharingId)
{
    m_sharingId = _sharingId;
    m_sharingIdHasBeenSet = true;
}

bool ModifyConsoleSharingRequest::SharingIdHasBeenSet() const
{
    return m_sharingIdHasBeenSet;
}

uint64_t ModifyConsoleSharingRequest::GetDurationMilliseconds() const
{
    return m_durationMilliseconds;
}

void ModifyConsoleSharingRequest::SetDurationMilliseconds(const uint64_t& _durationMilliseconds)
{
    m_durationMilliseconds = _durationMilliseconds;
    m_durationMillisecondsHasBeenSet = true;
}

bool ModifyConsoleSharingRequest::DurationMillisecondsHasBeenSet() const
{
    return m_durationMillisecondsHasBeenSet;
}


