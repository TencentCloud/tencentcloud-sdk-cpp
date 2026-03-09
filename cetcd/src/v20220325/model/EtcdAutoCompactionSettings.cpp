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

#include <tencentcloud/cetcd/v20220325/model/EtcdAutoCompactionSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdAutoCompactionSettings::EtcdAutoCompactionSettings() :
    m_autoCompactionModeHasBeenSet(false),
    m_autoCompactionRetentionHasBeenSet(false)
{
}

CoreInternalOutcome EtcdAutoCompactionSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoCompactionMode") && !value["AutoCompactionMode"].IsNull())
    {
        if (!value["AutoCompactionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAutoCompactionSettings.AutoCompactionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoCompactionMode = string(value["AutoCompactionMode"].GetString());
        m_autoCompactionModeHasBeenSet = true;
    }

    if (value.HasMember("AutoCompactionRetention") && !value["AutoCompactionRetention"].IsNull())
    {
        if (!value["AutoCompactionRetention"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAutoCompactionSettings.AutoCompactionRetention` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoCompactionRetention = string(value["AutoCompactionRetention"].GetString());
        m_autoCompactionRetentionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdAutoCompactionSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoCompactionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCompactionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoCompactionMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCompactionRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCompactionRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoCompactionRetention.c_str(), allocator).Move(), allocator);
    }

}


string EtcdAutoCompactionSettings::GetAutoCompactionMode() const
{
    return m_autoCompactionMode;
}

void EtcdAutoCompactionSettings::SetAutoCompactionMode(const string& _autoCompactionMode)
{
    m_autoCompactionMode = _autoCompactionMode;
    m_autoCompactionModeHasBeenSet = true;
}

bool EtcdAutoCompactionSettings::AutoCompactionModeHasBeenSet() const
{
    return m_autoCompactionModeHasBeenSet;
}

string EtcdAutoCompactionSettings::GetAutoCompactionRetention() const
{
    return m_autoCompactionRetention;
}

void EtcdAutoCompactionSettings::SetAutoCompactionRetention(const string& _autoCompactionRetention)
{
    m_autoCompactionRetention = _autoCompactionRetention;
    m_autoCompactionRetentionHasBeenSet = true;
}

bool EtcdAutoCompactionSettings::AutoCompactionRetentionHasBeenSet() const
{
    return m_autoCompactionRetentionHasBeenSet;
}

