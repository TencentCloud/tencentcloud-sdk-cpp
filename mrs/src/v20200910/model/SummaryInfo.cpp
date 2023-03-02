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

#include <tencentcloud/mrs/v20200910/model/SummaryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SummaryInfo::SummaryInfo() :
    m_textHasBeenSet(false),
    m_infosHasBeenSet(false)
{
}

CoreInternalOutcome SummaryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryInfo.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("Infos") && !value["Infos"].IsNull())
    {
        if (!value["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SummaryInfo.Infos` is not array type"));

        const rapidjson::Value &tmpValue = value["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailInformation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


BaseInfo SummaryInfo::GetText() const
{
    return m_text;
}

void SummaryInfo::SetText(const BaseInfo& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SummaryInfo::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<DetailInformation> SummaryInfo::GetInfos() const
{
    return m_infos;
}

void SummaryInfo::SetInfos(const vector<DetailInformation>& _infos)
{
    m_infos = _infos;
    m_infosHasBeenSet = true;
}

bool SummaryInfo::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

