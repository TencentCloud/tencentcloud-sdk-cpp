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

#include <tencentcloud/dts/v20211206/model/CompareOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareOptions::CompareOptions() :
    m_methodHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_threadCountHasBeenSet(false)
{
}

CoreInternalOutcome CompareOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareOptions.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareOptions.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("ThreadCount") && !value["ThreadCount"].IsNull())
    {
        if (!value["ThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareOptions.ThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threadCount = value["ThreadCount"].GetInt64();
        m_threadCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_threadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threadCount, allocator);
    }

}


string CompareOptions::GetMethod() const
{
    return m_method;
}

void CompareOptions::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CompareOptions::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t CompareOptions::GetSampleRate() const
{
    return m_sampleRate;
}

void CompareOptions::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool CompareOptions::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t CompareOptions::GetThreadCount() const
{
    return m_threadCount;
}

void CompareOptions::SetThreadCount(const int64_t& _threadCount)
{
    m_threadCount = _threadCount;
    m_threadCountHasBeenSet = true;
}

bool CompareOptions::ThreadCountHasBeenSet() const
{
    return m_threadCountHasBeenSet;
}

