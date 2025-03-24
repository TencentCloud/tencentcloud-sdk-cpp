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

#include <tencentcloud/chc/v20230418/model/Cage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Cage::Cage() :
    m_cageNameHasBeenSet(false),
    m_checkerSetHasBeenSet(false)
{
}

CoreInternalOutcome Cage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CageName") && !value["CageName"].IsNull())
    {
        if (!value["CageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cage.CageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageName = string(value["CageName"].GetString());
        m_cageNameHasBeenSet = true;
    }

    if (value.HasMember("CheckerSet") && !value["CheckerSet"].IsNull())
    {
        if (!value["CheckerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cage.CheckerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkerSet.push_back((*itr).GetString());
        }
        m_checkerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkerSet.begin(); itr != m_checkerSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Cage::GetCageName() const
{
    return m_cageName;
}

void Cage::SetCageName(const string& _cageName)
{
    m_cageName = _cageName;
    m_cageNameHasBeenSet = true;
}

bool Cage::CageNameHasBeenSet() const
{
    return m_cageNameHasBeenSet;
}

vector<string> Cage::GetCheckerSet() const
{
    return m_checkerSet;
}

void Cage::SetCheckerSet(const vector<string>& _checkerSet)
{
    m_checkerSet = _checkerSet;
    m_checkerSetHasBeenSet = true;
}

bool Cage::CheckerSetHasBeenSet() const
{
    return m_checkerSetHasBeenSet;
}

