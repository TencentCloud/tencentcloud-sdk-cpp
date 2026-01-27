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

#include <tencentcloud/tcr/v20190924/model/FilterSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

FilterSelector::FilterSelector() :
    m_decorationHasBeenSet(false),
    m_patternHasBeenSet(false)
{
}

CoreInternalOutcome FilterSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Decoration") && !value["Decoration"].IsNull())
    {
        if (!value["Decoration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterSelector.Decoration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decoration = string(value["Decoration"].GetString());
        m_decorationHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterSelector.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_decorationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decoration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decoration.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

}


string FilterSelector::GetDecoration() const
{
    return m_decoration;
}

void FilterSelector::SetDecoration(const string& _decoration)
{
    m_decoration = _decoration;
    m_decorationHasBeenSet = true;
}

bool FilterSelector::DecorationHasBeenSet() const
{
    return m_decorationHasBeenSet;
}

string FilterSelector::GetPattern() const
{
    return m_pattern;
}

void FilterSelector::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool FilterSelector::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

