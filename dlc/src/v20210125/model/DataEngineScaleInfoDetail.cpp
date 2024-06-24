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

#include <tencentcloud/dlc/v20210125/model/DataEngineScaleInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineScaleInfoDetail::DataEngineScaleInfoDetail() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cUHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineScaleInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineScaleInfoDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineScaleInfoDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CU") && !value["CU"].IsNull())
    {
        if (!value["CU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineScaleInfoDetail.CU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cU = value["CU"].GetInt64();
        m_cUHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineScaleInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cU, allocator);
    }

}


string DataEngineScaleInfoDetail::GetStartTime() const
{
    return m_startTime;
}

void DataEngineScaleInfoDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DataEngineScaleInfoDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DataEngineScaleInfoDetail::GetEndTime() const
{
    return m_endTime;
}

void DataEngineScaleInfoDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DataEngineScaleInfoDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DataEngineScaleInfoDetail::GetCU() const
{
    return m_cU;
}

void DataEngineScaleInfoDetail::SetCU(const int64_t& _cU)
{
    m_cU = _cU;
    m_cUHasBeenSet = true;
}

bool DataEngineScaleInfoDetail::CUHasBeenSet() const
{
    return m_cUHasBeenSet;
}

