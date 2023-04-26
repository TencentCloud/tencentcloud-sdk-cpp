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

#include <tencentcloud/nlp/v20190408/model/Writing.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

Writing::Writing() :
    m_targetTextHasBeenSet(false),
    m_prefixTextHasBeenSet(false)
{
}

CoreInternalOutcome Writing::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Writing.TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(value["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (value.HasMember("PrefixText") && !value["PrefixText"].IsNull())
    {
        if (!value["PrefixText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Writing.PrefixText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefixText = string(value["PrefixText"].GetString());
        m_prefixTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Writing::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrefixText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefixText.c_str(), allocator).Move(), allocator);
    }

}


string Writing::GetTargetText() const
{
    return m_targetText;
}

void Writing::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool Writing::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

string Writing::GetPrefixText() const
{
    return m_prefixText;
}

void Writing::SetPrefixText(const string& _prefixText)
{
    m_prefixText = _prefixText;
    m_prefixTextHasBeenSet = true;
}

bool Writing::PrefixTextHasBeenSet() const
{
    return m_prefixTextHasBeenSet;
}

