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

#include <tencentcloud/iotexplorer/v20190423/model/GetTWeCallPkgListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetTWeCallPkgListRequest::GetTWeCallPkgListRequest() :
    m_miniProgramAppIdHasBeenSet(false),
    m_pkgTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetTWeCallPkgListRequest::ToJsonString() const
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

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pkgType.begin(); itr != m_pkgType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string GetTWeCallPkgListRequest::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void GetTWeCallPkgListRequest::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool GetTWeCallPkgListRequest::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}

vector<int64_t> GetTWeCallPkgListRequest::GetPkgType() const
{
    return m_pkgType;
}

void GetTWeCallPkgListRequest::SetPkgType(const vector<int64_t>& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool GetTWeCallPkgListRequest::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

vector<int64_t> GetTWeCallPkgListRequest::GetStatus() const
{
    return m_status;
}

void GetTWeCallPkgListRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GetTWeCallPkgListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t GetTWeCallPkgListRequest::GetOffset() const
{
    return m_offset;
}

void GetTWeCallPkgListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetTWeCallPkgListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetTWeCallPkgListRequest::GetLimit() const
{
    return m_limit;
}

void GetTWeCallPkgListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetTWeCallPkgListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


