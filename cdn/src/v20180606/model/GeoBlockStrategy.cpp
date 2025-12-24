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

#include <tencentcloud/cdn/v20180606/model/GeoBlockStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

GeoBlockStrategy::GeoBlockStrategy() :
    m_blockTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_districtsHasBeenSet(false)
{
}

CoreInternalOutcome GeoBlockStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockType") && !value["BlockType"].IsNull())
    {
        if (!value["BlockType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoBlockStrategy.BlockType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockType = string(value["BlockType"].GetString());
        m_blockTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeoBlockStrategy.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoBlockStrategy.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Districts") && !value["Districts"].IsNull())
    {
        if (!value["Districts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeoBlockStrategy.Districts` is not array type"));

        const rapidjson::Value &tmpValue = value["Districts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_districts.push_back((*itr).GetString());
        }
        m_districtsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeoBlockStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockType.c_str(), allocator).Move(), allocator);
    }

    if (m_rulePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_districtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Districts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_districts.begin(); itr != m_districts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string GeoBlockStrategy::GetBlockType() const
{
    return m_blockType;
}

void GeoBlockStrategy::SetBlockType(const string& _blockType)
{
    m_blockType = _blockType;
    m_blockTypeHasBeenSet = true;
}

bool GeoBlockStrategy::BlockTypeHasBeenSet() const
{
    return m_blockTypeHasBeenSet;
}

vector<string> GeoBlockStrategy::GetRulePaths() const
{
    return m_rulePaths;
}

void GeoBlockStrategy::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool GeoBlockStrategy::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

string GeoBlockStrategy::GetRuleType() const
{
    return m_ruleType;
}

void GeoBlockStrategy::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool GeoBlockStrategy::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> GeoBlockStrategy::GetDistricts() const
{
    return m_districts;
}

void GeoBlockStrategy::SetDistricts(const vector<string>& _districts)
{
    m_districts = _districts;
    m_districtsHasBeenSet = true;
}

bool GeoBlockStrategy::DistrictsHasBeenSet() const
{
    return m_districtsHasBeenSet;
}

