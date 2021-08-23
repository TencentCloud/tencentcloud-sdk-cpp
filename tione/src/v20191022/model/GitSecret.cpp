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

#include <tencentcloud/tione/v20191022/model/GitSecret.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

GitSecret::GitSecret() :
    m_noSecretHasBeenSet(false),
    m_secretHasBeenSet(false)
{
}

CoreInternalOutcome GitSecret::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoSecret") && !value["NoSecret"].IsNull())
    {
        if (!value["NoSecret"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GitSecret.NoSecret` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noSecret = value["NoSecret"].GetBool();
        m_noSecretHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitSecret.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GitSecret::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noSecret, allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

}


bool GitSecret::GetNoSecret() const
{
    return m_noSecret;
}

void GitSecret::SetNoSecret(const bool& _noSecret)
{
    m_noSecret = _noSecret;
    m_noSecretHasBeenSet = true;
}

bool GitSecret::NoSecretHasBeenSet() const
{
    return m_noSecretHasBeenSet;
}

string GitSecret::GetSecret() const
{
    return m_secret;
}

void GitSecret::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool GitSecret::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

