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

#include <tencentcloud/ess/v20201111/model/OutputRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OutputRisk::OutputRisk() :
    m_riskIdHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskAdviceHasBeenSet(false),
    m_riskPresentationHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_positionsHasBeenSet(false),
    m_isMarkHasBeenSet(false),
    m_isIgnoreHasBeenSet(false),
    m_riskBasisHasBeenSet(false),
    m_riskLevelIdHasBeenSet(false),
    m_riskLabelsHasBeenSet(false),
    m_riskOriginHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_riskLevelAliasNameHasBeenSet(false)
{
}

CoreInternalOutcome OutputRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("RiskDescription") && !value["RiskDescription"].IsNull())
    {
        if (!value["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(value["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskAdvice") && !value["RiskAdvice"].IsNull())
    {
        if (!value["RiskAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskAdvice = string(value["RiskAdvice"].GetString());
        m_riskAdviceHasBeenSet = true;
    }

    if (value.HasMember("RiskPresentation") && !value["RiskPresentation"].IsNull())
    {
        if (!value["RiskPresentation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskPresentation` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskPresentation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskPresentation.push_back((*itr).GetString());
        }
        m_riskPresentationHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRisk.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PositionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_positions.push_back(item);
        }
        m_positionsHasBeenSet = true;
    }

    if (value.HasMember("IsMark") && !value["IsMark"].IsNull())
    {
        if (!value["IsMark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.IsMark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMark = value["IsMark"].GetBool();
        m_isMarkHasBeenSet = true;
    }

    if (value.HasMember("IsIgnore") && !value["IsIgnore"].IsNull())
    {
        if (!value["IsIgnore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.IsIgnore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnore = value["IsIgnore"].GetBool();
        m_isIgnoreHasBeenSet = true;
    }

    if (value.HasMember("RiskBasis") && !value["RiskBasis"].IsNull())
    {
        if (!value["RiskBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskBasis = string(value["RiskBasis"].GetString());
        m_riskBasisHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelId") && !value["RiskLevelId"].IsNull())
    {
        if (!value["RiskLevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskLevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelId = value["RiskLevelId"].GetInt64();
        m_riskLevelIdHasBeenSet = true;
    }

    if (value.HasMember("RiskLabels") && !value["RiskLabels"].IsNull())
    {
        if (!value["RiskLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskLabels.push_back((*itr).GetString());
        }
        m_riskLabelsHasBeenSet = true;
    }

    if (value.HasMember("RiskOrigin") && !value["RiskOrigin"].IsNull())
    {
        if (!value["RiskOrigin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskOrigin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskOrigin = value["RiskOrigin"].GetInt64();
        m_riskOriginHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelAliasName") && !value["RiskLevelAliasName"].IsNull())
    {
        if (!value["RiskLevelAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskLevelAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelAliasName = string(value["RiskLevelAliasName"].GetString());
        m_riskLevelAliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskAdvice.c_str(), allocator).Move(), allocator);
    }

    if (m_riskPresentationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskPresentation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskPresentation.begin(); itr != m_riskPresentation.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_positionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_positions.begin(); itr != m_positions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMark, allocator);
    }

    if (m_isIgnoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnore, allocator);
    }

    if (m_riskBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskBasis.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevelId, allocator);
    }

    if (m_riskLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLabels.begin(); itr != m_riskLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskOrigin, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_riskLevelAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelAliasName.c_str(), allocator).Move(), allocator);
    }

}


string OutputRisk::GetRiskId() const
{
    return m_riskId;
}

void OutputRisk::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool OutputRisk::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string OutputRisk::GetRiskName() const
{
    return m_riskName;
}

void OutputRisk::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool OutputRisk::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string OutputRisk::GetRiskDescription() const
{
    return m_riskDescription;
}

void OutputRisk::SetRiskDescription(const string& _riskDescription)
{
    m_riskDescription = _riskDescription;
    m_riskDescriptionHasBeenSet = true;
}

bool OutputRisk::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

string OutputRisk::GetRiskLevel() const
{
    return m_riskLevel;
}

void OutputRisk::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool OutputRisk::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string OutputRisk::GetRiskAdvice() const
{
    return m_riskAdvice;
}

void OutputRisk::SetRiskAdvice(const string& _riskAdvice)
{
    m_riskAdvice = _riskAdvice;
    m_riskAdviceHasBeenSet = true;
}

bool OutputRisk::RiskAdviceHasBeenSet() const
{
    return m_riskAdviceHasBeenSet;
}

vector<string> OutputRisk::GetRiskPresentation() const
{
    return m_riskPresentation;
}

void OutputRisk::SetRiskPresentation(const vector<string>& _riskPresentation)
{
    m_riskPresentation = _riskPresentation;
    m_riskPresentationHasBeenSet = true;
}

bool OutputRisk::RiskPresentationHasBeenSet() const
{
    return m_riskPresentationHasBeenSet;
}

string OutputRisk::GetContent() const
{
    return m_content;
}

void OutputRisk::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool OutputRisk::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<PositionInfo> OutputRisk::GetPositions() const
{
    return m_positions;
}

void OutputRisk::SetPositions(const vector<PositionInfo>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool OutputRisk::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

bool OutputRisk::GetIsMark() const
{
    return m_isMark;
}

void OutputRisk::SetIsMark(const bool& _isMark)
{
    m_isMark = _isMark;
    m_isMarkHasBeenSet = true;
}

bool OutputRisk::IsMarkHasBeenSet() const
{
    return m_isMarkHasBeenSet;
}

bool OutputRisk::GetIsIgnore() const
{
    return m_isIgnore;
}

void OutputRisk::SetIsIgnore(const bool& _isIgnore)
{
    m_isIgnore = _isIgnore;
    m_isIgnoreHasBeenSet = true;
}

bool OutputRisk::IsIgnoreHasBeenSet() const
{
    return m_isIgnoreHasBeenSet;
}

string OutputRisk::GetRiskBasis() const
{
    return m_riskBasis;
}

void OutputRisk::SetRiskBasis(const string& _riskBasis)
{
    m_riskBasis = _riskBasis;
    m_riskBasisHasBeenSet = true;
}

bool OutputRisk::RiskBasisHasBeenSet() const
{
    return m_riskBasisHasBeenSet;
}

int64_t OutputRisk::GetRiskLevelId() const
{
    return m_riskLevelId;
}

void OutputRisk::SetRiskLevelId(const int64_t& _riskLevelId)
{
    m_riskLevelId = _riskLevelId;
    m_riskLevelIdHasBeenSet = true;
}

bool OutputRisk::RiskLevelIdHasBeenSet() const
{
    return m_riskLevelIdHasBeenSet;
}

vector<string> OutputRisk::GetRiskLabels() const
{
    return m_riskLabels;
}

void OutputRisk::SetRiskLabels(const vector<string>& _riskLabels)
{
    m_riskLabels = _riskLabels;
    m_riskLabelsHasBeenSet = true;
}

bool OutputRisk::RiskLabelsHasBeenSet() const
{
    return m_riskLabelsHasBeenSet;
}

int64_t OutputRisk::GetRiskOrigin() const
{
    return m_riskOrigin;
}

void OutputRisk::SetRiskOrigin(const int64_t& _riskOrigin)
{
    m_riskOrigin = _riskOrigin;
    m_riskOriginHasBeenSet = true;
}

bool OutputRisk::RiskOriginHasBeenSet() const
{
    return m_riskOriginHasBeenSet;
}

string OutputRisk::GetCreator() const
{
    return m_creator;
}

void OutputRisk::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool OutputRisk::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string OutputRisk::GetCreatorId() const
{
    return m_creatorId;
}

void OutputRisk::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool OutputRisk::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

int64_t OutputRisk::GetCreatedOn() const
{
    return m_createdOn;
}

void OutputRisk::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool OutputRisk::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string OutputRisk::GetRiskLevelAliasName() const
{
    return m_riskLevelAliasName;
}

void OutputRisk::SetRiskLevelAliasName(const string& _riskLevelAliasName)
{
    m_riskLevelAliasName = _riskLevelAliasName;
    m_riskLevelAliasNameHasBeenSet = true;
}

bool OutputRisk::RiskLevelAliasNameHasBeenSet() const
{
    return m_riskLevelAliasNameHasBeenSet;
}

