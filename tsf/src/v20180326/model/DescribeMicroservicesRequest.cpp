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

#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeMicroservicesRequest::DescribeMicroservicesRequest() :
    m_namespaceIdHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_microserviceIdListHasBeenSet(false),
    m_microserviceNameListHasBeenSet(false),
    m_configCenterInstanceIdHasBeenSet(false)
{
}

string DescribeMicroservicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_microserviceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_microserviceIdList.begin(); itr != m_microserviceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_microserviceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_microserviceNameList.begin(); itr != m_microserviceNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configCenterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCenterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configCenterInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMicroservicesRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeMicroservicesRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeMicroservicesRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeMicroservicesRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeMicroservicesRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeMicroservicesRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeMicroservicesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeMicroservicesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeMicroservicesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeMicroservicesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeMicroservicesRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeMicroservicesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeMicroservicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMicroservicesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMicroservicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeMicroservicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMicroservicesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMicroservicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeMicroservicesRequest::GetStatus() const
{
    return m_status;
}

void DescribeMicroservicesRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMicroservicesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeMicroservicesRequest::GetMicroserviceIdList() const
{
    return m_microserviceIdList;
}

void DescribeMicroservicesRequest::SetMicroserviceIdList(const vector<string>& _microserviceIdList)
{
    m_microserviceIdList = _microserviceIdList;
    m_microserviceIdListHasBeenSet = true;
}

bool DescribeMicroservicesRequest::MicroserviceIdListHasBeenSet() const
{
    return m_microserviceIdListHasBeenSet;
}

vector<string> DescribeMicroservicesRequest::GetMicroserviceNameList() const
{
    return m_microserviceNameList;
}

void DescribeMicroservicesRequest::SetMicroserviceNameList(const vector<string>& _microserviceNameList)
{
    m_microserviceNameList = _microserviceNameList;
    m_microserviceNameListHasBeenSet = true;
}

bool DescribeMicroservicesRequest::MicroserviceNameListHasBeenSet() const
{
    return m_microserviceNameListHasBeenSet;
}

string DescribeMicroservicesRequest::GetConfigCenterInstanceId() const
{
    return m_configCenterInstanceId;
}

void DescribeMicroservicesRequest::SetConfigCenterInstanceId(const string& _configCenterInstanceId)
{
    m_configCenterInstanceId = _configCenterInstanceId;
    m_configCenterInstanceIdHasBeenSet = true;
}

bool DescribeMicroservicesRequest::ConfigCenterInstanceIdHasBeenSet() const
{
    return m_configCenterInstanceIdHasBeenSet;
}


