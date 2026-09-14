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

#include <tencentcloud/adp/v20260520/model/DocSwitch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocSwitch::DocSwitch() :
    m_downloadEnabledHasBeenSet(false),
    m_referEnabledHasBeenSet(false)
{
}

CoreInternalOutcome DocSwitch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadEnabled") && !value["DownloadEnabled"].IsNull())
    {
        if (!value["DownloadEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocSwitch.DownloadEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_downloadEnabled = value["DownloadEnabled"].GetBool();
        m_downloadEnabledHasBeenSet = true;
    }

    if (value.HasMember("ReferEnabled") && !value["ReferEnabled"].IsNull())
    {
        if (!value["ReferEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocSwitch.ReferEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_referEnabled = value["ReferEnabled"].GetBool();
        m_referEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocSwitch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_downloadEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downloadEnabled, allocator);
    }

    if (m_referEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referEnabled, allocator);
    }

}


bool DocSwitch::GetDownloadEnabled() const
{
    return m_downloadEnabled;
}

void DocSwitch::SetDownloadEnabled(const bool& _downloadEnabled)
{
    m_downloadEnabled = _downloadEnabled;
    m_downloadEnabledHasBeenSet = true;
}

bool DocSwitch::DownloadEnabledHasBeenSet() const
{
    return m_downloadEnabledHasBeenSet;
}

bool DocSwitch::GetReferEnabled() const
{
    return m_referEnabled;
}

void DocSwitch::SetReferEnabled(const bool& _referEnabled)
{
    m_referEnabled = _referEnabled;
    m_referEnabledHasBeenSet = true;
}

bool DocSwitch::ReferEnabledHasBeenSet() const
{
    return m_referEnabledHasBeenSet;
}

