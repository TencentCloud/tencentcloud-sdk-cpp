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

#include <tencentcloud/pts/v20210728/model/ScenarioRelatedJobsParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

ScenarioRelatedJobsParams::ScenarioRelatedJobsParams() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false)
{
}

CoreInternalOutcome ScenarioRelatedJobsParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScenarioRelatedJobsParams.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScenarioRelatedJobsParams.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("OrderBy") && !value["OrderBy"].IsNull())
    {
        if (!value["OrderBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScenarioRelatedJobsParams.OrderBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderBy = string(value["OrderBy"].GetString());
        m_orderByHasBeenSet = true;
    }

    if (value.HasMember("Ascend") && !value["Ascend"].IsNull())
    {
        if (!value["Ascend"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScenarioRelatedJobsParams.Ascend` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ascend = value["Ascend"].GetBool();
        m_ascendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScenarioRelatedJobsParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ascend, allocator);
    }

}


int64_t ScenarioRelatedJobsParams::GetOffset() const
{
    return m_offset;
}

void ScenarioRelatedJobsParams::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ScenarioRelatedJobsParams::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ScenarioRelatedJobsParams::GetLimit() const
{
    return m_limit;
}

void ScenarioRelatedJobsParams::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ScenarioRelatedJobsParams::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ScenarioRelatedJobsParams::GetOrderBy() const
{
    return m_orderBy;
}

void ScenarioRelatedJobsParams::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool ScenarioRelatedJobsParams::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool ScenarioRelatedJobsParams::GetAscend() const
{
    return m_ascend;
}

void ScenarioRelatedJobsParams::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool ScenarioRelatedJobsParams::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

