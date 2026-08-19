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

#include <tencentcloud/csip/v20221121/model/UltimateAppItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UltimateAppItem::UltimateAppItem() :
    m_appIDHasBeenSet(false),
    m_isUltimateVersionHasBeenSet(false)
{
}

CoreInternalOutcome UltimateAppItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UltimateAppItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("IsUltimateVersion") && !value["IsUltimateVersion"].IsNull())
    {
        if (!value["IsUltimateVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UltimateAppItem.IsUltimateVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUltimateVersion = value["IsUltimateVersion"].GetBool();
        m_isUltimateVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UltimateAppItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_isUltimateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUltimateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUltimateVersion, allocator);
    }

}


uint64_t UltimateAppItem::GetAppID() const
{
    return m_appID;
}

void UltimateAppItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UltimateAppItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

bool UltimateAppItem::GetIsUltimateVersion() const
{
    return m_isUltimateVersion;
}

void UltimateAppItem::SetIsUltimateVersion(const bool& _isUltimateVersion)
{
    m_isUltimateVersion = _isUltimateVersion;
    m_isUltimateVersionHasBeenSet = true;
}

bool UltimateAppItem::IsUltimateVersionHasBeenSet() const
{
    return m_isUltimateVersionHasBeenSet;
}

