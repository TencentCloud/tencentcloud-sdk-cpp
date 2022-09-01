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

#include <tencentcloud/trp/v20210515/model/PhaseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

PhaseData::PhaseData() :
    m_headEnabledHasBeenSet(false),
    m_headTitleHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appPathHasBeenSet(false),
    m_appNameHasBeenSet(false)
{
}

CoreInternalOutcome PhaseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadEnabled") && !value["HeadEnabled"].IsNull())
    {
        if (!value["HeadEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.HeadEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headEnabled = value["HeadEnabled"].GetBool();
        m_headEnabledHasBeenSet = true;
    }

    if (value.HasMember("HeadTitle") && !value["HeadTitle"].IsNull())
    {
        if (!value["HeadTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.HeadTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headTitle = string(value["HeadTitle"].GetString());
        m_headTitleHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppPath") && !value["AppPath"].IsNull())
    {
        if (!value["AppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.AppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPath = string(value["AppPath"].GetString());
        m_appPathHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhaseData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhaseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headEnabled, allocator);
    }

    if (m_headTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPath.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

}


bool PhaseData::GetHeadEnabled() const
{
    return m_headEnabled;
}

void PhaseData::SetHeadEnabled(const bool& _headEnabled)
{
    m_headEnabled = _headEnabled;
    m_headEnabledHasBeenSet = true;
}

bool PhaseData::HeadEnabledHasBeenSet() const
{
    return m_headEnabledHasBeenSet;
}

string PhaseData::GetHeadTitle() const
{
    return m_headTitle;
}

void PhaseData::SetHeadTitle(const string& _headTitle)
{
    m_headTitle = _headTitle;
    m_headTitleHasBeenSet = true;
}

bool PhaseData::HeadTitleHasBeenSet() const
{
    return m_headTitleHasBeenSet;
}

string PhaseData::GetKey() const
{
    return m_key;
}

void PhaseData::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool PhaseData::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string PhaseData::GetAppId() const
{
    return m_appId;
}

void PhaseData::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PhaseData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string PhaseData::GetAppPath() const
{
    return m_appPath;
}

void PhaseData::SetAppPath(const string& _appPath)
{
    m_appPath = _appPath;
    m_appPathHasBeenSet = true;
}

bool PhaseData::AppPathHasBeenSet() const
{
    return m_appPathHasBeenSet;
}

string PhaseData::GetAppName() const
{
    return m_appName;
}

void PhaseData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PhaseData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

