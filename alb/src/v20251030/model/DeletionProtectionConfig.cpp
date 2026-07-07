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

#include <tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DeletionProtectionConfig::DeletionProtectionConfig() :
    m_deletionProtectionEnabledHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome DeletionProtectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeletionProtectionEnabled") && !value["DeletionProtectionEnabled"].IsNull())
    {
        if (!value["DeletionProtectionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeletionProtectionConfig.DeletionProtectionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtectionEnabled = value["DeletionProtectionEnabled"].GetBool();
        m_deletionProtectionEnabledHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeletionProtectionConfig.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeletionProtectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deletionProtectionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtectionEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtectionEnabled, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


bool DeletionProtectionConfig::GetDeletionProtectionEnabled() const
{
    return m_deletionProtectionEnabled;
}

void DeletionProtectionConfig::SetDeletionProtectionEnabled(const bool& _deletionProtectionEnabled)
{
    m_deletionProtectionEnabled = _deletionProtectionEnabled;
    m_deletionProtectionEnabledHasBeenSet = true;
}

bool DeletionProtectionConfig::DeletionProtectionEnabledHasBeenSet() const
{
    return m_deletionProtectionEnabledHasBeenSet;
}

string DeletionProtectionConfig::GetReason() const
{
    return m_reason;
}

void DeletionProtectionConfig::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool DeletionProtectionConfig::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

