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

#include <tencentcloud/faceid/v20180301/model/DetectAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectAuthRequest::DetectAuthRequest() :
    m_ruleIdHasBeenSet(false),
    m_terminalTypeHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_redirectUrlHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_intentionVerifyTextHasBeenSet(false),
    m_intentionQuestionsHasBeenSet(false),
    m_intentionActionsHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string DetectAuthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminalType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_intentionVerifyTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionVerifyText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intentionVerifyText.c_str(), allocator).Move(), allocator);
    }

    if (m_intentionQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionQuestions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentionQuestions.begin(); itr != m_intentionQuestions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_intentionActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionActions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentionActions.begin(); itr != m_intentionActions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectAuthRequest::GetRuleId() const
{
    return m_ruleId;
}

void DetectAuthRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DetectAuthRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DetectAuthRequest::GetTerminalType() const
{
    return m_terminalType;
}

void DetectAuthRequest::SetTerminalType(const string& _terminalType)
{
    m_terminalType = _terminalType;
    m_terminalTypeHasBeenSet = true;
}

bool DetectAuthRequest::TerminalTypeHasBeenSet() const
{
    return m_terminalTypeHasBeenSet;
}

string DetectAuthRequest::GetIdCard() const
{
    return m_idCard;
}

void DetectAuthRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool DetectAuthRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string DetectAuthRequest::GetName() const
{
    return m_name;
}

void DetectAuthRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectAuthRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectAuthRequest::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void DetectAuthRequest::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool DetectAuthRequest::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

string DetectAuthRequest::GetExtra() const
{
    return m_extra;
}

void DetectAuthRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool DetectAuthRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string DetectAuthRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void DetectAuthRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool DetectAuthRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

Encryption DetectAuthRequest::GetEncryption() const
{
    return m_encryption;
}

void DetectAuthRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool DetectAuthRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string DetectAuthRequest::GetIntentionVerifyText() const
{
    return m_intentionVerifyText;
}

void DetectAuthRequest::SetIntentionVerifyText(const string& _intentionVerifyText)
{
    m_intentionVerifyText = _intentionVerifyText;
    m_intentionVerifyTextHasBeenSet = true;
}

bool DetectAuthRequest::IntentionVerifyTextHasBeenSet() const
{
    return m_intentionVerifyTextHasBeenSet;
}

vector<IntentionQuestion> DetectAuthRequest::GetIntentionQuestions() const
{
    return m_intentionQuestions;
}

void DetectAuthRequest::SetIntentionQuestions(const vector<IntentionQuestion>& _intentionQuestions)
{
    m_intentionQuestions = _intentionQuestions;
    m_intentionQuestionsHasBeenSet = true;
}

bool DetectAuthRequest::IntentionQuestionsHasBeenSet() const
{
    return m_intentionQuestionsHasBeenSet;
}

vector<IntentionActionConfig> DetectAuthRequest::GetIntentionActions() const
{
    return m_intentionActions;
}

void DetectAuthRequest::SetIntentionActions(const vector<IntentionActionConfig>& _intentionActions)
{
    m_intentionActions = _intentionActions;
    m_intentionActionsHasBeenSet = true;
}

bool DetectAuthRequest::IntentionActionsHasBeenSet() const
{
    return m_intentionActionsHasBeenSet;
}

RuleIdConfig DetectAuthRequest::GetConfig() const
{
    return m_config;
}

void DetectAuthRequest::SetConfig(const RuleIdConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool DetectAuthRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


