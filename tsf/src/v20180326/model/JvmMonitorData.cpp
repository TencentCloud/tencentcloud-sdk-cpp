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

#include <tencentcloud/tsf/v20180326/model/JvmMonitorData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

JvmMonitorData::JvmMonitorData() :
    m_heapMemoryHasBeenSet(false),
    m_nonHeapMemoryHasBeenSet(false),
    m_edenSpaceHasBeenSet(false),
    m_survivorSpaceHasBeenSet(false),
    m_oldSpaceHasBeenSet(false),
    m_metaSpaceHasBeenSet(false),
    m_threadPictureHasBeenSet(false),
    m_youngGCHasBeenSet(false),
    m_fullGCHasBeenSet(false),
    m_cpuUsageHasBeenSet(false),
    m_classCountHasBeenSet(false)
{
}

CoreInternalOutcome JvmMonitorData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeapMemory") && !value["HeapMemory"].IsNull())
    {
        if (!value["HeapMemory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.HeapMemory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heapMemory.Deserialize(value["HeapMemory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heapMemoryHasBeenSet = true;
    }

    if (value.HasMember("NonHeapMemory") && !value["NonHeapMemory"].IsNull())
    {
        if (!value["NonHeapMemory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.NonHeapMemory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nonHeapMemory.Deserialize(value["NonHeapMemory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nonHeapMemoryHasBeenSet = true;
    }

    if (value.HasMember("EdenSpace") && !value["EdenSpace"].IsNull())
    {
        if (!value["EdenSpace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.EdenSpace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_edenSpace.Deserialize(value["EdenSpace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_edenSpaceHasBeenSet = true;
    }

    if (value.HasMember("SurvivorSpace") && !value["SurvivorSpace"].IsNull())
    {
        if (!value["SurvivorSpace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.SurvivorSpace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_survivorSpace.Deserialize(value["SurvivorSpace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_survivorSpaceHasBeenSet = true;
    }

    if (value.HasMember("OldSpace") && !value["OldSpace"].IsNull())
    {
        if (!value["OldSpace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.OldSpace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oldSpace.Deserialize(value["OldSpace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oldSpaceHasBeenSet = true;
    }

    if (value.HasMember("MetaSpace") && !value["MetaSpace"].IsNull())
    {
        if (!value["MetaSpace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.MetaSpace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaSpace.Deserialize(value["MetaSpace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaSpaceHasBeenSet = true;
    }

    if (value.HasMember("ThreadPicture") && !value["ThreadPicture"].IsNull())
    {
        if (!value["ThreadPicture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.ThreadPicture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_threadPicture.Deserialize(value["ThreadPicture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_threadPictureHasBeenSet = true;
    }

    if (value.HasMember("YoungGC") && !value["YoungGC"].IsNull())
    {
        if (!value["YoungGC"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.YoungGC` is not array type"));

        const rapidjson::Value &tmpValue = value["YoungGC"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_youngGC.push_back(item);
        }
        m_youngGCHasBeenSet = true;
    }

    if (value.HasMember("FullGC") && !value["FullGC"].IsNull())
    {
        if (!value["FullGC"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.FullGC` is not array type"));

        const rapidjson::Value &tmpValue = value["FullGC"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fullGC.push_back(item);
        }
        m_fullGCHasBeenSet = true;
    }

    if (value.HasMember("CpuUsage") && !value["CpuUsage"].IsNull())
    {
        if (!value["CpuUsage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.CpuUsage` is not array type"));

        const rapidjson::Value &tmpValue = value["CpuUsage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cpuUsage.push_back(item);
        }
        m_cpuUsageHasBeenSet = true;
    }

    if (value.HasMember("ClassCount") && !value["ClassCount"].IsNull())
    {
        if (!value["ClassCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JvmMonitorData.ClassCount` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classCount.push_back(item);
        }
        m_classCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JvmMonitorData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heapMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeapMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heapMemory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nonHeapMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonHeapMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nonHeapMemory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_edenSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdenSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_edenSpace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_survivorSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurvivorSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_survivorSpace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oldSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldSpace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metaSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaSpace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_threadPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadPicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_threadPicture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_youngGCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YoungGC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_youngGC.begin(); itr != m_youngGC.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fullGCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullGC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fullGC.begin(); itr != m_fullGC.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cpuUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cpuUsage.begin(); itr != m_cpuUsage.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_classCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classCount.begin(); itr != m_classCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


MemoryPicture JvmMonitorData::GetHeapMemory() const
{
    return m_heapMemory;
}

void JvmMonitorData::SetHeapMemory(const MemoryPicture& _heapMemory)
{
    m_heapMemory = _heapMemory;
    m_heapMemoryHasBeenSet = true;
}

bool JvmMonitorData::HeapMemoryHasBeenSet() const
{
    return m_heapMemoryHasBeenSet;
}

MemoryPicture JvmMonitorData::GetNonHeapMemory() const
{
    return m_nonHeapMemory;
}

void JvmMonitorData::SetNonHeapMemory(const MemoryPicture& _nonHeapMemory)
{
    m_nonHeapMemory = _nonHeapMemory;
    m_nonHeapMemoryHasBeenSet = true;
}

bool JvmMonitorData::NonHeapMemoryHasBeenSet() const
{
    return m_nonHeapMemoryHasBeenSet;
}

MemoryPicture JvmMonitorData::GetEdenSpace() const
{
    return m_edenSpace;
}

void JvmMonitorData::SetEdenSpace(const MemoryPicture& _edenSpace)
{
    m_edenSpace = _edenSpace;
    m_edenSpaceHasBeenSet = true;
}

bool JvmMonitorData::EdenSpaceHasBeenSet() const
{
    return m_edenSpaceHasBeenSet;
}

MemoryPicture JvmMonitorData::GetSurvivorSpace() const
{
    return m_survivorSpace;
}

void JvmMonitorData::SetSurvivorSpace(const MemoryPicture& _survivorSpace)
{
    m_survivorSpace = _survivorSpace;
    m_survivorSpaceHasBeenSet = true;
}

bool JvmMonitorData::SurvivorSpaceHasBeenSet() const
{
    return m_survivorSpaceHasBeenSet;
}

MemoryPicture JvmMonitorData::GetOldSpace() const
{
    return m_oldSpace;
}

void JvmMonitorData::SetOldSpace(const MemoryPicture& _oldSpace)
{
    m_oldSpace = _oldSpace;
    m_oldSpaceHasBeenSet = true;
}

bool JvmMonitorData::OldSpaceHasBeenSet() const
{
    return m_oldSpaceHasBeenSet;
}

MemoryPicture JvmMonitorData::GetMetaSpace() const
{
    return m_metaSpace;
}

void JvmMonitorData::SetMetaSpace(const MemoryPicture& _metaSpace)
{
    m_metaSpace = _metaSpace;
    m_metaSpaceHasBeenSet = true;
}

bool JvmMonitorData::MetaSpaceHasBeenSet() const
{
    return m_metaSpaceHasBeenSet;
}

ThreadPicture JvmMonitorData::GetThreadPicture() const
{
    return m_threadPicture;
}

void JvmMonitorData::SetThreadPicture(const ThreadPicture& _threadPicture)
{
    m_threadPicture = _threadPicture;
    m_threadPictureHasBeenSet = true;
}

bool JvmMonitorData::ThreadPictureHasBeenSet() const
{
    return m_threadPictureHasBeenSet;
}

vector<CurvePoint> JvmMonitorData::GetYoungGC() const
{
    return m_youngGC;
}

void JvmMonitorData::SetYoungGC(const vector<CurvePoint>& _youngGC)
{
    m_youngGC = _youngGC;
    m_youngGCHasBeenSet = true;
}

bool JvmMonitorData::YoungGCHasBeenSet() const
{
    return m_youngGCHasBeenSet;
}

vector<CurvePoint> JvmMonitorData::GetFullGC() const
{
    return m_fullGC;
}

void JvmMonitorData::SetFullGC(const vector<CurvePoint>& _fullGC)
{
    m_fullGC = _fullGC;
    m_fullGCHasBeenSet = true;
}

bool JvmMonitorData::FullGCHasBeenSet() const
{
    return m_fullGCHasBeenSet;
}

vector<CurvePoint> JvmMonitorData::GetCpuUsage() const
{
    return m_cpuUsage;
}

void JvmMonitorData::SetCpuUsage(const vector<CurvePoint>& _cpuUsage)
{
    m_cpuUsage = _cpuUsage;
    m_cpuUsageHasBeenSet = true;
}

bool JvmMonitorData::CpuUsageHasBeenSet() const
{
    return m_cpuUsageHasBeenSet;
}

vector<CurvePoint> JvmMonitorData::GetClassCount() const
{
    return m_classCount;
}

void JvmMonitorData::SetClassCount(const vector<CurvePoint>& _classCount)
{
    m_classCount = _classCount;
    m_classCountHasBeenSet = true;
}

bool JvmMonitorData::ClassCountHasBeenSet() const
{
    return m_classCountHasBeenSet;
}

