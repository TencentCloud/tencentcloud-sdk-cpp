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

#include <tencentcloud/bm/v20180423/model/DescribePsaRegulationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DescribePsaRegulationsRequest::DescribePsaRegulationsRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_psaIdsHasBeenSet(false),
    m_psaNamesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribePsaRegulationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_psaIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_psaIds.begin(); itr != m_psaIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_psaNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_psaNames.begin(); itr != m_psaNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribePsaRegulationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribePsaRegulationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribePsaRegulationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribePsaRegulationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribePsaRegulationsRequest::GetPsaIds() const
{
    return m_psaIds;
}

void DescribePsaRegulationsRequest::SetPsaIds(const vector<string>& _psaIds)
{
    m_psaIds = _psaIds;
    m_psaIdsHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::PsaIdsHasBeenSet() const
{
    return m_psaIdsHasBeenSet;
}

vector<string> DescribePsaRegulationsRequest::GetPsaNames() const
{
    return m_psaNames;
}

void DescribePsaRegulationsRequest::SetPsaNames(const vector<string>& _psaNames)
{
    m_psaNames = _psaNames;
    m_psaNamesHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::PsaNamesHasBeenSet() const
{
    return m_psaNamesHasBeenSet;
}

vector<Tag> DescribePsaRegulationsRequest::GetTags() const
{
    return m_tags;
}

void DescribePsaRegulationsRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribePsaRegulationsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribePsaRegulationsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

uint64_t DescribePsaRegulationsRequest::GetOrder() const
{
    return m_order;
}

void DescribePsaRegulationsRequest::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribePsaRegulationsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


