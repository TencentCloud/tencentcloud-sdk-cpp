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

#include <tencentcloud/adp/v20260520/model/ConflictQASummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConflictQASummary::ConflictQASummary() :
    m_conflictGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome ConflictQASummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConflictGroupId") && !value["ConflictGroupId"].IsNull())
    {
        if (!value["ConflictGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConflictQASummary.ConflictGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictGroupId = string(value["ConflictGroupId"].GetString());
        m_conflictGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConflictQASummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conflictGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictGroupId.c_str(), allocator).Move(), allocator);
    }

}


string ConflictQASummary::GetConflictGroupId() const
{
    return m_conflictGroupId;
}

void ConflictQASummary::SetConflictGroupId(const string& _conflictGroupId)
{
    m_conflictGroupId = _conflictGroupId;
    m_conflictGroupIdHasBeenSet = true;
}

bool ConflictQASummary::ConflictGroupIdHasBeenSet() const
{
    return m_conflictGroupIdHasBeenSet;
}

