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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmPolicyFilter::AlarmPolicyFilter() :
    m_typeHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyFilter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyFilter.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

}


string AlarmPolicyFilter::GetType() const
{
    return m_type;
}

void AlarmPolicyFilter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmPolicyFilter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmPolicyFilter::GetDimensions() const
{
    return m_dimensions;
}

void AlarmPolicyFilter::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool AlarmPolicyFilter::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

