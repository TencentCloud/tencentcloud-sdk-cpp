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

#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AutoUpgradeClusterLevel::AutoUpgradeClusterLevel() :
    m_isAutoUpgradeHasBeenSet(false)
{
}

CoreInternalOutcome AutoUpgradeClusterLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAutoUpgrade") && !value["IsAutoUpgrade"].IsNull())
    {
        if (!value["IsAutoUpgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoUpgradeClusterLevel.IsAutoUpgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoUpgrade = value["IsAutoUpgrade"].GetBool();
        m_isAutoUpgradeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoUpgradeClusterLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAutoUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoUpgrade, allocator);
    }

}


bool AutoUpgradeClusterLevel::GetIsAutoUpgrade() const
{
    return m_isAutoUpgrade;
}

void AutoUpgradeClusterLevel::SetIsAutoUpgrade(const bool& _isAutoUpgrade)
{
    m_isAutoUpgrade = _isAutoUpgrade;
    m_isAutoUpgradeHasBeenSet = true;
}

bool AutoUpgradeClusterLevel::IsAutoUpgradeHasBeenSet() const
{
    return m_isAutoUpgradeHasBeenSet;
}

