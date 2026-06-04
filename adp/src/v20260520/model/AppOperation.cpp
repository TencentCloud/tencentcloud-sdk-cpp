/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/AppOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppOperation::AppOperation() :
    m_creatorHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_creatorUserAccountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updaterHasBeenSet(false),
    m_updaterUinHasBeenSet(false)
{
}

CoreInternalOutcome AppOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUserAccount") && !value["CreatorUserAccount"].IsNull())
    {
        if (!value["CreatorUserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.CreatorUserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUserAccount = string(value["CreatorUserAccount"].GetString());
        m_creatorUserAccountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Updater") && !value["Updater"].IsNull())
    {
        if (!value["Updater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.Updater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updater = string(value["Updater"].GetString());
        m_updaterHasBeenSet = true;
    }

    if (value.HasMember("UpdaterUin") && !value["UpdaterUin"].IsNull())
    {
        if (!value["UpdaterUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppOperation.UpdaterUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updaterUin = string(value["UpdaterUin"].GetString());
        m_updaterUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUserAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUserAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updaterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updater.c_str(), allocator).Move(), allocator);
    }

    if (m_updaterUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdaterUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updaterUin.c_str(), allocator).Move(), allocator);
    }

}


string AppOperation::GetCreator() const
{
    return m_creator;
}

void AppOperation::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AppOperation::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string AppOperation::GetCreatorUin() const
{
    return m_creatorUin;
}

void AppOperation::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool AppOperation::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string AppOperation::GetCreatorUserAccount() const
{
    return m_creatorUserAccount;
}

void AppOperation::SetCreatorUserAccount(const string& _creatorUserAccount)
{
    m_creatorUserAccount = _creatorUserAccount;
    m_creatorUserAccountHasBeenSet = true;
}

bool AppOperation::CreatorUserAccountHasBeenSet() const
{
    return m_creatorUserAccountHasBeenSet;
}

string AppOperation::GetUpdateTime() const
{
    return m_updateTime;
}

void AppOperation::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AppOperation::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AppOperation::GetUpdater() const
{
    return m_updater;
}

void AppOperation::SetUpdater(const string& _updater)
{
    m_updater = _updater;
    m_updaterHasBeenSet = true;
}

bool AppOperation::UpdaterHasBeenSet() const
{
    return m_updaterHasBeenSet;
}

string AppOperation::GetUpdaterUin() const
{
    return m_updaterUin;
}

void AppOperation::SetUpdaterUin(const string& _updaterUin)
{
    m_updaterUin = _updaterUin;
    m_updaterUinHasBeenSet = true;
}

bool AppOperation::UpdaterUinHasBeenSet() const
{
    return m_updaterUinHasBeenSet;
}

