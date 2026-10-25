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

#include <tencentcloud/clb/v20180317/model/RedirectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RedirectConfig::RedirectConfig() :
    m_statusCodeHasBeenSet(false),
    m_targetUrlHasBeenSet(false)
{
}

CoreInternalOutcome RedirectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectConfig.StatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetUint64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("TargetUrl") && !value["TargetUrl"].IsNull())
    {
        if (!value["TargetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectConfig.TargetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUrl = string(value["TargetUrl"].GetString());
        m_targetUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedirectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_targetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RedirectConfig::GetStatusCode() const
{
    return m_statusCode;
}

void RedirectConfig::SetStatusCode(const uint64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool RedirectConfig::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string RedirectConfig::GetTargetUrl() const
{
    return m_targetUrl;
}

void RedirectConfig::SetTargetUrl(const string& _targetUrl)
{
    m_targetUrl = _targetUrl;
    m_targetUrlHasBeenSet = true;
}

bool RedirectConfig::TargetUrlHasBeenSet() const
{
    return m_targetUrlHasBeenSet;
}

