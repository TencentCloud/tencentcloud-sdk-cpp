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

#include <tencentcloud/ms/v20180408/model/AppletInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppletInfo::AppletInfo() :
    m_appletJsUrlHasBeenSet(false),
    m_appletLevelHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome AppletInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppletJsUrl") && !value["AppletJsUrl"].IsNull())
    {
        if (!value["AppletJsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletInfo.AppletJsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appletJsUrl = string(value["AppletJsUrl"].GetString());
        m_appletJsUrlHasBeenSet = true;
    }

    if (value.HasMember("AppletLevel") && !value["AppletLevel"].IsNull())
    {
        if (!value["AppletLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletInfo.AppletLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appletLevel = value["AppletLevel"].GetInt64();
        m_appletLevelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppletInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appletJsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletJsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appletJsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appletLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appletLevel, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string AppletInfo::GetAppletJsUrl() const
{
    return m_appletJsUrl;
}

void AppletInfo::SetAppletJsUrl(const string& _appletJsUrl)
{
    m_appletJsUrl = _appletJsUrl;
    m_appletJsUrlHasBeenSet = true;
}

bool AppletInfo::AppletJsUrlHasBeenSet() const
{
    return m_appletJsUrlHasBeenSet;
}

int64_t AppletInfo::GetAppletLevel() const
{
    return m_appletLevel;
}

void AppletInfo::SetAppletLevel(const int64_t& _appletLevel)
{
    m_appletLevel = _appletLevel;
    m_appletLevelHasBeenSet = true;
}

bool AppletInfo::AppletLevelHasBeenSet() const
{
    return m_appletLevelHasBeenSet;
}

string AppletInfo::GetName() const
{
    return m_name;
}

void AppletInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppletInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

