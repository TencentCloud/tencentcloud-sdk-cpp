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

#include <tencentcloud/tione/v20211111/model/RollingUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

RollingUpdate::RollingUpdate() :
    m_maxUnavailableHasBeenSet(false),
    m_maxSurgeHasBeenSet(false)
{
}

CoreInternalOutcome RollingUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxUnavailable") && !value["MaxUnavailable"].IsNull())
    {
        if (!value["MaxUnavailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RollingUpdate.MaxUnavailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxUnavailable.Deserialize(value["MaxUnavailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxUnavailableHasBeenSet = true;
    }

    if (value.HasMember("MaxSurge") && !value["MaxSurge"].IsNull())
    {
        if (!value["MaxSurge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RollingUpdate.MaxSurge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxSurge.Deserialize(value["MaxSurge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxSurgeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollingUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxUnavailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnavailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxUnavailable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxSurgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSurge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxSurge.ToJsonObject(value[key.c_str()], allocator);
    }

}


NumOrPercent RollingUpdate::GetMaxUnavailable() const
{
    return m_maxUnavailable;
}

void RollingUpdate::SetMaxUnavailable(const NumOrPercent& _maxUnavailable)
{
    m_maxUnavailable = _maxUnavailable;
    m_maxUnavailableHasBeenSet = true;
}

bool RollingUpdate::MaxUnavailableHasBeenSet() const
{
    return m_maxUnavailableHasBeenSet;
}

NumOrPercent RollingUpdate::GetMaxSurge() const
{
    return m_maxSurge;
}

void RollingUpdate::SetMaxSurge(const NumOrPercent& _maxSurge)
{
    m_maxSurge = _maxSurge;
    m_maxSurgeHasBeenSet = true;
}

bool RollingUpdate::MaxSurgeHasBeenSet() const
{
    return m_maxSurgeHasBeenSet;
}

