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

#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeApplicationTriggerPersonalResp::DescribeApplicationTriggerPersonalResp() :
    m_totalCountHasBeenSet(false),
    m_triggerInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationTriggerPersonalResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationTriggerPersonalResp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TriggerInfo") && !value["TriggerInfo"].IsNull())
    {
        if (!value["TriggerInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationTriggerPersonalResp.TriggerInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerInfo.push_back(item);
        }
        m_triggerInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationTriggerPersonalResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_triggerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerInfo.begin(); itr != m_triggerInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeApplicationTriggerPersonalResp::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeApplicationTriggerPersonalResp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeApplicationTriggerPersonalResp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<TriggerResp> DescribeApplicationTriggerPersonalResp::GetTriggerInfo() const
{
    return m_triggerInfo;
}

void DescribeApplicationTriggerPersonalResp::SetTriggerInfo(const vector<TriggerResp>& _triggerInfo)
{
    m_triggerInfo = _triggerInfo;
    m_triggerInfoHasBeenSet = true;
}

bool DescribeApplicationTriggerPersonalResp::TriggerInfoHasBeenSet() const
{
    return m_triggerInfoHasBeenSet;
}

