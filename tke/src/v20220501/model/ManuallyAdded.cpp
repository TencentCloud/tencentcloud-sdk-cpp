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

#include <tencentcloud/tke/v20220501/model/ManuallyAdded.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

ManuallyAdded::ManuallyAdded() :
    m_joiningHasBeenSet(false),
    m_initializingHasBeenSet(false),
    m_normalHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome ManuallyAdded::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Joining") && !value["Joining"].IsNull())
    {
        if (!value["Joining"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManuallyAdded.Joining` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joining = value["Joining"].GetInt64();
        m_joiningHasBeenSet = true;
    }

    if (value.HasMember("Initializing") && !value["Initializing"].IsNull())
    {
        if (!value["Initializing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManuallyAdded.Initializing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initializing = value["Initializing"].GetInt64();
        m_initializingHasBeenSet = true;
    }

    if (value.HasMember("Normal") && !value["Normal"].IsNull())
    {
        if (!value["Normal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManuallyAdded.Normal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normal = value["Normal"].GetInt64();
        m_normalHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManuallyAdded.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManuallyAdded::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t ManuallyAdded::GetJoining() const
{
    return m_joining;
}

void ManuallyAdded::SetJoining(const int64_t& _joining)
{
    m_joining = _joining;
    m_joiningHasBeenSet = true;
}

bool ManuallyAdded::JoiningHasBeenSet() const
{
    return m_joiningHasBeenSet;
}

int64_t ManuallyAdded::GetInitializing() const
{
    return m_initializing;
}

void ManuallyAdded::SetInitializing(const int64_t& _initializing)
{
    m_initializing = _initializing;
    m_initializingHasBeenSet = true;
}

bool ManuallyAdded::InitializingHasBeenSet() const
{
    return m_initializingHasBeenSet;
}

int64_t ManuallyAdded::GetNormal() const
{
    return m_normal;
}

void ManuallyAdded::SetNormal(const int64_t& _normal)
{
    m_normal = _normal;
    m_normalHasBeenSet = true;
}

bool ManuallyAdded::NormalHasBeenSet() const
{
    return m_normalHasBeenSet;
}

int64_t ManuallyAdded::GetTotal() const
{
    return m_total;
}

void ManuallyAdded::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ManuallyAdded::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

