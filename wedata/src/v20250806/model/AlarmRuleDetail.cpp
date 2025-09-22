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

#include <tencentcloud/wedata/v20250806/model/AlarmRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AlarmRuleDetail::AlarmRuleDetail() :
    m_triggerHasBeenSet(false),
    m_dataBackfillOrRerunTriggerHasBeenSet(false),
    m_timeOutExtInfoHasBeenSet(false),
    m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet(false),
    m_projectInstanceStatisticsAlarmInfoListHasBeenSet(false),
    m_reconciliationExtInfoHasBeenSet(false)
{
}

CoreInternalOutcome AlarmRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.Trigger` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trigger = value["Trigger"].GetInt64();
        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("DataBackfillOrRerunTrigger") && !value["DataBackfillOrRerunTrigger"].IsNull())
    {
        if (!value["DataBackfillOrRerunTrigger"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.DataBackfillOrRerunTrigger` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackfillOrRerunTrigger = value["DataBackfillOrRerunTrigger"].GetInt64();
        m_dataBackfillOrRerunTriggerHasBeenSet = true;
    }

    if (value.HasMember("TimeOutExtInfo") && !value["TimeOutExtInfo"].IsNull())
    {
        if (!value["TimeOutExtInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.TimeOutExtInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeOutExtInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeOutStrategyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeOutExtInfo.push_back(item);
        }
        m_timeOutExtInfoHasBeenSet = true;
    }

    if (value.HasMember("DataBackfillOrRerunTimeOutExtInfo") && !value["DataBackfillOrRerunTimeOutExtInfo"].IsNull())
    {
        if (!value["DataBackfillOrRerunTimeOutExtInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.DataBackfillOrRerunTimeOutExtInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DataBackfillOrRerunTimeOutExtInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeOutStrategyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataBackfillOrRerunTimeOutExtInfo.push_back(item);
        }
        m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectInstanceStatisticsAlarmInfoList") && !value["ProjectInstanceStatisticsAlarmInfoList"].IsNull())
    {
        if (!value["ProjectInstanceStatisticsAlarmInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.ProjectInstanceStatisticsAlarmInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProjectInstanceStatisticsAlarmInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProjectInstanceStatisticsAlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_projectInstanceStatisticsAlarmInfoList.push_back(item);
        }
        m_projectInstanceStatisticsAlarmInfoListHasBeenSet = true;
    }

    if (value.HasMember("ReconciliationExtInfo") && !value["ReconciliationExtInfo"].IsNull())
    {
        if (!value["ReconciliationExtInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleDetail.ReconciliationExtInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ReconciliationExtInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReconciliationStrategyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reconciliationExtInfo.push_back(item);
        }
        m_reconciliationExtInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trigger, allocator);
    }

    if (m_dataBackfillOrRerunTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillOrRerunTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataBackfillOrRerunTrigger, allocator);
    }

    if (m_timeOutExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOutExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeOutExtInfo.begin(); itr != m_timeOutExtInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillOrRerunTimeOutExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataBackfillOrRerunTimeOutExtInfo.begin(); itr != m_dataBackfillOrRerunTimeOutExtInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectInstanceStatisticsAlarmInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInstanceStatisticsAlarmInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_projectInstanceStatisticsAlarmInfoList.begin(); itr != m_projectInstanceStatisticsAlarmInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reconciliationExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconciliationExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reconciliationExtInfo.begin(); itr != m_reconciliationExtInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AlarmRuleDetail::GetTrigger() const
{
    return m_trigger;
}

void AlarmRuleDetail::SetTrigger(const int64_t& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool AlarmRuleDetail::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

int64_t AlarmRuleDetail::GetDataBackfillOrRerunTrigger() const
{
    return m_dataBackfillOrRerunTrigger;
}

void AlarmRuleDetail::SetDataBackfillOrRerunTrigger(const int64_t& _dataBackfillOrRerunTrigger)
{
    m_dataBackfillOrRerunTrigger = _dataBackfillOrRerunTrigger;
    m_dataBackfillOrRerunTriggerHasBeenSet = true;
}

bool AlarmRuleDetail::DataBackfillOrRerunTriggerHasBeenSet() const
{
    return m_dataBackfillOrRerunTriggerHasBeenSet;
}

vector<TimeOutStrategyInfo> AlarmRuleDetail::GetTimeOutExtInfo() const
{
    return m_timeOutExtInfo;
}

void AlarmRuleDetail::SetTimeOutExtInfo(const vector<TimeOutStrategyInfo>& _timeOutExtInfo)
{
    m_timeOutExtInfo = _timeOutExtInfo;
    m_timeOutExtInfoHasBeenSet = true;
}

bool AlarmRuleDetail::TimeOutExtInfoHasBeenSet() const
{
    return m_timeOutExtInfoHasBeenSet;
}

vector<TimeOutStrategyInfo> AlarmRuleDetail::GetDataBackfillOrRerunTimeOutExtInfo() const
{
    return m_dataBackfillOrRerunTimeOutExtInfo;
}

void AlarmRuleDetail::SetDataBackfillOrRerunTimeOutExtInfo(const vector<TimeOutStrategyInfo>& _dataBackfillOrRerunTimeOutExtInfo)
{
    m_dataBackfillOrRerunTimeOutExtInfo = _dataBackfillOrRerunTimeOutExtInfo;
    m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet = true;
}

bool AlarmRuleDetail::DataBackfillOrRerunTimeOutExtInfoHasBeenSet() const
{
    return m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet;
}

vector<ProjectInstanceStatisticsAlarmInfo> AlarmRuleDetail::GetProjectInstanceStatisticsAlarmInfoList() const
{
    return m_projectInstanceStatisticsAlarmInfoList;
}

void AlarmRuleDetail::SetProjectInstanceStatisticsAlarmInfoList(const vector<ProjectInstanceStatisticsAlarmInfo>& _projectInstanceStatisticsAlarmInfoList)
{
    m_projectInstanceStatisticsAlarmInfoList = _projectInstanceStatisticsAlarmInfoList;
    m_projectInstanceStatisticsAlarmInfoListHasBeenSet = true;
}

bool AlarmRuleDetail::ProjectInstanceStatisticsAlarmInfoListHasBeenSet() const
{
    return m_projectInstanceStatisticsAlarmInfoListHasBeenSet;
}

vector<ReconciliationStrategyInfo> AlarmRuleDetail::GetReconciliationExtInfo() const
{
    return m_reconciliationExtInfo;
}

void AlarmRuleDetail::SetReconciliationExtInfo(const vector<ReconciliationStrategyInfo>& _reconciliationExtInfo)
{
    m_reconciliationExtInfo = _reconciliationExtInfo;
    m_reconciliationExtInfoHasBeenSet = true;
}

bool AlarmRuleDetail::ReconciliationExtInfoHasBeenSet() const
{
    return m_reconciliationExtInfoHasBeenSet;
}

