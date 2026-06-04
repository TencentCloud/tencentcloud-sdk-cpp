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

#include <tencentcloud/adp/v20260520/model/AppAdvancedConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppAdvancedConf::AppAdvancedConf() :
    m_enableContextRewriteHasBeenSet(false),
    m_enableImageTextRetrievalHasBeenSet(false),
    m_replyFlexibilityHasBeenSet(false),
    m_intentAchievementHasBeenSet(false)
{
}

CoreInternalOutcome AppAdvancedConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableContextRewrite") && !value["EnableContextRewrite"].IsNull())
    {
        if (!value["EnableContextRewrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppAdvancedConf.EnableContextRewrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableContextRewrite = value["EnableContextRewrite"].GetBool();
        m_enableContextRewriteHasBeenSet = true;
    }

    if (value.HasMember("EnableImageTextRetrieval") && !value["EnableImageTextRetrieval"].IsNull())
    {
        if (!value["EnableImageTextRetrieval"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppAdvancedConf.EnableImageTextRetrieval` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableImageTextRetrieval = value["EnableImageTextRetrieval"].GetBool();
        m_enableImageTextRetrievalHasBeenSet = true;
    }

    if (value.HasMember("ReplyFlexibility") && !value["ReplyFlexibility"].IsNull())
    {
        if (!value["ReplyFlexibility"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppAdvancedConf.ReplyFlexibility` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replyFlexibility = value["ReplyFlexibility"].GetUint64();
        m_replyFlexibilityHasBeenSet = true;
    }

    if (value.HasMember("IntentAchievement") && !value["IntentAchievement"].IsNull())
    {
        if (!value["IntentAchievement"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppAdvancedConf.IntentAchievement` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentAchievement"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentAchievementInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intentAchievement.push_back(item);
        }
        m_intentAchievementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppAdvancedConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableContextRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableContextRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableContextRewrite, allocator);
    }

    if (m_enableImageTextRetrievalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableImageTextRetrieval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableImageTextRetrieval, allocator);
    }

    if (m_replyFlexibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyFlexibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyFlexibility, allocator);
    }

    if (m_intentAchievementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentAchievement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentAchievement.begin(); itr != m_intentAchievement.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool AppAdvancedConf::GetEnableContextRewrite() const
{
    return m_enableContextRewrite;
}

void AppAdvancedConf::SetEnableContextRewrite(const bool& _enableContextRewrite)
{
    m_enableContextRewrite = _enableContextRewrite;
    m_enableContextRewriteHasBeenSet = true;
}

bool AppAdvancedConf::EnableContextRewriteHasBeenSet() const
{
    return m_enableContextRewriteHasBeenSet;
}

bool AppAdvancedConf::GetEnableImageTextRetrieval() const
{
    return m_enableImageTextRetrieval;
}

void AppAdvancedConf::SetEnableImageTextRetrieval(const bool& _enableImageTextRetrieval)
{
    m_enableImageTextRetrieval = _enableImageTextRetrieval;
    m_enableImageTextRetrievalHasBeenSet = true;
}

bool AppAdvancedConf::EnableImageTextRetrievalHasBeenSet() const
{
    return m_enableImageTextRetrievalHasBeenSet;
}

uint64_t AppAdvancedConf::GetReplyFlexibility() const
{
    return m_replyFlexibility;
}

void AppAdvancedConf::SetReplyFlexibility(const uint64_t& _replyFlexibility)
{
    m_replyFlexibility = _replyFlexibility;
    m_replyFlexibilityHasBeenSet = true;
}

bool AppAdvancedConf::ReplyFlexibilityHasBeenSet() const
{
    return m_replyFlexibilityHasBeenSet;
}

vector<IntentAchievementInfo> AppAdvancedConf::GetIntentAchievement() const
{
    return m_intentAchievement;
}

void AppAdvancedConf::SetIntentAchievement(const vector<IntentAchievementInfo>& _intentAchievement)
{
    m_intentAchievement = _intentAchievement;
    m_intentAchievementHasBeenSet = true;
}

bool AppAdvancedConf::IntentAchievementHasBeenSet() const
{
    return m_intentAchievementHasBeenSet;
}

