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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryCOSTaskResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryCOSTaskResultDetail::DspaDiscoveryCOSTaskResultDetail() :
    m_taskIdHasBeenSet(false),
    m_fileResultIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_kMSEncryptedHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_sensitiveDataCountHasBeenSet(false),
    m_categoryFullPathHasBeenSet(false),
    m_categoryArrHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_resultIdHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryCOSTaskResultDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FileResultId") && !value["FileResultId"].IsNull())
    {
        if (!value["FileResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.FileResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileResultId = value["FileResultId"].GetInt64();
        m_fileResultIdHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("KMSEncrypted") && !value["KMSEncrypted"].IsNull())
    {
        if (!value["KMSEncrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.KMSEncrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kMSEncrypted = value["KMSEncrypted"].GetBool();
        m_kMSEncryptedHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataCount") && !value["SensitiveDataCount"].IsNull())
    {
        if (!value["SensitiveDataCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.SensitiveDataCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataCount = value["SensitiveDataCount"].GetInt64();
        m_sensitiveDataCountHasBeenSet = true;
    }

    if (value.HasMember("CategoryFullPath") && !value["CategoryFullPath"].IsNull())
    {
        if (!value["CategoryFullPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.CategoryFullPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryFullPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryFullPath.push_back((*itr).GetString());
        }
        m_categoryFullPathHasBeenSet = true;
    }

    if (value.HasMember("CategoryArr") && !value["CategoryArr"].IsNull())
    {
        if (!value["CategoryArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.CategoryArr` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryArr.push_back((*itr).GetString());
        }
        m_categoryArrHasBeenSet = true;
    }

    if (value.HasMember("ComplianceId") && !value["ComplianceId"].IsNull())
    {
        if (!value["ComplianceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.ComplianceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceId = value["ComplianceId"].GetInt64();
        m_complianceIdHasBeenSet = true;
    }

    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSTaskResultDetail.ResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = value["ResultId"].GetInt64();
        m_resultIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryCOSTaskResultDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_fileResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileResultId, allocator);
    }

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

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_kMSEncryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSEncrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kMSEncrypted, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveDataCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataCount, allocator);
    }

    if (m_categoryFullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryFullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryFullPath.begin(); itr != m_categoryFullPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryArr.begin(); itr != m_categoryArr.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultId, allocator);
    }

}


int64_t DspaDiscoveryCOSTaskResultDetail::GetTaskId() const
{
    return m_taskId;
}

void DspaDiscoveryCOSTaskResultDetail::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetFileResultId() const
{
    return m_fileResultId;
}

void DspaDiscoveryCOSTaskResultDetail::SetFileResultId(const int64_t& _fileResultId)
{
    m_fileResultId = _fileResultId;
    m_fileResultIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::FileResultIdHasBeenSet() const
{
    return m_fileResultIdHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetBucketName() const
{
    return m_bucketName;
}

void DspaDiscoveryCOSTaskResultDetail::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetFileName() const
{
    return m_fileName;
}

void DspaDiscoveryCOSTaskResultDetail::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetCategoryId() const
{
    return m_categoryId;
}

void DspaDiscoveryCOSTaskResultDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetCategoryName() const
{
    return m_categoryName;
}

void DspaDiscoveryCOSTaskResultDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetLevelId() const
{
    return m_levelId;
}

void DspaDiscoveryCOSTaskResultDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetLevelName() const
{
    return m_levelName;
}

void DspaDiscoveryCOSTaskResultDetail::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

bool DspaDiscoveryCOSTaskResultDetail::GetKMSEncrypted() const
{
    return m_kMSEncrypted;
}

void DspaDiscoveryCOSTaskResultDetail::SetKMSEncrypted(const bool& _kMSEncrypted)
{
    m_kMSEncrypted = _kMSEncrypted;
    m_kMSEncryptedHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::KMSEncryptedHasBeenSet() const
{
    return m_kMSEncryptedHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetRuleName() const
{
    return m_ruleName;
}

void DspaDiscoveryCOSTaskResultDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspaDiscoveryCOSTaskResultDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void DspaDiscoveryCOSTaskResultDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetFileSize() const
{
    return m_fileSize;
}

void DspaDiscoveryCOSTaskResultDetail::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string DspaDiscoveryCOSTaskResultDetail::GetFileType() const
{
    return m_fileType;
}

void DspaDiscoveryCOSTaskResultDetail::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetSensitiveDataCount() const
{
    return m_sensitiveDataCount;
}

void DspaDiscoveryCOSTaskResultDetail::SetSensitiveDataCount(const int64_t& _sensitiveDataCount)
{
    m_sensitiveDataCount = _sensitiveDataCount;
    m_sensitiveDataCountHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::SensitiveDataCountHasBeenSet() const
{
    return m_sensitiveDataCountHasBeenSet;
}

vector<string> DspaDiscoveryCOSTaskResultDetail::GetCategoryFullPath() const
{
    return m_categoryFullPath;
}

void DspaDiscoveryCOSTaskResultDetail::SetCategoryFullPath(const vector<string>& _categoryFullPath)
{
    m_categoryFullPath = _categoryFullPath;
    m_categoryFullPathHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::CategoryFullPathHasBeenSet() const
{
    return m_categoryFullPathHasBeenSet;
}

vector<string> DspaDiscoveryCOSTaskResultDetail::GetCategoryArr() const
{
    return m_categoryArr;
}

void DspaDiscoveryCOSTaskResultDetail::SetCategoryArr(const vector<string>& _categoryArr)
{
    m_categoryArr = _categoryArr;
    m_categoryArrHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::CategoryArrHasBeenSet() const
{
    return m_categoryArrHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetComplianceId() const
{
    return m_complianceId;
}

void DspaDiscoveryCOSTaskResultDetail::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t DspaDiscoveryCOSTaskResultDetail::GetResultId() const
{
    return m_resultId;
}

void DspaDiscoveryCOSTaskResultDetail::SetResultId(const int64_t& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool DspaDiscoveryCOSTaskResultDetail::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

