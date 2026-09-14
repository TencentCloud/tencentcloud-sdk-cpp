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

#include <tencentcloud/adp/v20260520/model/DocLink.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocLink::DocLink() :
    m_cosUrlHasBeenSet(false),
    m_externalLinkHasBeenSet(false)
{
}

CoreInternalOutcome DocLink::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosUrl") && !value["CosUrl"].IsNull())
    {
        if (!value["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocLink.CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(value["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }

    if (value.HasMember("ExternalLink") && !value["ExternalLink"].IsNull())
    {
        if (!value["ExternalLink"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocLink.ExternalLink` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalLink.Deserialize(value["ExternalLink"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocLink::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_externalLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalLink.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DocLink::GetCosUrl() const
{
    return m_cosUrl;
}

void DocLink::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool DocLink::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

DocExternalLink DocLink::GetExternalLink() const
{
    return m_externalLink;
}

void DocLink::SetExternalLink(const DocExternalLink& _externalLink)
{
    m_externalLink = _externalLink;
    m_externalLinkHasBeenSet = true;
}

bool DocLink::ExternalLinkHasBeenSet() const
{
    return m_externalLinkHasBeenSet;
}

