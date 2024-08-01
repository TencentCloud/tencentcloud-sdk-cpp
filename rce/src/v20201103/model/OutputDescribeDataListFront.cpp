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

#include <tencentcloud/rce/v20201103/model/OutputDescribeDataListFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputDescribeDataListFront::OutputDescribeDataListFront() :
    m_nameListDataIdHasBeenSet(false),
    m_nameListIdHasBeenSet(false),
    m_dataContentHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_encryptDataContentHasBeenSet(false)
{
}

CoreInternalOutcome OutputDescribeDataListFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListDataId") && !value["NameListDataId"].IsNull())
    {
        if (!value["NameListDataId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.NameListDataId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListDataId = value["NameListDataId"].GetInt64();
        m_nameListDataIdHasBeenSet = true;
    }

    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }

    if (value.HasMember("DataContent") && !value["DataContent"].IsNull())
    {
        if (!value["DataContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.DataContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataContent = string(value["DataContent"].GetString());
        m_dataContentHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.DataSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = value["DataSource"].GetInt64();
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EncryptDataContent") && !value["EncryptDataContent"].IsNull())
    {
        if (!value["EncryptDataContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeDataListFront.EncryptDataContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptDataContent = string(value["EncryptDataContent"].GetString());
        m_encryptDataContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDescribeDataListFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameListDataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListDataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListDataId, allocator);
    }

    if (m_nameListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListId, allocator);
    }

    if (m_dataContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataContent.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSource, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptDataContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptDataContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptDataContent.c_str(), allocator).Move(), allocator);
    }

}


int64_t OutputDescribeDataListFront::GetNameListDataId() const
{
    return m_nameListDataId;
}

void OutputDescribeDataListFront::SetNameListDataId(const int64_t& _nameListDataId)
{
    m_nameListDataId = _nameListDataId;
    m_nameListDataIdHasBeenSet = true;
}

bool OutputDescribeDataListFront::NameListDataIdHasBeenSet() const
{
    return m_nameListDataIdHasBeenSet;
}

int64_t OutputDescribeDataListFront::GetNameListId() const
{
    return m_nameListId;
}

void OutputDescribeDataListFront::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool OutputDescribeDataListFront::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

string OutputDescribeDataListFront::GetDataContent() const
{
    return m_dataContent;
}

void OutputDescribeDataListFront::SetDataContent(const string& _dataContent)
{
    m_dataContent = _dataContent;
    m_dataContentHasBeenSet = true;
}

bool OutputDescribeDataListFront::DataContentHasBeenSet() const
{
    return m_dataContentHasBeenSet;
}

int64_t OutputDescribeDataListFront::GetDataSource() const
{
    return m_dataSource;
}

void OutputDescribeDataListFront::SetDataSource(const int64_t& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool OutputDescribeDataListFront::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string OutputDescribeDataListFront::GetStartTime() const
{
    return m_startTime;
}

void OutputDescribeDataListFront::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OutputDescribeDataListFront::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OutputDescribeDataListFront::GetEndTime() const
{
    return m_endTime;
}

void OutputDescribeDataListFront::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OutputDescribeDataListFront::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t OutputDescribeDataListFront::GetStatus() const
{
    return m_status;
}

void OutputDescribeDataListFront::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OutputDescribeDataListFront::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OutputDescribeDataListFront::GetRemark() const
{
    return m_remark;
}

void OutputDescribeDataListFront::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OutputDescribeDataListFront::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string OutputDescribeDataListFront::GetCreateTime() const
{
    return m_createTime;
}

void OutputDescribeDataListFront::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OutputDescribeDataListFront::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OutputDescribeDataListFront::GetUpdateTime() const
{
    return m_updateTime;
}

void OutputDescribeDataListFront::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OutputDescribeDataListFront::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OutputDescribeDataListFront::GetEncryptDataContent() const
{
    return m_encryptDataContent;
}

void OutputDescribeDataListFront::SetEncryptDataContent(const string& _encryptDataContent)
{
    m_encryptDataContent = _encryptDataContent;
    m_encryptDataContentHasBeenSet = true;
}

bool OutputDescribeDataListFront::EncryptDataContentHasBeenSet() const
{
    return m_encryptDataContentHasBeenSet;
}

