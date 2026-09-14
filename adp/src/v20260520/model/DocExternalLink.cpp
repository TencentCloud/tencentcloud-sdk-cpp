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

#include <tencentcloud/adp/v20260520/model/DocExternalLink.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocExternalLink::DocExternalLink() :
    m_externalUrlHasBeenSet(false),
    m_replaceOriginEnabledHasBeenSet(false)
{
}

CoreInternalOutcome DocExternalLink::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalUrl") && !value["ExternalUrl"].IsNull())
    {
        if (!value["ExternalUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocExternalLink.ExternalUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUrl = string(value["ExternalUrl"].GetString());
        m_externalUrlHasBeenSet = true;
    }

    if (value.HasMember("ReplaceOriginEnabled") && !value["ReplaceOriginEnabled"].IsNull())
    {
        if (!value["ReplaceOriginEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocExternalLink.ReplaceOriginEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_replaceOriginEnabled = value["ReplaceOriginEnabled"].GetBool();
        m_replaceOriginEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocExternalLink::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceOriginEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceOriginEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaceOriginEnabled, allocator);
    }

}


string DocExternalLink::GetExternalUrl() const
{
    return m_externalUrl;
}

void DocExternalLink::SetExternalUrl(const string& _externalUrl)
{
    m_externalUrl = _externalUrl;
    m_externalUrlHasBeenSet = true;
}

bool DocExternalLink::ExternalUrlHasBeenSet() const
{
    return m_externalUrlHasBeenSet;
}

bool DocExternalLink::GetReplaceOriginEnabled() const
{
    return m_replaceOriginEnabled;
}

void DocExternalLink::SetReplaceOriginEnabled(const bool& _replaceOriginEnabled)
{
    m_replaceOriginEnabled = _replaceOriginEnabled;
    m_replaceOriginEnabledHasBeenSet = true;
}

bool DocExternalLink::ReplaceOriginEnabledHasBeenSet() const
{
    return m_replaceOriginEnabledHasBeenSet;
}

