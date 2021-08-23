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

#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

SelectedTableInfoNew::SelectedTableInfoNew() :
    m_tableGroupIdHasBeenSet(false),
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

CoreInternalOutcome SelectedTableInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("ListElementNum") && !value["ListElementNum"].IsNull())
    {
        if (!value["ListElementNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.ListElementNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listElementNum = value["ListElementNum"].GetInt64();
        m_listElementNumHasBeenSet = true;
    }

    if (value.HasMember("ReservedVolume") && !value["ReservedVolume"].IsNull())
    {
        if (!value["ReservedVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.ReservedVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedVolume = value["ReservedVolume"].GetInt64();
        m_reservedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReservedReadQps") && !value["ReservedReadQps"].IsNull())
    {
        if (!value["ReservedReadQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.ReservedReadQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedReadQps = value["ReservedReadQps"].GetInt64();
        m_reservedReadQpsHasBeenSet = true;
    }

    if (value.HasMember("ReservedWriteQps") && !value["ReservedWriteQps"].IsNull())
    {
        if (!value["ReservedWriteQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.ReservedWriteQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedWriteQps = value["ReservedWriteQps"].GetInt64();
        m_reservedWriteQpsHasBeenSet = true;
    }

    if (value.HasMember("Memo") && !value["Memo"].IsNull())
    {
        if (!value["Memo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.Memo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memo = string(value["Memo"].GetString());
        m_memoHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExtType") && !value["FileExtType"].IsNull())
    {
        if (!value["FileExtType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.FileExtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtType = string(value["FileExtType"].GetString());
        m_fileExtTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableInfoNew.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectedTableInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_listElementNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListElementNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listElementNum, allocator);
    }

    if (m_reservedVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedVolume, allocator);
    }

    if (m_reservedReadQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedReadQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedReadQps, allocator);
    }

    if (m_reservedWriteQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedWriteQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedWriteQps, allocator);
    }

    if (m_memoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memo.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

}


string SelectedTableInfoNew::GetTableGroupId() const
{
    return m_tableGroupId;
}

void SelectedTableInfoNew::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool SelectedTableInfoNew::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string SelectedTableInfoNew::GetTableName() const
{
    return m_tableName;
}

void SelectedTableInfoNew::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SelectedTableInfoNew::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SelectedTableInfoNew::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void SelectedTableInfoNew::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool SelectedTableInfoNew::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string SelectedTableInfoNew::GetTableIdlType() const
{
    return m_tableIdlType;
}

void SelectedTableInfoNew::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool SelectedTableInfoNew::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string SelectedTableInfoNew::GetTableType() const
{
    return m_tableType;
}

void SelectedTableInfoNew::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool SelectedTableInfoNew::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

int64_t SelectedTableInfoNew::GetListElementNum() const
{
    return m_listElementNum;
}

void SelectedTableInfoNew::SetListElementNum(const int64_t& _listElementNum)
{
    m_listElementNum = _listElementNum;
    m_listElementNumHasBeenSet = true;
}

bool SelectedTableInfoNew::ListElementNumHasBeenSet() const
{
    return m_listElementNumHasBeenSet;
}

int64_t SelectedTableInfoNew::GetReservedVolume() const
{
    return m_reservedVolume;
}

void SelectedTableInfoNew::SetReservedVolume(const int64_t& _reservedVolume)
{
    m_reservedVolume = _reservedVolume;
    m_reservedVolumeHasBeenSet = true;
}

bool SelectedTableInfoNew::ReservedVolumeHasBeenSet() const
{
    return m_reservedVolumeHasBeenSet;
}

int64_t SelectedTableInfoNew::GetReservedReadQps() const
{
    return m_reservedReadQps;
}

void SelectedTableInfoNew::SetReservedReadQps(const int64_t& _reservedReadQps)
{
    m_reservedReadQps = _reservedReadQps;
    m_reservedReadQpsHasBeenSet = true;
}

bool SelectedTableInfoNew::ReservedReadQpsHasBeenSet() const
{
    return m_reservedReadQpsHasBeenSet;
}

int64_t SelectedTableInfoNew::GetReservedWriteQps() const
{
    return m_reservedWriteQps;
}

void SelectedTableInfoNew::SetReservedWriteQps(const int64_t& _reservedWriteQps)
{
    m_reservedWriteQps = _reservedWriteQps;
    m_reservedWriteQpsHasBeenSet = true;
}

bool SelectedTableInfoNew::ReservedWriteQpsHasBeenSet() const
{
    return m_reservedWriteQpsHasBeenSet;
}

string SelectedTableInfoNew::GetMemo() const
{
    return m_memo;
}

void SelectedTableInfoNew::SetMemo(const string& _memo)
{
    m_memo = _memo;
    m_memoHasBeenSet = true;
}

bool SelectedTableInfoNew::MemoHasBeenSet() const
{
    return m_memoHasBeenSet;
}

string SelectedTableInfoNew::GetFileName() const
{
    return m_fileName;
}

void SelectedTableInfoNew::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SelectedTableInfoNew::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string SelectedTableInfoNew::GetFileExtType() const
{
    return m_fileExtType;
}

void SelectedTableInfoNew::SetFileExtType(const string& _fileExtType)
{
    m_fileExtType = _fileExtType;
    m_fileExtTypeHasBeenSet = true;
}

bool SelectedTableInfoNew::FileExtTypeHasBeenSet() const
{
    return m_fileExtTypeHasBeenSet;
}

int64_t SelectedTableInfoNew::GetFileSize() const
{
    return m_fileSize;
}

void SelectedTableInfoNew::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool SelectedTableInfoNew::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string SelectedTableInfoNew::GetFileContent() const
{
    return m_fileContent;
}

void SelectedTableInfoNew::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SelectedTableInfoNew::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

