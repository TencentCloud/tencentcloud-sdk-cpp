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

#include <tencentcloud/apis/v20240801/model/CustomMatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CustomMatch::CustomMatch() :
    m_headersMatchHasBeenSet(false),
    m_queryMatchHasBeenSet(false)
{
}

CoreInternalOutcome CustomMatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadersMatch") && !value["HeadersMatch"].IsNull())
    {
        if (!value["HeadersMatch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMatch.HeadersMatch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headersMatch.Deserialize(value["HeadersMatch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headersMatchHasBeenSet = true;
    }

    if (value.HasMember("QueryMatch") && !value["QueryMatch"].IsNull())
    {
        if (!value["QueryMatch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMatch.QueryMatch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryMatch.Deserialize(value["QueryMatch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomMatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headersMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadersMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headersMatch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_queryMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryMatch.ToJsonObject(value[key.c_str()], allocator);
    }

}


CompoundCondition CustomMatch::GetHeadersMatch() const
{
    return m_headersMatch;
}

void CustomMatch::SetHeadersMatch(const CompoundCondition& _headersMatch)
{
    m_headersMatch = _headersMatch;
    m_headersMatchHasBeenSet = true;
}

bool CustomMatch::HeadersMatchHasBeenSet() const
{
    return m_headersMatchHasBeenSet;
}

CompoundCondition CustomMatch::GetQueryMatch() const
{
    return m_queryMatch;
}

void CustomMatch::SetQueryMatch(const CompoundCondition& _queryMatch)
{
    m_queryMatch = _queryMatch;
    m_queryMatchHasBeenSet = true;
}

bool CustomMatch::QueryMatchHasBeenSet() const
{
    return m_queryMatchHasBeenSet;
}

