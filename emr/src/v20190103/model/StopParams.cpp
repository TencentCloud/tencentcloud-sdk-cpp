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

#include <tencentcloud/emr/v20190103/model/StopParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StopParams::StopParams() :
    m_stopPolicyHasBeenSet(false),
    m_threadCountHasBeenSet(false)
{
}

CoreInternalOutcome StopParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StopPolicy") && !value["StopPolicy"].IsNull())
    {
        if (!value["StopPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StopParams.StopPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopPolicy = string(value["StopPolicy"].GetString());
        m_stopPolicyHasBeenSet = true;
    }

    if (value.HasMember("ThreadCount") && !value["ThreadCount"].IsNull())
    {
        if (!value["ThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StopParams.ThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threadCount = value["ThreadCount"].GetInt64();
        m_threadCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StopParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stopPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_threadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threadCount, allocator);
    }

}


string StopParams::GetStopPolicy() const
{
    return m_stopPolicy;
}

void StopParams::SetStopPolicy(const string& _stopPolicy)
{
    m_stopPolicy = _stopPolicy;
    m_stopPolicyHasBeenSet = true;
}

bool StopParams::StopPolicyHasBeenSet() const
{
    return m_stopPolicyHasBeenSet;
}

int64_t StopParams::GetThreadCount() const
{
    return m_threadCount;
}

void StopParams::SetThreadCount(const int64_t& _threadCount)
{
    m_threadCount = _threadCount;
    m_threadCountHasBeenSet = true;
}

bool StopParams::ThreadCountHasBeenSet() const
{
    return m_threadCountHasBeenSet;
}

