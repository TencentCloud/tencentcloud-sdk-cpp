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

#include <tencentcloud/lke/v20231130/model/GetVarListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetVarListRequest::GetVarListRequest() :
    m_appBizIdHasBeenSet(false),
    m_varIdsHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_varTypeHasBeenSet(false)
{
}

string GetVarListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_varIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_varIds.begin(); itr != m_varIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
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

    if (m_varTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetVarListRequest::GetAppBizId() const
{
    return m_appBizId;
}

void GetVarListRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool GetVarListRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

vector<string> GetVarListRequest::GetVarIds() const
{
    return m_varIds;
}

void GetVarListRequest::SetVarIds(const vector<string>& _varIds)
{
    m_varIds = _varIds;
    m_varIdsHasBeenSet = true;
}

bool GetVarListRequest::VarIdsHasBeenSet() const
{
    return m_varIdsHasBeenSet;
}

string GetVarListRequest::GetKeyword() const
{
    return m_keyword;
}

void GetVarListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool GetVarListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t GetVarListRequest::GetOffset() const
{
    return m_offset;
}

void GetVarListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetVarListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetVarListRequest::GetLimit() const
{
    return m_limit;
}

void GetVarListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetVarListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetVarListRequest::GetVarType() const
{
    return m_varType;
}

void GetVarListRequest::SetVarType(const string& _varType)
{
    m_varType = _varType;
    m_varTypeHasBeenSet = true;
}

bool GetVarListRequest::VarTypeHasBeenSet() const
{
    return m_varTypeHasBeenSet;
}


