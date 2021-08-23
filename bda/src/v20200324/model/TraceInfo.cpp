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

#include <tencentcloud/bda/v20200324/model/TraceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

TraceInfo::TraceInfo() :
    m_traceIdHasBeenSet(false),
    m_bodyIdsHasBeenSet(false)
{
}

CoreInternalOutcome TraceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceInfo.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("BodyIds") && !value["BodyIds"].IsNull())
    {
        if (!value["BodyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceInfo.BodyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BodyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bodyIds.push_back((*itr).GetString());
        }
        m_bodyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bodyIds.begin(); itr != m_bodyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TraceInfo::GetTraceId() const
{
    return m_traceId;
}

void TraceInfo::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool TraceInfo::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<string> TraceInfo::GetBodyIds() const
{
    return m_bodyIds;
}

void TraceInfo::SetBodyIds(const vector<string>& _bodyIds)
{
    m_bodyIds = _bodyIds;
    m_bodyIdsHasBeenSet = true;
}

bool TraceInfo::BodyIdsHasBeenSet() const
{
    return m_bodyIdsHasBeenSet;
}

