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

#include <tencentcloud/rce/v20201103/model/InputModifyNameListDataFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputModifyNameListDataFront::InputModifyNameListDataFront() :
    m_nameListDataIdHasBeenSet(false),
    m_dataContentHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome InputModifyNameListDataFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListDataId") && !value["NameListDataId"].IsNull())
    {
        if (!value["NameListDataId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.NameListDataId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListDataId = value["NameListDataId"].GetInt64();
        m_nameListDataIdHasBeenSet = true;
    }

    if (value.HasMember("DataContent") && !value["DataContent"].IsNull())
    {
        if (!value["DataContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.DataContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataContent = string(value["DataContent"].GetString());
        m_dataContentHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameListDataFront.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputModifyNameListDataFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameListDataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListDataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListDataId, allocator);
    }

    if (m_dataContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataContent.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


int64_t InputModifyNameListDataFront::GetNameListDataId() const
{
    return m_nameListDataId;
}

void InputModifyNameListDataFront::SetNameListDataId(const int64_t& _nameListDataId)
{
    m_nameListDataId = _nameListDataId;
    m_nameListDataIdHasBeenSet = true;
}

bool InputModifyNameListDataFront::NameListDataIdHasBeenSet() const
{
    return m_nameListDataIdHasBeenSet;
}

string InputModifyNameListDataFront::GetDataContent() const
{
    return m_dataContent;
}

void InputModifyNameListDataFront::SetDataContent(const string& _dataContent)
{
    m_dataContent = _dataContent;
    m_dataContentHasBeenSet = true;
}

bool InputModifyNameListDataFront::DataContentHasBeenSet() const
{
    return m_dataContentHasBeenSet;
}

string InputModifyNameListDataFront::GetStartTime() const
{
    return m_startTime;
}

void InputModifyNameListDataFront::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InputModifyNameListDataFront::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InputModifyNameListDataFront::GetEndTime() const
{
    return m_endTime;
}

void InputModifyNameListDataFront::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InputModifyNameListDataFront::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t InputModifyNameListDataFront::GetStatus() const
{
    return m_status;
}

void InputModifyNameListDataFront::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InputModifyNameListDataFront::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InputModifyNameListDataFront::GetRemark() const
{
    return m_remark;
}

void InputModifyNameListDataFront::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InputModifyNameListDataFront::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

