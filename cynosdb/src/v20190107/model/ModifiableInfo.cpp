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

#include <tencentcloud/cynosdb/v20190107/model/ModifiableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifiableInfo::ModifiableInfo() :
    m_isModifiableHasBeenSet(false)
{
}

CoreInternalOutcome ModifiableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsModifiable") && !value["IsModifiable"].IsNull())
    {
        if (!value["IsModifiable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiableInfo.IsModifiable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isModifiable = value["IsModifiable"].GetInt64();
        m_isModifiableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifiableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isModifiableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifiable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isModifiable, allocator);
    }

}


int64_t ModifiableInfo::GetIsModifiable() const
{
    return m_isModifiable;
}

void ModifiableInfo::SetIsModifiable(const int64_t& _isModifiable)
{
    m_isModifiable = _isModifiable;
    m_isModifiableHasBeenSet = true;
}

bool ModifiableInfo::IsModifiableHasBeenSet() const
{
    return m_isModifiableHasBeenSet;
}

