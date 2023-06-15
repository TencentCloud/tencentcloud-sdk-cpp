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

#include <tencentcloud/live/v20180801/model/LiveStreamMonitorInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveStreamMonitorInputInfo::LiveStreamMonitorInputInfo() :
    m_inputStreamNameHasBeenSet(false),
    m_inputDomainHasBeenSet(false),
    m_inputAppHasBeenSet(false),
    m_inputUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamMonitorInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputStreamName") && !value["InputStreamName"].IsNull())
    {
        if (!value["InputStreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInputInfo.InputStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputStreamName = string(value["InputStreamName"].GetString());
        m_inputStreamNameHasBeenSet = true;
    }

    if (value.HasMember("InputDomain") && !value["InputDomain"].IsNull())
    {
        if (!value["InputDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInputInfo.InputDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDomain = string(value["InputDomain"].GetString());
        m_inputDomainHasBeenSet = true;
    }

    if (value.HasMember("InputApp") && !value["InputApp"].IsNull())
    {
        if (!value["InputApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInputInfo.InputApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputApp = string(value["InputApp"].GetString());
        m_inputAppHasBeenSet = true;
    }

    if (value.HasMember("InputUrl") && !value["InputUrl"].IsNull())
    {
        if (!value["InputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInputInfo.InputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputUrl = string(value["InputUrl"].GetString());
        m_inputUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInputInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamMonitorInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputStreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_inputAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputApp.c_str(), allocator).Move(), allocator);
    }

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string LiveStreamMonitorInputInfo::GetInputStreamName() const
{
    return m_inputStreamName;
}

void LiveStreamMonitorInputInfo::SetInputStreamName(const string& _inputStreamName)
{
    m_inputStreamName = _inputStreamName;
    m_inputStreamNameHasBeenSet = true;
}

bool LiveStreamMonitorInputInfo::InputStreamNameHasBeenSet() const
{
    return m_inputStreamNameHasBeenSet;
}

string LiveStreamMonitorInputInfo::GetInputDomain() const
{
    return m_inputDomain;
}

void LiveStreamMonitorInputInfo::SetInputDomain(const string& _inputDomain)
{
    m_inputDomain = _inputDomain;
    m_inputDomainHasBeenSet = true;
}

bool LiveStreamMonitorInputInfo::InputDomainHasBeenSet() const
{
    return m_inputDomainHasBeenSet;
}

string LiveStreamMonitorInputInfo::GetInputApp() const
{
    return m_inputApp;
}

void LiveStreamMonitorInputInfo::SetInputApp(const string& _inputApp)
{
    m_inputApp = _inputApp;
    m_inputAppHasBeenSet = true;
}

bool LiveStreamMonitorInputInfo::InputAppHasBeenSet() const
{
    return m_inputAppHasBeenSet;
}

string LiveStreamMonitorInputInfo::GetInputUrl() const
{
    return m_inputUrl;
}

void LiveStreamMonitorInputInfo::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool LiveStreamMonitorInputInfo::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string LiveStreamMonitorInputInfo::GetDescription() const
{
    return m_description;
}

void LiveStreamMonitorInputInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LiveStreamMonitorInputInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

