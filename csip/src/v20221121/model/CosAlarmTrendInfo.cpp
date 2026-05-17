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

#include <tencentcloud/csip/v20221121/model/CosAlarmTrendInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAlarmTrendInfo::CosAlarmTrendInfo() :
    m_currentDateStrHasBeenSet(false),
    m_currentDayCountHasBeenSet(false),
    m_currentDayOverViewHasBeenSet(false)
{
}

CoreInternalOutcome CosAlarmTrendInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentDateStr") && !value["CurrentDateStr"].IsNull())
    {
        if (!value["CurrentDateStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmTrendInfo.CurrentDateStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentDateStr = string(value["CurrentDateStr"].GetString());
        m_currentDateStrHasBeenSet = true;
    }

    if (value.HasMember("CurrentDayCount") && !value["CurrentDayCount"].IsNull())
    {
        if (!value["CurrentDayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmTrendInfo.CurrentDayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDayCount = value["CurrentDayCount"].GetInt64();
        m_currentDayCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentDayOverView") && !value["CurrentDayOverView"].IsNull())
    {
        if (!value["CurrentDayOverView"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAlarmTrendInfo.CurrentDayOverView` is not array type"));

        const rapidjson::Value &tmpValue = value["CurrentDayOverView"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_currentDayOverView.push_back(item);
        }
        m_currentDayOverViewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAlarmTrendInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentDateStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDateStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentDateStr.c_str(), allocator).Move(), allocator);
    }

    if (m_currentDayCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDayCount, allocator);
    }

    if (m_currentDayOverViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDayOverView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_currentDayOverView.begin(); itr != m_currentDayOverView.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CosAlarmTrendInfo::GetCurrentDateStr() const
{
    return m_currentDateStr;
}

void CosAlarmTrendInfo::SetCurrentDateStr(const string& _currentDateStr)
{
    m_currentDateStr = _currentDateStr;
    m_currentDateStrHasBeenSet = true;
}

bool CosAlarmTrendInfo::CurrentDateStrHasBeenSet() const
{
    return m_currentDateStrHasBeenSet;
}

int64_t CosAlarmTrendInfo::GetCurrentDayCount() const
{
    return m_currentDayCount;
}

void CosAlarmTrendInfo::SetCurrentDayCount(const int64_t& _currentDayCount)
{
    m_currentDayCount = _currentDayCount;
    m_currentDayCountHasBeenSet = true;
}

bool CosAlarmTrendInfo::CurrentDayCountHasBeenSet() const
{
    return m_currentDayCountHasBeenSet;
}

vector<CosRiskInfo> CosAlarmTrendInfo::GetCurrentDayOverView() const
{
    return m_currentDayOverView;
}

void CosAlarmTrendInfo::SetCurrentDayOverView(const vector<CosRiskInfo>& _currentDayOverView)
{
    m_currentDayOverView = _currentDayOverView;
    m_currentDayOverViewHasBeenSet = true;
}

bool CosAlarmTrendInfo::CurrentDayOverViewHasBeenSet() const
{
    return m_currentDayOverViewHasBeenSet;
}

