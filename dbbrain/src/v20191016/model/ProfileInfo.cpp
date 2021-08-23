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

#include <tencentcloud/dbbrain/v20191016/model/ProfileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

ProfileInfo::ProfileInfo() :
    m_languageHasBeenSet(false),
    m_mailConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome ProfileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileInfo.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("MailConfiguration") && !value["MailConfiguration"].IsNull())
    {
        if (!value["MailConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileInfo.MailConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mailConfiguration.Deserialize(value["MailConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mailConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProfileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_mailConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MailConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mailConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProfileInfo::GetLanguage() const
{
    return m_language;
}

void ProfileInfo::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool ProfileInfo::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

MailConfiguration ProfileInfo::GetMailConfiguration() const
{
    return m_mailConfiguration;
}

void ProfileInfo::SetMailConfiguration(const MailConfiguration& _mailConfiguration)
{
    m_mailConfiguration = _mailConfiguration;
    m_mailConfigurationHasBeenSet = true;
}

bool ProfileInfo::MailConfigurationHasBeenSet() const
{
    return m_mailConfigurationHasBeenSet;
}

