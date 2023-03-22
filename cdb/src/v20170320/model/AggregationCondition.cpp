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

#include <tencentcloud/cdb/v20170320/model/AggregationCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AggregationCondition::AggregationCondition() :
    m_aggregationFieldHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

CoreInternalOutcome AggregationCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AggregationField") && !value["AggregationField"].IsNull())
    {
        if (!value["AggregationField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationCondition.AggregationField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggregationField = string(value["AggregationField"].GetString());
        m_aggregationFieldHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationCondition.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationCondition.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggregationCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aggregationFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggregationField.c_str(), allocator).Move(), allocator);
    }

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

}


string AggregationCondition::GetAggregationField() const
{
    return m_aggregationField;
}

void AggregationCondition::SetAggregationField(const string& _aggregationField)
{
    m_aggregationField = _aggregationField;
    m_aggregationFieldHasBeenSet = true;
}

bool AggregationCondition::AggregationFieldHasBeenSet() const
{
    return m_aggregationFieldHasBeenSet;
}

uint64_t AggregationCondition::GetOffset() const
{
    return m_offset;
}

void AggregationCondition::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool AggregationCondition::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t AggregationCondition::GetLimit() const
{
    return m_limit;
}

void AggregationCondition::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool AggregationCondition::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

