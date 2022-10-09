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

#include <tencentcloud/teo/v20220901/model/RateLimitTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RateLimitTemplate::RateLimitTemplate() :
    m_modeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_rateLimitTemplateDetailHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitTemplate.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitTemplate.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RateLimitTemplateDetail") && !value["RateLimitTemplateDetail"].IsNull())
    {
        if (!value["RateLimitTemplateDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitTemplate.RateLimitTemplateDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitTemplateDetail.Deserialize(value["RateLimitTemplateDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitTemplateDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitTemplateDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitTemplateDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitTemplateDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RateLimitTemplate::GetMode() const
{
    return m_mode;
}

void RateLimitTemplate::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RateLimitTemplate::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string RateLimitTemplate::GetAction() const
{
    return m_action;
}

void RateLimitTemplate::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool RateLimitTemplate::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

RateLimitTemplateDetail RateLimitTemplate::GetRateLimitTemplateDetail() const
{
    return m_rateLimitTemplateDetail;
}

void RateLimitTemplate::SetRateLimitTemplateDetail(const RateLimitTemplateDetail& _rateLimitTemplateDetail)
{
    m_rateLimitTemplateDetail = _rateLimitTemplateDetail;
    m_rateLimitTemplateDetailHasBeenSet = true;
}

bool RateLimitTemplate::RateLimitTemplateDetailHasBeenSet() const
{
    return m_rateLimitTemplateDetailHasBeenSet;
}

