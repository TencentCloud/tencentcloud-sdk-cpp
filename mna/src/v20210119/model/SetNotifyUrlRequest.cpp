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

#include <tencentcloud/mna/v20210119/model/SetNotifyUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

SetNotifyUrlRequest::SetNotifyUrlRequest() :
    m_notifyUrlHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_alarmValueHasBeenSet(false)
{
}

string SetNotifyUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmValue, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetNotifyUrlRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void SetNotifyUrlRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool SetNotifyUrlRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string SetNotifyUrlRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void SetNotifyUrlRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool SetNotifyUrlRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

int64_t SetNotifyUrlRequest::GetAlarmValue() const
{
    return m_alarmValue;
}

void SetNotifyUrlRequest::SetAlarmValue(const int64_t& _alarmValue)
{
    m_alarmValue = _alarmValue;
    m_alarmValueHasBeenSet = true;
}

bool SetNotifyUrlRequest::AlarmValueHasBeenSet() const
{
    return m_alarmValueHasBeenSet;
}


