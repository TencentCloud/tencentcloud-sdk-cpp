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

#include <tencentcloud/teo/v20220901/model/ShieldParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ShieldParameters::ShieldParameters() :
    m_shieldSpaceIdHasBeenSet(false)
{
}

CoreInternalOutcome ShieldParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShieldSpaceId") && !value["ShieldSpaceId"].IsNull())
    {
        if (!value["ShieldSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldParameters.ShieldSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldSpaceId = string(value["ShieldSpaceId"].GetString());
        m_shieldSpaceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShieldParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shieldSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldSpaceId.c_str(), allocator).Move(), allocator);
    }

}


string ShieldParameters::GetShieldSpaceId() const
{
    return m_shieldSpaceId;
}

void ShieldParameters::SetShieldSpaceId(const string& _shieldSpaceId)
{
    m_shieldSpaceId = _shieldSpaceId;
    m_shieldSpaceIdHasBeenSet = true;
}

bool ShieldParameters::ShieldSpaceIdHasBeenSet() const
{
    return m_shieldSpaceIdHasBeenSet;
}

