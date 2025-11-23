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

#include <tencentcloud/ctem/v20231128/model/IgnoreDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

IgnoreDataRequest::IgnoreDataRequest() :
    m_idsHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_customerIdListHasBeenSet(false),
    m_isAggregationHasBeenSet(false),
    m_ignoredHasBeenSet(false),
    m_isAffectOtherHasBeenSet(false)
{
}

string IgnoreDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_customerIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerIdList.begin(); itr != m_customerIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isAggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAggregation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAggregation, allocator);
    }

    if (m_ignoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ignored";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignored, allocator);
    }

    if (m_isAffectOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAffectOther";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAffectOther, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> IgnoreDataRequest::GetIds() const
{
    return m_ids;
}

void IgnoreDataRequest::SetIds(const vector<int64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool IgnoreDataRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

string IgnoreDataRequest::GetModule() const
{
    return m_module;
}

void IgnoreDataRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool IgnoreDataRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<int64_t> IgnoreDataRequest::GetCustomerIdList() const
{
    return m_customerIdList;
}

void IgnoreDataRequest::SetCustomerIdList(const vector<int64_t>& _customerIdList)
{
    m_customerIdList = _customerIdList;
    m_customerIdListHasBeenSet = true;
}

bool IgnoreDataRequest::CustomerIdListHasBeenSet() const
{
    return m_customerIdListHasBeenSet;
}

bool IgnoreDataRequest::GetIsAggregation() const
{
    return m_isAggregation;
}

void IgnoreDataRequest::SetIsAggregation(const bool& _isAggregation)
{
    m_isAggregation = _isAggregation;
    m_isAggregationHasBeenSet = true;
}

bool IgnoreDataRequest::IsAggregationHasBeenSet() const
{
    return m_isAggregationHasBeenSet;
}

bool IgnoreDataRequest::GetIgnored() const
{
    return m_ignored;
}

void IgnoreDataRequest::SetIgnored(const bool& _ignored)
{
    m_ignored = _ignored;
    m_ignoredHasBeenSet = true;
}

bool IgnoreDataRequest::IgnoredHasBeenSet() const
{
    return m_ignoredHasBeenSet;
}

bool IgnoreDataRequest::GetIsAffectOther() const
{
    return m_isAffectOther;
}

void IgnoreDataRequest::SetIsAffectOther(const bool& _isAffectOther)
{
    m_isAffectOther = _isAffectOther;
    m_isAffectOtherHasBeenSet = true;
}

bool IgnoreDataRequest::IsAffectOtherHasBeenSet() const
{
    return m_isAffectOtherHasBeenSet;
}


