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

#include <tencentcloud/as/v20180419/model/RefreshBatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RefreshBatch::RefreshBatch() :
    m_refreshBatchNumHasBeenSet(false),
    m_refreshBatchStatusHasBeenSet(false),
    m_refreshBatchRelatedInstanceSetHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome RefreshBatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RefreshBatchNum") && !value["RefreshBatchNum"].IsNull())
    {
        if (!value["RefreshBatchNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatch.RefreshBatchNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_refreshBatchNum = value["RefreshBatchNum"].GetUint64();
        m_refreshBatchNumHasBeenSet = true;
    }

    if (value.HasMember("RefreshBatchStatus") && !value["RefreshBatchStatus"].IsNull())
    {
        if (!value["RefreshBatchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatch.RefreshBatchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refreshBatchStatus = string(value["RefreshBatchStatus"].GetString());
        m_refreshBatchStatusHasBeenSet = true;
    }

    if (value.HasMember("RefreshBatchRelatedInstanceSet") && !value["RefreshBatchRelatedInstanceSet"].IsNull())
    {
        if (!value["RefreshBatchRelatedInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RefreshBatch.RefreshBatchRelatedInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RefreshBatchRelatedInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefreshBatchRelatedInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refreshBatchRelatedInstanceSet.push_back(item);
        }
        m_refreshBatchRelatedInstanceSetHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatch.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatch.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefreshBatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_refreshBatchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshBatchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refreshBatchNum, allocator);
    }

    if (m_refreshBatchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshBatchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refreshBatchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshBatchRelatedInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshBatchRelatedInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refreshBatchRelatedInstanceSet.begin(); itr != m_refreshBatchRelatedInstanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RefreshBatch::GetRefreshBatchNum() const
{
    return m_refreshBatchNum;
}

void RefreshBatch::SetRefreshBatchNum(const uint64_t& _refreshBatchNum)
{
    m_refreshBatchNum = _refreshBatchNum;
    m_refreshBatchNumHasBeenSet = true;
}

bool RefreshBatch::RefreshBatchNumHasBeenSet() const
{
    return m_refreshBatchNumHasBeenSet;
}

string RefreshBatch::GetRefreshBatchStatus() const
{
    return m_refreshBatchStatus;
}

void RefreshBatch::SetRefreshBatchStatus(const string& _refreshBatchStatus)
{
    m_refreshBatchStatus = _refreshBatchStatus;
    m_refreshBatchStatusHasBeenSet = true;
}

bool RefreshBatch::RefreshBatchStatusHasBeenSet() const
{
    return m_refreshBatchStatusHasBeenSet;
}

vector<RefreshBatchRelatedInstance> RefreshBatch::GetRefreshBatchRelatedInstanceSet() const
{
    return m_refreshBatchRelatedInstanceSet;
}

void RefreshBatch::SetRefreshBatchRelatedInstanceSet(const vector<RefreshBatchRelatedInstance>& _refreshBatchRelatedInstanceSet)
{
    m_refreshBatchRelatedInstanceSet = _refreshBatchRelatedInstanceSet;
    m_refreshBatchRelatedInstanceSetHasBeenSet = true;
}

bool RefreshBatch::RefreshBatchRelatedInstanceSetHasBeenSet() const
{
    return m_refreshBatchRelatedInstanceSetHasBeenSet;
}

string RefreshBatch::GetStartTime() const
{
    return m_startTime;
}

void RefreshBatch::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RefreshBatch::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RefreshBatch::GetEndTime() const
{
    return m_endTime;
}

void RefreshBatch::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RefreshBatch::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

