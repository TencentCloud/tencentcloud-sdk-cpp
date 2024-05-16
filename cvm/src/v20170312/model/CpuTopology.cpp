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

#include <tencentcloud/cvm/v20170312/model/CpuTopology.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

CpuTopology::CpuTopology() :
    m_coreCountHasBeenSet(false),
    m_threadPerCoreHasBeenSet(false)
{
}

CoreInternalOutcome CpuTopology::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CoreCount") && !value["CoreCount"].IsNull())
    {
        if (!value["CoreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuTopology.CoreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreCount = value["CoreCount"].GetInt64();
        m_coreCountHasBeenSet = true;
    }

    if (value.HasMember("ThreadPerCore") && !value["ThreadPerCore"].IsNull())
    {
        if (!value["ThreadPerCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuTopology.ThreadPerCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threadPerCore = value["ThreadPerCore"].GetInt64();
        m_threadPerCoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CpuTopology::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_threadPerCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadPerCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threadPerCore, allocator);
    }

}


int64_t CpuTopology::GetCoreCount() const
{
    return m_coreCount;
}

void CpuTopology::SetCoreCount(const int64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool CpuTopology::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

int64_t CpuTopology::GetThreadPerCore() const
{
    return m_threadPerCore;
}

void CpuTopology::SetThreadPerCore(const int64_t& _threadPerCore)
{
    m_threadPerCore = _threadPerCore;
    m_threadPerCoreHasBeenSet = true;
}

bool CpuTopology::ThreadPerCoreHasBeenSet() const
{
    return m_threadPerCoreHasBeenSet;
}

