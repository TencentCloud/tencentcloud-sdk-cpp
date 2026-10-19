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

#include <tencentcloud/apm/v20210622/model/SpanStatusConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

SpanStatusConfig::SpanStatusConfig() :
    m_markAsErrorHasBeenSet(false),
    m_markAsOkHasBeenSet(false)
{
}

CoreInternalOutcome SpanStatusConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarkAsError") && !value["MarkAsError"].IsNull())
    {
        if (!value["MarkAsError"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpanStatusConfig.MarkAsError` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_markAsError.Deserialize(value["MarkAsError"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_markAsErrorHasBeenSet = true;
    }

    if (value.HasMember("MarkAsOk") && !value["MarkAsOk"].IsNull())
    {
        if (!value["MarkAsOk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpanStatusConfig.MarkAsOk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_markAsOk.Deserialize(value["MarkAsOk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_markAsOkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpanStatusConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_markAsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkAsError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_markAsError.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_markAsOkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkAsOk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_markAsOk.ToJsonObject(value[key.c_str()], allocator);
    }

}


ErrorSpanConf SpanStatusConfig::GetMarkAsError() const
{
    return m_markAsError;
}

void SpanStatusConfig::SetMarkAsError(const ErrorSpanConf& _markAsError)
{
    m_markAsError = _markAsError;
    m_markAsErrorHasBeenSet = true;
}

bool SpanStatusConfig::MarkAsErrorHasBeenSet() const
{
    return m_markAsErrorHasBeenSet;
}

ErrorSpanConf SpanStatusConfig::GetMarkAsOk() const
{
    return m_markAsOk;
}

void SpanStatusConfig::SetMarkAsOk(const ErrorSpanConf& _markAsOk)
{
    m_markAsOk = _markAsOk;
    m_markAsOkHasBeenSet = true;
}

bool SpanStatusConfig::MarkAsOkHasBeenSet() const
{
    return m_markAsOkHasBeenSet;
}

