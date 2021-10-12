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

#include <tencentcloud/cdn/v20180606/model/CompressionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CompressionRule::CompressionRule() :
    m_compressHasBeenSet(false),
    m_minLengthHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_algorithmsHasBeenSet(false),
    m_fileExtensionsHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false)
{
}

CoreInternalOutcome CompressionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CompressionRule.Compress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_compress = value["Compress"].GetBool();
        m_compressHasBeenSet = true;
    }

    if (value.HasMember("MinLength") && !value["MinLength"].IsNull())
    {
        if (!value["MinLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompressionRule.MinLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minLength = value["MinLength"].GetInt64();
        m_minLengthHasBeenSet = true;
    }

    if (value.HasMember("MaxLength") && !value["MaxLength"].IsNull())
    {
        if (!value["MaxLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompressionRule.MaxLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLength = value["MaxLength"].GetInt64();
        m_maxLengthHasBeenSet = true;
    }

    if (value.HasMember("Algorithms") && !value["Algorithms"].IsNull())
    {
        if (!value["Algorithms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompressionRule.Algorithms` is not array type"));

        const rapidjson::Value &tmpValue = value["Algorithms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_algorithms.push_back((*itr).GetString());
        }
        m_algorithmsHasBeenSet = true;
    }

    if (value.HasMember("FileExtensions") && !value["FileExtensions"].IsNull())
    {
        if (!value["FileExtensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompressionRule.FileExtensions` is not array type"));

        const rapidjson::Value &tmpValue = value["FileExtensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileExtensions.push_back((*itr).GetString());
        }
        m_fileExtensionsHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompressionRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompressionRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompressionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compress, allocator);
    }

    if (m_minLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLength, allocator);
    }

    if (m_maxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLength, allocator);
    }

    if (m_algorithmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_algorithms.begin(); itr != m_algorithms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileExtensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileExtensions.begin(); itr != m_fileExtensions.end(); ++itr)
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

}


bool CompressionRule::GetCompress() const
{
    return m_compress;
}

void CompressionRule::SetCompress(const bool& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool CompressionRule::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

int64_t CompressionRule::GetMinLength() const
{
    return m_minLength;
}

void CompressionRule::SetMinLength(const int64_t& _minLength)
{
    m_minLength = _minLength;
    m_minLengthHasBeenSet = true;
}

bool CompressionRule::MinLengthHasBeenSet() const
{
    return m_minLengthHasBeenSet;
}

int64_t CompressionRule::GetMaxLength() const
{
    return m_maxLength;
}

void CompressionRule::SetMaxLength(const int64_t& _maxLength)
{
    m_maxLength = _maxLength;
    m_maxLengthHasBeenSet = true;
}

bool CompressionRule::MaxLengthHasBeenSet() const
{
    return m_maxLengthHasBeenSet;
}

vector<string> CompressionRule::GetAlgorithms() const
{
    return m_algorithms;
}

void CompressionRule::SetAlgorithms(const vector<string>& _algorithms)
{
    m_algorithms = _algorithms;
    m_algorithmsHasBeenSet = true;
}

bool CompressionRule::AlgorithmsHasBeenSet() const
{
    return m_algorithmsHasBeenSet;
}

vector<string> CompressionRule::GetFileExtensions() const
{
    return m_fileExtensions;
}

void CompressionRule::SetFileExtensions(const vector<string>& _fileExtensions)
{
    m_fileExtensions = _fileExtensions;
    m_fileExtensionsHasBeenSet = true;
}

bool CompressionRule::FileExtensionsHasBeenSet() const
{
    return m_fileExtensionsHasBeenSet;
}

string CompressionRule::GetRuleType() const
{
    return m_ruleType;
}

void CompressionRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CompressionRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> CompressionRule::GetRulePaths() const
{
    return m_rulePaths;
}

void CompressionRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool CompressionRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

