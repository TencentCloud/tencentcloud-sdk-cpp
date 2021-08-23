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

#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

UrlSignatureAuthPolicy::UrlSignatureAuthPolicy() :
    m_statusHasBeenSet(false),
    m_encryptedKeyHasBeenSet(false)
{
}

CoreInternalOutcome UrlSignatureAuthPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlSignatureAuthPolicy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EncryptedKey") && !value["EncryptedKey"].IsNull())
    {
        if (!value["EncryptedKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlSignatureAuthPolicy.EncryptedKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedKey = string(value["EncryptedKey"].GetString());
        m_encryptedKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UrlSignatureAuthPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptedKey.c_str(), allocator).Move(), allocator);
    }

}


string UrlSignatureAuthPolicy::GetStatus() const
{
    return m_status;
}

void UrlSignatureAuthPolicy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UrlSignatureAuthPolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UrlSignatureAuthPolicy::GetEncryptedKey() const
{
    return m_encryptedKey;
}

void UrlSignatureAuthPolicy::SetEncryptedKey(const string& _encryptedKey)
{
    m_encryptedKey = _encryptedKey;
    m_encryptedKeyHasBeenSet = true;
}

bool UrlSignatureAuthPolicy::EncryptedKeyHasBeenSet() const
{
    return m_encryptedKeyHasBeenSet;
}

