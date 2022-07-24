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

#include <tencentcloud/ssa/v20180608/model/QueryFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

QueryFilter::QueryFilter() :
    m_filterKeyHasBeenSet(false),
    m_filterOperatorTypeHasBeenSet(false),
    m_filterValueHasBeenSet(false)
{
}

CoreInternalOutcome QueryFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterKey") && !value["FilterKey"].IsNull())
    {
        if (!value["FilterKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilter.FilterKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterKey = string(value["FilterKey"].GetString());
        m_filterKeyHasBeenSet = true;
    }

    if (value.HasMember("FilterOperatorType") && !value["FilterOperatorType"].IsNull())
    {
        if (!value["FilterOperatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilter.FilterOperatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterOperatorType = value["FilterOperatorType"].GetInt64();
        m_filterOperatorTypeHasBeenSet = true;
    }

    if (value.HasMember("FilterValue") && !value["FilterValue"].IsNull())
    {
        if (!value["FilterValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilter.FilterValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterValue = string(value["FilterValue"].GetString());
        m_filterValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterKey.c_str(), allocator).Move(), allocator);
    }

    if (m_filterOperatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterOperatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterOperatorType, allocator);
    }

    if (m_filterValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterValue.c_str(), allocator).Move(), allocator);
    }

}


string QueryFilter::GetFilterKey() const
{
    return m_filterKey;
}

void QueryFilter::SetFilterKey(const string& _filterKey)
{
    m_filterKey = _filterKey;
    m_filterKeyHasBeenSet = true;
}

bool QueryFilter::FilterKeyHasBeenSet() const
{
    return m_filterKeyHasBeenSet;
}

int64_t QueryFilter::GetFilterOperatorType() const
{
    return m_filterOperatorType;
}

void QueryFilter::SetFilterOperatorType(const int64_t& _filterOperatorType)
{
    m_filterOperatorType = _filterOperatorType;
    m_filterOperatorTypeHasBeenSet = true;
}

bool QueryFilter::FilterOperatorTypeHasBeenSet() const
{
    return m_filterOperatorTypeHasBeenSet;
}

string QueryFilter::GetFilterValue() const
{
    return m_filterValue;
}

void QueryFilter::SetFilterValue(const string& _filterValue)
{
    m_filterValue = _filterValue;
    m_filterValueHasBeenSet = true;
}

bool QueryFilter::FilterValueHasBeenSet() const
{
    return m_filterValueHasBeenSet;
}

