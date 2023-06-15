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

#include <tencentcloud/live/v20180801/model/LiveStreamMonitorNotifyPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveStreamMonitorNotifyPolicy::LiveStreamMonitorNotifyPolicy() :
    m_notifyPolicyTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamMonitorNotifyPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotifyPolicyType") && !value["NotifyPolicyType"].IsNull())
    {
        if (!value["NotifyPolicyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorNotifyPolicy.NotifyPolicyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyPolicyType = value["NotifyPolicyType"].GetUint64();
        m_notifyPolicyTypeHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorNotifyPolicy.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamMonitorNotifyPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notifyPolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyPolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyPolicyType, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LiveStreamMonitorNotifyPolicy::GetNotifyPolicyType() const
{
    return m_notifyPolicyType;
}

void LiveStreamMonitorNotifyPolicy::SetNotifyPolicyType(const uint64_t& _notifyPolicyType)
{
    m_notifyPolicyType = _notifyPolicyType;
    m_notifyPolicyTypeHasBeenSet = true;
}

bool LiveStreamMonitorNotifyPolicy::NotifyPolicyTypeHasBeenSet() const
{
    return m_notifyPolicyTypeHasBeenSet;
}

string LiveStreamMonitorNotifyPolicy::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void LiveStreamMonitorNotifyPolicy::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool LiveStreamMonitorNotifyPolicy::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

