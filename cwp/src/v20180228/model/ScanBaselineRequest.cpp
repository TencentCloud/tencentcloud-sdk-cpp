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

#include <tencentcloud/cwp/v20180228/model/ScanBaselineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanBaselineRequest::ScanBaselineRequest() :
    m_strategyIdListHasBeenSet(false),
    m_categoryIdListHasBeenSet(false),
    m_ruleIdListHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_uuidListHasBeenSet(false)
{
}

string ScanBaselineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_strategyIdList.begin(); itr != m_strategyIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIdList.begin(); itr != m_categoryIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ruleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdList.begin(); itr != m_ruleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuidList.begin(); itr != m_uuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ScanBaselineRequest::GetStrategyIdList() const
{
    return m_strategyIdList;
}

void ScanBaselineRequest::SetStrategyIdList(const vector<uint64_t>& _strategyIdList)
{
    m_strategyIdList = _strategyIdList;
    m_strategyIdListHasBeenSet = true;
}

bool ScanBaselineRequest::StrategyIdListHasBeenSet() const
{
    return m_strategyIdListHasBeenSet;
}

vector<uint64_t> ScanBaselineRequest::GetCategoryIdList() const
{
    return m_categoryIdList;
}

void ScanBaselineRequest::SetCategoryIdList(const vector<uint64_t>& _categoryIdList)
{
    m_categoryIdList = _categoryIdList;
    m_categoryIdListHasBeenSet = true;
}

bool ScanBaselineRequest::CategoryIdListHasBeenSet() const
{
    return m_categoryIdListHasBeenSet;
}

vector<uint64_t> ScanBaselineRequest::GetRuleIdList() const
{
    return m_ruleIdList;
}

void ScanBaselineRequest::SetRuleIdList(const vector<uint64_t>& _ruleIdList)
{
    m_ruleIdList = _ruleIdList;
    m_ruleIdListHasBeenSet = true;
}

bool ScanBaselineRequest::RuleIdListHasBeenSet() const
{
    return m_ruleIdListHasBeenSet;
}

vector<string> ScanBaselineRequest::GetQuuidList() const
{
    return m_quuidList;
}

void ScanBaselineRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool ScanBaselineRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

vector<string> ScanBaselineRequest::GetUuidList() const
{
    return m_uuidList;
}

void ScanBaselineRequest::SetUuidList(const vector<string>& _uuidList)
{
    m_uuidList = _uuidList;
    m_uuidListHasBeenSet = true;
}

bool ScanBaselineRequest::UuidListHasBeenSet() const
{
    return m_uuidListHasBeenSet;
}


