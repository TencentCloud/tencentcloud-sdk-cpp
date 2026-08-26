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

#include <tencentcloud/csip/v20221121/model/CosAssetFileIdentifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAssetFileIdentifyInfo::CosAssetFileIdentifyInfo() :
    m_fileNameHasBeenSet(false),
    m_dirNameHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false),
    m_bucketInfoHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_handleStatusHasBeenSet(false),
    m_resultIdHasBeenSet(false),
    m_ruleDetailsHasBeenSet(false),
    m_levelDetailsHasBeenSet(false),
    m_complianceIdHasBeenSet(false)
{
}

CoreInternalOutcome CosAssetFileIdentifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("DirName") && !value["DirName"].IsNull())
    {
        if (!value["DirName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.DirName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirName = string(value["DirName"].GetString());
        m_dirNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }

    if (value.HasMember("BucketInfo") && !value["BucketInfo"].IsNull())
    {
        if (!value["BucketInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.BucketInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketInfo.Deserialize(value["BucketInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketInfoHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.LastScanTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = value["LastScanTime"].GetUint64();
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.HandleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = value["HandleStatus"].GetUint64();
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.ResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = string(value["ResultId"].GetString());
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("RuleDetails") && !value["RuleDetails"].IsNull())
    {
        if (!value["RuleDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.RuleDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyRuleDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleDetails.push_back(item);
        }
        m_ruleDetailsHasBeenSet = true;
    }

    if (value.HasMember("LevelDetails") && !value["LevelDetails"].IsNull())
    {
        if (!value["LevelDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.LevelDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["LevelDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyLevelDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_levelDetails.push_back(item);
        }
        m_levelDetailsHasBeenSet = true;
    }

    if (value.HasMember("ComplianceId") && !value["ComplianceId"].IsNull())
    {
        if (!value["ComplianceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.ComplianceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceId = value["ComplianceId"].GetInt64();
        m_complianceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAssetFileIdentifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_dirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bucketInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanTime, allocator);
    }

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleStatus, allocator);
    }

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleDetails.begin(); itr != m_ruleDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelDetails.begin(); itr != m_levelDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceId, allocator);
    }

}


string CosAssetFileIdentifyInfo::GetFileName() const
{
    return m_fileName;
}

void CosAssetFileIdentifyInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CosAssetFileIdentifyInfo::GetDirName() const
{
    return m_dirName;
}

void CosAssetFileIdentifyInfo::SetDirName(const string& _dirName)
{
    m_dirName = _dirName;
    m_dirNameHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::DirNameHasBeenSet() const
{
    return m_dirNameHasBeenSet;
}

vector<CosIdentifyCategoryDetail> CosAssetFileIdentifyInfo::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void CosAssetFileIdentifyInfo::SetCategoryDetails(const vector<CosIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

CosBucketInfo CosAssetFileIdentifyInfo::GetBucketInfo() const
{
    return m_bucketInfo;
}

void CosAssetFileIdentifyInfo::SetBucketInfo(const CosBucketInfo& _bucketInfo)
{
    m_bucketInfo = _bucketInfo;
    m_bucketInfoHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::BucketInfoHasBeenSet() const
{
    return m_bucketInfoHasBeenSet;
}

uint64_t CosAssetFileIdentifyInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void CosAssetFileIdentifyInfo::SetLastScanTime(const uint64_t& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t CosAssetFileIdentifyInfo::GetHandleStatus() const
{
    return m_handleStatus;
}

void CosAssetFileIdentifyInfo::SetHandleStatus(const uint64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

string CosAssetFileIdentifyInfo::GetResultId() const
{
    return m_resultId;
}

void CosAssetFileIdentifyInfo::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

vector<CosIdentifyRuleDetail> CosAssetFileIdentifyInfo::GetRuleDetails() const
{
    return m_ruleDetails;
}

void CosAssetFileIdentifyInfo::SetRuleDetails(const vector<CosIdentifyRuleDetail>& _ruleDetails)
{
    m_ruleDetails = _ruleDetails;
    m_ruleDetailsHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::RuleDetailsHasBeenSet() const
{
    return m_ruleDetailsHasBeenSet;
}

vector<CosIdentifyLevelDetail> CosAssetFileIdentifyInfo::GetLevelDetails() const
{
    return m_levelDetails;
}

void CosAssetFileIdentifyInfo::SetLevelDetails(const vector<CosIdentifyLevelDetail>& _levelDetails)
{
    m_levelDetails = _levelDetails;
    m_levelDetailsHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::LevelDetailsHasBeenSet() const
{
    return m_levelDetailsHasBeenSet;
}

int64_t CosAssetFileIdentifyInfo::GetComplianceId() const
{
    return m_complianceId;
}

void CosAssetFileIdentifyInfo::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

