/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/omics/v20221128/model/RunGroupNotification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunGroupNotification::RunGroupNotification() :
    m_resultNotificationHasBeenSet(false),
    m_timeoutNotificationHasBeenSet(false)
{
}

CoreInternalOutcome RunGroupNotification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultNotification") && !value["ResultNotification"].IsNull())
    {
        if (!value["ResultNotification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroupNotification.ResultNotification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resultNotification.Deserialize(value["ResultNotification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultNotificationHasBeenSet = true;
    }

    if (value.HasMember("TimeoutNotification") && !value["TimeoutNotification"].IsNull())
    {
        if (!value["TimeoutNotification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroupNotification.TimeoutNotification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeoutNotification.Deserialize(value["TimeoutNotification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeoutNotificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunGroupNotification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultNotificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultNotification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resultNotification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeoutNotificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutNotification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeoutNotification.ToJsonObject(value[key.c_str()], allocator);
    }

}


RunGroupResultNotification RunGroupNotification::GetResultNotification() const
{
    return m_resultNotification;
}

void RunGroupNotification::SetResultNotification(const RunGroupResultNotification& _resultNotification)
{
    m_resultNotification = _resultNotification;
    m_resultNotificationHasBeenSet = true;
}

bool RunGroupNotification::ResultNotificationHasBeenSet() const
{
    return m_resultNotificationHasBeenSet;
}

RunGroupTimeoutNotification RunGroupNotification::GetTimeoutNotification() const
{
    return m_timeoutNotification;
}

void RunGroupNotification::SetTimeoutNotification(const RunGroupTimeoutNotification& _timeoutNotification)
{
    m_timeoutNotification = _timeoutNotification;
    m_timeoutNotificationHasBeenSet = true;
}

bool RunGroupNotification::TimeoutNotificationHasBeenSet() const
{
    return m_timeoutNotificationHasBeenSet;
}

