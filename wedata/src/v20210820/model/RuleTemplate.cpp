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

#include <tencentcloud/wedata/v20210820/model/RuleTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleTemplate::RuleTemplate() :
    m_ruleTemplateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceObjectTypeHasBeenSet(false),
    m_sourceObjectDataTypeHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_compareTypeHasBeenSet(false),
    m_citationCountHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_whereFlagHasBeenSet(false),
    m_multiSourceFlagHasBeenSet(false),
    m_sqlExpressionHasBeenSet(false),
    m_subQualityDimHasBeenSet(false),
    m_resolvedSqlExpressionHasBeenSet(false),
    m_datasourceTypesHasBeenSet(false),
    m_userIdStrHasBeenSet(false)
{
}

CoreInternalOutcome RuleTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.RuleTemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = value["RuleTemplateId"].GetUint64();
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectType") && !value["SourceObjectType"].IsNull())
    {
        if (!value["SourceObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SourceObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectType = value["SourceObjectType"].GetUint64();
        m_sourceObjectTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataType") && !value["SourceObjectDataType"].IsNull())
    {
        if (!value["SourceObjectDataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SourceObjectDataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataType = value["SourceObjectDataType"].GetUint64();
        m_sourceObjectDataTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceEngineTypes") && !value["SourceEngineTypes"].IsNull())
    {
        if (!value["SourceEngineTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SourceEngineTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceEngineTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceEngineTypes.push_back((*itr).GetUint64());
        }
        m_sourceEngineTypesHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }

    if (value.HasMember("CompareType") && !value["CompareType"].IsNull())
    {
        if (!value["CompareType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.CompareType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compareType = value["CompareType"].GetUint64();
        m_compareTypeHasBeenSet = true;
    }

    if (value.HasMember("CitationCount") && !value["CitationCount"].IsNull())
    {
        if (!value["CitationCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.CitationCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_citationCount = value["CitationCount"].GetUint64();
        m_citationCountHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("WhereFlag") && !value["WhereFlag"].IsNull())
    {
        if (!value["WhereFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.WhereFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_whereFlag = value["WhereFlag"].GetBool();
        m_whereFlagHasBeenSet = true;
    }

    if (value.HasMember("MultiSourceFlag") && !value["MultiSourceFlag"].IsNull())
    {
        if (!value["MultiSourceFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.MultiSourceFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_multiSourceFlag = value["MultiSourceFlag"].GetBool();
        m_multiSourceFlagHasBeenSet = true;
    }

    if (value.HasMember("SqlExpression") && !value["SqlExpression"].IsNull())
    {
        if (!value["SqlExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SqlExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlExpression = string(value["SqlExpression"].GetString());
        m_sqlExpressionHasBeenSet = true;
    }

    if (value.HasMember("SubQualityDim") && !value["SubQualityDim"].IsNull())
    {
        if (!value["SubQualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.SubQualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subQualityDim = value["SubQualityDim"].GetUint64();
        m_subQualityDimHasBeenSet = true;
    }

    if (value.HasMember("ResolvedSqlExpression") && !value["ResolvedSqlExpression"].IsNull())
    {
        if (!value["ResolvedSqlExpression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.ResolvedSqlExpression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resolvedSqlExpression.Deserialize(value["ResolvedSqlExpression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resolvedSqlExpressionHasBeenSet = true;
    }

    if (value.HasMember("DatasourceTypes") && !value["DatasourceTypes"].IsNull())
    {
        if (!value["DatasourceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.DatasourceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasourceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_datasourceTypes.push_back((*itr).GetInt64());
        }
        m_datasourceTypesHasBeenSet = true;
    }

    if (value.HasMember("UserIdStr") && !value["UserIdStr"].IsNull())
    {
        if (!value["UserIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplate.UserIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIdStr = string(value["UserIdStr"].GetString());
        m_userIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTemplateId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_sourceObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceObjectType, allocator);
    }

    if (m_sourceObjectDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceObjectDataType, allocator);
    }

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEngineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEngineTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceEngineTypes.begin(); itr != m_sourceEngineTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_compareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareType, allocator);
    }

    if (m_citationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CitationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_citationCount, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_whereFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhereFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whereFlag, allocator);
    }

    if (m_multiSourceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSourceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiSourceFlag, allocator);
    }

    if (m_sqlExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_subQualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubQualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subQualityDim, allocator);
    }

    if (m_resolvedSqlExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolvedSqlExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resolvedSqlExpression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_datasourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceTypes.begin(); itr != m_datasourceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_userIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIdStr.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleTemplate::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void RuleTemplate::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool RuleTemplate::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

string RuleTemplate::GetName() const
{
    return m_name;
}

void RuleTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleTemplate::GetDescription() const
{
    return m_description;
}

void RuleTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t RuleTemplate::GetType() const
{
    return m_type;
}

void RuleTemplate::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RuleTemplate::GetSourceObjectType() const
{
    return m_sourceObjectType;
}

void RuleTemplate::SetSourceObjectType(const uint64_t& _sourceObjectType)
{
    m_sourceObjectType = _sourceObjectType;
    m_sourceObjectTypeHasBeenSet = true;
}

bool RuleTemplate::SourceObjectTypeHasBeenSet() const
{
    return m_sourceObjectTypeHasBeenSet;
}

uint64_t RuleTemplate::GetSourceObjectDataType() const
{
    return m_sourceObjectDataType;
}

void RuleTemplate::SetSourceObjectDataType(const uint64_t& _sourceObjectDataType)
{
    m_sourceObjectDataType = _sourceObjectDataType;
    m_sourceObjectDataTypeHasBeenSet = true;
}

bool RuleTemplate::SourceObjectDataTypeHasBeenSet() const
{
    return m_sourceObjectDataTypeHasBeenSet;
}

string RuleTemplate::GetSourceContent() const
{
    return m_sourceContent;
}

void RuleTemplate::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool RuleTemplate::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

vector<uint64_t> RuleTemplate::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void RuleTemplate::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool RuleTemplate::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

uint64_t RuleTemplate::GetQualityDim() const
{
    return m_qualityDim;
}

void RuleTemplate::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool RuleTemplate::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

uint64_t RuleTemplate::GetCompareType() const
{
    return m_compareType;
}

void RuleTemplate::SetCompareType(const uint64_t& _compareType)
{
    m_compareType = _compareType;
    m_compareTypeHasBeenSet = true;
}

bool RuleTemplate::CompareTypeHasBeenSet() const
{
    return m_compareTypeHasBeenSet;
}

uint64_t RuleTemplate::GetCitationCount() const
{
    return m_citationCount;
}

void RuleTemplate::SetCitationCount(const uint64_t& _citationCount)
{
    m_citationCount = _citationCount;
    m_citationCountHasBeenSet = true;
}

bool RuleTemplate::CitationCountHasBeenSet() const
{
    return m_citationCountHasBeenSet;
}

uint64_t RuleTemplate::GetUserId() const
{
    return m_userId;
}

void RuleTemplate::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RuleTemplate::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RuleTemplate::GetUserName() const
{
    return m_userName;
}

void RuleTemplate::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RuleTemplate::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string RuleTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void RuleTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RuleTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool RuleTemplate::GetWhereFlag() const
{
    return m_whereFlag;
}

void RuleTemplate::SetWhereFlag(const bool& _whereFlag)
{
    m_whereFlag = _whereFlag;
    m_whereFlagHasBeenSet = true;
}

bool RuleTemplate::WhereFlagHasBeenSet() const
{
    return m_whereFlagHasBeenSet;
}

bool RuleTemplate::GetMultiSourceFlag() const
{
    return m_multiSourceFlag;
}

void RuleTemplate::SetMultiSourceFlag(const bool& _multiSourceFlag)
{
    m_multiSourceFlag = _multiSourceFlag;
    m_multiSourceFlagHasBeenSet = true;
}

bool RuleTemplate::MultiSourceFlagHasBeenSet() const
{
    return m_multiSourceFlagHasBeenSet;
}

string RuleTemplate::GetSqlExpression() const
{
    return m_sqlExpression;
}

void RuleTemplate::SetSqlExpression(const string& _sqlExpression)
{
    m_sqlExpression = _sqlExpression;
    m_sqlExpressionHasBeenSet = true;
}

bool RuleTemplate::SqlExpressionHasBeenSet() const
{
    return m_sqlExpressionHasBeenSet;
}

uint64_t RuleTemplate::GetSubQualityDim() const
{
    return m_subQualityDim;
}

void RuleTemplate::SetSubQualityDim(const uint64_t& _subQualityDim)
{
    m_subQualityDim = _subQualityDim;
    m_subQualityDimHasBeenSet = true;
}

bool RuleTemplate::SubQualityDimHasBeenSet() const
{
    return m_subQualityDimHasBeenSet;
}

SqlExpression RuleTemplate::GetResolvedSqlExpression() const
{
    return m_resolvedSqlExpression;
}

void RuleTemplate::SetResolvedSqlExpression(const SqlExpression& _resolvedSqlExpression)
{
    m_resolvedSqlExpression = _resolvedSqlExpression;
    m_resolvedSqlExpressionHasBeenSet = true;
}

bool RuleTemplate::ResolvedSqlExpressionHasBeenSet() const
{
    return m_resolvedSqlExpressionHasBeenSet;
}

vector<int64_t> RuleTemplate::GetDatasourceTypes() const
{
    return m_datasourceTypes;
}

void RuleTemplate::SetDatasourceTypes(const vector<int64_t>& _datasourceTypes)
{
    m_datasourceTypes = _datasourceTypes;
    m_datasourceTypesHasBeenSet = true;
}

bool RuleTemplate::DatasourceTypesHasBeenSet() const
{
    return m_datasourceTypesHasBeenSet;
}

string RuleTemplate::GetUserIdStr() const
{
    return m_userIdStr;
}

void RuleTemplate::SetUserIdStr(const string& _userIdStr)
{
    m_userIdStr = _userIdStr;
    m_userIdStrHasBeenSet = true;
}

bool RuleTemplate::UserIdStrHasBeenSet() const
{
    return m_userIdStrHasBeenSet;
}

