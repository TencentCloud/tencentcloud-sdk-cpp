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

#include <tencentcloud/ses/v20201002/model/CycleEmailParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

CycleEmailParam::CycleEmailParam() :
    m_beginTimeHasBeenSet(false),
    m_intervalTimeHasBeenSet(false)
{
}

CoreInternalOutcome CycleEmailParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CycleEmailParam.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CycleEmailParam.IntervalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetUint64();
        m_intervalTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CycleEmailParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

}


string CycleEmailParam::GetBeginTime() const
{
    return m_beginTime;
}

void CycleEmailParam::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CycleEmailParam::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t CycleEmailParam::GetIntervalTime() const
{
    return m_intervalTime;
}

void CycleEmailParam::SetIntervalTime(const uint64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool CycleEmailParam::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

