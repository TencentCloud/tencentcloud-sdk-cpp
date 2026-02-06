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

#include <tencentcloud/monitor/v20230616/model/WebhookNoticeTmplMatcher.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

WebhookNoticeTmplMatcher::WebhookNoticeTmplMatcher() :
    m_matchingStatusHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

CoreInternalOutcome WebhookNoticeTmplMatcher::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchingStatus") && !value["MatchingStatus"].IsNull())
    {
        if (!value["MatchingStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookNoticeTmplMatcher.MatchingStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchingStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchingStatus.push_back((*itr).GetString());
        }
        m_matchingStatusHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookNoticeTmplMatcher.Template` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_template.Deserialize(value["Template"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookNoticeTmplMatcher::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchingStatus.begin(); itr != m_matchingStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> WebhookNoticeTmplMatcher::GetMatchingStatus() const
{
    return m_matchingStatus;
}

void WebhookNoticeTmplMatcher::SetMatchingStatus(const vector<string>& _matchingStatus)
{
    m_matchingStatus = _matchingStatus;
    m_matchingStatusHasBeenSet = true;
}

bool WebhookNoticeTmplMatcher::MatchingStatusHasBeenSet() const
{
    return m_matchingStatusHasBeenSet;
}

WebhookNoticeTmpl WebhookNoticeTmplMatcher::GetTemplate() const
{
    return m_template;
}

void WebhookNoticeTmplMatcher::SetTemplate(const WebhookNoticeTmpl& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool WebhookNoticeTmplMatcher::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

