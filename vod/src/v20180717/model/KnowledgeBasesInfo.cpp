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

#include <tencentcloud/vod/v20180717/model/KnowledgeBasesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

KnowledgeBasesInfo::KnowledgeBasesInfo() :
    m_basesHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeBasesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bases") && !value["Bases"].IsNull())
    {
        if (!value["Bases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeBasesInfo.Bases` is not array type"));

        const rapidjson::Value &tmpValue = value["Bases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bases.push_back((*itr).GetString());
        }
        m_basesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeBasesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bases.begin(); itr != m_bases.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> KnowledgeBasesInfo::GetBases() const
{
    return m_bases;
}

void KnowledgeBasesInfo::SetBases(const vector<string>& _bases)
{
    m_bases = _bases;
    m_basesHasBeenSet = true;
}

bool KnowledgeBasesInfo::BasesHasBeenSet() const
{
    return m_basesHasBeenSet;
}

