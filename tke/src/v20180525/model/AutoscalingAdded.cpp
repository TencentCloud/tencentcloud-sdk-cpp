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

#include <tencentcloud/tke/v20180525/model/AutoscalingAdded.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AutoscalingAdded::AutoscalingAdded() :
    m_joiningHasBeenSet(false),
    m_initializingHasBeenSet(false),
    m_normalHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome AutoscalingAdded::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Joining") && !value["Joining"].IsNull())
    {
        if (!value["Joining"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalingAdded.Joining` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joining = value["Joining"].GetInt64();
        m_joiningHasBeenSet = true;
    }

    if (value.HasMember("Initializing") && !value["Initializing"].IsNull())
    {
        if (!value["Initializing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalingAdded.Initializing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initializing = value["Initializing"].GetInt64();
        m_initializingHasBeenSet = true;
    }

    if (value.HasMember("Normal") && !value["Normal"].IsNull())
    {
        if (!value["Normal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalingAdded.Normal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normal = value["Normal"].GetInt64();
        m_normalHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalingAdded.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoscalingAdded::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_joiningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Joining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joining, allocator);
    }

    if (m_initializingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Initializing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initializing, allocator);
    }

    if (m_normalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Normal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normal, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


int64_t AutoscalingAdded::GetJoining() const
{
    return m_joining;
}

void AutoscalingAdded::SetJoining(const int64_t& _joining)
{
    m_joining = _joining;
    m_joiningHasBeenSet = true;
}

bool AutoscalingAdded::JoiningHasBeenSet() const
{
    return m_joiningHasBeenSet;
}

int64_t AutoscalingAdded::GetInitializing() const
{
    return m_initializing;
}

void AutoscalingAdded::SetInitializing(const int64_t& _initializing)
{
    m_initializing = _initializing;
    m_initializingHasBeenSet = true;
}

bool AutoscalingAdded::InitializingHasBeenSet() const
{
    return m_initializingHasBeenSet;
}

int64_t AutoscalingAdded::GetNormal() const
{
    return m_normal;
}

void AutoscalingAdded::SetNormal(const int64_t& _normal)
{
    m_normal = _normal;
    m_normalHasBeenSet = true;
}

bool AutoscalingAdded::NormalHasBeenSet() const
{
    return m_normalHasBeenSet;
}

int64_t AutoscalingAdded::GetTotal() const
{
    return m_total;
}

void AutoscalingAdded::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AutoscalingAdded::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

