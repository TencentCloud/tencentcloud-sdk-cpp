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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolACLListResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPToolACLListResult::AIGWMCPToolACLListResult() :
    m_aCLTypeHasBeenSet(false),
    m_dataListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPToolACLListResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ACLType") && !value["ACLType"].IsNull())
    {
        if (!value["ACLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLListResult.ACLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aCLType = string(value["ACLType"].GetString());
        m_aCLTypeHasBeenSet = true;
    }

    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLListResult.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWMCPToolACLItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLListResult.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPToolACLListResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aCLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aCLType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


string AIGWMCPToolACLListResult::GetACLType() const
{
    return m_aCLType;
}

void AIGWMCPToolACLListResult::SetACLType(const string& _aCLType)
{
    m_aCLType = _aCLType;
    m_aCLTypeHasBeenSet = true;
}

bool AIGWMCPToolACLListResult::ACLTypeHasBeenSet() const
{
    return m_aCLTypeHasBeenSet;
}

vector<AIGWMCPToolACLItem> AIGWMCPToolACLListResult::GetDataList() const
{
    return m_dataList;
}

void AIGWMCPToolACLListResult::SetDataList(const vector<AIGWMCPToolACLItem>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool AIGWMCPToolACLListResult::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

uint64_t AIGWMCPToolACLListResult::GetTotalCount() const
{
    return m_totalCount;
}

void AIGWMCPToolACLListResult::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool AIGWMCPToolACLListResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

