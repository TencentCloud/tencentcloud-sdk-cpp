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

#include <tencentcloud/ess/v20201111/model/OutputReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OutputReference::OutputReference() :
    m_riskIdHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_riskBasisHasBeenSet(false),
    m_excerptsHasBeenSet(false)
{
}

CoreInternalOutcome OutputReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReference.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReference.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("RiskDescription") && !value["RiskDescription"].IsNull())
    {
        if (!value["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReference.RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(value["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReference.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("RiskBasis") && !value["RiskBasis"].IsNull())
    {
        if (!value["RiskBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReference.RiskBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskBasis = string(value["RiskBasis"].GetString());
        m_riskBasisHasBeenSet = true;
    }

    if (value.HasMember("Excerpts") && !value["Excerpts"].IsNull())
    {
        if (!value["Excerpts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputReference.Excerpts` is not array type"));

        const rapidjson::Value &tmpValue = value["Excerpts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReferenceExcerpt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_excerpts.push_back(item);
        }
        m_excerptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskBasis.c_str(), allocator).Move(), allocator);
    }

    if (m_excerptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Excerpts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excerpts.begin(); itr != m_excerpts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OutputReference::GetRiskId() const
{
    return m_riskId;
}

void OutputReference::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool OutputReference::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string OutputReference::GetRiskName() const
{
    return m_riskName;
}

void OutputReference::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool OutputReference::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string OutputReference::GetRiskDescription() const
{
    return m_riskDescription;
}

void OutputReference::SetRiskDescription(const string& _riskDescription)
{
    m_riskDescription = _riskDescription;
    m_riskDescriptionHasBeenSet = true;
}

bool OutputReference::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

string OutputReference::GetCategoryName() const
{
    return m_categoryName;
}

void OutputReference::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool OutputReference::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string OutputReference::GetRiskBasis() const
{
    return m_riskBasis;
}

void OutputReference::SetRiskBasis(const string& _riskBasis)
{
    m_riskBasis = _riskBasis;
    m_riskBasisHasBeenSet = true;
}

bool OutputReference::RiskBasisHasBeenSet() const
{
    return m_riskBasisHasBeenSet;
}

vector<ReferenceExcerpt> OutputReference::GetExcerpts() const
{
    return m_excerpts;
}

void OutputReference::SetExcerpts(const vector<ReferenceExcerpt>& _excerpts)
{
    m_excerpts = _excerpts;
    m_excerptsHasBeenSet = true;
}

bool OutputReference::ExcerptsHasBeenSet() const
{
    return m_excerptsHasBeenSet;
}

