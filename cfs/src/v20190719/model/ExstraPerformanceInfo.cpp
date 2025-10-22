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

#include <tencentcloud/cfs/v20190719/model/ExstraPerformanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ExstraPerformanceInfo::ExstraPerformanceInfo() :
    m_typeHasBeenSet(false),
    m_performanceHasBeenSet(false)
{
}

CoreInternalOutcome ExstraPerformanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExstraPerformanceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Performance") && !value["Performance"].IsNull())
    {
        if (!value["Performance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExstraPerformanceInfo.Performance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_performance = value["Performance"].GetInt64();
        m_performanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExstraPerformanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_performanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Performance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_performance, allocator);
    }

}


string ExstraPerformanceInfo::GetType() const
{
    return m_type;
}

void ExstraPerformanceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExstraPerformanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ExstraPerformanceInfo::GetPerformance() const
{
    return m_performance;
}

void ExstraPerformanceInfo::SetPerformance(const int64_t& _performance)
{
    m_performance = _performance;
    m_performanceHasBeenSet = true;
}

bool ExstraPerformanceInfo::PerformanceHasBeenSet() const
{
    return m_performanceHasBeenSet;
}

