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

#include <tencentcloud/scf/v20180416/model/EipOutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

EipOutConfig::EipOutConfig() :
    m_eipFixedHasBeenSet(false),
    m_eipsHasBeenSet(false)
{
}

CoreInternalOutcome EipOutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipFixed") && !value["EipFixed"].IsNull())
    {
        if (!value["EipFixed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipOutConfig.EipFixed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipFixed = string(value["EipFixed"].GetString());
        m_eipFixedHasBeenSet = true;
    }

    if (value.HasMember("Eips") && !value["Eips"].IsNull())
    {
        if (!value["Eips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EipOutConfig.Eips` is not array type"));

        const rapidjson::Value &tmpValue = value["Eips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eips.push_back((*itr).GetString());
        }
        m_eipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipOutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipFixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipFixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipFixed.c_str(), allocator).Move(), allocator);
    }

    if (m_eipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eips.begin(); itr != m_eips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EipOutConfig::GetEipFixed() const
{
    return m_eipFixed;
}

void EipOutConfig::SetEipFixed(const string& _eipFixed)
{
    m_eipFixed = _eipFixed;
    m_eipFixedHasBeenSet = true;
}

bool EipOutConfig::EipFixedHasBeenSet() const
{
    return m_eipFixedHasBeenSet;
}

vector<string> EipOutConfig::GetEips() const
{
    return m_eips;
}

void EipOutConfig::SetEips(const vector<string>& _eips)
{
    m_eips = _eips;
    m_eipsHasBeenSet = true;
}

bool EipOutConfig::EipsHasBeenSet() const
{
    return m_eipsHasBeenSet;
}

