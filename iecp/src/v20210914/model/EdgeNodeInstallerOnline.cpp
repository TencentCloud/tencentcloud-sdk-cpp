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

#include <tencentcloud/iecp/v20210914/model/EdgeNodeInstallerOnline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodeInstallerOnline::EdgeNodeInstallerOnline() :
    m_scriptNameHasBeenSet(false),
    m_scriptDownloadUrlHasBeenSet(false),
    m_guideHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodeInstallerOnline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptName") && !value["ScriptName"].IsNull())
    {
        if (!value["ScriptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInstallerOnline.ScriptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptName = string(value["ScriptName"].GetString());
        m_scriptNameHasBeenSet = true;
    }

    if (value.HasMember("ScriptDownloadUrl") && !value["ScriptDownloadUrl"].IsNull())
    {
        if (!value["ScriptDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInstallerOnline.ScriptDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptDownloadUrl = string(value["ScriptDownloadUrl"].GetString());
        m_scriptDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("Guide") && !value["Guide"].IsNull())
    {
        if (!value["Guide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInstallerOnline.Guide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guide = string(value["Guide"].GetString());
        m_guideHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodeInstallerOnline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptName.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_guideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Guide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guide.c_str(), allocator).Move(), allocator);
    }

}


string EdgeNodeInstallerOnline::GetScriptName() const
{
    return m_scriptName;
}

void EdgeNodeInstallerOnline::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool EdgeNodeInstallerOnline::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string EdgeNodeInstallerOnline::GetScriptDownloadUrl() const
{
    return m_scriptDownloadUrl;
}

void EdgeNodeInstallerOnline::SetScriptDownloadUrl(const string& _scriptDownloadUrl)
{
    m_scriptDownloadUrl = _scriptDownloadUrl;
    m_scriptDownloadUrlHasBeenSet = true;
}

bool EdgeNodeInstallerOnline::ScriptDownloadUrlHasBeenSet() const
{
    return m_scriptDownloadUrlHasBeenSet;
}

string EdgeNodeInstallerOnline::GetGuide() const
{
    return m_guide;
}

void EdgeNodeInstallerOnline::SetGuide(const string& _guide)
{
    m_guide = _guide;
    m_guideHasBeenSet = true;
}

bool EdgeNodeInstallerOnline::GuideHasBeenSet() const
{
    return m_guideHasBeenSet;
}

