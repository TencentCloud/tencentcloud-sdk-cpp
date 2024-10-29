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

#include <tencentcloud/cls/v20201016/model/NoticeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NoticeRule::NoticeRule() :
    m_ruleHasBeenSet(false),
    m_noticeReceiversHasBeenSet(false),
    m_webCallbacksHasBeenSet(false),
    m_escalateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_escalateNoticeHasBeenSet(false)
{
}

CoreInternalOutcome NoticeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeRule.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("NoticeReceivers") && !value["NoticeReceivers"].IsNull())
    {
        if (!value["NoticeReceivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeRule.NoticeReceivers` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `NoticeRule.WebCallbacks` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `NoticeRule.Escalate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_escalate = value["Escalate"].GetBool();
        m_escalateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeRule.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeRule.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("EscalateNotice") && !value["EscalateNotice"].IsNull())
    {
        if (!value["EscalateNotice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeRule.EscalateNotice` is not object type").SetRequestId(requestId));
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

void NoticeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
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


string NoticeRule::GetRule() const
{
    return m_rule;
}

void NoticeRule::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool NoticeRule::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

vector<NoticeReceiver> NoticeRule::GetNoticeReceivers() const
{
    return m_noticeReceivers;
}

void NoticeRule::SetNoticeReceivers(const vector<NoticeReceiver>& _noticeReceivers)
{
    m_noticeReceivers = _noticeReceivers;
    m_noticeReceiversHasBeenSet = true;
}

bool NoticeRule::NoticeReceiversHasBeenSet() const
{
    return m_noticeReceiversHasBeenSet;
}

vector<WebCallback> NoticeRule::GetWebCallbacks() const
{
    return m_webCallbacks;
}

void NoticeRule::SetWebCallbacks(const vector<WebCallback>& _webCallbacks)
{
    m_webCallbacks = _webCallbacks;
    m_webCallbacksHasBeenSet = true;
}

bool NoticeRule::WebCallbacksHasBeenSet() const
{
    return m_webCallbacksHasBeenSet;
}

bool NoticeRule::GetEscalate() const
{
    return m_escalate;
}

void NoticeRule::SetEscalate(const bool& _escalate)
{
    m_escalate = _escalate;
    m_escalateHasBeenSet = true;
}

bool NoticeRule::EscalateHasBeenSet() const
{
    return m_escalateHasBeenSet;
}

uint64_t NoticeRule::GetType() const
{
    return m_type;
}

void NoticeRule::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NoticeRule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t NoticeRule::GetInterval() const
{
    return m_interval;
}

void NoticeRule::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool NoticeRule::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

EscalateNoticeInfo NoticeRule::GetEscalateNotice() const
{
    return m_escalateNotice;
}

void NoticeRule::SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice)
{
    m_escalateNotice = _escalateNotice;
    m_escalateNoticeHasBeenSet = true;
}

bool NoticeRule::EscalateNoticeHasBeenSet() const
{
    return m_escalateNoticeHasBeenSet;
}

