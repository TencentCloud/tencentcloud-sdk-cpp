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

#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ExportAttributeLabelRequest::ExportAttributeLabelRequest() :
    m_botBizIdHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_attributeBizIdsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ExportAttributeLabelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributeBizIds.begin(); itr != m_attributeBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportAttributeLabelRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ExportAttributeLabelRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ExportAttributeLabelRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string ExportAttributeLabelRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ExportAttributeLabelRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ExportAttributeLabelRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ExportAttributeLabelRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ExportAttributeLabelRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ExportAttributeLabelRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

vector<string> ExportAttributeLabelRequest::GetAttributeBizIds() const
{
    return m_attributeBizIds;
}

void ExportAttributeLabelRequest::SetAttributeBizIds(const vector<string>& _attributeBizIds)
{
    m_attributeBizIds = _attributeBizIds;
    m_attributeBizIdsHasBeenSet = true;
}

bool ExportAttributeLabelRequest::AttributeBizIdsHasBeenSet() const
{
    return m_attributeBizIdsHasBeenSet;
}

AttributeFilters ExportAttributeLabelRequest::GetFilters() const
{
    return m_filters;
}

void ExportAttributeLabelRequest::SetFilters(const AttributeFilters& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportAttributeLabelRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


