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
    m_riskBasisHasBeenSet(false)
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

    if (value.HasMember("RiskBasis") && !value["RiskBasis"].IsNull())
    {
        if (!value["RiskBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRisk.RiskBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskBasis = string(value["RiskBasis"].GetString());
        m_riskBasisHasBeenSet = true;
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

    if (m_riskBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskBasis.c_str(), allocator).Move(), allocator);
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

