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

#include <tencentcloud/youmall/v20180228/model/PersonTraceRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonTraceRoute::PersonTraceRoute() :
    m_traceIdHasBeenSet(false),
    m_tracePointSetHasBeenSet(false)
{
}

CoreInternalOutcome PersonTraceRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTraceRoute.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("TracePointSet") && !value["TracePointSet"].IsNull())
    {
        if (!value["TracePointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonTraceRoute.TracePointSet` is not array type"));

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

void PersonTraceRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
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


string PersonTraceRoute::GetTraceId() const
{
    return m_traceId;
}

void PersonTraceRoute::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool PersonTraceRoute::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<PersonTracePoint> PersonTraceRoute::GetTracePointSet() const
{
    return m_tracePointSet;
}

void PersonTraceRoute::SetTracePointSet(const vector<PersonTracePoint>& _tracePointSet)
{
    m_tracePointSet = _tracePointSet;
    m_tracePointSetHasBeenSet = true;
}

bool PersonTraceRoute::TracePointSetHasBeenSet() const
{
    return m_tracePointSetHasBeenSet;
}

