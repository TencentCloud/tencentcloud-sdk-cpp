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

#include <tencentcloud/wedata/v20210820/model/LifecycleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LifecycleInfo::LifecycleInfo() :
    m_lifecycleHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_dateFormatHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Lifecycle") && !value["Lifecycle"].IsNull())
    {
        if (!value["Lifecycle"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleInfo.Lifecycle` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycle = value["Lifecycle"].GetInt64();
        m_lifecycleHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifecycleInfo.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columns.push_back((*itr).GetString());
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("DateFormat") && !value["DateFormat"].IsNull())
    {
        if (!value["DateFormat"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifecycleInfo.DateFormat` is not array type"));

        const rapidjson::Value &tmpValue = value["DateFormat"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dateFormat.push_back((*itr).GetString());
        }
        m_dateFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifecycle, allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dateFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dateFormat.begin(); itr != m_dateFormat.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t LifecycleInfo::GetLifecycle() const
{
    return m_lifecycle;
}

void LifecycleInfo::SetLifecycle(const int64_t& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool LifecycleInfo::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

vector<string> LifecycleInfo::GetColumns() const
{
    return m_columns;
}

void LifecycleInfo::SetColumns(const vector<string>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool LifecycleInfo::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<string> LifecycleInfo::GetDateFormat() const
{
    return m_dateFormat;
}

void LifecycleInfo::SetDateFormat(const vector<string>& _dateFormat)
{
    m_dateFormat = _dateFormat;
    m_dateFormatHasBeenSet = true;
}

bool LifecycleInfo::DateFormatHasBeenSet() const
{
    return m_dateFormatHasBeenSet;
}

