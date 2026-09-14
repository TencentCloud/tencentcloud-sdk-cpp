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

#include <tencentcloud/adp/v20260520/model/SummaryListSwitch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SummaryListSwitch::SummaryListSwitch() :
    m_showMetadataEnabledHasBeenSet(false)
{
}

CoreInternalOutcome SummaryListSwitch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShowMetadataEnabled") && !value["ShowMetadataEnabled"].IsNull())
    {
        if (!value["ShowMetadataEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryListSwitch.ShowMetadataEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showMetadataEnabled = value["ShowMetadataEnabled"].GetBool();
        m_showMetadataEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryListSwitch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_showMetadataEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowMetadataEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showMetadataEnabled, allocator);
    }

}


bool SummaryListSwitch::GetShowMetadataEnabled() const
{
    return m_showMetadataEnabled;
}

void SummaryListSwitch::SetShowMetadataEnabled(const bool& _showMetadataEnabled)
{
    m_showMetadataEnabled = _showMetadataEnabled;
    m_showMetadataEnabledHasBeenSet = true;
}

bool SummaryListSwitch::ShowMetadataEnabledHasBeenSet() const
{
    return m_showMetadataEnabledHasBeenSet;
}

