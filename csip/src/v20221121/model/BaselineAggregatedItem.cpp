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

#include <tencentcloud/csip/v20221121/model/BaselineAggregatedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineAggregatedItem::BaselineAggregatedItem() :
    m_itemHasBeenSet(false),
    m_passAssetCountHasBeenSet(false),
    m_notPassAssetCountHasBeenSet(false),
    m_totalAssetCountHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_latestCheckTimeHasBeenSet(false),
    m_resultStatusHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
}

CoreInternalOutcome BaselineAggregatedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }

    if (value.HasMember("PassAssetCount") && !value["PassAssetCount"].IsNull())
    {
        if (!value["PassAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.PassAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passAssetCount = value["PassAssetCount"].GetUint64();
        m_passAssetCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassAssetCount") && !value["NotPassAssetCount"].IsNull())
    {
        if (!value["NotPassAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.NotPassAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassAssetCount = value["NotPassAssetCount"].GetUint64();
        m_notPassAssetCountHasBeenSet = true;
    }

    if (value.HasMember("TotalAssetCount") && !value["TotalAssetCount"].IsNull())
    {
        if (!value["TotalAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.TotalAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAssetCount = value["TotalAssetCount"].GetUint64();
        m_totalAssetCountHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.PassRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetDouble();
        m_passRateHasBeenSet = true;
    }

    if (value.HasMember("LatestCheckTime") && !value["LatestCheckTime"].IsNull())
    {
        if (!value["LatestCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.LatestCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestCheckTime = string(value["LatestCheckTime"].GetString());
        m_latestCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultStatus") && !value["ResultStatus"].IsNull())
    {
        if (!value["ResultStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.ResultStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultStatus = string(value["ResultStatus"].GetString());
        m_resultStatusHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.Appid` is not array type"));

        const rapidjson::Value &tmpValue = value["Appid"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_appid.push_back((*itr).GetUint64());
        }
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedItem.JobID` is not array type"));

        const rapidjson::Value &tmpValue = value["JobID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_jobID.push_back((*itr).GetString());
        }
        m_jobIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineAggregatedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_item.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passAssetCount, allocator);
    }

    if (m_notPassAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassAssetCount, allocator);
    }

    if (m_totalAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAssetCount, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_latestCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appid.begin(); itr != m_appid.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobID.begin(); itr != m_jobID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


BaselineItem BaselineAggregatedItem::GetItem() const
{
    return m_item;
}

void BaselineAggregatedItem::SetItem(const BaselineItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool BaselineAggregatedItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

uint64_t BaselineAggregatedItem::GetPassAssetCount() const
{
    return m_passAssetCount;
}

void BaselineAggregatedItem::SetPassAssetCount(const uint64_t& _passAssetCount)
{
    m_passAssetCount = _passAssetCount;
    m_passAssetCountHasBeenSet = true;
}

bool BaselineAggregatedItem::PassAssetCountHasBeenSet() const
{
    return m_passAssetCountHasBeenSet;
}

uint64_t BaselineAggregatedItem::GetNotPassAssetCount() const
{
    return m_notPassAssetCount;
}

void BaselineAggregatedItem::SetNotPassAssetCount(const uint64_t& _notPassAssetCount)
{
    m_notPassAssetCount = _notPassAssetCount;
    m_notPassAssetCountHasBeenSet = true;
}

bool BaselineAggregatedItem::NotPassAssetCountHasBeenSet() const
{
    return m_notPassAssetCountHasBeenSet;
}

uint64_t BaselineAggregatedItem::GetTotalAssetCount() const
{
    return m_totalAssetCount;
}

void BaselineAggregatedItem::SetTotalAssetCount(const uint64_t& _totalAssetCount)
{
    m_totalAssetCount = _totalAssetCount;
    m_totalAssetCountHasBeenSet = true;
}

bool BaselineAggregatedItem::TotalAssetCountHasBeenSet() const
{
    return m_totalAssetCountHasBeenSet;
}

double BaselineAggregatedItem::GetPassRate() const
{
    return m_passRate;
}

void BaselineAggregatedItem::SetPassRate(const double& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool BaselineAggregatedItem::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

string BaselineAggregatedItem::GetLatestCheckTime() const
{
    return m_latestCheckTime;
}

void BaselineAggregatedItem::SetLatestCheckTime(const string& _latestCheckTime)
{
    m_latestCheckTime = _latestCheckTime;
    m_latestCheckTimeHasBeenSet = true;
}

bool BaselineAggregatedItem::LatestCheckTimeHasBeenSet() const
{
    return m_latestCheckTimeHasBeenSet;
}

string BaselineAggregatedItem::GetResultStatus() const
{
    return m_resultStatus;
}

void BaselineAggregatedItem::SetResultStatus(const string& _resultStatus)
{
    m_resultStatus = _resultStatus;
    m_resultStatusHasBeenSet = true;
}

bool BaselineAggregatedItem::ResultStatusHasBeenSet() const
{
    return m_resultStatusHasBeenSet;
}

vector<uint64_t> BaselineAggregatedItem::GetAppid() const
{
    return m_appid;
}

void BaselineAggregatedItem::SetAppid(const vector<uint64_t>& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselineAggregatedItem::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

vector<string> BaselineAggregatedItem::GetJobID() const
{
    return m_jobID;
}

void BaselineAggregatedItem::SetJobID(const vector<string>& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool BaselineAggregatedItem::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

