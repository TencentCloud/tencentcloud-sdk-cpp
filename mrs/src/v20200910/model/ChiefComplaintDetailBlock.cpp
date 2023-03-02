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

#include <tencentcloud/mrs/v20200910/model/ChiefComplaintDetailBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChiefComplaintDetailBlock::ChiefComplaintDetailBlock() :
    m_diseaseNameHasBeenSet(false),
    m_partHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ChiefComplaintDetailBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiseaseName") && !value["DiseaseName"].IsNull())
    {
        if (!value["DiseaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintDetailBlock.DiseaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseName = string(value["DiseaseName"].GetString());
        m_diseaseNameHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintDetailBlock.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintDetailBlock.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintDetailBlock.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChiefComplaintDetailBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diseaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

}


string ChiefComplaintDetailBlock::GetDiseaseName() const
{
    return m_diseaseName;
}

void ChiefComplaintDetailBlock::SetDiseaseName(const string& _diseaseName)
{
    m_diseaseName = _diseaseName;
    m_diseaseNameHasBeenSet = true;
}

bool ChiefComplaintDetailBlock::DiseaseNameHasBeenSet() const
{
    return m_diseaseNameHasBeenSet;
}

string ChiefComplaintDetailBlock::GetPart() const
{
    return m_part;
}

void ChiefComplaintDetailBlock::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool ChiefComplaintDetailBlock::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string ChiefComplaintDetailBlock::GetTime() const
{
    return m_time;
}

void ChiefComplaintDetailBlock::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ChiefComplaintDetailBlock::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string ChiefComplaintDetailBlock::GetTimeType() const
{
    return m_timeType;
}

void ChiefComplaintDetailBlock::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool ChiefComplaintDetailBlock::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

