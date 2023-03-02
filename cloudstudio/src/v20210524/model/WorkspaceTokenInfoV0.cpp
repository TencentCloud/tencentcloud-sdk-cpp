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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceTokenInfoV0.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceTokenInfoV0::WorkspaceTokenInfoV0() :
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceTokenInfoV0::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTokenInfoV0.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTokenInfoV0.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceTokenInfoV0::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string WorkspaceTokenInfoV0::GetToken() const
{
    return m_token;
}

void WorkspaceTokenInfoV0::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool WorkspaceTokenInfoV0::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string WorkspaceTokenInfoV0::GetExpiredTime() const
{
    return m_expiredTime;
}

void WorkspaceTokenInfoV0::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool WorkspaceTokenInfoV0::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

