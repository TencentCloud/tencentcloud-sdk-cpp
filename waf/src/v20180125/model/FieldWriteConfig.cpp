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

#include <tencentcloud/waf/v20180125/model/FieldWriteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

FieldWriteConfig::FieldWriteConfig() :
    m_enableHeadersHasBeenSet(false),
    m_enableBodyHasBeenSet(false),
    m_enableBotHasBeenSet(false)
{
}

CoreInternalOutcome FieldWriteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableHeaders") && !value["EnableHeaders"].IsNull())
    {
        if (!value["EnableHeaders"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableHeaders` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableHeaders = value["EnableHeaders"].GetInt64();
        m_enableHeadersHasBeenSet = true;
    }

    if (value.HasMember("EnableBody") && !value["EnableBody"].IsNull())
    {
        if (!value["EnableBody"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableBody` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableBody = value["EnableBody"].GetInt64();
        m_enableBodyHasBeenSet = true;
    }

    if (value.HasMember("EnableBot") && !value["EnableBot"].IsNull())
    {
        if (!value["EnableBot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableBot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableBot = value["EnableBot"].GetInt64();
        m_enableBotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldWriteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHeaders, allocator);
    }

    if (m_enableBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBody, allocator);
    }

    if (m_enableBotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBot, allocator);
    }

}


int64_t FieldWriteConfig::GetEnableHeaders() const
{
    return m_enableHeaders;
}

void FieldWriteConfig::SetEnableHeaders(const int64_t& _enableHeaders)
{
    m_enableHeaders = _enableHeaders;
    m_enableHeadersHasBeenSet = true;
}

bool FieldWriteConfig::EnableHeadersHasBeenSet() const
{
    return m_enableHeadersHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableBody() const
{
    return m_enableBody;
}

void FieldWriteConfig::SetEnableBody(const int64_t& _enableBody)
{
    m_enableBody = _enableBody;
    m_enableBodyHasBeenSet = true;
}

bool FieldWriteConfig::EnableBodyHasBeenSet() const
{
    return m_enableBodyHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableBot() const
{
    return m_enableBot;
}

void FieldWriteConfig::SetEnableBot(const int64_t& _enableBot)
{
    m_enableBot = _enableBot;
    m_enableBotHasBeenSet = true;
}

bool FieldWriteConfig::EnableBotHasBeenSet() const
{
    return m_enableBotHasBeenSet;
}

