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

#include <tencentcloud/cdb/v20170320/model/RollbackTimeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RollbackTimeRange::RollbackTimeRange() :
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome RollbackTimeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Begin") && !value["Begin"].IsNull())
    {
        if (!value["Begin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTimeRange.Begin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_begin = string(value["Begin"].GetString());
        m_beginHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTimeRange.End` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_end = string(value["End"].GetString());
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackTimeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Begin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_begin.c_str(), allocator).Move(), allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_end.c_str(), allocator).Move(), allocator);
    }

}


string RollbackTimeRange::GetBegin() const
{
    return m_begin;
}

void RollbackTimeRange::SetBegin(const string& _begin)
{
    m_begin = _begin;
    m_beginHasBeenSet = true;
}

bool RollbackTimeRange::BeginHasBeenSet() const
{
    return m_beginHasBeenSet;
}

string RollbackTimeRange::GetEnd() const
{
    return m_end;
}

void RollbackTimeRange::SetEnd(const string& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool RollbackTimeRange::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

