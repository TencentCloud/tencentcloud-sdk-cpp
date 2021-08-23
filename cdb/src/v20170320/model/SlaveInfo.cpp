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

#include <tencentcloud/cdb/v20170320/model/SlaveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SlaveInfo::SlaveInfo() :
    m_firstHasBeenSet(false),
    m_secondHasBeenSet(false)
{
}

CoreInternalOutcome SlaveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("First") && !value["First"].IsNull())
    {
        if (!value["First"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveInfo.First` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_first.Deserialize(value["First"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstHasBeenSet = true;
    }

    if (value.HasMember("Second") && !value["Second"].IsNull())
    {
        if (!value["Second"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveInfo.Second` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_second.Deserialize(value["Second"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlaveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "First";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_first.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Second";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_second.ToJsonObject(value[key.c_str()], allocator);
    }

}


SlaveInstanceInfo SlaveInfo::GetFirst() const
{
    return m_first;
}

void SlaveInfo::SetFirst(const SlaveInstanceInfo& _first)
{
    m_first = _first;
    m_firstHasBeenSet = true;
}

bool SlaveInfo::FirstHasBeenSet() const
{
    return m_firstHasBeenSet;
}

SlaveInstanceInfo SlaveInfo::GetSecond() const
{
    return m_second;
}

void SlaveInfo::SetSecond(const SlaveInstanceInfo& _second)
{
    m_second = _second;
    m_secondHasBeenSet = true;
}

bool SlaveInfo::SecondHasBeenSet() const
{
    return m_secondHasBeenSet;
}

