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

#include <tencentcloud/cii/v20210408/model/UnderwriteConclusion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

UnderwriteConclusion::UnderwriteConclusion() :
    m_typeHasBeenSet(false),
    m_conclusionHasBeenSet(false),
    m_explanationHasBeenSet(false)
{
}

CoreInternalOutcome UnderwriteConclusion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteConclusion.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteConclusion.Conclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conclusion = string(value["Conclusion"].GetString());
        m_conclusionHasBeenSet = true;
    }

    if (value.HasMember("Explanation") && !value["Explanation"].IsNull())
    {
        if (!value["Explanation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteConclusion.Explanation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_explanation = string(value["Explanation"].GetString());
        m_explanationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnderwriteConclusion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_explanationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explanation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_explanation.c_str(), allocator).Move(), allocator);
    }

}


string UnderwriteConclusion::GetType() const
{
    return m_type;
}

void UnderwriteConclusion::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UnderwriteConclusion::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UnderwriteConclusion::GetConclusion() const
{
    return m_conclusion;
}

void UnderwriteConclusion::SetConclusion(const string& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool UnderwriteConclusion::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

string UnderwriteConclusion::GetExplanation() const
{
    return m_explanation;
}

void UnderwriteConclusion::SetExplanation(const string& _explanation)
{
    m_explanation = _explanation;
    m_explanationHasBeenSet = true;
}

bool UnderwriteConclusion::ExplanationHasBeenSet() const
{
    return m_explanationHasBeenSet;
}

