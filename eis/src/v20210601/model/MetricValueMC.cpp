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

#include <tencentcloud/eis/v20210601/model/MetricValueMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

MetricValueMC::MetricValueMC() :
    m_timeHasBeenSet(false),
    m_valHasBeenSet(false)
{
}

CoreInternalOutcome MetricValueMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValueMC.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Val") && !value["Val"].IsNull())
    {
        if (!value["Val"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValueMC.Val` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_val = string(value["Val"].GetString());
        m_valHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricValueMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_valHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Val";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_val.c_str(), allocator).Move(), allocator);
    }

}


int64_t MetricValueMC::GetTime() const
{
    return m_time;
}

void MetricValueMC::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MetricValueMC::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string MetricValueMC::GetVal() const
{
    return m_val;
}

void MetricValueMC::SetVal(const string& _val)
{
    m_val = _val;
    m_valHasBeenSet = true;
}

bool MetricValueMC::ValHasBeenSet() const
{
    return m_valHasBeenSet;
}

