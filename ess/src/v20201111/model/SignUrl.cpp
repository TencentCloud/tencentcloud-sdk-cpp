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

#include <tencentcloud/ess/v20201111/model/SignUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SignUrl::SignUrl() :
    m_appSignUrlHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_httpSignUrlHasBeenSet(false)
{
}

CoreInternalOutcome SignUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppSignUrl") && !value["AppSignUrl"].IsNull())
    {
        if (!value["AppSignUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrl.AppSignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSignUrl = string(value["AppSignUrl"].GetString());
        m_appSignUrlHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrl.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpSignUrl") && !value["HttpSignUrl"].IsNull())
    {
        if (!value["HttpSignUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignUrl.HttpSignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpSignUrl = string(value["HttpSignUrl"].GetString());
        m_httpSignUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appSignUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSignUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_httpSignUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpSignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpSignUrl.c_str(), allocator).Move(), allocator);
    }

}


string SignUrl::GetAppSignUrl() const
{
    return m_appSignUrl;
}

void SignUrl::SetAppSignUrl(const string& _appSignUrl)
{
    m_appSignUrl = _appSignUrl;
    m_appSignUrlHasBeenSet = true;
}

bool SignUrl::AppSignUrlHasBeenSet() const
{
    return m_appSignUrlHasBeenSet;
}

string SignUrl::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void SignUrl::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool SignUrl::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string SignUrl::GetHttpSignUrl() const
{
    return m_httpSignUrl;
}

void SignUrl::SetHttpSignUrl(const string& _httpSignUrl)
{
    m_httpSignUrl = _httpSignUrl;
    m_httpSignUrlHasBeenSet = true;
}

bool SignUrl::HttpSignUrlHasBeenSet() const
{
    return m_httpSignUrlHasBeenSet;
}

