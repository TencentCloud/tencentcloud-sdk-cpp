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

#include <tencentcloud/trtc/v20190722/model/TranslationParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranslationParam::TranslationParam() :
    m_targetLangHasBeenSet(false)
{
}

CoreInternalOutcome TranslationParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetLang") && !value["TargetLang"].IsNull())
    {
        if (!value["TargetLang"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranslationParam.TargetLang` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetLang"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetLang.push_back((*itr).GetString());
        }
        m_targetLangHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslationParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetLang.begin(); itr != m_targetLang.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> TranslationParam::GetTargetLang() const
{
    return m_targetLang;
}

void TranslationParam::SetTargetLang(const vector<string>& _targetLang)
{
    m_targetLang = _targetLang;
    m_targetLangHasBeenSet = true;
}

bool TranslationParam::TargetLangHasBeenSet() const
{
    return m_targetLangHasBeenSet;
}

