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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceTokenDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceTokenDTO::WorkspaceTokenDTO() :
    m_spaceKeyHasBeenSet(false),
    m_tokenExpiredLimitSecHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceTokenDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceKey") && !value["SpaceKey"].IsNull())
    {
        if (!value["SpaceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTokenDTO.SpaceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceKey = string(value["SpaceKey"].GetString());
        m_spaceKeyHasBeenSet = true;
    }

    if (value.HasMember("TokenExpiredLimitSec") && !value["TokenExpiredLimitSec"].IsNull())
    {
        if (!value["TokenExpiredLimitSec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTokenDTO.TokenExpiredLimitSec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenExpiredLimitSec = value["TokenExpiredLimitSec"].GetUint64();
        m_tokenExpiredLimitSecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceTokenDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenExpiredLimitSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenExpiredLimitSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenExpiredLimitSec, allocator);
    }

}


string WorkspaceTokenDTO::GetSpaceKey() const
{
    return m_spaceKey;
}

void WorkspaceTokenDTO::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool WorkspaceTokenDTO::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}

uint64_t WorkspaceTokenDTO::GetTokenExpiredLimitSec() const
{
    return m_tokenExpiredLimitSec;
}

void WorkspaceTokenDTO::SetTokenExpiredLimitSec(const uint64_t& _tokenExpiredLimitSec)
{
    m_tokenExpiredLimitSec = _tokenExpiredLimitSec;
    m_tokenExpiredLimitSecHasBeenSet = true;
}

bool WorkspaceTokenDTO::TokenExpiredLimitSecHasBeenSet() const
{
    return m_tokenExpiredLimitSecHasBeenSet;
}

