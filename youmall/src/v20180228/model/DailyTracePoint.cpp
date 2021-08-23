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

#include <tencentcloud/youmall/v20180228/model/DailyTracePoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DailyTracePoint::DailyTracePoint() :
    m_traceDateHasBeenSet(false),
    m_tracePointSetHasBeenSet(false)
{
}

CoreInternalOutcome DailyTracePoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TraceDate") && !value["TraceDate"].IsNull())
    {
        if (!value["TraceDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DailyTracePoint.TraceDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceDate = string(value["TraceDate"].GetString());
        m_traceDateHasBeenSet = true;
    }

    if (value.HasMember("TracePointSet") && !value["TracePointSet"].IsNull())
    {
        if (!value["TracePointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DailyTracePoint.TracePointSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TracePointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonTracePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tracePointSet.push_back(item);
        }
        m_tracePointSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DailyTracePoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_traceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceDate.c_str(), allocator).Move(), allocator);
    }

    if (m_tracePointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TracePointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tracePointSet.begin(); itr != m_tracePointSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DailyTracePoint::GetTraceDate() const
{
    return m_traceDate;
}

void DailyTracePoint::SetTraceDate(const string& _traceDate)
{
    m_traceDate = _traceDate;
    m_traceDateHasBeenSet = true;
}

bool DailyTracePoint::TraceDateHasBeenSet() const
{
    return m_traceDateHasBeenSet;
}

vector<PersonTracePoint> DailyTracePoint::GetTracePointSet() const
{
    return m_tracePointSet;
}

void DailyTracePoint::SetTracePointSet(const vector<PersonTracePoint>& _tracePointSet)
{
    m_tracePointSet = _tracePointSet;
    m_tracePointSetHasBeenSet = true;
}

bool DailyTracePoint::TracePointSetHasBeenSet() const
{
    return m_tracePointSetHasBeenSet;
}

