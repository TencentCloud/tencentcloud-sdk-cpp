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

#include <tencentcloud/tsf/v20180326/model/OperationInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

OperationInfoDetail::OperationInfoDetail() :
    m_disabledReasonHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_supportedHasBeenSet(false)
{
}

CoreInternalOutcome OperationInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisabledReason") && !value["DisabledReason"].IsNull())
    {
        if (!value["DisabledReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfoDetail.DisabledReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disabledReason = string(value["DisabledReason"].GetString());
        m_disabledReasonHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfoDetail.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Supported") && !value["Supported"].IsNull())
    {
        if (!value["Supported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperationInfoDetail.Supported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supported = value["Supported"].GetBool();
        m_supportedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disabledReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisabledReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disabledReason.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_supportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supported, allocator);
    }

}


string OperationInfoDetail::GetDisabledReason() const
{
    return m_disabledReason;
}

void OperationInfoDetail::SetDisabledReason(const string& _disabledReason)
{
    m_disabledReason = _disabledReason;
    m_disabledReasonHasBeenSet = true;
}

bool OperationInfoDetail::DisabledReasonHasBeenSet() const
{
    return m_disabledReasonHasBeenSet;
}

bool OperationInfoDetail::GetEnabled() const
{
    return m_enabled;
}

void OperationInfoDetail::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool OperationInfoDetail::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool OperationInfoDetail::GetSupported() const
{
    return m_supported;
}

void OperationInfoDetail::SetSupported(const bool& _supported)
{
    m_supported = _supported;
    m_supportedHasBeenSet = true;
}

bool OperationInfoDetail::SupportedHasBeenSet() const
{
    return m_supportedHasBeenSet;
}

