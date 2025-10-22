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

#include <tencentcloud/ctsdb/v20230202/model/Tenant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Tenant::Tenant() :
    m_isPasswordEncryptedHasBeenSet(false)
{
}

CoreInternalOutcome Tenant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPasswordEncrypted") && !value["IsPasswordEncrypted"].IsNull())
    {
        if (!value["IsPasswordEncrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Tenant.IsPasswordEncrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPasswordEncrypted = value["IsPasswordEncrypted"].GetBool();
        m_isPasswordEncryptedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tenant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPasswordEncryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPasswordEncrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPasswordEncrypted, allocator);
    }

}


bool Tenant::GetIsPasswordEncrypted() const
{
    return m_isPasswordEncrypted;
}

void Tenant::SetIsPasswordEncrypted(const bool& _isPasswordEncrypted)
{
    m_isPasswordEncrypted = _isPasswordEncrypted;
    m_isPasswordEncryptedHasBeenSet = true;
}

bool Tenant::IsPasswordEncryptedHasBeenSet() const
{
    return m_isPasswordEncryptedHasBeenSet;
}

