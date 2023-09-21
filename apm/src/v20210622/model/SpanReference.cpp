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

#include <tencentcloud/apm/v20210622/model/SpanReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

SpanReference::SpanReference() :
    m_refTypeHasBeenSet(false),
    m_spanIDHasBeenSet(false),
    m_traceIDHasBeenSet(false)
{
}

CoreInternalOutcome SpanReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RefType") && !value["RefType"].IsNull())
    {
        if (!value["RefType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpanReference.RefType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refType = string(value["RefType"].GetString());
        m_refTypeHasBeenSet = true;
    }

    if (value.HasMember("SpanID") && !value["SpanID"].IsNull())
    {
        if (!value["SpanID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpanReference.SpanID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spanID = string(value["SpanID"].GetString());
        m_spanIDHasBeenSet = true;
    }

    if (value.HasMember("TraceID") && !value["TraceID"].IsNull())
    {
        if (!value["TraceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpanReference.TraceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceID = string(value["TraceID"].GetString());
        m_traceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpanReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_refTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refType.c_str(), allocator).Move(), allocator);
    }

    if (m_spanIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spanID.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceID.c_str(), allocator).Move(), allocator);
    }

}


string SpanReference::GetRefType() const
{
    return m_refType;
}

void SpanReference::SetRefType(const string& _refType)
{
    m_refType = _refType;
    m_refTypeHasBeenSet = true;
}

bool SpanReference::RefTypeHasBeenSet() const
{
    return m_refTypeHasBeenSet;
}

string SpanReference::GetSpanID() const
{
    return m_spanID;
}

void SpanReference::SetSpanID(const string& _spanID)
{
    m_spanID = _spanID;
    m_spanIDHasBeenSet = true;
}

bool SpanReference::SpanIDHasBeenSet() const
{
    return m_spanIDHasBeenSet;
}

string SpanReference::GetTraceID() const
{
    return m_traceID;
}

void SpanReference::SetTraceID(const string& _traceID)
{
    m_traceID = _traceID;
    m_traceIDHasBeenSet = true;
}

bool SpanReference::TraceIDHasBeenSet() const
{
    return m_traceIDHasBeenSet;
}

