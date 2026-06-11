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

#include <tencentcloud/csip/v20221121/model/IaCFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

IaCFile::IaCFile() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_cICDNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_riskTotalCntHasBeenSet(false),
    m_riskLevelCntHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failTypeHasBeenSet(false)
{
}

CoreInternalOutcome IaCFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("CICDName") && !value["CICDName"].IsNull())
    {
        if (!value["CICDName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.CICDName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cICDName = string(value["CICDName"].GetString());
        m_cICDNameHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.FileType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = value["FileType"].GetInt64();
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskTotalCnt") && !value["RiskTotalCnt"].IsNull())
    {
        if (!value["RiskTotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.RiskTotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskTotalCnt = value["RiskTotalCnt"].GetUint64();
        m_riskTotalCntHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelCnt") && !value["RiskLevelCnt"].IsNull())
    {
        if (!value["RiskLevelCnt"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IaCFile.RiskLevelCnt` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLevelCnt"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueInt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLevelCnt.push_back(item);
        }
        m_riskLevelCntHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailType") && !value["FailType"].IsNull())
    {
        if (!value["FailType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IaCFile.FailType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failType = value["FailType"].GetInt64();
        m_failTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IaCFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_cICDNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CICDName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cICDName.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileType, allocator);
    }

    if (m_riskTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskTotalCnt, allocator);
    }

    if (m_riskLevelCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelCnt.begin(); itr != m_riskLevelCnt.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_failTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failType, allocator);
    }

}


uint64_t IaCFile::GetId() const
{
    return m_id;
}

void IaCFile::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IaCFile::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t IaCFile::GetAppId() const
{
    return m_appId;
}

void IaCFile::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool IaCFile::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string IaCFile::GetFileId() const
{
    return m_fileId;
}

void IaCFile::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool IaCFile::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string IaCFile::GetFileName() const
{
    return m_fileName;
}

void IaCFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool IaCFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string IaCFile::GetCICDName() const
{
    return m_cICDName;
}

void IaCFile::SetCICDName(const string& _cICDName)
{
    m_cICDName = _cICDName;
    m_cICDNameHasBeenSet = true;
}

bool IaCFile::CICDNameHasBeenSet() const
{
    return m_cICDNameHasBeenSet;
}

string IaCFile::GetFilePath() const
{
    return m_filePath;
}

void IaCFile::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool IaCFile::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

int64_t IaCFile::GetFileType() const
{
    return m_fileType;
}

void IaCFile::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool IaCFile::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

uint64_t IaCFile::GetRiskTotalCnt() const
{
    return m_riskTotalCnt;
}

void IaCFile::SetRiskTotalCnt(const uint64_t& _riskTotalCnt)
{
    m_riskTotalCnt = _riskTotalCnt;
    m_riskTotalCntHasBeenSet = true;
}

bool IaCFile::RiskTotalCntHasBeenSet() const
{
    return m_riskTotalCntHasBeenSet;
}

vector<KeyValueInt> IaCFile::GetRiskLevelCnt() const
{
    return m_riskLevelCnt;
}

void IaCFile::SetRiskLevelCnt(const vector<KeyValueInt>& _riskLevelCnt)
{
    m_riskLevelCnt = _riskLevelCnt;
    m_riskLevelCntHasBeenSet = true;
}

bool IaCFile::RiskLevelCntHasBeenSet() const
{
    return m_riskLevelCntHasBeenSet;
}

string IaCFile::GetScanTime() const
{
    return m_scanTime;
}

void IaCFile::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool IaCFile::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

int64_t IaCFile::GetStatus() const
{
    return m_status;
}

void IaCFile::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IaCFile::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t IaCFile::GetFailType() const
{
    return m_failType;
}

void IaCFile::SetFailType(const int64_t& _failType)
{
    m_failType = _failType;
    m_failTypeHasBeenSet = true;
}

bool IaCFile::FailTypeHasBeenSet() const
{
    return m_failTypeHasBeenSet;
}

