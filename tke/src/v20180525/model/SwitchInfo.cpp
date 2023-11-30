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

#include <tencentcloud/tke/v20180525/model/SwitchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SwitchInfo::SwitchInfo() :
    m_enableHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_upgradeAbleHasBeenSet(false),
    m_topicRegionHasBeenSet(false)
{
}

CoreInternalOutcome SwitchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("UpgradeAble") && !value["UpgradeAble"].IsNull())
    {
        if (!value["UpgradeAble"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.UpgradeAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeAble = value["UpgradeAble"].GetBool();
        m_upgradeAbleHasBeenSet = true;
    }

    if (value.HasMember("TopicRegion") && !value["TopicRegion"].IsNull())
    {
        if (!value["TopicRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchInfo.TopicRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicRegion = string(value["TopicRegion"].GetString());
        m_topicRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeAble, allocator);
    }

    if (m_topicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicRegion.c_str(), allocator).Move(), allocator);
    }

}


bool SwitchInfo::GetEnable() const
{
    return m_enable;
}

void SwitchInfo::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool SwitchInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string SwitchInfo::GetLogsetId() const
{
    return m_logsetId;
}

void SwitchInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool SwitchInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string SwitchInfo::GetTopicId() const
{
    return m_topicId;
}

void SwitchInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SwitchInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string SwitchInfo::GetVersion() const
{
    return m_version;
}

void SwitchInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SwitchInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

bool SwitchInfo::GetUpgradeAble() const
{
    return m_upgradeAble;
}

void SwitchInfo::SetUpgradeAble(const bool& _upgradeAble)
{
    m_upgradeAble = _upgradeAble;
    m_upgradeAbleHasBeenSet = true;
}

bool SwitchInfo::UpgradeAbleHasBeenSet() const
{
    return m_upgradeAbleHasBeenSet;
}

string SwitchInfo::GetTopicRegion() const
{
    return m_topicRegion;
}

void SwitchInfo::SetTopicRegion(const string& _topicRegion)
{
    m_topicRegion = _topicRegion;
    m_topicRegionHasBeenSet = true;
}

bool SwitchInfo::TopicRegionHasBeenSet() const
{
    return m_topicRegionHasBeenSet;
}

