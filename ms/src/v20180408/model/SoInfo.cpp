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

#include <tencentcloud/ms/v20180408/model/SoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

SoInfo::SoInfo() :
    m_soFileNamesHasBeenSet(false)
{
}

CoreInternalOutcome SoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SoFileNames") && !value["SoFileNames"].IsNull())
    {
        if (!value["SoFileNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SoInfo.SoFileNames` is not array type"));

        const rapidjson::Value &tmpValue = value["SoFileNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_soFileNames.push_back((*itr).GetString());
        }
        m_soFileNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_soFileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoFileNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_soFileNames.begin(); itr != m_soFileNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SoInfo::GetSoFileNames() const
{
    return m_soFileNames;
}

void SoInfo::SetSoFileNames(const vector<string>& _soFileNames)
{
    m_soFileNames = _soFileNames;
    m_soFileNamesHasBeenSet = true;
}

bool SoInfo::SoFileNamesHasBeenSet() const
{
    return m_soFileNamesHasBeenSet;
}

