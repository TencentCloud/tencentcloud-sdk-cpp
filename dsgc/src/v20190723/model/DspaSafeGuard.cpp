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

#include <tencentcloud/dsgc/v20190723/model/DspaSafeGuard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaSafeGuard::DspaSafeGuard() :
    m_encryptHasBeenSet(false),
    m_desensitizationHasBeenSet(false)
{
}

CoreInternalOutcome DspaSafeGuard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaSafeGuard.Encrypt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = string(value["Encrypt"].GetString());
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("Desensitization") && !value["Desensitization"].IsNull())
    {
        if (!value["Desensitization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaSafeGuard.Desensitization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desensitization = string(value["Desensitization"].GetString());
        m_desensitizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaSafeGuard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_desensitizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desensitization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desensitization.c_str(), allocator).Move(), allocator);
    }

}


string DspaSafeGuard::GetEncrypt() const
{
    return m_encrypt;
}

void DspaSafeGuard::SetEncrypt(const string& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool DspaSafeGuard::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string DspaSafeGuard::GetDesensitization() const
{
    return m_desensitization;
}

void DspaSafeGuard::SetDesensitization(const string& _desensitization)
{
    m_desensitization = _desensitization;
    m_desensitizationHasBeenSet = true;
}

bool DspaSafeGuard::DesensitizationHasBeenSet() const
{
    return m_desensitizationHasBeenSet;
}

