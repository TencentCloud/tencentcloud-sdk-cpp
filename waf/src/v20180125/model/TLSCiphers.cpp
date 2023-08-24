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

#include <tencentcloud/waf/v20180125/model/TLSCiphers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TLSCiphers::TLSCiphers() :
    m_versionIdHasBeenSet(false),
    m_cipherIdHasBeenSet(false),
    m_cipherNameHasBeenSet(false)
{
}

CoreInternalOutcome TLSCiphers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLSCiphers.VersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = value["VersionId"].GetInt64();
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("CipherId") && !value["CipherId"].IsNull())
    {
        if (!value["CipherId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLSCiphers.CipherId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cipherId = value["CipherId"].GetInt64();
        m_cipherIdHasBeenSet = true;
    }

    if (value.HasMember("CipherName") && !value["CipherName"].IsNull())
    {
        if (!value["CipherName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TLSCiphers.CipherName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherName = string(value["CipherName"].GetString());
        m_cipherNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TLSCiphers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionId, allocator);
    }

    if (m_cipherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cipherId, allocator);
    }

    if (m_cipherNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TLSCiphers::GetVersionId() const
{
    return m_versionId;
}

void TLSCiphers::SetVersionId(const int64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TLSCiphers::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

int64_t TLSCiphers::GetCipherId() const
{
    return m_cipherId;
}

void TLSCiphers::SetCipherId(const int64_t& _cipherId)
{
    m_cipherId = _cipherId;
    m_cipherIdHasBeenSet = true;
}

bool TLSCiphers::CipherIdHasBeenSet() const
{
    return m_cipherIdHasBeenSet;
}

string TLSCiphers::GetCipherName() const
{
    return m_cipherName;
}

void TLSCiphers::SetCipherName(const string& _cipherName)
{
    m_cipherName = _cipherName;
    m_cipherNameHasBeenSet = true;
}

bool TLSCiphers::CipherNameHasBeenSet() const
{
    return m_cipherNameHasBeenSet;
}

