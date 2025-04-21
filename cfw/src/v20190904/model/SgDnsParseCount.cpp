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

#include <tencentcloud/cfw/v20190904/model/SgDnsParseCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SgDnsParseCount::SgDnsParseCount() :
    m_validCountHasBeenSet(false),
    m_invalidCountHasBeenSet(false)
{
}

CoreInternalOutcome SgDnsParseCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ValidCount") && !value["ValidCount"].IsNull())
    {
        if (!value["ValidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SgDnsParseCount.ValidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validCount = value["ValidCount"].GetInt64();
        m_validCountHasBeenSet = true;
    }

    if (value.HasMember("InvalidCount") && !value["InvalidCount"].IsNull())
    {
        if (!value["InvalidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SgDnsParseCount.InvalidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidCount = value["InvalidCount"].GetInt64();
        m_invalidCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SgDnsParseCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_validCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validCount, allocator);
    }

    if (m_invalidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidCount, allocator);
    }

}


int64_t SgDnsParseCount::GetValidCount() const
{
    return m_validCount;
}

void SgDnsParseCount::SetValidCount(const int64_t& _validCount)
{
    m_validCount = _validCount;
    m_validCountHasBeenSet = true;
}

bool SgDnsParseCount::ValidCountHasBeenSet() const
{
    return m_validCountHasBeenSet;
}

int64_t SgDnsParseCount::GetInvalidCount() const
{
    return m_invalidCount;
}

void SgDnsParseCount::SetInvalidCount(const int64_t& _invalidCount)
{
    m_invalidCount = _invalidCount;
    m_invalidCountHasBeenSet = true;
}

bool SgDnsParseCount::InvalidCountHasBeenSet() const
{
    return m_invalidCountHasBeenSet;
}

