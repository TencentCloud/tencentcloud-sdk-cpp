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

#include <tencentcloud/bh/v20230418/model/EnvInternetAccessSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

EnvInternetAccessSetting::EnvInternetAccessSetting() :
    m_disableExternalAccessHasBeenSet(false),
    m_disableDownloadDataAclHasBeenSet(false)
{
}

CoreInternalOutcome EnvInternetAccessSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisableExternalAccess") && !value["DisableExternalAccess"].IsNull())
    {
        if (!value["DisableExternalAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInternetAccessSetting.DisableExternalAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableExternalAccess = value["DisableExternalAccess"].GetBool();
        m_disableExternalAccessHasBeenSet = true;
    }

    if (value.HasMember("DisableDownloadDataAcl") && !value["DisableDownloadDataAcl"].IsNull())
    {
        if (!value["DisableDownloadDataAcl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInternetAccessSetting.DisableDownloadDataAcl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableDownloadDataAcl = value["DisableDownloadDataAcl"].GetBool();
        m_disableDownloadDataAclHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvInternetAccessSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disableExternalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableExternalAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableExternalAccess, allocator);
    }

    if (m_disableDownloadDataAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableDownloadDataAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableDownloadDataAcl, allocator);
    }

}


bool EnvInternetAccessSetting::GetDisableExternalAccess() const
{
    return m_disableExternalAccess;
}

void EnvInternetAccessSetting::SetDisableExternalAccess(const bool& _disableExternalAccess)
{
    m_disableExternalAccess = _disableExternalAccess;
    m_disableExternalAccessHasBeenSet = true;
}

bool EnvInternetAccessSetting::DisableExternalAccessHasBeenSet() const
{
    return m_disableExternalAccessHasBeenSet;
}

bool EnvInternetAccessSetting::GetDisableDownloadDataAcl() const
{
    return m_disableDownloadDataAcl;
}

void EnvInternetAccessSetting::SetDisableDownloadDataAcl(const bool& _disableDownloadDataAcl)
{
    m_disableDownloadDataAcl = _disableDownloadDataAcl;
    m_disableDownloadDataAclHasBeenSet = true;
}

bool EnvInternetAccessSetting::DisableDownloadDataAclHasBeenSet() const
{
    return m_disableDownloadDataAclHasBeenSet;
}

