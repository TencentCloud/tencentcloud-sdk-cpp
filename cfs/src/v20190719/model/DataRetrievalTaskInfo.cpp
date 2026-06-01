/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfs/v20190719/model/DataRetrievalTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DataRetrievalTaskInfo::DataRetrievalTaskInfo() :
    m_dataRetrievalTaskIDHasBeenSet(false),
    m_dataRetrievalIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_compoundConditionHasBeenSet(false),
    m_queryConditionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_fileNumHasBeenSet(false),
    m_dirNumHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_fileListHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
}

CoreInternalOutcome DataRetrievalTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataRetrievalTaskID") && !value["DataRetrievalTaskID"].IsNull())
    {
        if (!value["DataRetrievalTaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.DataRetrievalTaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetrievalTaskID = string(value["DataRetrievalTaskID"].GetString());
        m_dataRetrievalTaskIDHasBeenSet = true;
    }

    if (value.HasMember("DataRetrievalId") && !value["DataRetrievalId"].IsNull())
    {
        if (!value["DataRetrievalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.DataRetrievalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetrievalId = string(value["DataRetrievalId"].GetString());
        m_dataRetrievalIdHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("CompoundCondition") && !value["CompoundCondition"].IsNull())
    {
        if (!value["CompoundCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.CompoundCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compoundCondition = string(value["CompoundCondition"].GetString());
        m_compoundConditionHasBeenSet = true;
    }

    if (value.HasMember("QueryCondition") && !value["QueryCondition"].IsNull())
    {
        if (!value["QueryCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.QueryCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryCondition = string(value["QueryCondition"].GetString());
        m_queryConditionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FileNum") && !value["FileNum"].IsNull())
    {
        if (!value["FileNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.FileNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNum = value["FileNum"].GetUint64();
        m_fileNumHasBeenSet = true;
    }

    if (value.HasMember("DirNum") && !value["DirNum"].IsNull())
    {
        if (!value["DirNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.DirNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dirNum = value["DirNum"].GetUint64();
        m_dirNumHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.FileList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileList = string(value["FileList"].GetString());
        m_fileListHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetrievalTaskInfo.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataRetrievalTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataRetrievalTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetrievalTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRetrievalTaskID.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetrievalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetrievalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRetrievalId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_compoundConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompoundCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compoundCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_queryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNum, allocator);
    }

    if (m_dirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dirNum, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileList.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

}


string DataRetrievalTaskInfo::GetDataRetrievalTaskID() const
{
    return m_dataRetrievalTaskID;
}

void DataRetrievalTaskInfo::SetDataRetrievalTaskID(const string& _dataRetrievalTaskID)
{
    m_dataRetrievalTaskID = _dataRetrievalTaskID;
    m_dataRetrievalTaskIDHasBeenSet = true;
}

bool DataRetrievalTaskInfo::DataRetrievalTaskIDHasBeenSet() const
{
    return m_dataRetrievalTaskIDHasBeenSet;
}

string DataRetrievalTaskInfo::GetDataRetrievalId() const
{
    return m_dataRetrievalId;
}

void DataRetrievalTaskInfo::SetDataRetrievalId(const string& _dataRetrievalId)
{
    m_dataRetrievalId = _dataRetrievalId;
    m_dataRetrievalIdHasBeenSet = true;
}

bool DataRetrievalTaskInfo::DataRetrievalIdHasBeenSet() const
{
    return m_dataRetrievalIdHasBeenSet;
}

string DataRetrievalTaskInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DataRetrievalTaskInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DataRetrievalTaskInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DataRetrievalTaskInfo::GetCompoundCondition() const
{
    return m_compoundCondition;
}

void DataRetrievalTaskInfo::SetCompoundCondition(const string& _compoundCondition)
{
    m_compoundCondition = _compoundCondition;
    m_compoundConditionHasBeenSet = true;
}

bool DataRetrievalTaskInfo::CompoundConditionHasBeenSet() const
{
    return m_compoundConditionHasBeenSet;
}

string DataRetrievalTaskInfo::GetQueryCondition() const
{
    return m_queryCondition;
}

void DataRetrievalTaskInfo::SetQueryCondition(const string& _queryCondition)
{
    m_queryCondition = _queryCondition;
    m_queryConditionHasBeenSet = true;
}

bool DataRetrievalTaskInfo::QueryConditionHasBeenSet() const
{
    return m_queryConditionHasBeenSet;
}

string DataRetrievalTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataRetrievalTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataRetrievalTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataRetrievalTaskInfo::GetState() const
{
    return m_state;
}

void DataRetrievalTaskInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DataRetrievalTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t DataRetrievalTaskInfo::GetFileNum() const
{
    return m_fileNum;
}

void DataRetrievalTaskInfo::SetFileNum(const uint64_t& _fileNum)
{
    m_fileNum = _fileNum;
    m_fileNumHasBeenSet = true;
}

bool DataRetrievalTaskInfo::FileNumHasBeenSet() const
{
    return m_fileNumHasBeenSet;
}

uint64_t DataRetrievalTaskInfo::GetDirNum() const
{
    return m_dirNum;
}

void DataRetrievalTaskInfo::SetDirNum(const uint64_t& _dirNum)
{
    m_dirNum = _dirNum;
    m_dirNumHasBeenSet = true;
}

bool DataRetrievalTaskInfo::DirNumHasBeenSet() const
{
    return m_dirNumHasBeenSet;
}

uint64_t DataRetrievalTaskInfo::GetSize() const
{
    return m_size;
}

void DataRetrievalTaskInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DataRetrievalTaskInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DataRetrievalTaskInfo::GetFileList() const
{
    return m_fileList;
}

void DataRetrievalTaskInfo::SetFileList(const string& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool DataRetrievalTaskInfo::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

string DataRetrievalTaskInfo::GetErrorInfo() const
{
    return m_errorInfo;
}

void DataRetrievalTaskInfo::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool DataRetrievalTaskInfo::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

