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

#include <tencentcloud/monitor/v20230616/model/NoticeContentTmplItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

NoticeContentTmplItem::NoticeContentTmplItem() :
    m_qCloudYeheHasBeenSet(false),
    m_weWorkRobotHasBeenSet(false),
    m_dingDingRobotHasBeenSet(false),
    m_feiShuRobotHasBeenSet(false),
    m_webhookHasBeenSet(false),
    m_teamsRobotHasBeenSet(false),
    m_pagerDutyRobotHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentTmplItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QCloudYehe") && !value["QCloudYehe"].IsNull())
    {
        if (!value["QCloudYehe"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.QCloudYehe` is not array type"));

        const rapidjson::Value &tmpValue = value["QCloudYehe"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QCloudYeheNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qCloudYehe.push_back(item);
        }
        m_qCloudYeheHasBeenSet = true;
    }

    if (value.HasMember("WeWorkRobot") && !value["WeWorkRobot"].IsNull())
    {
        if (!value["WeWorkRobot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.WeWorkRobot` is not array type"));

        const rapidjson::Value &tmpValue = value["WeWorkRobot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WeWorkRobotNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weWorkRobot.push_back(item);
        }
        m_weWorkRobotHasBeenSet = true;
    }

    if (value.HasMember("DingDingRobot") && !value["DingDingRobot"].IsNull())
    {
        if (!value["DingDingRobot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.DingDingRobot` is not array type"));

        const rapidjson::Value &tmpValue = value["DingDingRobot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DingDingRobotNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dingDingRobot.push_back(item);
        }
        m_dingDingRobotHasBeenSet = true;
    }

    if (value.HasMember("FeiShuRobot") && !value["FeiShuRobot"].IsNull())
    {
        if (!value["FeiShuRobot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.FeiShuRobot` is not array type"));

        const rapidjson::Value &tmpValue = value["FeiShuRobot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FeiShuRobotNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_feiShuRobot.push_back(item);
        }
        m_feiShuRobotHasBeenSet = true;
    }

    if (value.HasMember("Webhook") && !value["Webhook"].IsNull())
    {
        if (!value["Webhook"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.Webhook` is not array type"));

        const rapidjson::Value &tmpValue = value["Webhook"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebhookNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webhook.push_back(item);
        }
        m_webhookHasBeenSet = true;
    }

    if (value.HasMember("TeamsRobot") && !value["TeamsRobot"].IsNull())
    {
        if (!value["TeamsRobot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.TeamsRobot` is not array type"));

        const rapidjson::Value &tmpValue = value["TeamsRobot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TeamsRobotNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_teamsRobot.push_back(item);
        }
        m_teamsRobotHasBeenSet = true;
    }

    if (value.HasMember("PagerDutyRobot") && !value["PagerDutyRobot"].IsNull())
    {
        if (!value["PagerDutyRobot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplItem.PagerDutyRobot` is not array type"));

        const rapidjson::Value &tmpValue = value["PagerDutyRobot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PagerDutyRobotNoticeTmplMatcher item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pagerDutyRobot.push_back(item);
        }
        m_pagerDutyRobotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentTmplItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qCloudYeheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QCloudYehe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qCloudYehe.begin(); itr != m_qCloudYehe.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weWorkRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeWorkRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weWorkRobot.begin(); itr != m_weWorkRobot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dingDingRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DingDingRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dingDingRobot.begin(); itr != m_dingDingRobot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_feiShuRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeiShuRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feiShuRobot.begin(); itr != m_feiShuRobot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webhookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webhook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webhook.begin(); itr != m_webhook.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_teamsRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamsRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_teamsRobot.begin(); itr != m_teamsRobot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pagerDutyRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PagerDutyRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pagerDutyRobot.begin(); itr != m_pagerDutyRobot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QCloudYeheNoticeTmplMatcher> NoticeContentTmplItem::GetQCloudYehe() const
{
    return m_qCloudYehe;
}

void NoticeContentTmplItem::SetQCloudYehe(const vector<QCloudYeheNoticeTmplMatcher>& _qCloudYehe)
{
    m_qCloudYehe = _qCloudYehe;
    m_qCloudYeheHasBeenSet = true;
}

bool NoticeContentTmplItem::QCloudYeheHasBeenSet() const
{
    return m_qCloudYeheHasBeenSet;
}

vector<WeWorkRobotNoticeTmplMatcher> NoticeContentTmplItem::GetWeWorkRobot() const
{
    return m_weWorkRobot;
}

void NoticeContentTmplItem::SetWeWorkRobot(const vector<WeWorkRobotNoticeTmplMatcher>& _weWorkRobot)
{
    m_weWorkRobot = _weWorkRobot;
    m_weWorkRobotHasBeenSet = true;
}

bool NoticeContentTmplItem::WeWorkRobotHasBeenSet() const
{
    return m_weWorkRobotHasBeenSet;
}

vector<DingDingRobotNoticeTmplMatcher> NoticeContentTmplItem::GetDingDingRobot() const
{
    return m_dingDingRobot;
}

void NoticeContentTmplItem::SetDingDingRobot(const vector<DingDingRobotNoticeTmplMatcher>& _dingDingRobot)
{
    m_dingDingRobot = _dingDingRobot;
    m_dingDingRobotHasBeenSet = true;
}

bool NoticeContentTmplItem::DingDingRobotHasBeenSet() const
{
    return m_dingDingRobotHasBeenSet;
}

vector<FeiShuRobotNoticeTmplMatcher> NoticeContentTmplItem::GetFeiShuRobot() const
{
    return m_feiShuRobot;
}

void NoticeContentTmplItem::SetFeiShuRobot(const vector<FeiShuRobotNoticeTmplMatcher>& _feiShuRobot)
{
    m_feiShuRobot = _feiShuRobot;
    m_feiShuRobotHasBeenSet = true;
}

bool NoticeContentTmplItem::FeiShuRobotHasBeenSet() const
{
    return m_feiShuRobotHasBeenSet;
}

vector<WebhookNoticeTmplMatcher> NoticeContentTmplItem::GetWebhook() const
{
    return m_webhook;
}

void NoticeContentTmplItem::SetWebhook(const vector<WebhookNoticeTmplMatcher>& _webhook)
{
    m_webhook = _webhook;
    m_webhookHasBeenSet = true;
}

bool NoticeContentTmplItem::WebhookHasBeenSet() const
{
    return m_webhookHasBeenSet;
}

vector<TeamsRobotNoticeTmplMatcher> NoticeContentTmplItem::GetTeamsRobot() const
{
    return m_teamsRobot;
}

void NoticeContentTmplItem::SetTeamsRobot(const vector<TeamsRobotNoticeTmplMatcher>& _teamsRobot)
{
    m_teamsRobot = _teamsRobot;
    m_teamsRobotHasBeenSet = true;
}

bool NoticeContentTmplItem::TeamsRobotHasBeenSet() const
{
    return m_teamsRobotHasBeenSet;
}

vector<PagerDutyRobotNoticeTmplMatcher> NoticeContentTmplItem::GetPagerDutyRobot() const
{
    return m_pagerDutyRobot;
}

void NoticeContentTmplItem::SetPagerDutyRobot(const vector<PagerDutyRobotNoticeTmplMatcher>& _pagerDutyRobot)
{
    m_pagerDutyRobot = _pagerDutyRobot;
    m_pagerDutyRobotHasBeenSet = true;
}

bool NoticeContentTmplItem::PagerDutyRobotHasBeenSet() const
{
    return m_pagerDutyRobotHasBeenSet;
}

