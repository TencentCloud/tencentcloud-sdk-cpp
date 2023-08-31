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

#include <tencentcloud/dsgc/v20190723/model/ESTaskResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ESTaskResultDetail::ESTaskResultDetail() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_categoryArrHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false)
{
}

CoreInternalOutcome ESTaskResultDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryArr") && !value["CategoryArr"].IsNull())
    {
        if (!value["CategoryArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.CategoryArr` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ESTaskResultDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ESTaskResultDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
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

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

}


int64_t ESTaskResultDetail::GetId() const
{
    return m_id;
}

void ESTaskResultDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ESTaskResultDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ESTaskResultDetail::GetTaskId() const
{
    return m_taskId;
}

void ESTaskResultDetail::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ESTaskResultDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ESTaskResultDetail::GetFieldName() const
{
    return m_fieldName;
}

void ESTaskResultDetail::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool ESTaskResultDetail::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

int64_t ESTaskResultDetail::GetRuleId() const
{
    return m_ruleId;
}

void ESTaskResultDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ESTaskResultDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ESTaskResultDetail::GetRuleName() const
{
    return m_ruleName;
}

void ESTaskResultDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ESTaskResultDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ESTaskResultDetail::GetCategoryId() const
{
    return m_categoryId;
}

void ESTaskResultDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ESTaskResultDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ESTaskResultDetail::GetCategoryName() const
{
    return m_categoryName;
}

void ESTaskResultDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool ESTaskResultDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

vector<string> ESTaskResultDetail::GetCategoryArr() const
{
    return m_categoryArr;
}

void ESTaskResultDetail::SetCategoryArr(const vector<string>& _categoryArr)
{
    m_categoryArr = _categoryArr;
    m_categoryArrHasBeenSet = true;
}

bool ESTaskResultDetail::CategoryArrHasBeenSet() const
{
    return m_categoryArrHasBeenSet;
}

int64_t ESTaskResultDetail::GetLevelId() const
{
    return m_levelId;
}

void ESTaskResultDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool ESTaskResultDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string ESTaskResultDetail::GetLevelName() const
{
    return m_levelName;
}

void ESTaskResultDetail::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool ESTaskResultDetail::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

int64_t ESTaskResultDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void ESTaskResultDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool ESTaskResultDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

