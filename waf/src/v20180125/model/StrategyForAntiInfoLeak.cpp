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

#include <tencentcloud/waf/v20180125/model/StrategyForAntiInfoLeak.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

StrategyForAntiInfoLeak::StrategyForAntiInfoLeak() :
    m_fieldHasBeenSet(false),
    m_compareFuncHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome StrategyForAntiInfoLeak::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyForAntiInfoLeak.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("CompareFunc") && !value["CompareFunc"].IsNull())
    {
        if (!value["CompareFunc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyForAntiInfoLeak.CompareFunc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareFunc = string(value["CompareFunc"].GetString());
        m_compareFuncHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyForAntiInfoLeak.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyForAntiInfoLeak::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_compareFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string StrategyForAntiInfoLeak::GetField() const
{
    return m_field;
}

void StrategyForAntiInfoLeak::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool StrategyForAntiInfoLeak::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string StrategyForAntiInfoLeak::GetCompareFunc() const
{
    return m_compareFunc;
}

void StrategyForAntiInfoLeak::SetCompareFunc(const string& _compareFunc)
{
    m_compareFunc = _compareFunc;
    m_compareFuncHasBeenSet = true;
}

bool StrategyForAntiInfoLeak::CompareFuncHasBeenSet() const
{
    return m_compareFuncHasBeenSet;
}

string StrategyForAntiInfoLeak::GetContent() const
{
    return m_content;
}

void StrategyForAntiInfoLeak::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool StrategyForAntiInfoLeak::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

