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

#include <tencentcloud/cls/v20201016/model/Relabeling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

Relabeling::Relabeling() :
    m_actionHasBeenSet(false),
    m_sourceLabelsHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_targetLabelHasBeenSet(false),
    m_replacementHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_modulusHasBeenSet(false)
{
}

CoreInternalOutcome Relabeling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("SourceLabels") && !value["SourceLabels"].IsNull())
    {
        if (!value["SourceLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Relabeling.SourceLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceLabels.push_back((*itr).GetString());
        }
        m_sourceLabelsHasBeenSet = true;
    }

    if (value.HasMember("Separator") && !value["Separator"].IsNull())
    {
        if (!value["Separator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.Separator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_separator = string(value["Separator"].GetString());
        m_separatorHasBeenSet = true;
    }

    if (value.HasMember("TargetLabel") && !value["TargetLabel"].IsNull())
    {
        if (!value["TargetLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.TargetLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLabel = string(value["TargetLabel"].GetString());
        m_targetLabelHasBeenSet = true;
    }

    if (value.HasMember("Replacement") && !value["Replacement"].IsNull())
    {
        if (!value["Replacement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.Replacement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replacement = string(value["Replacement"].GetString());
        m_replacementHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("Modulus") && !value["Modulus"].IsNull())
    {
        if (!value["Modulus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Relabeling.Modulus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modulus = value["Modulus"].GetUint64();
        m_modulusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Relabeling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceLabels.begin(); itr != m_sourceLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_separatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Separator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_separator.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_replacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replacement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replacement.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_modulusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modulus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modulus, allocator);
    }

}


string Relabeling::GetAction() const
{
    return m_action;
}

void Relabeling::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Relabeling::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<string> Relabeling::GetSourceLabels() const
{
    return m_sourceLabels;
}

void Relabeling::SetSourceLabels(const vector<string>& _sourceLabels)
{
    m_sourceLabels = _sourceLabels;
    m_sourceLabelsHasBeenSet = true;
}

bool Relabeling::SourceLabelsHasBeenSet() const
{
    return m_sourceLabelsHasBeenSet;
}

string Relabeling::GetSeparator() const
{
    return m_separator;
}

void Relabeling::SetSeparator(const string& _separator)
{
    m_separator = _separator;
    m_separatorHasBeenSet = true;
}

bool Relabeling::SeparatorHasBeenSet() const
{
    return m_separatorHasBeenSet;
}

string Relabeling::GetTargetLabel() const
{
    return m_targetLabel;
}

void Relabeling::SetTargetLabel(const string& _targetLabel)
{
    m_targetLabel = _targetLabel;
    m_targetLabelHasBeenSet = true;
}

bool Relabeling::TargetLabelHasBeenSet() const
{
    return m_targetLabelHasBeenSet;
}

string Relabeling::GetReplacement() const
{
    return m_replacement;
}

void Relabeling::SetReplacement(const string& _replacement)
{
    m_replacement = _replacement;
    m_replacementHasBeenSet = true;
}

bool Relabeling::ReplacementHasBeenSet() const
{
    return m_replacementHasBeenSet;
}

string Relabeling::GetRegex() const
{
    return m_regex;
}

void Relabeling::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool Relabeling::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

uint64_t Relabeling::GetModulus() const
{
    return m_modulus;
}

void Relabeling::SetModulus(const uint64_t& _modulus)
{
    m_modulus = _modulus;
    m_modulusHasBeenSet = true;
}

bool Relabeling::ModulusHasBeenSet() const
{
    return m_modulusHasBeenSet;
}

