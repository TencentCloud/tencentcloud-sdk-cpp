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

#include <tencentcloud/dsgc/v20190723/model/ESDataAssetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESDataAssetDetail::ESDataAssetDetail() :
    m_fieldResultIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_categoryArrHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelRiskNameHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false),
    m_trustedScoreHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_checkStatusHasBeenSet(false)
{
}

CoreInternalOutcome ESDataAssetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldResultId") && !value["FieldResultId"].IsNull())
    {
        if (!value["FieldResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.FieldResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldResultId = value["FieldResultId"].GetInt64();
        m_fieldResultIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryArr") && !value["CategoryArr"].IsNull())
    {
        if (!value["CategoryArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.CategoryArr` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryArr.push_back((*itr).GetString());
        }
        m_categoryArrHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskName") && !value["LevelRiskName"].IsNull())
    {
        if (!value["LevelRiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.LevelRiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskName = string(value["LevelRiskName"].GetString());
        m_levelRiskNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }

    if (value.HasMember("TrustedScore") && !value["TrustedScore"].IsNull())
    {
        if (!value["TrustedScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.TrustedScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_trustedScore = value["TrustedScore"].GetDouble();
        m_trustedScoreHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESDataAssetDetail.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESDataAssetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldResultId, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
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

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelRiskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelRiskName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

    if (m_trustedScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trustedScore, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
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


int64_t ESDataAssetDetail::GetFieldResultId() const
{
    return m_fieldResultId;
}

void ESDataAssetDetail::SetFieldResultId(const int64_t& _fieldResultId)
{
    m_fieldResultId = _fieldResultId;
    m_fieldResultIdHasBeenSet = true;
}

bool ESDataAssetDetail::FieldResultIdHasBeenSet() const
{
    return m_fieldResultIdHasBeenSet;
}

string ESDataAssetDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void ESDataAssetDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool ESDataAssetDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string ESDataAssetDetail::GetDataSourceName() const
{
    return m_dataSourceName;
}

void ESDataAssetDetail::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool ESDataAssetDetail::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string ESDataAssetDetail::GetDataSourceType() const
{
    return m_dataSourceType;
}

void ESDataAssetDetail::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool ESDataAssetDetail::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string ESDataAssetDetail::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ESDataAssetDetail::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ESDataAssetDetail::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string ESDataAssetDetail::GetIndexName() const
{
    return m_indexName;
}

void ESDataAssetDetail::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool ESDataAssetDetail::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string ESDataAssetDetail::GetFieldName() const
{
    return m_fieldName;
}

void ESDataAssetDetail::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool ESDataAssetDetail::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

int64_t ESDataAssetDetail::GetCategoryId() const
{
    return m_categoryId;
}

void ESDataAssetDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ESDataAssetDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ESDataAssetDetail::GetCategoryName() const
{
    return m_categoryName;
}

void ESDataAssetDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool ESDataAssetDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

vector<string> ESDataAssetDetail::GetCategoryArr() const
{
    return m_categoryArr;
}

void ESDataAssetDetail::SetCategoryArr(const vector<string>& _categoryArr)
{
    m_categoryArr = _categoryArr;
    m_categoryArrHasBeenSet = true;
}

bool ESDataAssetDetail::CategoryArrHasBeenSet() const
{
    return m_categoryArrHasBeenSet;
}

int64_t ESDataAssetDetail::GetLevelId() const
{
    return m_levelId;
}

void ESDataAssetDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool ESDataAssetDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string ESDataAssetDetail::GetLevelRiskName() const
{
    return m_levelRiskName;
}

void ESDataAssetDetail::SetLevelRiskName(const string& _levelRiskName)
{
    m_levelRiskName = _levelRiskName;
    m_levelRiskNameHasBeenSet = true;
}

bool ESDataAssetDetail::LevelRiskNameHasBeenSet() const
{
    return m_levelRiskNameHasBeenSet;
}

int64_t ESDataAssetDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void ESDataAssetDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool ESDataAssetDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

double ESDataAssetDetail::GetTrustedScore() const
{
    return m_trustedScore;
}

void ESDataAssetDetail::SetTrustedScore(const double& _trustedScore)
{
    m_trustedScore = _trustedScore;
    m_trustedScoreHasBeenSet = true;
}

bool ESDataAssetDetail::TrustedScoreHasBeenSet() const
{
    return m_trustedScoreHasBeenSet;
}

int64_t ESDataAssetDetail::GetRuleId() const
{
    return m_ruleId;
}

void ESDataAssetDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ESDataAssetDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ESDataAssetDetail::GetRuleName() const
{
    return m_ruleName;
}

void ESDataAssetDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ESDataAssetDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ESDataAssetDetail::GetIdentifyType() const
{
    return m_identifyType;
}

void ESDataAssetDetail::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool ESDataAssetDetail::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

int64_t ESDataAssetDetail::GetCheckStatus() const
{
    return m_checkStatus;
}

void ESDataAssetDetail::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ESDataAssetDetail::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

