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

#include <tencentcloud/tke/v20180525/model/KMSConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KMSConfiguration::KMSConfiguration() :
    m_keyIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false)
{
}

CoreInternalOutcome KMSConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSConfiguration.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KmsRegion") && !value["KmsRegion"].IsNull())
    {
        if (!value["KmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KMSConfiguration.KmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsRegion = string(value["KmsRegion"].GetString());
        m_kmsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KMSConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

}


string KMSConfiguration::GetKeyId() const
{
    return m_keyId;
}

void KMSConfiguration::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KMSConfiguration::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KMSConfiguration::GetKmsRegion() const
{
    return m_kmsRegion;
}

void KMSConfiguration::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool KMSConfiguration::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

