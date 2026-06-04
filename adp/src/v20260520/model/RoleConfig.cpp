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

#include <tencentcloud/adp/v20260520/model/RoleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

RoleConfig::RoleConfig() :
    m_roleDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome RoleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleDescription") && !value["RoleDescription"].IsNull())
    {
        if (!value["RoleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfig.RoleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleDescription = string(value["RoleDescription"].GetString());
        m_roleDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleDescription.c_str(), allocator).Move(), allocator);
    }

}


string RoleConfig::GetRoleDescription() const
{
    return m_roleDescription;
}

void RoleConfig::SetRoleDescription(const string& _roleDescription)
{
    m_roleDescription = _roleDescription;
    m_roleDescriptionHasBeenSet = true;
}

bool RoleConfig::RoleDescriptionHasBeenSet() const
{
    return m_roleDescriptionHasBeenSet;
}

