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

#include <tencentcloud/cme/v20191029/model/RecordReplayProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

RecordReplayProjectInput::RecordReplayProjectInput() :
    m_pullStreamUrlHasBeenSet(false),
    m_materialOwnerHasBeenSet(false),
    m_materialClassPathHasBeenSet(false),
    m_pushStreamUrlHasBeenSet(false)
{
}

CoreInternalOutcome RecordReplayProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PullStreamUrl") && !value["PullStreamUrl"].IsNull())
    {
        if (!value["PullStreamUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordReplayProjectInput.PullStreamUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pullStreamUrl = string(value["PullStreamUrl"].GetString());
        m_pullStreamUrlHasBeenSet = true;
    }

    if (value.HasMember("MaterialOwner") && !value["MaterialOwner"].IsNull())
    {
        if (!value["MaterialOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordReplayProjectInput.MaterialOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialOwner.Deserialize(value["MaterialOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialOwnerHasBeenSet = true;
    }

    if (value.HasMember("MaterialClassPath") && !value["MaterialClassPath"].IsNull())
    {
        if (!value["MaterialClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordReplayProjectInput.MaterialClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialClassPath = string(value["MaterialClassPath"].GetString());
        m_materialClassPathHasBeenSet = true;
    }

    if (value.HasMember("PushStreamUrl") && !value["PushStreamUrl"].IsNull())
    {
        if (!value["PushStreamUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordReplayProjectInput.PushStreamUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushStreamUrl = string(value["PushStreamUrl"].GetString());
        m_pushStreamUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordReplayProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pullStreamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullStreamUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pullStreamUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_materialOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialClassPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialClassPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pushStreamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStreamUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushStreamUrl.c_str(), allocator).Move(), allocator);
    }

}


string RecordReplayProjectInput::GetPullStreamUrl() const
{
    return m_pullStreamUrl;
}

void RecordReplayProjectInput::SetPullStreamUrl(const string& _pullStreamUrl)
{
    m_pullStreamUrl = _pullStreamUrl;
    m_pullStreamUrlHasBeenSet = true;
}

bool RecordReplayProjectInput::PullStreamUrlHasBeenSet() const
{
    return m_pullStreamUrlHasBeenSet;
}

Entity RecordReplayProjectInput::GetMaterialOwner() const
{
    return m_materialOwner;
}

void RecordReplayProjectInput::SetMaterialOwner(const Entity& _materialOwner)
{
    m_materialOwner = _materialOwner;
    m_materialOwnerHasBeenSet = true;
}

bool RecordReplayProjectInput::MaterialOwnerHasBeenSet() const
{
    return m_materialOwnerHasBeenSet;
}

string RecordReplayProjectInput::GetMaterialClassPath() const
{
    return m_materialClassPath;
}

void RecordReplayProjectInput::SetMaterialClassPath(const string& _materialClassPath)
{
    m_materialClassPath = _materialClassPath;
    m_materialClassPathHasBeenSet = true;
}

bool RecordReplayProjectInput::MaterialClassPathHasBeenSet() const
{
    return m_materialClassPathHasBeenSet;
}

string RecordReplayProjectInput::GetPushStreamUrl() const
{
    return m_pushStreamUrl;
}

void RecordReplayProjectInput::SetPushStreamUrl(const string& _pushStreamUrl)
{
    m_pushStreamUrl = _pushStreamUrl;
    m_pushStreamUrlHasBeenSet = true;
}

bool RecordReplayProjectInput::PushStreamUrlHasBeenSet() const
{
    return m_pushStreamUrlHasBeenSet;
}

