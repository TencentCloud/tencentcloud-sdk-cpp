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

#include <tencentcloud/adp/v20260520/model/FieldMask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

FieldMask::FieldMask() :
    m_pathsHasBeenSet(false)
{
}

CoreInternalOutcome FieldMask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldMask.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_paths.push_back((*itr).GetString());
        }
        m_pathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldMask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> FieldMask::GetPaths() const
{
    return m_paths;
}

void FieldMask::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool FieldMask::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

