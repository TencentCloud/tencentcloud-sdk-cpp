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

#include <tencentcloud/cynosdb/v20190107/model/ModifyDbVersionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyDbVersionData::ModifyDbVersionData() :
    m_oldVersionHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDbVersionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldVersion") && !value["OldVersion"].IsNull())
    {
        if (!value["OldVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDbVersionData.OldVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldVersion = string(value["OldVersion"].GetString());
        m_oldVersionHasBeenSet = true;
    }

    if (value.HasMember("NewVersion") && !value["NewVersion"].IsNull())
    {
        if (!value["NewVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDbVersionData.NewVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newVersion = string(value["NewVersion"].GetString());
        m_newVersionHasBeenSet = true;
    }

    if (value.HasMember("UpgradeType") && !value["UpgradeType"].IsNull())
    {
        if (!value["UpgradeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDbVersionData.UpgradeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeType = string(value["UpgradeType"].GetString());
        m_upgradeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDbVersionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_newVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

}


string ModifyDbVersionData::GetOldVersion() const
{
    return m_oldVersion;
}

void ModifyDbVersionData::SetOldVersion(const string& _oldVersion)
{
    m_oldVersion = _oldVersion;
    m_oldVersionHasBeenSet = true;
}

bool ModifyDbVersionData::OldVersionHasBeenSet() const
{
    return m_oldVersionHasBeenSet;
}

string ModifyDbVersionData::GetNewVersion() const
{
    return m_newVersion;
}

void ModifyDbVersionData::SetNewVersion(const string& _newVersion)
{
    m_newVersion = _newVersion;
    m_newVersionHasBeenSet = true;
}

bool ModifyDbVersionData::NewVersionHasBeenSet() const
{
    return m_newVersionHasBeenSet;
}

string ModifyDbVersionData::GetUpgradeType() const
{
    return m_upgradeType;
}

void ModifyDbVersionData::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool ModifyDbVersionData::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

