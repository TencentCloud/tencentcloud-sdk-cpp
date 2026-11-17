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

#include <tencentcloud/dbs/v20211108/model/BackupSetOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupSetOption::BackupSetOption() :
    m_encryptionHasBeenSet(false)
{
}

CoreInternalOutcome BackupSetOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetOption.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupSetOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

}


string BackupSetOption::GetEncryption() const
{
    return m_encryption;
}

void BackupSetOption::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool BackupSetOption::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

