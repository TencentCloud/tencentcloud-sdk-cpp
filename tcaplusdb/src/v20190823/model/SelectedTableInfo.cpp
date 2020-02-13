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

#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

SelectedTableInfo::SelectedTableInfo() :
    m_logicZoneIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_listElementNumHasBeenSet(false),
    m_reservedVolumeHasBeenSet(false),
    m_reservedReadQpsHasBeenSet(false),
    m_reservedWriteQpsHasBeenSet(false),
    m_memoHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileExtTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileContentHasBeenSet(false)
{
}

CoreInternalOutcome SelectedTableInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LogicZoneId") && !value["LogicZoneId"].IsNull())
    {
        if (!value["LogicZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.LogicZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicZoneId = string(value["LogicZoneId"].GetString());
        m_logicZoneIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("ListElementNum") && !value["ListElementNum"].IsNull())
    {
        if (!value["ListElementNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.ListElementNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listElementNum = value["ListElementNum"].GetInt64();
        m_listElementNumHasBeenSet = true;
    }

    if (value.HasMember("ReservedVolume") && !value["ReservedVolume"].IsNull())
    {
        if (!value["ReservedVolume"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.ReservedVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedVolume = value["ReservedVolume"].GetInt64();
        m_reservedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReservedReadQps") && !value["ReservedReadQps"].IsNull())
    {
        if (!value["ReservedReadQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.ReservedReadQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedReadQps = value["ReservedReadQps"].GetInt64();
        m_reservedReadQpsHasBeenSet = true;
    }

    if (value.HasMember("ReservedWriteQps") && !value["ReservedWriteQps"].IsNull())
    {
        if (!value["ReservedWriteQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.ReservedWriteQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedWriteQps = value["ReservedWriteQps"].GetInt64();
        m_reservedWriteQpsHasBeenSet = true;
    }

    if (value.HasMember("Memo") && !value["Memo"].IsNull())
    {
        if (!value["Memo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.Memo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memo = string(value["Memo"].GetString());
        m_memoHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExtType") && !value["FileExtType"].IsNull())
    {
        if (!value["FileExtType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.FileExtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtType = string(value["FileExtType"].GetString());
        m_fileExtTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `SelectedTableInfo.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectedTableInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_listElementNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListElementNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listElementNum, allocator);
    }

    if (m_reservedVolumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedVolume, allocator);
    }

    if (m_reservedReadQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedReadQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedReadQps, allocator);
    }

    if (m_reservedWriteQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedWriteQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedWriteQps, allocator);
    }

    if (m_memoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_memo.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileExtType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileExtType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

}


string SelectedTableInfo::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void SelectedTableInfo::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool SelectedTableInfo::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

string SelectedTableInfo::GetTableName() const
{
    return m_tableName;
}

void SelectedTableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SelectedTableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SelectedTableInfo::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void SelectedTableInfo::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool SelectedTableInfo::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string SelectedTableInfo::GetTableIdlType() const
{
    return m_tableIdlType;
}

void SelectedTableInfo::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool SelectedTableInfo::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string SelectedTableInfo::GetTableType() const
{
    return m_tableType;
}

void SelectedTableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool SelectedTableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

int64_t SelectedTableInfo::GetListElementNum() const
{
    return m_listElementNum;
}

void SelectedTableInfo::SetListElementNum(const int64_t& _listElementNum)
{
    m_listElementNum = _listElementNum;
    m_listElementNumHasBeenSet = true;
}

bool SelectedTableInfo::ListElementNumHasBeenSet() const
{
    return m_listElementNumHasBeenSet;
}

int64_t SelectedTableInfo::GetReservedVolume() const
{
    return m_reservedVolume;
}

void SelectedTableInfo::SetReservedVolume(const int64_t& _reservedVolume)
{
    m_reservedVolume = _reservedVolume;
    m_reservedVolumeHasBeenSet = true;
}

bool SelectedTableInfo::ReservedVolumeHasBeenSet() const
{
    return m_reservedVolumeHasBeenSet;
}

int64_t SelectedTableInfo::GetReservedReadQps() const
{
    return m_reservedReadQps;
}

void SelectedTableInfo::SetReservedReadQps(const int64_t& _reservedReadQps)
{
    m_reservedReadQps = _reservedReadQps;
    m_reservedReadQpsHasBeenSet = true;
}

bool SelectedTableInfo::ReservedReadQpsHasBeenSet() const
{
    return m_reservedReadQpsHasBeenSet;
}

int64_t SelectedTableInfo::GetReservedWriteQps() const
{
    return m_reservedWriteQps;
}

void SelectedTableInfo::SetReservedWriteQps(const int64_t& _reservedWriteQps)
{
    m_reservedWriteQps = _reservedWriteQps;
    m_reservedWriteQpsHasBeenSet = true;
}

bool SelectedTableInfo::ReservedWriteQpsHasBeenSet() const
{
    return m_reservedWriteQpsHasBeenSet;
}

string SelectedTableInfo::GetMemo() const
{
    return m_memo;
}

void SelectedTableInfo::SetMemo(const string& _memo)
{
    m_memo = _memo;
    m_memoHasBeenSet = true;
}

bool SelectedTableInfo::MemoHasBeenSet() const
{
    return m_memoHasBeenSet;
}

string SelectedTableInfo::GetFileName() const
{
    return m_fileName;
}

void SelectedTableInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SelectedTableInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string SelectedTableInfo::GetFileExtType() const
{
    return m_fileExtType;
}

void SelectedTableInfo::SetFileExtType(const string& _fileExtType)
{
    m_fileExtType = _fileExtType;
    m_fileExtTypeHasBeenSet = true;
}

bool SelectedTableInfo::FileExtTypeHasBeenSet() const
{
    return m_fileExtTypeHasBeenSet;
}

int64_t SelectedTableInfo::GetFileSize() const
{
    return m_fileSize;
}

void SelectedTableInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool SelectedTableInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string SelectedTableInfo::GetFileContent() const
{
    return m_fileContent;
}

void SelectedTableInfo::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SelectedTableInfo::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

