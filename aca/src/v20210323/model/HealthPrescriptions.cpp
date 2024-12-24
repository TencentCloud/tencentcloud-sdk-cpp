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

#include <tencentcloud/aca/v20210323/model/HealthPrescriptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

HealthPrescriptions::HealthPrescriptions() :
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_keyInformationHasBeenSet(false)
{
}

CoreInternalOutcome HealthPrescriptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthPrescriptions.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthPrescriptions.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("KeyInformation") && !value["KeyInformation"].IsNull())
    {
        if (!value["KeyInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthPrescriptions.KeyInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyInformation = string(value["KeyInformation"].GetString());
        m_keyInformationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthPrescriptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_keyInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyInformation.c_str(), allocator).Move(), allocator);
    }

}


string HealthPrescriptions::GetTitle() const
{
    return m_title;
}

void HealthPrescriptions::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool HealthPrescriptions::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string HealthPrescriptions::GetUrl() const
{
    return m_url;
}

void HealthPrescriptions::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool HealthPrescriptions::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string HealthPrescriptions::GetKeyInformation() const
{
    return m_keyInformation;
}

void HealthPrescriptions::SetKeyInformation(const string& _keyInformation)
{
    m_keyInformation = _keyInformation;
    m_keyInformationHasBeenSet = true;
}

bool HealthPrescriptions::KeyInformationHasBeenSet() const
{
    return m_keyInformationHasBeenSet;
}

