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

#include <tencentcloud/teo/v20220901/model/DDoSBlockData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSBlockData::DDoSBlockData() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_blockAreaHasBeenSet(false)
{
}

CoreInternalOutcome DDoSBlockData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockData.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockData.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BlockArea") && !value["BlockArea"].IsNull())
    {
        if (!value["BlockArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockData.BlockArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockArea = string(value["BlockArea"].GetString());
        m_blockAreaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSBlockData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_blockAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockArea.c_str(), allocator).Move(), allocator);
    }

}


int64_t DDoSBlockData::GetStartTime() const
{
    return m_startTime;
}

void DDoSBlockData::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DDoSBlockData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DDoSBlockData::GetEndTime() const
{
    return m_endTime;
}

void DDoSBlockData::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DDoSBlockData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DDoSBlockData::GetBlockArea() const
{
    return m_blockArea;
}

void DDoSBlockData::SetBlockArea(const string& _blockArea)
{
    m_blockArea = _blockArea;
    m_blockAreaHasBeenSet = true;
}

bool DDoSBlockData::BlockAreaHasBeenSet() const
{
    return m_blockAreaHasBeenSet;
}

