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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpOriginCondition::IncrementalMigrationHttpOriginCondition() :
    m_httpStatusCodeHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpOriginCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpStatusCode") && !value["HttpStatusCode"].IsNull())
    {
        if (!value["HttpStatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginCondition.HttpStatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpStatusCode = value["HttpStatusCode"].GetUint64();
        m_httpStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginCondition.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpOriginCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpStatusCode, allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

}


uint64_t IncrementalMigrationHttpOriginCondition::GetHttpStatusCode() const
{
    return m_httpStatusCode;
}

void IncrementalMigrationHttpOriginCondition::SetHttpStatusCode(const uint64_t& _httpStatusCode)
{
    m_httpStatusCode = _httpStatusCode;
    m_httpStatusCodeHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginCondition::HttpStatusCodeHasBeenSet() const
{
    return m_httpStatusCodeHasBeenSet;
}

string IncrementalMigrationHttpOriginCondition::GetPrefix() const
{
    return m_prefix;
}

void IncrementalMigrationHttpOriginCondition::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginCondition::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

