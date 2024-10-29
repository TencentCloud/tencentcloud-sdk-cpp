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

#include <tencentcloud/cls/v20201016/model/EscalateNoticeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EscalateNoticeInfo::EscalateNoticeInfo() :
    m_noticeReceiversHasBeenSet(false),
    m_webCallbacksHasBeenSet(false),
    m_escalateHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_escalateNoticeHasBeenSet(false)
{
}

CoreInternalOutcome EscalateNoticeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeReceivers") && !value["NoticeReceivers"].IsNull())
    {
        if (!value["NoticeReceivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.NoticeReceivers` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeReceivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeReceiver item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeReceivers.push_back(item);
        }
        m_noticeReceiversHasBeenSet = true;
    }

    if (value.HasMember("WebCallbacks") && !value["WebCallbacks"].IsNull())
    {
        if (!value["WebCallbacks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.WebCallbacks` is not array type"));

        const rapidjson::Value &tmpValue = value["WebCallbacks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebCallback item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webCallbacks.push_back(item);
        }
        m_webCallbacksHasBeenSet = true;
    }

    if (value.HasMember("Escalate") && !value["Escalate"].IsNull())
    {
        if (!value["Escalate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.Escalate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_escalate = value["Escalate"].GetBool();
        m_escalateHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EscalateNotice") && !value["EscalateNotice"].IsNull())
    {
        if (!value["EscalateNotice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EscalateNoticeInfo.EscalateNotice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_escalateNotice.Deserialize(value["EscalateNotice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_escalateNoticeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EscalateNoticeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeReceivers.begin(); itr != m_noticeReceivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webCallbacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCallbacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webCallbacks.begin(); itr != m_webCallbacks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_escalateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Escalate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_escalate, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_escalateNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EscalateNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_escalateNotice.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<NoticeReceiver> EscalateNoticeInfo::GetNoticeReceivers() const
{
    return m_noticeReceivers;
}

void EscalateNoticeInfo::SetNoticeReceivers(const vector<NoticeReceiver>& _noticeReceivers)
{
    m_noticeReceivers = _noticeReceivers;
    m_noticeReceiversHasBeenSet = true;
}

bool EscalateNoticeInfo::NoticeReceiversHasBeenSet() const
{
    return m_noticeReceiversHasBeenSet;
}

vector<WebCallback> EscalateNoticeInfo::GetWebCallbacks() const
{
    return m_webCallbacks;
}

void EscalateNoticeInfo::SetWebCallbacks(const vector<WebCallback>& _webCallbacks)
{
    m_webCallbacks = _webCallbacks;
    m_webCallbacksHasBeenSet = true;
}

bool EscalateNoticeInfo::WebCallbacksHasBeenSet() const
{
    return m_webCallbacksHasBeenSet;
}

bool EscalateNoticeInfo::GetEscalate() const
{
    return m_escalate;
}

void EscalateNoticeInfo::SetEscalate(const bool& _escalate)
{
    m_escalate = _escalate;
    m_escalateHasBeenSet = true;
}

bool EscalateNoticeInfo::EscalateHasBeenSet() const
{
    return m_escalateHasBeenSet;
}

uint64_t EscalateNoticeInfo::GetInterval() const
{
    return m_interval;
}

void EscalateNoticeInfo::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool EscalateNoticeInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t EscalateNoticeInfo::GetType() const
{
    return m_type;
}

void EscalateNoticeInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EscalateNoticeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

EscalateNoticeInfo EscalateNoticeInfo::GetEscalateNotice() const
{
    return m_escalateNotice;
}

void EscalateNoticeInfo::SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice)
{
    m_escalateNotice = _escalateNotice;
    m_escalateNoticeHasBeenSet = true;
}

bool EscalateNoticeInfo::EscalateNoticeHasBeenSet() const
{
    return m_escalateNoticeHasBeenSet;
}

