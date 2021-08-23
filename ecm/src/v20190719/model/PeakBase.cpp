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

#include <tencentcloud/ecm/v20190719/model/PeakBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PeakBase::PeakBase() :
    m_peakCpuNumHasBeenSet(false),
    m_peakMemoryNumHasBeenSet(false),
    m_peakStorageNumHasBeenSet(false),
    m_recordTimeHasBeenSet(false)
{
}

CoreInternalOutcome PeakBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeakCpuNum") && !value["PeakCpuNum"].IsNull())
    {
        if (!value["PeakCpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBase.PeakCpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peakCpuNum = value["PeakCpuNum"].GetInt64();
        m_peakCpuNumHasBeenSet = true;
    }

    if (value.HasMember("PeakMemoryNum") && !value["PeakMemoryNum"].IsNull())
    {
        if (!value["PeakMemoryNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBase.PeakMemoryNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peakMemoryNum = value["PeakMemoryNum"].GetInt64();
        m_peakMemoryNumHasBeenSet = true;
    }

    if (value.HasMember("PeakStorageNum") && !value["PeakStorageNum"].IsNull())
    {
        if (!value["PeakStorageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBase.PeakStorageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peakStorageNum = value["PeakStorageNum"].GetInt64();
        m_peakStorageNumHasBeenSet = true;
    }

    if (value.HasMember("RecordTime") && !value["RecordTime"].IsNull())
    {
        if (!value["RecordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakBase.RecordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTime = string(value["RecordTime"].GetString());
        m_recordTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeakBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_peakCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakCpuNum, allocator);
    }

    if (m_peakMemoryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakMemoryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakMemoryNum, allocator);
    }

    if (m_peakStorageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakStorageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakStorageNum, allocator);
    }

    if (m_recordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t PeakBase::GetPeakCpuNum() const
{
    return m_peakCpuNum;
}

void PeakBase::SetPeakCpuNum(const int64_t& _peakCpuNum)
{
    m_peakCpuNum = _peakCpuNum;
    m_peakCpuNumHasBeenSet = true;
}

bool PeakBase::PeakCpuNumHasBeenSet() const
{
    return m_peakCpuNumHasBeenSet;
}

int64_t PeakBase::GetPeakMemoryNum() const
{
    return m_peakMemoryNum;
}

void PeakBase::SetPeakMemoryNum(const int64_t& _peakMemoryNum)
{
    m_peakMemoryNum = _peakMemoryNum;
    m_peakMemoryNumHasBeenSet = true;
}

bool PeakBase::PeakMemoryNumHasBeenSet() const
{
    return m_peakMemoryNumHasBeenSet;
}

int64_t PeakBase::GetPeakStorageNum() const
{
    return m_peakStorageNum;
}

void PeakBase::SetPeakStorageNum(const int64_t& _peakStorageNum)
{
    m_peakStorageNum = _peakStorageNum;
    m_peakStorageNumHasBeenSet = true;
}

bool PeakBase::PeakStorageNumHasBeenSet() const
{
    return m_peakStorageNumHasBeenSet;
}

string PeakBase::GetRecordTime() const
{
    return m_recordTime;
}

void PeakBase::SetRecordTime(const string& _recordTime)
{
    m_recordTime = _recordTime;
    m_recordTimeHasBeenSet = true;
}

bool PeakBase::RecordTimeHasBeenSet() const
{
    return m_recordTimeHasBeenSet;
}

