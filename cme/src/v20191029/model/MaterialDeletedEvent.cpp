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

#include <tencentcloud/cme/v20191029/model/MaterialDeletedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialDeletedEvent::MaterialDeletedEvent() :
    m_materialIdSetHasBeenSet(false)
{
}

CoreInternalOutcome MaterialDeletedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialIdSet") && !value["MaterialIdSet"].IsNull())
    {
        if (!value["MaterialIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialDeletedEvent.MaterialIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MaterialIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_materialIdSet.push_back((*itr).GetString());
        }
        m_materialIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialDeletedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_materialIdSet.begin(); itr != m_materialIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> MaterialDeletedEvent::GetMaterialIdSet() const
{
    return m_materialIdSet;
}

void MaterialDeletedEvent::SetMaterialIdSet(const vector<string>& _materialIdSet)
{
    m_materialIdSet = _materialIdSet;
    m_materialIdSetHasBeenSet = true;
}

bool MaterialDeletedEvent::MaterialIdSetHasBeenSet() const
{
    return m_materialIdSetHasBeenSet;
}

