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

#include <tencentcloud/adp/v20260520/model/AppShareURLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppShareURLInfo::AppShareURLInfo() :
    m_accessControlHasBeenSet(false),
    m_shareUrlHasBeenSet(false)
{
}

CoreInternalOutcome AppShareURLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessControl") && !value["AccessControl"].IsNull())
    {
        if (!value["AccessControl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppShareURLInfo.AccessControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessControl.Deserialize(value["AccessControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessControlHasBeenSet = true;
    }

    if (value.HasMember("ShareUrl") && !value["ShareUrl"].IsNull())
    {
        if (!value["ShareUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppShareURLInfo.ShareUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareUrl = string(value["ShareUrl"].GetString());
        m_shareUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppShareURLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shareUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareUrl.c_str(), allocator).Move(), allocator);
    }

}


AppShareAccessControl AppShareURLInfo::GetAccessControl() const
{
    return m_accessControl;
}

void AppShareURLInfo::SetAccessControl(const AppShareAccessControl& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool AppShareURLInfo::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

string AppShareURLInfo::GetShareUrl() const
{
    return m_shareUrl;
}

void AppShareURLInfo::SetShareUrl(const string& _shareUrl)
{
    m_shareUrl = _shareUrl;
    m_shareUrlHasBeenSet = true;
}

bool AppShareURLInfo::ShareUrlHasBeenSet() const
{
    return m_shareUrlHasBeenSet;
}

