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

#include <tencentcloud/rce/v20201103/model/DataContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

DataContentInfo::DataContentInfo() :
    m_dataContentHasBeenSet(false),
    m_dataRemarkHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DataContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataContent") && !value["DataContent"].IsNull())
    {
        if (!value["DataContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataContentInfo.DataContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataContent = string(value["DataContent"].GetString());
        m_dataContentHasBeenSet = true;
    }

    if (value.HasMember("DataRemark") && !value["DataRemark"].IsNull())
    {
        if (!value["DataRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataContentInfo.DataRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRemark = string(value["DataRemark"].GetString());
        m_dataRemarkHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataContentInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataContentInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataContent.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRemark.c_str(), allocator).Move(), allocator);
    }

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

}


string DataContentInfo::GetDataContent() const
{
    return m_dataContent;
}

void DataContentInfo::SetDataContent(const string& _dataContent)
{
    m_dataContent = _dataContent;
    m_dataContentHasBeenSet = true;
}

bool DataContentInfo::DataContentHasBeenSet() const
{
    return m_dataContentHasBeenSet;
}

string DataContentInfo::GetDataRemark() const
{
    return m_dataRemark;
}

void DataContentInfo::SetDataRemark(const string& _dataRemark)
{
    m_dataRemark = _dataRemark;
    m_dataRemarkHasBeenSet = true;
}

bool DataContentInfo::DataRemarkHasBeenSet() const
{
    return m_dataRemarkHasBeenSet;
}

string DataContentInfo::GetStartTime() const
{
    return m_startTime;
}

void DataContentInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DataContentInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DataContentInfo::GetEndTime() const
{
    return m_endTime;
}

void DataContentInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DataContentInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

