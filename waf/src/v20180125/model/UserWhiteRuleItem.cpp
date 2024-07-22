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

#include <tencentcloud/waf/v20180125/model/UserWhiteRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UserWhiteRuleItem::UserWhiteRuleItem() :
    m_matchFieldHasBeenSet(false),
    m_matchMethodHasBeenSet(false),
    m_matchContentHasBeenSet(false),
    m_matchParamsHasBeenSet(false)
{
}

CoreInternalOutcome UserWhiteRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchField") && !value["MatchField"].IsNull())
    {
        if (!value["MatchField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRuleItem.MatchField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchField = string(value["MatchField"].GetString());
        m_matchFieldHasBeenSet = true;
    }

    if (value.HasMember("MatchMethod") && !value["MatchMethod"].IsNull())
    {
        if (!value["MatchMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRuleItem.MatchMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchMethod = string(value["MatchMethod"].GetString());
        m_matchMethodHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRuleItem.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }

    if (value.HasMember("MatchParams") && !value["MatchParams"].IsNull())
    {
        if (!value["MatchParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWhiteRuleItem.MatchParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchParams = string(value["MatchParams"].GetString());
        m_matchParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserWhiteRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchField.c_str(), allocator).Move(), allocator);
    }

    if (m_matchMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

    if (m_matchParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchParams.c_str(), allocator).Move(), allocator);
    }

}


string UserWhiteRuleItem::GetMatchField() const
{
    return m_matchField;
}

void UserWhiteRuleItem::SetMatchField(const string& _matchField)
{
    m_matchField = _matchField;
    m_matchFieldHasBeenSet = true;
}

bool UserWhiteRuleItem::MatchFieldHasBeenSet() const
{
    return m_matchFieldHasBeenSet;
}

string UserWhiteRuleItem::GetMatchMethod() const
{
    return m_matchMethod;
}

void UserWhiteRuleItem::SetMatchMethod(const string& _matchMethod)
{
    m_matchMethod = _matchMethod;
    m_matchMethodHasBeenSet = true;
}

bool UserWhiteRuleItem::MatchMethodHasBeenSet() const
{
    return m_matchMethodHasBeenSet;
}

string UserWhiteRuleItem::GetMatchContent() const
{
    return m_matchContent;
}

void UserWhiteRuleItem::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool UserWhiteRuleItem::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

string UserWhiteRuleItem::GetMatchParams() const
{
    return m_matchParams;
}

void UserWhiteRuleItem::SetMatchParams(const string& _matchParams)
{
    m_matchParams = _matchParams;
    m_matchParamsHasBeenSet = true;
}

bool UserWhiteRuleItem::MatchParamsHasBeenSet() const
{
    return m_matchParamsHasBeenSet;
}

