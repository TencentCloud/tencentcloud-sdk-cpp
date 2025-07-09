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

#include <tencentcloud/teo/v20220901/model/AllowActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AllowActionParameters::AllowActionParameters() :
    m_minDelayTimeHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false)
{
}

CoreInternalOutcome AllowActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinDelayTime") && !value["MinDelayTime"].IsNull())
    {
        if (!value["MinDelayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllowActionParameters.MinDelayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDelayTime = string(value["MinDelayTime"].GetString());
        m_minDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDelayTime") && !value["MaxDelayTime"].IsNull())
    {
        if (!value["MaxDelayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllowActionParameters.MaxDelayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelayTime = string(value["MaxDelayTime"].GetString());
        m_maxDelayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllowActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minDelayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxDelayTime.c_str(), allocator).Move(), allocator);
    }

}


string AllowActionParameters::GetMinDelayTime() const
{
    return m_minDelayTime;
}

void AllowActionParameters::SetMinDelayTime(const string& _minDelayTime)
{
    m_minDelayTime = _minDelayTime;
    m_minDelayTimeHasBeenSet = true;
}

bool AllowActionParameters::MinDelayTimeHasBeenSet() const
{
    return m_minDelayTimeHasBeenSet;
}

string AllowActionParameters::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

void AllowActionParameters::SetMaxDelayTime(const string& _maxDelayTime)
{
    m_maxDelayTime = _maxDelayTime;
    m_maxDelayTimeHasBeenSet = true;
}

bool AllowActionParameters::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}

