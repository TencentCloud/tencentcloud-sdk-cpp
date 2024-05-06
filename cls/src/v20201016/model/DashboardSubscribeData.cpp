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

#include <tencentcloud/cls/v20201016/model/DashboardSubscribeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DashboardSubscribeData::DashboardSubscribeData() :
    m_noticeModesHasBeenSet(false),
    m_dashboardTimeHasBeenSet(false),
    m_templateVariablesHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_subscribeLanguageHasBeenSet(false),
    m_jumpDomainHasBeenSet(false),
    m_jumpUrlHasBeenSet(false)
{
}

CoreInternalOutcome DashboardSubscribeData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeModes") && !value["NoticeModes"].IsNull())
    {
        if (!value["NoticeModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.NoticeModes` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DashboardNoticeMode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeModes.push_back(item);
        }
        m_noticeModesHasBeenSet = true;
    }

    if (value.HasMember("DashboardTime") && !value["DashboardTime"].IsNull())
    {
        if (!value["DashboardTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.DashboardTime` is not array type"));

        const rapidjson::Value &tmpValue = value["DashboardTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dashboardTime.push_back((*itr).GetString());
        }
        m_dashboardTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateVariables") && !value["TemplateVariables"].IsNull())
    {
        if (!value["TemplateVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.TemplateVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DashboardTemplateVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateVariables.push_back(item);
        }
        m_templateVariablesHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }

    if (value.HasMember("SubscribeLanguage") && !value["SubscribeLanguage"].IsNull())
    {
        if (!value["SubscribeLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.SubscribeLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeLanguage = string(value["SubscribeLanguage"].GetString());
        m_subscribeLanguageHasBeenSet = true;
    }

    if (value.HasMember("JumpDomain") && !value["JumpDomain"].IsNull())
    {
        if (!value["JumpDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.JumpDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpDomain = string(value["JumpDomain"].GetString());
        m_jumpDomainHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeData.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashboardSubscribeData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeModes.begin(); itr != m_noticeModes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dashboardTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dashboardTime.begin(); itr != m_dashboardTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateVariables.begin(); itr != m_templateVariables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

}


vector<DashboardNoticeMode> DashboardSubscribeData::GetNoticeModes() const
{
    return m_noticeModes;
}

void DashboardSubscribeData::SetNoticeModes(const vector<DashboardNoticeMode>& _noticeModes)
{
    m_noticeModes = _noticeModes;
    m_noticeModesHasBeenSet = true;
}

bool DashboardSubscribeData::NoticeModesHasBeenSet() const
{
    return m_noticeModesHasBeenSet;
}

vector<string> DashboardSubscribeData::GetDashboardTime() const
{
    return m_dashboardTime;
}

void DashboardSubscribeData::SetDashboardTime(const vector<string>& _dashboardTime)
{
    m_dashboardTime = _dashboardTime;
    m_dashboardTimeHasBeenSet = true;
}

bool DashboardSubscribeData::DashboardTimeHasBeenSet() const
{
    return m_dashboardTimeHasBeenSet;
}

vector<DashboardTemplateVariable> DashboardSubscribeData::GetTemplateVariables() const
{
    return m_templateVariables;
}

void DashboardSubscribeData::SetTemplateVariables(const vector<DashboardTemplateVariable>& _templateVariables)
{
    m_templateVariables = _templateVariables;
    m_templateVariablesHasBeenSet = true;
}

bool DashboardSubscribeData::TemplateVariablesHasBeenSet() const
{
    return m_templateVariablesHasBeenSet;
}

string DashboardSubscribeData::GetTimezone() const
{
    return m_timezone;
}

void DashboardSubscribeData::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool DashboardSubscribeData::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

string DashboardSubscribeData::GetSubscribeLanguage() const
{
    return m_subscribeLanguage;
}

void DashboardSubscribeData::SetSubscribeLanguage(const string& _subscribeLanguage)
{
    m_subscribeLanguage = _subscribeLanguage;
    m_subscribeLanguageHasBeenSet = true;
}

bool DashboardSubscribeData::SubscribeLanguageHasBeenSet() const
{
    return m_subscribeLanguageHasBeenSet;
}

string DashboardSubscribeData::GetJumpDomain() const
{
    return m_jumpDomain;
}

void DashboardSubscribeData::SetJumpDomain(const string& _jumpDomain)
{
    m_jumpDomain = _jumpDomain;
    m_jumpDomainHasBeenSet = true;
}

bool DashboardSubscribeData::JumpDomainHasBeenSet() const
{
    return m_jumpDomainHasBeenSet;
}

string DashboardSubscribeData::GetJumpUrl() const
{
    return m_jumpUrl;
}

void DashboardSubscribeData::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool DashboardSubscribeData::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

