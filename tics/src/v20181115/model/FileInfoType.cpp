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

#include <tencentcloud/tics/v20181115/model/FileInfoType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tics::V20181115::Model;
using namespace std;

FileInfoType::FileInfoType() :
    m_detectIdHasBeenSet(false),
    m_detectPriorityHasBeenSet(false),
    m_enginePriorityHasBeenSet(false),
    m_fileExistHasBeenSet(false),
    m_fileForceUploadHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileupTimeHasBeenSet(false),
    m_fullVirusNameHasBeenSet(false),
    m_idcPositionHasBeenSet(false),
    m_md5TypeHasBeenSet(false),
    m_peExistHasBeenSet(false),
    m_peForceUploadHasBeenSet(false),
    m_safeLevelHasBeenSet(false),
    m_scanModiTimeHasBeenSet(false),
    m_subdetectIdHasBeenSet(false),
    m_userDefNameHasBeenSet(false),
    m_virusTypeHasBeenSet(false),
    m_whiteScoreHasBeenSet(false)
{
}

CoreInternalOutcome FileInfoType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectId") && !value["DetectId"].IsNull())
    {
        if (!value["DetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.DetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectId = string(value["DetectId"].GetString());
        m_detectIdHasBeenSet = true;
    }

    if (value.HasMember("DetectPriority") && !value["DetectPriority"].IsNull())
    {
        if (!value["DetectPriority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.DetectPriority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectPriority = string(value["DetectPriority"].GetString());
        m_detectPriorityHasBeenSet = true;
    }

    if (value.HasMember("EnginePriority") && !value["EnginePriority"].IsNull())
    {
        if (!value["EnginePriority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.EnginePriority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enginePriority = string(value["EnginePriority"].GetString());
        m_enginePriorityHasBeenSet = true;
    }

    if (value.HasMember("FileExist") && !value["FileExist"].IsNull())
    {
        if (!value["FileExist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.FileExist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExist = string(value["FileExist"].GetString());
        m_fileExistHasBeenSet = true;
    }

    if (value.HasMember("FileForceUpload") && !value["FileForceUpload"].IsNull())
    {
        if (!value["FileForceUpload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.FileForceUpload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileForceUpload = string(value["FileForceUpload"].GetString());
        m_fileForceUploadHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileupTime") && !value["FileupTime"].IsNull())
    {
        if (!value["FileupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.FileupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileupTime = string(value["FileupTime"].GetString());
        m_fileupTimeHasBeenSet = true;
    }

    if (value.HasMember("FullVirusName") && !value["FullVirusName"].IsNull())
    {
        if (!value["FullVirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.FullVirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullVirusName = string(value["FullVirusName"].GetString());
        m_fullVirusNameHasBeenSet = true;
    }

    if (value.HasMember("IdcPosition") && !value["IdcPosition"].IsNull())
    {
        if (!value["IdcPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.IdcPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcPosition = string(value["IdcPosition"].GetString());
        m_idcPositionHasBeenSet = true;
    }

    if (value.HasMember("Md5Type") && !value["Md5Type"].IsNull())
    {
        if (!value["Md5Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.Md5Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5Type = string(value["Md5Type"].GetString());
        m_md5TypeHasBeenSet = true;
    }

    if (value.HasMember("PeExist") && !value["PeExist"].IsNull())
    {
        if (!value["PeExist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.PeExist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peExist = string(value["PeExist"].GetString());
        m_peExistHasBeenSet = true;
    }

    if (value.HasMember("PeForceUpload") && !value["PeForceUpload"].IsNull())
    {
        if (!value["PeForceUpload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.PeForceUpload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peForceUpload = string(value["PeForceUpload"].GetString());
        m_peForceUploadHasBeenSet = true;
    }

    if (value.HasMember("SafeLevel") && !value["SafeLevel"].IsNull())
    {
        if (!value["SafeLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.SafeLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_safeLevel = string(value["SafeLevel"].GetString());
        m_safeLevelHasBeenSet = true;
    }

    if (value.HasMember("ScanModiTime") && !value["ScanModiTime"].IsNull())
    {
        if (!value["ScanModiTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.ScanModiTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanModiTime = string(value["ScanModiTime"].GetString());
        m_scanModiTimeHasBeenSet = true;
    }

    if (value.HasMember("SubdetectId") && !value["SubdetectId"].IsNull())
    {
        if (!value["SubdetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.SubdetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdetectId = string(value["SubdetectId"].GetString());
        m_subdetectIdHasBeenSet = true;
    }

    if (value.HasMember("UserDefName") && !value["UserDefName"].IsNull())
    {
        if (!value["UserDefName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.UserDefName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefName = string(value["UserDefName"].GetString());
        m_userDefNameHasBeenSet = true;
    }

    if (value.HasMember("VirusType") && !value["VirusType"].IsNull())
    {
        if (!value["VirusType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.VirusType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusType = string(value["VirusType"].GetString());
        m_virusTypeHasBeenSet = true;
    }

    if (value.HasMember("WhiteScore") && !value["WhiteScore"].IsNull())
    {
        if (!value["WhiteScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfoType.WhiteScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteScore = string(value["WhiteScore"].GetString());
        m_whiteScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfoType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectId.c_str(), allocator).Move(), allocator);
    }

    if (m_detectPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectPriority.c_str(), allocator).Move(), allocator);
    }

    if (m_enginePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnginePriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enginePriority.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExist.c_str(), allocator).Move(), allocator);
    }

    if (m_fileForceUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileForceUpload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileForceUpload.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fullVirusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullVirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullVirusName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_md5TypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5Type.c_str(), allocator).Move(), allocator);
    }

    if (m_peExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peExist.c_str(), allocator).Move(), allocator);
    }

    if (m_peForceUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeForceUpload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peForceUpload.c_str(), allocator).Move(), allocator);
    }

    if (m_safeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_safeLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_scanModiTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanModiTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanModiTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subdetectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubdetectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdetectId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDefNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefName.c_str(), allocator).Move(), allocator);
    }

    if (m_virusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusType.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteScore.c_str(), allocator).Move(), allocator);
    }

}


string FileInfoType::GetDetectId() const
{
    return m_detectId;
}

void FileInfoType::SetDetectId(const string& _detectId)
{
    m_detectId = _detectId;
    m_detectIdHasBeenSet = true;
}

bool FileInfoType::DetectIdHasBeenSet() const
{
    return m_detectIdHasBeenSet;
}

string FileInfoType::GetDetectPriority() const
{
    return m_detectPriority;
}

void FileInfoType::SetDetectPriority(const string& _detectPriority)
{
    m_detectPriority = _detectPriority;
    m_detectPriorityHasBeenSet = true;
}

bool FileInfoType::DetectPriorityHasBeenSet() const
{
    return m_detectPriorityHasBeenSet;
}

string FileInfoType::GetEnginePriority() const
{
    return m_enginePriority;
}

void FileInfoType::SetEnginePriority(const string& _enginePriority)
{
    m_enginePriority = _enginePriority;
    m_enginePriorityHasBeenSet = true;
}

bool FileInfoType::EnginePriorityHasBeenSet() const
{
    return m_enginePriorityHasBeenSet;
}

string FileInfoType::GetFileExist() const
{
    return m_fileExist;
}

void FileInfoType::SetFileExist(const string& _fileExist)
{
    m_fileExist = _fileExist;
    m_fileExistHasBeenSet = true;
}

bool FileInfoType::FileExistHasBeenSet() const
{
    return m_fileExistHasBeenSet;
}

string FileInfoType::GetFileForceUpload() const
{
    return m_fileForceUpload;
}

void FileInfoType::SetFileForceUpload(const string& _fileForceUpload)
{
    m_fileForceUpload = _fileForceUpload;
    m_fileForceUploadHasBeenSet = true;
}

bool FileInfoType::FileForceUploadHasBeenSet() const
{
    return m_fileForceUploadHasBeenSet;
}

string FileInfoType::GetFileSize() const
{
    return m_fileSize;
}

void FileInfoType::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool FileInfoType::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string FileInfoType::GetFileupTime() const
{
    return m_fileupTime;
}

void FileInfoType::SetFileupTime(const string& _fileupTime)
{
    m_fileupTime = _fileupTime;
    m_fileupTimeHasBeenSet = true;
}

bool FileInfoType::FileupTimeHasBeenSet() const
{
    return m_fileupTimeHasBeenSet;
}

string FileInfoType::GetFullVirusName() const
{
    return m_fullVirusName;
}

void FileInfoType::SetFullVirusName(const string& _fullVirusName)
{
    m_fullVirusName = _fullVirusName;
    m_fullVirusNameHasBeenSet = true;
}

bool FileInfoType::FullVirusNameHasBeenSet() const
{
    return m_fullVirusNameHasBeenSet;
}

string FileInfoType::GetIdcPosition() const
{
    return m_idcPosition;
}

void FileInfoType::SetIdcPosition(const string& _idcPosition)
{
    m_idcPosition = _idcPosition;
    m_idcPositionHasBeenSet = true;
}

bool FileInfoType::IdcPositionHasBeenSet() const
{
    return m_idcPositionHasBeenSet;
}

string FileInfoType::GetMd5Type() const
{
    return m_md5Type;
}

void FileInfoType::SetMd5Type(const string& _md5Type)
{
    m_md5Type = _md5Type;
    m_md5TypeHasBeenSet = true;
}

bool FileInfoType::Md5TypeHasBeenSet() const
{
    return m_md5TypeHasBeenSet;
}

string FileInfoType::GetPeExist() const
{
    return m_peExist;
}

void FileInfoType::SetPeExist(const string& _peExist)
{
    m_peExist = _peExist;
    m_peExistHasBeenSet = true;
}

bool FileInfoType::PeExistHasBeenSet() const
{
    return m_peExistHasBeenSet;
}

string FileInfoType::GetPeForceUpload() const
{
    return m_peForceUpload;
}

void FileInfoType::SetPeForceUpload(const string& _peForceUpload)
{
    m_peForceUpload = _peForceUpload;
    m_peForceUploadHasBeenSet = true;
}

bool FileInfoType::PeForceUploadHasBeenSet() const
{
    return m_peForceUploadHasBeenSet;
}

string FileInfoType::GetSafeLevel() const
{
    return m_safeLevel;
}

void FileInfoType::SetSafeLevel(const string& _safeLevel)
{
    m_safeLevel = _safeLevel;
    m_safeLevelHasBeenSet = true;
}

bool FileInfoType::SafeLevelHasBeenSet() const
{
    return m_safeLevelHasBeenSet;
}

string FileInfoType::GetScanModiTime() const
{
    return m_scanModiTime;
}

void FileInfoType::SetScanModiTime(const string& _scanModiTime)
{
    m_scanModiTime = _scanModiTime;
    m_scanModiTimeHasBeenSet = true;
}

bool FileInfoType::ScanModiTimeHasBeenSet() const
{
    return m_scanModiTimeHasBeenSet;
}

string FileInfoType::GetSubdetectId() const
{
    return m_subdetectId;
}

void FileInfoType::SetSubdetectId(const string& _subdetectId)
{
    m_subdetectId = _subdetectId;
    m_subdetectIdHasBeenSet = true;
}

bool FileInfoType::SubdetectIdHasBeenSet() const
{
    return m_subdetectIdHasBeenSet;
}

string FileInfoType::GetUserDefName() const
{
    return m_userDefName;
}

void FileInfoType::SetUserDefName(const string& _userDefName)
{
    m_userDefName = _userDefName;
    m_userDefNameHasBeenSet = true;
}

bool FileInfoType::UserDefNameHasBeenSet() const
{
    return m_userDefNameHasBeenSet;
}

string FileInfoType::GetVirusType() const
{
    return m_virusType;
}

void FileInfoType::SetVirusType(const string& _virusType)
{
    m_virusType = _virusType;
    m_virusTypeHasBeenSet = true;
}

bool FileInfoType::VirusTypeHasBeenSet() const
{
    return m_virusTypeHasBeenSet;
}

string FileInfoType::GetWhiteScore() const
{
    return m_whiteScore;
}

void FileInfoType::SetWhiteScore(const string& _whiteScore)
{
    m_whiteScore = _whiteScore;
    m_whiteScoreHasBeenSet = true;
}

bool FileInfoType::WhiteScoreHasBeenSet() const
{
    return m_whiteScoreHasBeenSet;
}

