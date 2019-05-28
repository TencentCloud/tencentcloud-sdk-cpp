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

#include <tencentcloud/cvm/v20170312/model/InternetBandwidthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

InternetBandwidthConfig::InternetBandwidthConfig() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false)
{
}

CoreInternalOutcome InternetBandwidthConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InternetBandwidthConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InternetBandwidthConfig.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InternetBandwidthConfig.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetBandwidthConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InternetBandwidthConfig::GetStartTime() const
{
    return m_startTime;
}

void InternetBandwidthConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InternetBandwidthConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InternetBandwidthConfig::GetEndTime() const
{
    return m_endTime;
}

void InternetBandwidthConfig::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InternetBandwidthConfig::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

InternetAccessible InternetBandwidthConfig::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void InternetBandwidthConfig::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool InternetBandwidthConfig::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

