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

#include <tencentcloud/dsgc/v20190723/model/DspaCOSDataAssetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaCOSDataAssetDetail::DspaCOSDataAssetDetail() :
    m_bucketNameHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_sensitiveDataCountHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_levelRiskNameHasBeenSet(false),
    m_kMSEncryptedHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_fileResultIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_categoryFullPathHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_checkStatusHasBeenSet(false)
{
}

CoreInternalOutcome DspaCOSDataAssetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataCount") && !value["SensitiveDataCount"].IsNull())
    {
        if (!value["SensitiveDataCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.SensitiveDataCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataCount = value["SensitiveDataCount"].GetInt64();
        m_sensitiveDataCountHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskName") && !value["LevelRiskName"].IsNull())
    {
        if (!value["LevelRiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.LevelRiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskName = string(value["LevelRiskName"].GetString());
        m_levelRiskNameHasBeenSet = true;
    }

    if (value.HasMember("KMSEncrypted") && !value["KMSEncrypted"].IsNull())
    {
        if (!value["KMSEncrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.KMSEncrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kMSEncrypted = value["KMSEncrypted"].GetBool();
        m_kMSEncryptedHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("FileResultId") && !value["FileResultId"].IsNull())
    {
        if (!value["FileResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.FileResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileResultId = value["FileResultId"].GetInt64();
        m_fileResultIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryFullPath") && !value["CategoryFullPath"].IsNull())
    {
        if (!value["CategoryFullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.CategoryFullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryFullPath = string(value["CategoryFullPath"].GetString());
        m_categoryFullPathHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCOSDataAssetDetail.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaCOSDataAssetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveDataCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataCount, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelRiskName.c_str(), allocator).Move(), allocator);
    }

    if (m_kMSEncryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSEncrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kMSEncrypted, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_fileResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileResultId, allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryFullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryFullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryFullPath.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStatus, allocator);
    }

}


string DspaCOSDataAssetDetail::GetBucketName() const
{
    return m_bucketName;
}

void DspaCOSDataAssetDetail::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string DspaCOSDataAssetDetail::GetFileName() const
{
    return m_fileName;
}

void DspaCOSDataAssetDetail::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DspaCOSDataAssetDetail::GetRuleName() const
{
    return m_ruleName;
}

void DspaCOSDataAssetDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetSensitiveDataCount() const
{
    return m_sensitiveDataCount;
}

void DspaCOSDataAssetDetail::SetSensitiveDataCount(const int64_t& _sensitiveDataCount)
{
    m_sensitiveDataCount = _sensitiveDataCount;
    m_sensitiveDataCountHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::SensitiveDataCountHasBeenSet() const
{
    return m_sensitiveDataCountHasBeenSet;
}

string DspaCOSDataAssetDetail::GetCategoryName() const
{
    return m_categoryName;
}

void DspaCOSDataAssetDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string DspaCOSDataAssetDetail::GetLevelRiskName() const
{
    return m_levelRiskName;
}

void DspaCOSDataAssetDetail::SetLevelRiskName(const string& _levelRiskName)
{
    m_levelRiskName = _levelRiskName;
    m_levelRiskNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::LevelRiskNameHasBeenSet() const
{
    return m_levelRiskNameHasBeenSet;
}

bool DspaCOSDataAssetDetail::GetKMSEncrypted() const
{
    return m_kMSEncrypted;
}

void DspaCOSDataAssetDetail::SetKMSEncrypted(const bool& _kMSEncrypted)
{
    m_kMSEncrypted = _kMSEncrypted;
    m_kMSEncryptedHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::KMSEncryptedHasBeenSet() const
{
    return m_kMSEncryptedHasBeenSet;
}

string DspaCOSDataAssetDetail::GetFileType() const
{
    return m_fileType;
}

void DspaCOSDataAssetDetail::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DspaCOSDataAssetDetail::GetFileSize() const
{
    return m_fileSize;
}

void DspaCOSDataAssetDetail::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void DspaCOSDataAssetDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

string DspaCOSDataAssetDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DspaCOSDataAssetDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspaCOSDataAssetDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DspaCOSDataAssetDetail::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaCOSDataAssetDetail::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetCategoryId() const
{
    return m_categoryId;
}

void DspaCOSDataAssetDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetLevelId() const
{
    return m_levelId;
}

void DspaCOSDataAssetDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetFileResultId() const
{
    return m_fileResultId;
}

void DspaCOSDataAssetDetail::SetFileResultId(const int64_t& _fileResultId)
{
    m_fileResultId = _fileResultId;
    m_fileResultIdHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::FileResultIdHasBeenSet() const
{
    return m_fileResultIdHasBeenSet;
}

string DspaCOSDataAssetDetail::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DspaCOSDataAssetDetail::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string DspaCOSDataAssetDetail::GetCategoryFullPath() const
{
    return m_categoryFullPath;
}

void DspaCOSDataAssetDetail::SetCategoryFullPath(const string& _categoryFullPath)
{
    m_categoryFullPath = _categoryFullPath;
    m_categoryFullPathHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::CategoryFullPathHasBeenSet() const
{
    return m_categoryFullPathHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetIdentifyType() const
{
    return m_identifyType;
}

void DspaCOSDataAssetDetail::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

int64_t DspaCOSDataAssetDetail::GetCheckStatus() const
{
    return m_checkStatus;
}

void DspaCOSDataAssetDetail::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool DspaCOSDataAssetDetail::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

