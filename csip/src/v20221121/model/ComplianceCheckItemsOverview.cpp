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

#include <tencentcloud/csip/v20221121/model/ComplianceCheckItemsOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComplianceCheckItemsOverview::ComplianceCheckItemsOverview() :
    m_totalCountHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_checkTypesHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceCheckItemsOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckItemsOverview.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckItemsOverview.PassRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetUint64();
        m_passRateHasBeenSet = true;
    }

    if (value.HasMember("CheckTypes") && !value["CheckTypes"].IsNull())
    {
        if (!value["CheckTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckItemsOverview.CheckTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComplianceCheckTypeItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkTypes.push_back(item);
        }
        m_checkTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceCheckItemsOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_checkTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkTypes.begin(); itr != m_checkTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ComplianceCheckItemsOverview::GetTotalCount() const
{
    return m_totalCount;
}

void ComplianceCheckItemsOverview::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ComplianceCheckItemsOverview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t ComplianceCheckItemsOverview::GetPassRate() const
{
    return m_passRate;
}

void ComplianceCheckItemsOverview::SetPassRate(const uint64_t& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool ComplianceCheckItemsOverview::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

vector<ComplianceCheckTypeItem> ComplianceCheckItemsOverview::GetCheckTypes() const
{
    return m_checkTypes;
}

void ComplianceCheckItemsOverview::SetCheckTypes(const vector<ComplianceCheckTypeItem>& _checkTypes)
{
    m_checkTypes = _checkTypes;
    m_checkTypesHasBeenSet = true;
}

bool ComplianceCheckItemsOverview::CheckTypesHasBeenSet() const
{
    return m_checkTypesHasBeenSet;
}

