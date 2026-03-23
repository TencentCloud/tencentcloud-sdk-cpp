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

#include <tencentcloud/apis/v20240801/model/AgentAppSecretKeyVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

AgentAppSecretKeyVO::AgentAppSecretKeyVO() :
    m_secretIDHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

CoreInternalOutcome AgentAppSecretKeyVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretID") && !value["SecretID"].IsNull())
    {
        if (!value["SecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppSecretKeyVO.SecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretID = string(value["SecretID"].GetString());
        m_secretIDHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAppSecretKeyVO.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAppSecretKeyVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretID.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

}


string AgentAppSecretKeyVO::GetSecretID() const
{
    return m_secretID;
}

void AgentAppSecretKeyVO::SetSecretID(const string& _secretID)
{
    m_secretID = _secretID;
    m_secretIDHasBeenSet = true;
}

bool AgentAppSecretKeyVO::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

string AgentAppSecretKeyVO::GetSecretKey() const
{
    return m_secretKey;
}

void AgentAppSecretKeyVO::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AgentAppSecretKeyVO::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

