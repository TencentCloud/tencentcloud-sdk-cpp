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

#include <tencentcloud/bh/v20230418/model/AssetSyncFlags.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

AssetSyncFlags::AssetSyncFlags() :
    m_roleGrantedHasBeenSet(false),
    m_autoSyncHasBeenSet(false)
{
}

CoreInternalOutcome AssetSyncFlags::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleGranted") && !value["RoleGranted"].IsNull())
    {
        if (!value["RoleGranted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncFlags.RoleGranted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_roleGranted = value["RoleGranted"].GetBool();
        m_roleGrantedHasBeenSet = true;
    }

    if (value.HasMember("AutoSync") && !value["AutoSync"].IsNull())
    {
        if (!value["AutoSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncFlags.AutoSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSync = value["AutoSync"].GetBool();
        m_autoSyncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetSyncFlags::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleGrantedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleGranted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleGranted, allocator);
    }

    if (m_autoSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSync, allocator);
    }

}


bool AssetSyncFlags::GetRoleGranted() const
{
    return m_roleGranted;
}

void AssetSyncFlags::SetRoleGranted(const bool& _roleGranted)
{
    m_roleGranted = _roleGranted;
    m_roleGrantedHasBeenSet = true;
}

bool AssetSyncFlags::RoleGrantedHasBeenSet() const
{
    return m_roleGrantedHasBeenSet;
}

bool AssetSyncFlags::GetAutoSync() const
{
    return m_autoSync;
}

void AssetSyncFlags::SetAutoSync(const bool& _autoSync)
{
    m_autoSync = _autoSync;
    m_autoSyncHasBeenSet = true;
}

bool AssetSyncFlags::AutoSyncHasBeenSet() const
{
    return m_autoSyncHasBeenSet;
}

