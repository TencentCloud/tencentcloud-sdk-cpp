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

#include <tencentcloud/vpc/v20170312/model/TranslationNatRuleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TranslationNatRuleInput::TranslationNatRuleInput() :
    m_translationDirectionHasBeenSet(false),
    m_translationTypeHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_originalIpHasBeenSet(false)
{
}

CoreInternalOutcome TranslationNatRuleInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranslationDirection") && !value["TranslationDirection"].IsNull())
    {
        if (!value["TranslationDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRuleInput.TranslationDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationDirection = string(value["TranslationDirection"].GetString());
        m_translationDirectionHasBeenSet = true;
    }

    if (value.HasMember("TranslationType") && !value["TranslationType"].IsNull())
    {
        if (!value["TranslationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRuleInput.TranslationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationType = string(value["TranslationType"].GetString());
        m_translationTypeHasBeenSet = true;
    }

    if (value.HasMember("TranslationIp") && !value["TranslationIp"].IsNull())
    {
        if (!value["TranslationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRuleInput.TranslationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationIp = string(value["TranslationIp"].GetString());
        m_translationIpHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRuleInput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OriginalIp") && !value["OriginalIp"].IsNull())
    {
        if (!value["OriginalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRuleInput.OriginalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalIp = string(value["OriginalIp"].GetString());
        m_originalIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslationNatRuleInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_translationDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_translationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationType.c_str(), allocator).Move(), allocator);
    }

    if (m_translationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_originalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalIp.c_str(), allocator).Move(), allocator);
    }

}


string TranslationNatRuleInput::GetTranslationDirection() const
{
    return m_translationDirection;
}

void TranslationNatRuleInput::SetTranslationDirection(const string& _translationDirection)
{
    m_translationDirection = _translationDirection;
    m_translationDirectionHasBeenSet = true;
}

bool TranslationNatRuleInput::TranslationDirectionHasBeenSet() const
{
    return m_translationDirectionHasBeenSet;
}

string TranslationNatRuleInput::GetTranslationType() const
{
    return m_translationType;
}

void TranslationNatRuleInput::SetTranslationType(const string& _translationType)
{
    m_translationType = _translationType;
    m_translationTypeHasBeenSet = true;
}

bool TranslationNatRuleInput::TranslationTypeHasBeenSet() const
{
    return m_translationTypeHasBeenSet;
}

string TranslationNatRuleInput::GetTranslationIp() const
{
    return m_translationIp;
}

void TranslationNatRuleInput::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool TranslationNatRuleInput::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

string TranslationNatRuleInput::GetDescription() const
{
    return m_description;
}

void TranslationNatRuleInput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TranslationNatRuleInput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TranslationNatRuleInput::GetOriginalIp() const
{
    return m_originalIp;
}

void TranslationNatRuleInput::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool TranslationNatRuleInput::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}

