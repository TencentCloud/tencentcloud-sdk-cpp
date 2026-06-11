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

#include <tencentcloud/trtc/v20190722/model/TerminologyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TerminologyItem::TerminologyItem() :
    m_targetLangHasBeenSet(false),
    m_terminologyHasBeenSet(false)
{
}

CoreInternalOutcome TerminologyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetLang") && !value["TargetLang"].IsNull())
    {
        if (!value["TargetLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TerminologyItem.TargetLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLang = string(value["TargetLang"].GetString());
        m_targetLangHasBeenSet = true;
    }

    if (value.HasMember("Terminology") && !value["Terminology"].IsNull())
    {
        if (!value["Terminology"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TerminologyItem.Terminology` is not array type"));

        const rapidjson::Value &tmpValue = value["Terminology"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TermPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_terminology.push_back(item);
        }
        m_terminologyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TerminologyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLang.c_str(), allocator).Move(), allocator);
    }

    if (m_terminologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Terminology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_terminology.begin(); itr != m_terminology.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TerminologyItem::GetTargetLang() const
{
    return m_targetLang;
}

void TerminologyItem::SetTargetLang(const string& _targetLang)
{
    m_targetLang = _targetLang;
    m_targetLangHasBeenSet = true;
}

bool TerminologyItem::TargetLangHasBeenSet() const
{
    return m_targetLangHasBeenSet;
}

vector<TermPair> TerminologyItem::GetTerminology() const
{
    return m_terminology;
}

void TerminologyItem::SetTerminology(const vector<TermPair>& _terminology)
{
    m_terminology = _terminology;
    m_terminologyHasBeenSet = true;
}

bool TerminologyItem::TerminologyHasBeenSet() const
{
    return m_terminologyHasBeenSet;
}

