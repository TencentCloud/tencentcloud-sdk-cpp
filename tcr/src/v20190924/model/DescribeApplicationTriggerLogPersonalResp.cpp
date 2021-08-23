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

#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeApplicationTriggerLogPersonalResp::DescribeApplicationTriggerLogPersonalResp() :
    m_totalCountHasBeenSet(false),
    m_logInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationTriggerLogPersonalResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationTriggerLogPersonalResp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("LogInfo") && !value["LogInfo"].IsNull())
    {
        if (!value["LogInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationTriggerLogPersonalResp.LogInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["LogInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerLogResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logInfo.push_back(item);
        }
        m_logInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationTriggerLogPersonalResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_logInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logInfo.begin(); itr != m_logInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeApplicationTriggerLogPersonalResp::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeApplicationTriggerLogPersonalResp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeApplicationTriggerLogPersonalResp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<TriggerLogResp> DescribeApplicationTriggerLogPersonalResp::GetLogInfo() const
{
    return m_logInfo;
}

void DescribeApplicationTriggerLogPersonalResp::SetLogInfo(const vector<TriggerLogResp>& _logInfo)
{
    m_logInfo = _logInfo;
    m_logInfoHasBeenSet = true;
}

bool DescribeApplicationTriggerLogPersonalResp::LogInfoHasBeenSet() const
{
    return m_logInfoHasBeenSet;
}

