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

#include <tencentcloud/databuddy/v20260715/model/DeleteLocationRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DeleteLocationRsp::DeleteLocationRsp() :
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome DeleteLocationRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteLocationRsp.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteLocationRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

}


bool DeleteLocationRsp::GetDeleted() const
{
    return m_deleted;
}

void DeleteLocationRsp::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool DeleteLocationRsp::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

