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

#include <tencentcloud/dsgc/v20190723/model/AssessmentRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssessmentRiskItem::AssessmentRiskItem() :
    m_idHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_referTemplateCountHasBeenSet(false),
    m_supportDataSourceHasBeenSet(false),
    m_riskSideHasBeenSet(false),
    m_referTemplateListHasBeenSet(false)
{
}

CoreInternalOutcome AssessmentRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("ReferTemplateCount") && !value["ReferTemplateCount"].IsNull())
    {
        if (!value["ReferTemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.ReferTemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referTemplateCount = value["ReferTemplateCount"].GetInt64();
        m_referTemplateCountHasBeenSet = true;
    }

    if (value.HasMember("SupportDataSource") && !value["SupportDataSource"].IsNull())
    {
        if (!value["SupportDataSource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.SupportDataSource` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportDataSource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportDataSource.push_back((*itr).GetString());
        }
        m_supportDataSourceHasBeenSet = true;
    }

    if (value.HasMember("RiskSide") && !value["RiskSide"].IsNull())
    {
        if (!value["RiskSide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.RiskSide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskSide = string(value["RiskSide"].GetString());
        m_riskSideHasBeenSet = true;
    }

    if (value.HasMember("ReferTemplateList") && !value["ReferTemplateList"].IsNull())
    {
        if (!value["ReferTemplateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessmentRiskItem.ReferTemplateList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferTemplateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referTemplateList.push_back(item);
        }
        m_referTemplateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessmentRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_referTemplateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferTemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referTemplateCount, allocator);
    }

    if (m_supportDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportDataSource.begin(); itr != m_supportDataSource.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskSide.c_str(), allocator).Move(), allocator);
    }

    if (m_referTemplateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferTemplateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referTemplateList.begin(); itr != m_referTemplateList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AssessmentRiskItem::GetId() const
{
    return m_id;
}

void AssessmentRiskItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssessmentRiskItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssessmentRiskItem::GetRiskName() const
{
    return m_riskName;
}

void AssessmentRiskItem::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool AssessmentRiskItem::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string AssessmentRiskItem::GetLevel() const
{
    return m_level;
}

void AssessmentRiskItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssessmentRiskItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssessmentRiskItem::GetDescription() const
{
    return m_description;
}

void AssessmentRiskItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AssessmentRiskItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AssessmentRiskItem::GetRiskType() const
{
    return m_riskType;
}

void AssessmentRiskItem::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool AssessmentRiskItem::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

int64_t AssessmentRiskItem::GetReferTemplateCount() const
{
    return m_referTemplateCount;
}

void AssessmentRiskItem::SetReferTemplateCount(const int64_t& _referTemplateCount)
{
    m_referTemplateCount = _referTemplateCount;
    m_referTemplateCountHasBeenSet = true;
}

bool AssessmentRiskItem::ReferTemplateCountHasBeenSet() const
{
    return m_referTemplateCountHasBeenSet;
}

vector<string> AssessmentRiskItem::GetSupportDataSource() const
{
    return m_supportDataSource;
}

void AssessmentRiskItem::SetSupportDataSource(const vector<string>& _supportDataSource)
{
    m_supportDataSource = _supportDataSource;
    m_supportDataSourceHasBeenSet = true;
}

bool AssessmentRiskItem::SupportDataSourceHasBeenSet() const
{
    return m_supportDataSourceHasBeenSet;
}

string AssessmentRiskItem::GetRiskSide() const
{
    return m_riskSide;
}

void AssessmentRiskItem::SetRiskSide(const string& _riskSide)
{
    m_riskSide = _riskSide;
    m_riskSideHasBeenSet = true;
}

bool AssessmentRiskItem::RiskSideHasBeenSet() const
{
    return m_riskSideHasBeenSet;
}

vector<TemplateInfo> AssessmentRiskItem::GetReferTemplateList() const
{
    return m_referTemplateList;
}

void AssessmentRiskItem::SetReferTemplateList(const vector<TemplateInfo>& _referTemplateList)
{
    m_referTemplateList = _referTemplateList;
    m_referTemplateListHasBeenSet = true;
}

bool AssessmentRiskItem::ReferTemplateListHasBeenSet() const
{
    return m_referTemplateListHasBeenSet;
}

