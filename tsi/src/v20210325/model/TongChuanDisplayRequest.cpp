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

#include <tencentcloud/tsi/v20210325/model/TongChuanDisplayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsi::V20210325::Model;
using namespace std;

TongChuanDisplayRequest::TongChuanDisplayRequest() :
    m_sessionUuidHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_seMaxHasBeenSet(false)
{
}

string TongChuanDisplayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNew, allocator);
    }

    if (m_seMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seMax, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TongChuanDisplayRequest::GetSessionUuid() const
{
    return m_sessionUuid;
}

void TongChuanDisplayRequest::SetSessionUuid(const string& _sessionUuid)
{
    m_sessionUuid = _sessionUuid;
    m_sessionUuidHasBeenSet = true;
}

bool TongChuanDisplayRequest::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

uint64_t TongChuanDisplayRequest::GetIsNew() const
{
    return m_isNew;
}

void TongChuanDisplayRequest::SetIsNew(const uint64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool TongChuanDisplayRequest::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

uint64_t TongChuanDisplayRequest::GetSeMax() const
{
    return m_seMax;
}

void TongChuanDisplayRequest::SetSeMax(const uint64_t& _seMax)
{
    m_seMax = _seMax;
    m_seMaxHasBeenSet = true;
}

bool TongChuanDisplayRequest::SeMaxHasBeenSet() const
{
    return m_seMaxHasBeenSet;
}


