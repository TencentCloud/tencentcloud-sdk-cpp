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

#include <tencentcloud/iss/v20230517/model/OperTimeSlot.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

OperTimeSlot::OperTimeSlot() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome OperTimeSlot::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperTimeSlot.Start` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_start = string(value["Start"].GetString());
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperTimeSlot.End` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_end = string(value["End"].GetString());
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperTimeSlot::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_start.c_str(), allocator).Move(), allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_end.c_str(), allocator).Move(), allocator);
    }

}


string OperTimeSlot::GetStart() const
{
    return m_start;
}

void OperTimeSlot::SetStart(const string& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool OperTimeSlot::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

string OperTimeSlot::GetEnd() const
{
    return m_end;
}

void OperTimeSlot::SetEnd(const string& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool OperTimeSlot::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

