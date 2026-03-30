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

#include <tencentcloud/csip/v20221121/model/STSCredentialOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

STSCredentialOutput::STSCredentialOutput() :
    m_systemHasBeenSet(false),
    m_secretIDHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

CoreInternalOutcome STSCredentialOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("System") && !value["System"].IsNull())
    {
        if (!value["System"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STSCredentialOutput.System` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_system = string(value["System"].GetString());
        m_systemHasBeenSet = true;
    }

    if (value.HasMember("SecretID") && !value["SecretID"].IsNull())
    {
        if (!value["SecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STSCredentialOutput.SecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretID = string(value["SecretID"].GetString());
        m_secretIDHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `STSCredentialOutput.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void STSCredentialOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_systemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "System";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_system.c_str(), allocator).Move(), allocator);
    }

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


string STSCredentialOutput::GetSystem() const
{
    return m_system;
}

void STSCredentialOutput::SetSystem(const string& _system)
{
    m_system = _system;
    m_systemHasBeenSet = true;
}

bool STSCredentialOutput::SystemHasBeenSet() const
{
    return m_systemHasBeenSet;
}

string STSCredentialOutput::GetSecretID() const
{
    return m_secretID;
}

void STSCredentialOutput::SetSecretID(const string& _secretID)
{
    m_secretID = _secretID;
    m_secretIDHasBeenSet = true;
}

bool STSCredentialOutput::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

string STSCredentialOutput::GetSecretKey() const
{
    return m_secretKey;
}

void STSCredentialOutput::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool STSCredentialOutput::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

